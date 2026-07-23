/*
 * XREFs of MiGetWsleProtection @ 0x14036DF30
 * Callers:
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036CC48 (MiInitializeCopyOnWritePacket.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleProtection(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v6; // rcx
  _KPROCESS *Process; // r10
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // r8

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)v2;
    if ( (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            LOBYTE(v6) = v3 | 0x20;
          LOBYTE(v3) = v6 | 0x42;
          if ( (v9 & 0x42) == 0 )
            LOBYTE(v3) = v6;
        }
      }
    }
  }
  v4 = (a2 >> 4) & 7;
  if ( !v4 )
    return v4;
  if ( (v3 & 0x18) != 8 )
  {
    if ( (v3 & 0x10) != 0 )
      v4 |= 8u;
    return v4;
  }
  return v4 | 0x18;
}
