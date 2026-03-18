/*
 * XREFs of ?GetCallbackCount@@YACXZ @ 0x1400E62F0
 * Callers:
 *     EtwTraceInputQueueUnLocked @ 0x1400E5A20 (EtwTraceInputQueueUnLocked.c)
 *     EtwTraceWakeRIT @ 0x1400E5A90 (EtwTraceWakeRIT.c)
 *     EtwTraceBeginInjectMouse @ 0x1400E5AD0 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceEndInjectMouse @ 0x1400E5B30 (EtwTraceEndInjectMouse.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1400E5B90 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1400E5C00 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1400E5C70 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1400E5DA0 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1400E5ED0 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1400E5F40 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceInputQueueLocked @ 0x1400E6170 (EtwTraceInputQueueLocked.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1400E61E0 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceWakePump @ 0x1400E6270 (EtwTraceWakePump.c)
 *     EtwTraceQueuePostMessage @ 0x1400E6690 (EtwTraceQueuePostMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1401AB0D0 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1401AB1D0 (EtwTraceBeginSendMessage.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1401DAA90 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1401DB490 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall GetCallbackCount(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread && (v3 = *CurrentThreadWin32Thread) != 0 )
    return *(_BYTE *)(v3 + 1456);
  else
    return -1;
}
