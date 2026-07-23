/*
 * XREFs of EtwpLogger @ 0x140A12D80
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwpRequestFlushTimer @ 0x140219A50 (EtwpRequestFlushTimer.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsTerminateSystemThread @ 0x140949E90 (PsTerminateSystemThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x140A1385C (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140A13A78 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140A13CC8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140A14400 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140A14478 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x140A14A84 (EtwpEventWriteTemplateSessionEnd.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x140AB32A0 (EtwpEventWriteTemplateSession.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B377A8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpRealtimeSaveState @ 0x140B60190 (EtwpRealtimeSaveState.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // r14
  __int64 v3; // r8
  struct _KEVENT *v4; // rbp
  struct _KEVENT *v5; // rsi
  struct _KTIMER *v6; // rdi
  _DWORD *v7; // r13
  volatile signed __int32 *v8; // r15
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // r14d
  __int64 v12; // rdx
  int v13; // r12d
  int Logfile; // edi
  __int64 v15; // r8
  int *v16; // rsi
  NTSTATUS active; // edi
  int v19; // edx
  int v20; // r8d
  bool v21; // bp
  int v22; // eax
  int v23; // eax
  int v24; // r8d
  __int64 v25; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY *v27; // [rsp+50h] [rbp-48h]
  _DWORD ThreadInformation[4]; // [rsp+58h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*(struct _LIST_ENTRY **)a1);
  v27 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15LL, v3);
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ThreadInformation[0] = 1;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPowerThrottlingState, ThreadInformation, 0xCu);
  if ( *(_WORD *)(v1 + 136) )
  {
    *(_OWORD *)Object = *(_OWORD *)(v1 + 136);
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadNameInformation, Object, 0x10u);
  }
  v4 = (struct _KEVENT *)(v1 + 456);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v5 = (struct _KEVENT *)(v1 + 480);
  v6 = (struct _KTIMER *)(v1 + 504);
  Object[0] = (PVOID)(v1 + 480);
  Object[1] = (PVOID)(v1 + 504);
  if ( *(_DWORD *)(v1 + 320) )
  {
    v7 = (_DWORD *)(v1 + 816);
    v8 = (volatile signed __int32 *)(v1 + 816);
    while ( 1 )
    {
      v9 = *(_DWORD *)(v1 + 208);
      v10 = 0;
      v11 = 0;
      if ( v9 )
        v8 = (volatile signed __int32 *)(v1 + 816);
      LOBYTE(v10) = v9 != 0;
      if ( KeWaitForMultipleObjects(v10 + 1, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent(v5);
        v11 = 1;
        v8 = (volatile signed __int32 *)(v1 + 816);
      }
      if ( LOBYTE(stru_140F03830.CycleTime) > 3u )
        _InterlockedOr(v8, 4u);
      EtwpAdjustFreeBuffers(v1);
      v13 = *(_DWORD *)(v1 + 824) & 4;
      if ( v13 )
      {
        if ( *(_DWORD *)(v1 + 208) && (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
        {
          KeCancelTimer(v6);
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        }
        v11 = 1;
      }
      if ( (*v7 & 4) == 0 )
      {
        EtwpFlushActiveBuffers(v1, v11);
        goto LABEL_36;
      }
      if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
        if ( *(_QWORD *)(v1 + 800) )
        {
          LOBYTE(v12) = 1;
          EtwpFinalizeHeader(v1, v12);
        }
      }
      if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
        _InterlockedOr(v8, 8u);
      else
        _InterlockedAnd(v8, 0xFFFFFFF7);
      if ( (*v7 & 8) != 0 )
      {
        Logfile = EtwpRealtimeCreateLogfile(v1);
        if ( Logfile < 0 && (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
        {
          v16 = (int *)(v1 + 40);
          goto LABEL_50;
        }
        EtwpRealtimeUpdateConsumers(v1);
        EtwpRealtimeFlushSavedBuffers(v1);
        if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
          EtwpRequestFlushTimer(v1, 0LL, v15);
      }
      if ( (*(_DWORD *)(v1 + 824) & 0x40) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFBF);
        EtwpRealtimeNotifyConsumers(v1);
      }
      if ( (*(_DWORD *)(v1 + 824) & 8) != 0 )
      {
        EtwpRealtimeDisconnectAllConsumers(v1);
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFF7);
        v16 = (int *)(v1 + 40);
        *(_DWORD *)(v1 + 40) = 0;
        KeSetEvent(v4, 0, 0);
      }
      else
      {
        v16 = (int *)(v1 + 40);
      }
      if ( (*(_DWORD *)(v1 + 824) & 3) == 0 )
        goto LABEL_28;
      v21 = 1;
      if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
        v21 = *(_QWORD *)(v1 + 800) == 0LL;
      LOBYTE(v12) = 1;
      v22 = EtwpCreateLogFile(v1, v12, 0LL);
      *v16 = v22;
      Logfile = v22;
      if ( v22 < 0
        && (*(_DWORD *)(v1 + 12) & 8) != 0
        && EtwEventEnabled(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
             &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
      {
        EtwpEventWriteTemplateAdmin(
          v1 + 152,
          (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
          v24,
          v1 + 136,
          v1 + 152,
          Logfile,
          *(_DWORD *)(v1 + 12));
      }
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      if ( Logfile >= 0 || !v21 )
      {
        v4 = (struct _KEVENT *)(v1 + 456);
LABEL_28:
        Logfile = EtwpFlushActiveBuffers(v1, v11);
        if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && Logfile >= 0 && !v11 )
          Logfile = EtwpFlushActiveBuffers(v1, 1LL);
        if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
          if ( *(_QWORD *)(v1 + 800) )
          {
            v23 = EtwpFinalizeHeader(v1, 0LL);
            Logfile = v23;
            if ( v23 >= 0 )
            {
              ZwClose(*(HANDLE *)(v1 + 800));
              *(_QWORD *)(v1 + 800) = 0LL;
            }
            else
            {
              *v16 = v23;
            }
          }
        }
        if ( (*(_BYTE *)(v1 + 12) & 0x40) != 0 )
          Logfile = 0;
        if ( v13 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
          *v16 = Logfile;
          KeSetEvent(v4, 0, 0);
        }
        if ( Logfile >= 0 )
          goto LABEL_35;
      }
LABEL_50:
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_SESSION_END_FAILED) )
        EtwpEventWriteTemplateSessionEnd(
          v1 + 152,
          v19,
          v20,
          v1 + 136,
          v1 + 152,
          Logfile,
          *(_DWORD *)(v1 + 12),
          *(_DWORD *)(v1 + 44));
      *v16 = Logfile;
      EtwpStopLoggerInstance(v1);
LABEL_35:
      v6 = (struct _KTIMER *)(v1 + 504);
      v5 = (struct _KEVENT *)(v1 + 480);
LABEL_36:
      v4 = (struct _KEVENT *)(v1 + 456);
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v27;
        break;
      }
    }
  }
  while ( 1 )
  {
    active = EtwpFlushActiveBuffers(v1, 1LL);
    if ( active < 0 )
      break;
    if ( active == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (active = 0, *(_QWORD *)(v1 + 360)) )
        active = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject(v5, Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 800) )
  {
    EtwpFinalizeHeader(v1, 0LL);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 40) = active;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( active < 0
    && EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_STOP_TRACE) )
  {
    EtwpEventWriteTemplateSession(v25, &ETW_EVENT_STOP_TRACE, v1);
  }
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(active);
}
