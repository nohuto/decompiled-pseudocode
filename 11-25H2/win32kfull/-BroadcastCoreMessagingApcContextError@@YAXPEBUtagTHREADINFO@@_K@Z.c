/*
 * XREFs of ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140289A34
 * Callers:
 *     _DrainThreadCoreMessagingCompletions2 @ 0x14001A4E4 (_DrainThreadCoreMessagingCompletions2.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x14001F190 (xxxMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetQueueStatus @ 0x14001FC70 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x14001FFE0 (_GetQueueStatus.c)
 *     xxxRemoveQueueCompletion @ 0x140020350 (xxxRemoveQueueCompletion.c)
 *     xxxDrainQueueCompletions @ 0x140020480 (xxxDrainQueueCompletions.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall BroadcastCoreMessagingApcContextError(const struct tagTHREADINFO *a1, struct tagDRAWITEMSTRUCT *a2)
{
  __int64 *v2; // rbx
  char v4; // bp
  __int64 v5; // rsi
  struct tagTHREADINFO **v6; // rdi
  __int64 v7; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF

  v2 = (__int64 *)((char *)a1 + 1656);
  v4 = 0;
  v5 = 2LL;
  do
  {
    v6 = (struct tagTHREADINFO **)*v2;
    if ( *v2 )
    {
      v4 = 1;
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *v2);
      xxxSendTransformableMessageTimeout(v6, 96LL, 8uLL, a2, 0, 0, 0LL, 1, 1);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v7);
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5938);
}
