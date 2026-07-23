/*
 * XREFs of KiWakeQueueWaiter @ 0x1403F07C0
 * Callers:
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiActivateWaiterKQueue @ 0x1403F0370 (KiActivateWaiterKQueue.c)
 *     KeInsertQueue @ 0x1403F0500 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F0650 (IopPassiveInterruptDpc.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405F3FD0 (KeInsertHeadQueue.c)
 * Callees:
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rax
  char v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rbx

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v7 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    if ( *(_BYTE *)(v7 + 16) != 3 )
      return 0;
    if ( v3[1] != v7 || (v8 = *(_QWORD **)(v7 + 8), *v8 != v7) )
      __fastfail(3u);
    *v8 = v3;
    v9 = 0;
    v3[1] = v8;
    v10 = 0;
    v11 = *(_QWORD *)(v7 + 24);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v11 + 64) );
    }
    if ( *(_BYTE *)(v11 + 388) == 5 )
      v9 = KiSignalThread(a1, v11, a3, v7);
    *(_QWORD *)(v11 + 64) = 0LL;
    ++*(_BYTE *)(v7 + 17);
    if ( v9 )
      break;
    if ( v3 == v4 )
      return 0;
  }
  return 1;
}
