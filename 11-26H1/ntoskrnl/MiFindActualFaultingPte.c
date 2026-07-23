/*
 * XREFs of MiFindActualFaultingPte @ 0x14031E6D4
 * Callers:
 *     MiIsFaultPteIntact @ 0x14031E538 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiFillPteHierarchy @ 0x1403A17B0 (MiFillPteHierarchy.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // eax
  unsigned __int64 v7; // r8
  unsigned __int64 PrototypePteDirect; // rdi
  __int64 result; // rax
  _KPROCESS *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 *v15; // r9
  __int64 v16; // rax
  _OWORD v17[3]; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v18[8]; // [rsp+58h] [rbp-69h] BYREF
  __int16 v19; // [rsp+9Ah] [rbp-27h]
  char v20; // [rsp+9Ch] [rbp-25h]
  char v21; // [rsp+9Dh] [rbp-24h]
  __int64 v22; // [rsp+A0h] [rbp-21h]

  memset((char *)v17 + 8, 0, 32);
  memset_0(v18, 0, 0x98uLL);
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 72) != ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      return *(_QWORD *)(a1 + 72);
    v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
    v5 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v5 & 1) == 0 )
      {
LABEL_6:
        if ( (v5 & 0x400) == 0 )
          return v4;
        if ( (v5 & 0x400000000000000LL) == 0 )
        {
          LOBYTE(v6) = MiIsPrototypePteVadLookup(v5);
          if ( !v6 )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(v7);
            goto LABEL_10;
          }
          LODWORD(v17[0]) = 0;
          PrototypePteDirect = MiCheckVirtualAddress(a2, v17, 0LL);
          if ( PrototypePteDirect )
          {
LABEL_10:
            if ( (unsigned int)MiGetSystemRegionType(PrototypePteDirect) != 4 )
            {
              v21 &= ~1u;
              v18[0] = PrototypePteDirect;
              v20 = 17;
              v19 = 0;
              v22 = ((PrototypePteDirect >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              result = MiFindActualFaultingPte(v18, PrototypePteDirect);
              if ( !result )
                return v4;
              return result;
            }
            return v4;
          }
        }
        return 0LL;
      }
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        v10 = MiPteHasShadow();
        if ( v10 )
        {
          KernelWaitTime = v10[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v13 & 0x20) != 0 )
              v11 |= 0x20uLL;
            v5 = v11 | 0x42;
            if ( (v13 & 0x42) == 0 )
              v5 = v11;
          }
        }
      }
    }
    if ( (v5 & 1) != 0 )
      return 0LL;
    goto LABEL_6;
  }
  MiFillPteHierarchy(a2, (char *)v17 + 8);
  v14 = 4LL;
  while ( 1 )
  {
    v15 = (__int64 *)*((_QWORD *)v17 + v14--);
    v16 = *v15;
    if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v16) = MiReadPteShadow((unsigned __int64)v15, *v15);
    if ( (v16 & 1) == 0 )
      return (__int64)v15;
    if ( (v16 & 0x80u) != 0LL )
      return 0LL;
    if ( v14 == 1 )
    {
      v4 = *((_QWORD *)&v17[0] + 1);
      goto LABEL_4;
    }
  }
}
