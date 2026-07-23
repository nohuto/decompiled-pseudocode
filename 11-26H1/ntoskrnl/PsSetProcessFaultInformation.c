/*
 * XREFs of PsSetProcessFaultInformation @ 0x140AC0480
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409CF6B8 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x1409CF794 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(__int64 a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v6; // rbx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _KTHREAD *v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1532));
    v8 = *(_DWORD *)(a1 + 1532);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1532), v8 | 4, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 4) == 0 )
    {
      if ( SshpBlockerCollections.UserTime < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !*(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[80] )
          *(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[80] = TelemetryCoverageStringHashInternal(
                                                                       (_BYTE *)SshpBlockerCollections.SchedulerApc.SystemArgument2,
                                                                       &v12);
        EtwTelemetryCoverageReport(&SshpBlockerCollections.SchedulerApc.SystemArgument2);
      }
      PspRecordCrashedProcessIntoBlackbox(a1);
      PsSetProcessTelemetryAppState((PRKPROCESS)a1, 4);
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    if ( *(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[60] < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !*(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[56] )
        *(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[56] = TelemetryCoverageStringHashInternal(
                                                                     (_BYTE *)SshpBlockerCollections.SchedulerApc.Reserved[2],
                                                                     &v12);
      EtwTelemetryCoverageReport(&SshpBlockerCollections.SchedulerApc.Reserved[2]);
    }
    CurrentThread = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)CurrentThread, a3, a4);
    if ( (*(_BYTE *)(a1 + 1531) & 7) != 7 )
      *(_BYTE *)(a1 + 1531) ^= (*(_BYTE *)(a1 + 1531) ^ (*(_BYTE *)(a1 + 1531) + 1)) & 7;
    PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
  }
  if ( (*a2 & 4) != 0 )
  {
    v10 = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)v10, a3, a4);
    if ( (*(_BYTE *)(a1 + 1531) & 0x38u) < 0x38 )
      *(_BYTE *)(a1 + 1531) ^= (*(_BYTE *)(a1 + 1531) ^ (*(_BYTE *)(a1 + 1531) + 8)) & 0x38;
    PspUnlockProcessExclusive(a1, (__int64)v10);
  }
  if ( (*a2 & 8) != 0 )
  {
    v6 = KeGetCurrentThread();
    PspLockProcessExclusive(a1, (__int64)v6, a3, a4);
    *(_BYTE *)(a1 + 1531) |= 0x40u;
    PspUnlockProcessExclusive(a1, (__int64)v6);
  }
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, (__int64)KeGetCurrentThread());
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
  }
  return 0LL;
}
