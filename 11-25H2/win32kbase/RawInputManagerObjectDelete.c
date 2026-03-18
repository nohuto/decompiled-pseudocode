/*
 * XREFs of RawInputManagerObjectDelete @ 0x1401E6DF8
 * Callers:
 *     RIMObjectManagerCallout @ 0x140118F14 (RIMObjectManagerCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimRemoveFromObTrackList @ 0x14012A328 (rimRemoveFromObTrackList.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 *     rimFreeAllUserMem @ 0x14014AF38 (rimFreeAllUserMem.c)
 *     RIMFreeAllHoldingFrames @ 0x14015161C (RIMFreeAllHoldingFrames.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401EFC94 (RIMDeleteAllAsyncWorkNotificationItems.c)
 *     rimObsFreeInputMessageQueue @ 0x1401F42CC (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1401F47A0 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  char v9; // bl
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  void *v14; // rcx
  int v16; // [rsp+80h] [rbp+30h] BYREF
  char v17; // [rsp+88h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( ObGetObjectType(v1) != ExRawInputManagerObjectType )
  {
    v16 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 212);
  }
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    if ( v3 == 2 )
    {
      rimRemoveFromObTrackList(v1, v2);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v4 = *(_QWORD *)(v1 + 392);
        v5 = (v1 + 72) & -(__int64)(v1 != 0);
        if ( !v4 )
        {
          v16 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 235);
        }
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v17,
          (struct RIMLOCK *)(v4 + 104));
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v16,
          (struct RIMLOCK *)(v4 + 760));
        RIMFreeSpecificDevWorker(v4, v5);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v16);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v17);
        ObfDereferenceObject((PVOID)v4);
      }
    }
    else if ( v3 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 255);
      }
      RIMFreeAllHoldingFrames(v1);
      if ( *(_QWORD *)(v1 + 424) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
      }
      if ( *(_QWORD *)(v1 + 728) != v1 + 728 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 261);
      }
      if ( *(_QWORD *)(v1 + 744) != v1 + 744 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 262);
      }
      if ( *(_QWORD *)(v1 + 416) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 265);
      }
      v6 = *(void **)(v1 + 368);
      if ( v6 != (void *)-1LL )
      {
        ZwClose(v6);
        *(_QWORD *)(v1 + 368) = -1LL;
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v16,
          (struct RIMLOCK *)(v1 + 352));
        RIMDeleteAllAsyncWorkNotificationItems(v1);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v16);
      }
      RIMLockExclusive(v1 + 760);
      rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v1, v7);
      RIMUnlockExclusive(v1 + 760);
      if ( !*(_QWORD *)(v1 + 1064) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 282);
      }
      if ( *(_DWORD *)(v1 + 1072) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 283);
      }
      GreDeleteFastMutex(*(char **)(v1 + 1064));
      *(_QWORD *)(v1 + 1064) = 0LL;
      if ( !*(_QWORD *)(v1 + 1096) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 290);
      }
      if ( *(_DWORD *)(v1 + 1104) )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 291);
      }
      GreDeleteFastMutex(*(char **)(v1 + 1096));
      *(_QWORD *)(v1 + 1096) = 0LL;
    }
    else
    {
      if ( v3 != 3 )
      {
        v16 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 305);
      }
      rimRemoveFromObTrackList(v1, v2);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69144),
          4,
          1,
          10,
          (__int64)&WPP_4faad94a375d3941b1c61349de2555b2_Traceguids,
          v1);
      }
      v14 = *(void **)(v1 + 80);
      if ( v14 != (void *)-1LL )
      {
        ZwClose(v14);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
