/*
 * XREFs of MiUpdatePageTableUseCount @ 0x1403DD1D0
 * Callers:
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 *     MiExpandSharedZeroCluster @ 0x1403DCAFC (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

unsigned __int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v14; // rdx

  v3 = (a1 >> 18) & 0x3FFFFFF8;
  v4 = v3 - 0x904C0000000LL;
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v3 != 1035919208 )
  {
    v6 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v11 = *(_QWORD *)v4;
      if ( (v6 & 1) != 0 && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v14 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v14 & 0x20) != 0 )
              v11 = v6 | 0x20;
            v6 = v11 | 0x42;
            if ( (v14 & 0x42) == 0 )
              v6 = v11;
          }
        }
      }
    }
    v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL);
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 - 0x220000000000LL + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 - 0x220000000000LL + 24) < 0 );
    }
    if ( (*(_DWORD *)(v7 - 0x220000000000LL + 36) & 0x4000000) != 0 )
      v9 = *(_QWORD *)(v7 - 0x220000000000LL) >> 36;
    else
      v9 = *(_QWORD *)(v7 - 0x220000000000LL + 16) >> 17;
    v10 = (unsigned int)(a2 + v9);
    if ( (*(_DWORD *)(v7 - 0x220000000000LL + 36) & 0x4000000) != 0 )
      *(_QWORD *)(v7 - 0x220000000000LL) = (v10 << 36) ^ (*(_QWORD *)(v7 - 0x220000000000LL) ^ (v10 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
    else
      *(_QWORD *)(v7 - 0x220000000000LL + 16) = (v10 << 17) ^ (*(_QWORD *)(v7 - 0x220000000000LL + 16) ^ (v10 << 17)) & 0xFFFFFFFFF801FFFFuLL;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
