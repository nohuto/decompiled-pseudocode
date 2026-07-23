/*
 * XREFs of PsGetNextSession @ 0x140A837F0
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x14052D4BC (PsQueryCpuQuotaInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1407CF534 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D4188 (PopSendSuspendResumeApplicationNotification.c)
 *     PsPerfLogSessionRundown @ 0x140804B5C (PsPerfLogSessionRundown.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspSelectSessionAttachProcess @ 0x140A838E8 (PspSelectSessionAttachProcess.c)
 */

void *__fastcall PsGetNextSession(_QWORD *Object)
{
  void *v2; // rbp
  unsigned __int64 CurrentServerSilo; // r14
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int16 *v6; // rbx
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
    v6 = *(unsigned __int16 **)(v4 + 80);
LABEL_5:
    while ( v6 != &PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup )
    {
      v7 = (void *)PspSelectSessionAttachProcess(v6 - 40);
      v2 = v7;
      if ( v7 )
      {
        if ( !CurrentServerSilo || *((_QWORD *)v6 + 10) == CurrentServerSilo )
          break;
        ObfDereferenceObjectWithTag(v7, 0x79517350u);
        v2 = 0LL;
      }
      v6 = *(unsigned __int16 **)v6;
    }
    PspUnlockProcessListExclusive(CurrentThread);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v2;
  }
  else
  {
    v6 = *(unsigned __int16 **)&PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup;
    if ( *(_QWORD *)&PsAltSystemCallRegistrationLock.UserAffinityPrimaryGroup )
      goto LABEL_5;
    PspUnlockProcessListExclusive(CurrentThread);
    return 0LL;
  }
}
