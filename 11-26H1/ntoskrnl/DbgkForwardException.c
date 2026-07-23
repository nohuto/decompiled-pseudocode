/*
 * XREFs of DbgkForwardException @ 0x1409CEF30
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     EtwTraceDebuggerEvent @ 0x1404DF0EC (EtwTraceDebuggerEvent.c)
 *     KeCopyExceptionRecord @ 0x1404DF53C (KeCopyExceptionRecord.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1409CF6B8 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x1409CF794 (PsSetProcessTelemetryAppState.c)
 *     DbgkpSendApiMessageLpc @ 0x140ACD5FC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, unsigned __int8 a2, char a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  void *UserTime; // rsi
  char v9; // di
  struct _KTHREAD *v10; // r14
  int v11; // esi
  int v12; // edi
  struct _KLOCK_ENTRIES *v13; // r9
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rdi
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ch] [rbp-94h]
  _OWORD v22[9]; // [rsp+70h] [rbp-90h] BYREF
  BOOL v23; // [rsp+108h] [rbp+8h]
  __int128 v24; // [rsp+110h] [rbp+10h]
  __int128 v25; // [rsp+120h] [rbp+20h]
  __int128 v26; // [rsp+130h] [rbp+30h]
  __int128 v27; // [rsp+140h] [rbp+40h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw((char *)&Process[3].ActiveGroupsMask.Masks[1] + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 4u) & 4) == 0 )
    {
      if ( SshpBlockerCollections.UserTime < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !*(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[80] )
          *(_DWORD *)&SshpBlockerCollections.SchedulerApcFill5[80] = TelemetryCoverageStringHashInternal(
                                                                       (_BYTE *)SshpBlockerCollections.SchedulerApc.SystemArgument2,
                                                                       &v17);
        EtwTelemetryCoverageReport(&SshpBlockerCollections.SchedulerApc.SystemArgument2);
      }
      PspRecordCrashedProcessIntoBlackbox(Process);
      PsSetProcessTelemetryAppState(Process);
    }
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost) )
    {
      guard_dispatch_icall_no_overrides((__int64)Process, (__int64)KeGetCurrentThread());
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspHwTraceExtensionHost);
    }
  }
  memset_0(&v18, 0, 0xD0uLL);
  v18 = 13631656;
  v19 = 8;
  v20 = 0;
  v7 = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      UserTime = 0LL;
    else
      UserTime = (void *)v7[1].UserTime;
    v9 = 0;
  }
  else
  {
    if ( v7[1].SwapListEntry.Next )
    {
      CurrentThread = KeGetCurrentThread();
      PspLockProcessShared((__int64)v7, (__int64)CurrentThread);
      UserTime = (void *)((unsigned __int64)v7[1].SwapListEntry.Next & 0xFFFFFFFFFFFFFFF8uLL);
      PsReferenceSiloContext(UserTime);
      PspUnlockProcessShared((__int64)v7, (__int64)CurrentThread);
    }
    else
    {
      UserTime = 0LL;
    }
    v19 = 7;
    v9 = 1;
  }
  if ( UserTime || !a2 )
  {
    KeCopyExceptionRecord(v22, a1);
    v23 = a3 == 0;
    if ( !v9 )
    {
      v10 = KeGetCurrentThread();
      if ( (PerfGlobalGroupMask & 0x400000) != 0 )
        EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v10, 1);
      while ( 1 )
      {
        v11 = 0;
        if ( v7 == KeGetCurrentThread()->ApcState.Process && a2 )
          v11 = (unsigned __int8)DbgkpSuspendProcess(v7);
        v21 = 259;
        v12 = DbgkpQueueMessage(v7, v10, 0LL);
        if ( v11 )
        {
          PsThawMultiProcess((__int64)v7, 0, 1LL, v13);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        if ( v12 < 0 )
          return 0;
        if ( v21 != 1073807361 )
          goto LABEL_23;
      }
    }
    if ( UserTime )
    {
      v12 = DbgkpSendApiMessageLpc(&v18, UserTime, a2);
      ObfDereferenceObject(UserTime);
LABEL_23:
      if ( v12 < 0 )
        return 0;
    }
    else
    {
      v21 = -2147418111;
    }
    v14 = v21;
    if ( v21 != -2147418111 )
      return v14 >= 0;
    if ( !a2 )
    {
      v14 = DbgkpSendErrorMessage(a1, 2LL, &v18);
      return v14 >= 0;
    }
  }
  return 0;
}
