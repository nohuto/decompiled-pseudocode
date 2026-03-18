/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140060460
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1400E91C0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x14005F250 (RimInputTypeToDeviceInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // r15d
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rbp
  int v11; // esi
  __int64 CurrentProcess; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  char v20; // bl
  bool v21; // si
  char v22; // bl
  bool v23; // bp
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // [rsp+20h] [rbp-68h]
  __int16 v31; // [rsp+30h] [rbp-58h]
  char v32; // [rsp+40h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  char v35; // [rsp+98h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v35,
    "OnRemoteOpenNotification",
    0LL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1314LL);
      v11 = -1073741816;
      goto LABEL_15;
    }
    v10 = *(_QWORD *)(UserSessionState + 68656);
  }
  else
  {
    v10 = *(_QWORD *)(UserSessionState + 68640);
  }
  v11 = -1073741816;
  if ( v10 == -1 )
  {
LABEL_15:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = v2;
      v26 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9) + 69136);
      v31 = 12;
      v30 = 4;
LABEL_42:
      LOBYTE(v25) = v23;
      LOBYTE(v24) = v22;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v25,
        v26,
        v30,
        2,
        v31,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
        v32);
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  if ( v10 )
  {
    v34 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v8);
    v14 = PsGetCurrentProcess(v13);
    v11 = ObDuplicateObject(v14, v10, CurrentProcess, &v34, 0, 512, 2, 0);
    if ( v11 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v15 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v15 & 2) == 0)
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = v11;
        v26 = *(_QWORD *)(W32GetUserSessionState(v15, (_DWORD)WPP_GLOBAL_Control, v16) + 69136);
        v31 = 14;
LABEL_41:
        v30 = 2;
        goto LABEL_42;
      }
    }
    else
    {
      v11 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
              *((_QWORD *)this + 1),
              (unsigned int)&DestinationString,
              v2,
              v34,
              0,
              0LL);
      if ( v11 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v22 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = v11;
          v26 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18) + 69136);
          v31 = 15;
          goto LABEL_41;
        }
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9);
      LOBYTE(v28) = v21;
      LOBYTE(v29) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69136),
        2,
        2,
        13,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
    }
    v11 = 0;
  }
LABEL_8:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v35);
  return (unsigned int)v11;
}
