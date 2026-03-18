/*
 * XREFs of ?GetCallbackCount@@YACXZ @ 0x14003C7A8
 * Callers:
 *     EtwTraceEndInjectMouse @ 0x14003BC50 (EtwTraceEndInjectMouse.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x14003BCB0 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x14003BD80 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x14003BDF0 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceEndDelegateInputCallback @ 0x14003BF10 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x14003C040 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x14003C0B0 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceInputQueueLocked @ 0x14003C370 (EtwTraceInputQueueLocked.c)
 *     EtwTraceRetrievePseudoMessage @ 0x14003C480 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceWakePump @ 0x14003C500 (EtwTraceWakePump.c)
 *     EtwTraceWakeMIT @ 0x14003C580 (EtwTraceWakeMIT.c)
 *     EtwTraceQueueMessage @ 0x14003DA10 (EtwTraceQueueMessage.c)
 *     EtwTraceBeginInjectMouse @ 0x14012B680 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceWakeRIT @ 0x140139AF0 (EtwTraceWakeRIT.c)
 *     EtwTraceInputQueueUnLocked @ 0x140152DE0 (EtwTraceInputQueueUnLocked.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1401B7A70 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1401B8500 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

signed __int8 GetCallbackCount(void)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v1; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged && (v1 = *CurrentThreadNonPaged) != 0 )
    return *(_BYTE *)(v1 + 1456);
  else
    return -1;
}
