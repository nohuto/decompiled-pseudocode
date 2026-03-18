/*
 * XREFs of ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140026488
 * Callers:
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140023060 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _GetQueueStatus @ 0x140025CC0 (_GetQueueStatus.c)
 *     NtUserGetQueueStatus @ 0x140026010 (NtUserGetQueueStatus.c)
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall BroadcastCoreMessagingApcContextError(const struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 *v2; // rbx
  char v4; // bp
  __int64 v5; // rdi
  __int64 v6; // rsi
  ULONG_PTR BugCheckParameter3[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (__int64 *)((char *)a1 + 1656);
  v4 = 0;
  v5 = 2LL;
  do
  {
    v6 = *v2;
    if ( *v2 )
    {
      v4 = 1;
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, *v2);
      xxxSendMessage(v6, 96LL, 8LL, a2);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
    }
    ++v2;
    --v5;
  }
  while ( v5 );
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5934LL);
}
