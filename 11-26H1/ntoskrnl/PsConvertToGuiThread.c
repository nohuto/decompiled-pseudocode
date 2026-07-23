/*
 * XREFs of PsConvertToGuiThread @ 0x1409FC500
 * Callers:
 *     KiConvertToGuiThread @ 0x14072E350 (KiConvertToGuiThread.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407F32A0 (PspEnsureGuiThreadAndBatchFlush.c)
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     SeCaptureAtomTableCallout @ 0x1404AEFD4 (SeCaptureAtomTableCallout.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 *     PsQuerySectionSignatureInformation @ 0x1409FCAC0 (PsQuerySectionSignatureInformation.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1409FCFC0 (EtwTimLogProhibitWin32kSystemCalls.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rsi
  int Flink; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  char ThreadTimerDelay; // al
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  int v8; // esi
  _QWORD v9[3]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-28h]
  _QWORD v11[3]; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+68h] [rbp-8h]
  char v13; // [rsp+90h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80u) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  Flink = (int)Process[4].ThreadListHead.Flink;
  if ( (Flink & 0x1000) != 0 || ((__int64)Process[4].ThreadListHead.Flink & 0x2000) != 0 )
  {
    EtwTimLogProhibitWin32kSystemCalls((unsigned int)((Flink & 0x1000) != 0) + 1, CurrentThread->ApcState.Process);
    if ( (Flink & 0x1000) != 0 )
      return 3221225506LL;
  }
  v9[2] = Process;
  v10 = 1;
  if ( (int)PsQuerySectionSignatureInformation(Process, &v13) >= 0 )
  {
    ThreadTimerDelay = SepRmCapTableLock.ThreadTimerDelay;
    if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
    {
      LOBYTE(v4) = v13;
      LOBYTE(v3) = 12;
      ThreadTimerDelay = guard_dispatch_icall_no_overrides(v4, v3);
    }
    v10 = v10 & 0xFFFFFFFD | (2 * (ThreadTimerDelay & 1));
  }
  if ( !(unsigned int)PspUpdateCalloutParameters(0, (__int64)v9, 0, 0LL) )
    return 3221225485LL;
  Win32Callouts = PsSessionGetWin32Callouts();
  result = ExCallCallBack(Win32Callouts, 0LL, v9);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
    if ( (Flink & 0x4000) != 0 || (Flink & 0x8000) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    v11[2] = CurrentThread;
    v12 = 0;
    v8 = PsInvokeWin32Callout(1LL, v11, 0LL, 0LL);
    if ( v8 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
      if ( (Flink & 0x4000) != 0 || (Flink & 0x8000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x15u);
    }
    SeCaptureAtomTableCallout();
    return (unsigned int)v8;
  }
  return result;
}
