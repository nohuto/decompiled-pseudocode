/*
 * XREFs of RawInputManagerObjectDelete @ 0x140130BFC
 * Callers:
 *     RIMObjectManagerCallout @ 0x140130A5C (RIMObjectManagerCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     rimRemoveFromObTrackList @ 0x140131038 (rimRemoveFromObTrackList.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeAllHoldingFrames @ 0x140131DB0 (RIMFreeAllHoldingFrames.c)
 *     rimFreeAllUserMem @ 0x140131E40 (rimFreeAllUserMem.c)
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMDeleteAllAsyncWorkNotificationItems @ 0x1401951EC (RIMDeleteAllAsyncWorkNotificationItems.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsFreeInputMessageQueue @ 0x14020FD54 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x140210210 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // edx
  int v13; // r8d
  char v14; // bl
  bool v15; // si
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  void *v19; // rcx
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( ObGetObjectType(v1) != ExRawInputManagerObjectType )
  {
    LODWORD(v20) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
  }
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    if ( v2 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v11 = *(_QWORD *)(v1 + 392);
        if ( !v11 )
        {
          LODWORD(v20) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 235LL);
        }
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v21,
          (struct RIMLOCK *)(v11 + 104));
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v20,
          (struct RIMLOCK *)(v11 + 760));
        RIMFreeSpecificDevWorker(v11, (v1 + 72) & -(__int64)(v1 != 0));
        if ( v20 )
          RIMUnlockExclusive(v20);
        if ( v21 )
          RIMUnlockExclusive(v21);
        ObfDereferenceObject((PVOID)v11);
      }
    }
    else if ( v2 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
      }
      RIMFreeAllHoldingFrames(v1);
      if ( *(_QWORD *)(v1 + 424) )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 260LL);
      }
      if ( *(_QWORD *)(v1 + 728) != v1 + 728 )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 261LL);
      }
      if ( *(_QWORD *)(v1 + 744) != v1 + 744 )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 262LL);
      }
      if ( *(_QWORD *)(v1 + 416) )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 265LL);
      }
      v4 = *(void **)(v1 + 368);
      if ( v4 != (void *)-1LL )
      {
        ZwClose(v4);
        *(_QWORD *)(v1 + 368) = -1LL;
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v20,
          (struct RIMLOCK *)(v1 + 352));
        RIMDeleteAllAsyncWorkNotificationItems(v1);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
      }
      RIMLockExclusive(v1 + 760);
      rimFreeAllUserMem(v1);
      RIMUnlockExclusive(v1 + 760);
      if ( !*(_QWORD *)(v1 + 1064) )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      }
      if ( *(_DWORD *)(v1 + 1072) )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 283LL);
      }
      GreDeleteFastMutex(*(char **)(v1 + 1064), v5, v6, v7);
      *(_QWORD *)(v1 + 1064) = 0LL;
      if ( !*(_QWORD *)(v1 + 1096) )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 290LL);
      }
      if ( *(_DWORD *)(v1 + 1104) )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 291LL);
      }
      GreDeleteFastMutex(*(char **)(v1 + 1096), v8, v9, v10);
      *(_QWORD *)(v1 + 1096) = 0LL;
    }
    else
    {
      if ( v2 != 3 )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 305LL);
      }
      rimRemoveFromObTrackList(v1);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          1,
          10,
          (__int64)&WPP_4faad94a375d3941b1c61349de2555b2_Traceguids,
          v1);
      }
      v19 = *(void **)(v1 + 80);
      if ( v19 != (void *)-1LL )
      {
        ZwClose(v19);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
