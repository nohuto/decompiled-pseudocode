/*
 * XREFs of MiLockPte @ 0x140327950
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140327B50 (MiWalkPageTablesPrepareToDescend.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockPte(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // r8
  unsigned int v5; // esi
  int v6; // edi
  signed __int64 v7; // rax
  __int64 v9; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r9
  __int64 v12; // rcx
  signed __int64 v13; // rax

  v2 = *(_QWORD *)a1;
  v5 = 0;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v9 = *(_QWORD *)a1;
    if ( (v2 & 1) != 0 && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v12 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v9 = v2 | 0x20;
          v2 = v9 | 0x42;
          if ( (v12 & 0x42) == 0 )
            v2 = v9;
        }
      }
    }
  }
  v6 = a2 & 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v2 & 1) == 0 )
        return 0LL;
      if ( (v2 & 0x1000000000000000LL) == 0 )
        break;
      if ( v6 )
        return 0LL;
      if ( ((v2 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
          v2 = *(_QWORD *)a1;
        }
        while ( (*(_QWORD *)a1 & 0x1000000000000000LL) != 0 );
      }
      else
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v2 | 0x2000000000000000LL, v2);
        if ( v2 == v13 )
          v2 |= 0x2000000000000000uLL;
        else
          v2 = v13;
      }
    }
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    v7 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)a1,
           v2 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
           v2);
    if ( v2 == v7 )
      break;
    v2 = v7;
    if ( v6 )
      return 0LL;
  }
  return 1LL;
}
