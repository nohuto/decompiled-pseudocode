/*
 * XREFs of PsGetNextSession @ 0x140A7D980
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x14052AF9C (PsQueryCpuQuotaInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CC494 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D10E8 (PopSendSuspendResumeApplicationNotification.c)
 *     PsPerfLogSessionRundown @ 0x1407FF12C (PsPerfLogSessionRundown.c)
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 *     PfpProcessScenarioPhase @ 0x140B1CEB8 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspSelectSessionAttachProcess @ 0x140A7DA78 (PspSelectSessionAttachProcess.c)
 */

void *__fastcall PsGetNextSession(_QWORD *Object)
{
  void *v2; // rbp
  unsigned __int64 CurrentServerSilo; // r14
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *Thread; // rbx
  void *v7; // rax

  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( Object )
    v4 = Object[93];
  else
    v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( v4 )
  {
    Thread = *(struct _KTHREAD **)(v4 + 80);
LABEL_5:
    while ( Thread != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[72] )
    {
      v7 = (void *)PspSelectSessionAttachProcess(&Thread[-1].1136);
      v2 = v7;
      if ( v7 )
      {
        if ( !CurrentServerSilo || *(_QWORD *)&Thread->CurrentRunTime == CurrentServerSilo )
          break;
        ObfDereferenceObjectWithTag(v7, 0x79517350u);
        v2 = 0LL;
      }
      Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
    }
    PspUnlockProcessListExclusive(CurrentThread);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v2;
  }
  else
  {
    Thread = PsAltSystemCallRegistrationLock.WaitBlock[1].Thread;
    if ( PsAltSystemCallRegistrationLock.WaitBlock[1].Thread )
      goto LABEL_5;
    PspUnlockProcessListExclusive(CurrentThread);
    return 0LL;
  }
}
