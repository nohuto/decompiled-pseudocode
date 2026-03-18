/*
 * XREFs of DbgkForwardException @ 0x1409535F0
 * Callers:
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     KiSchedulerApc @ 0x1404A1BE0 (KiSchedulerApc.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     EtwTelemetryCoverageReport @ 0x14048CFE0 (EtwTelemetryCoverageReport.c)
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     EtwTraceDebuggerEvent @ 0x1404E5B4C (EtwTraceDebuggerEvent.c)
 *     KeCopyExceptionRecord @ 0x1404E5F9C (KeCopyExceptionRecord.c)
 *     TelemetryCoverageStringHashInternal @ 0x14050814C (TelemetryCoverageStringHashInternal.c)
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140953D38 (DbgkpSuspendProcess.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140953D78 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PsSetProcessTelemetryAppState @ 0x140953E54 (PsSetProcessTelemetryAppState.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1409552D4 (DbgkpSendApiMessageLpc.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rdi
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh]
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ch] [rbp-94h]
  _OWORD v24[9]; // [rsp+70h] [rbp-90h] BYREF
  BOOL v25; // [rsp+108h] [rbp+8h]
  __int128 v26; // [rsp+110h] [rbp+10h]
  __int128 v27; // [rsp+120h] [rbp+20h]
  __int128 v28; // [rsp+130h] [rbp+30h]
  __int128 v29; // [rsp+140h] [rbp+40h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
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
                                                                       &v19);
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
  memset_0(&v20, 0, 0xD0uLL);
  v20 = 13631656;
  v21 = 8;
  v22 = 0;
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
    v21 = 7;
    v9 = 1;
  }
  if ( UserTime || !a2 )
  {
    KeCopyExceptionRecord(v24, a1);
    v25 = a3 == 0;
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
        v23 = 259;
        v12 = DbgkpQueueMessage(v7, v10, 0LL);
        if ( v11 )
        {
          PsThawMultiProcess((__int64)v7, 0, 1LL, v13);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15);
        }
        if ( v12 < 0 )
          return 0;
        if ( v23 != 1073807361 )
          goto LABEL_23;
      }
    }
    if ( UserTime )
    {
      v12 = DbgkpSendApiMessageLpc(&v20, UserTime, a2);
      ObfDereferenceObject(UserTime);
LABEL_23:
      if ( v12 < 0 )
        return 0;
    }
    else
    {
      v23 = -2147418111;
    }
    v16 = v23;
    if ( v23 != -2147418111 )
      return v16 >= 0;
    if ( !a2 )
    {
      v16 = DbgkpSendErrorMessage(a1, 2LL, &v20);
      return v16 >= 0;
    }
  }
  return 0;
}
