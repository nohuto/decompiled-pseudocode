/*
 * XREFs of MiIsFaultPteIntact @ 0x14031E538
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140717048 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 *ActualFaultingPte; // rax
  __int64 *v8; // r11
  __int64 v9; // r10
  int v10; // eax
  unsigned __int64 v11; // r10
  __int64 *PrototypePteDirect; // rax
  _KPROCESS *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v17; // rax
  _DWORD v18[6]; // [rsp+20h] [rbp-18h] BYREF

  ActualFaultingPte = (__int64 *)MiFindActualFaultingPte();
  v8 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v9 = *ActualFaultingPte;
    if ( (unsigned __int64)ActualFaultingPte >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)ActualFaultingPte <= 0xFFFFF6FB7DBED7F8uLL
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v14 = MiPteHasShadow();
      if ( v14 )
      {
        KernelWaitTime = v14[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v8 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v15 |= 0x20uLL;
          v9 = v15 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v9 = v15;
        }
      }
    }
    if ( v8 != a3 )
    {
      if ( (v9 & 0x400) == 0 )
        return 0LL;
      LOBYTE(v10) = MiIsPrototypePteVadLookup(v9);
      if ( v10 )
      {
        v18[0] = 0;
        PrototypePteDirect = (__int64 *)MiCheckVirtualAddress(a2, v18, 0LL);
      }
      else
      {
        PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v11);
      }
      if ( PrototypePteDirect != a3 )
        return 0LL;
      v9 = *PrototypePteDirect;
    }
    if ( v9 == *a4 )
      return 1LL;
  }
  return 0LL;
}
