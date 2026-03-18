/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x140097328
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1400987C0 (rimCompleteReads.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x140095638 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400958DC (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     rimFindOtherQueuedFrames @ 0x1400962C0 (rimFindOtherQueuedFrames.c)
 *     rimDispatchCompleteFrame @ 0x140096810 (rimDispatchCompleteFrame.c)
 *     rimDispatchCompleteFrames @ 0x140096874 (rimDispatchCompleteFrames.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_UNKNOWN **__fastcall rimProcessAnyQueuedCompleteFrames(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v6; // rcx
  int *v7; // rbp
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  char v12; // si
  char v13; // r14
  __int64 v14; // rax
  int OtherQueuedFrames; // eax
  struct RIMDEV *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // bl
  bool v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned int v28; // [rsp+90h] [rbp+8h] BYREF
  PVOID Buffer; // [rsp+98h] [rbp+10h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 850LL);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x200) != 0 )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 851LL);
  }
  result = (_UNKNOWN **)(a1 + 744);
  v6 = *(_QWORD **)(a1 + 744);
  if ( v6 != (_QWORD *)(a1 + 744) && *(_BYTE *)(a1 + 776) )
  {
    v7 = (int *)(v6 - 1);
    v8 = v6[4];
    if ( (*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056))
      && (v9 = *(_DWORD *)(v8 + 240), (v9 & 0x2000) != 0)
      && (v9 & 0x1000000) == 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v20 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v24,
                              v23,
                              *(_QWORD *)(UserSessionState + 19368),
                              4,
                              1,
                              20,
                              (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids);
      }
    }
    else
    {
      v10 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v6[1] = v6;
      *v6 = v6;
      *((_QWORD *)v7 + 5) = 0LL;
      --*(_QWORD *)(v8 + 248);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v12 = 0;
      }
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v11, a3);
        WPP_RECORDER_AND_TRACE_SF_qi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v13,
          *(_QWORD *)(v14 + 19368),
          v25,
          v26,
          0x13u,
          v27);
      }
      if ( ((unsigned int)RimDeviceTypeToRimInputType((v8 + 72) & -(__int64)(v8 != 0), 2) & *(_DWORD *)(a1 + 84)) == 0 )
      {
        v28 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 910LL);
      }
      if ( (*(_DWORD *)(((v8 + 72) & -(__int64)(v8 != 0)) + 0xB8) & 0x80u) == 0 )
      {
        v28 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 911LL);
      }
      *(_BYTE *)(a1 + 776) = 0;
      InputTraceLogging::RIM::DispatchFrame((v8 + 72) & -(__int64)(v8 != 0), v7, 1);
      v30 = 0LL;
      Buffer = 0LL;
      v28 = 0;
      OtherQueuedFrames = rimFindOtherQueuedFrames(a1, (v8 + 72) & -(__int64)(v8 != 0), v7, &v30, &Buffer, &v28);
      v16 = (struct RIMDEV *)((v8 + 72) & -(__int64)(v8 != 0));
      if ( OtherQueuedFrames )
      {
        rimDispatchCompleteFrames((struct RawInputManagerObject *)a1, v16, v30, (LARGE_INTEGER *)Buffer, v28);
        GreDeleteFastMutex((char *)Buffer, v17, v18, v19);
      }
      else
      {
        rimDispatchCompleteFrame((struct RawInputManagerObject *)a1, (__int64)v16, v7);
      }
      return (_UNKNOWN **)ObfDereferenceObject((PVOID)v8);
    }
  }
  return result;
}
