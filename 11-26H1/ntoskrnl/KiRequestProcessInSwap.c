/*
 * XREFs of KiRequestProcessInSwap @ 0x14031178C
 * Callers:
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14031284C (MmNotifyProcessInSwapTrigger.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v5; // esi
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 *v9; // rdi
  signed __int64 v10; // rcx

  v2 = 0;
  v5 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
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
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = *(_QWORD **)(a2 + 112);
  v7 = (_QWORD *)(a1 + 216);
  if ( *v6 != a2 + 104 )
    __fastfail(3u);
  *v7 = a2 + 104;
  v7[1] = v6;
  *v6 = v7;
  *(_QWORD *)(a2 + 112) = v7;
  LOBYTE(v8) = *(_DWORD *)(a2 + 264) & 7;
  if ( (_BYTE)v8 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 264), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v9 = (signed __int64 *)(a2 + 120);
    _m_prefetchw(&qword_140F26B90);
    v8 = qword_140F26B90;
    do
    {
      *v9 = v8;
      v10 = v8;
      v8 = _InterlockedCompareExchange64(&qword_140F26B90, (signed __int64)v9, v8);
    }
    while ( v8 != v10 );
    if ( !v8 )
      LOBYTE(v8) = KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 10, 0);
  }
  return v8;
}
