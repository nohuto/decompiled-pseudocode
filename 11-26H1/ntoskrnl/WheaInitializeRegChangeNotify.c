/*
 * XREFs of WheaInitializeRegChangeNotify @ 0x140849894
 * Callers:
 *     WheapSetPolicyValue @ 0x140849D14 (WheapSetPolicyValue.c)
 *     WheaInitialize @ 0x140CE7AB8 (WheaInitialize.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 */

void WheaInitializeRegChangeNotify()
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  if ( CmpCallbackListLock.WaitBlock[2].Object )
  {
    *(_QWORD *)&CmpCallbackListLock.ThreadFlags2 = 0LL;
    LODWORD(Length) = 0;
    CmpCallbackListLock.LastXStateSaveDebugInfo = (unsigned __int64)WheaRegChangeNotifyCallback;
    CmpCallbackListLock.WaitBlock[3].Thread = 0LL;
    if ( (int)NtNotifyChangeMultipleKeys(
                *(int *)&CmpCallbackListLock.WaitBlockFill11[128],
                0,
                0,
                0,
                (__int64)&CmpCallbackListLock.WaitBlock[3].Thread,
                1LL,
                &CmpCallbackListLock.WaitBlockFill11[152],
                4,
                0,
                0LL,
                Length,
                1) < 0 )
      _InterlockedExchange((volatile __int32 *)&CmpCallbackListLock.WaitBlockFill11[136], 1);
  }
}
