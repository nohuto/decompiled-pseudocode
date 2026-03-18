/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140210230
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x14002E578 (RimInputTypeToDeviceInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rbp
  char v10; // bl
  bool v11; // bp
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  char v15; // bl
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 CurrentProcess; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  char v27; // [rsp+20h] [rbp-68h]
  __int16 v28; // [rsp+30h] [rbp-58h]
  char v29; // [rsp+40h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  void *v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v32; // [rsp+98h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v32, "OnRemoteOpenNotification", 0LL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  UserSessionState = W32GetUserSessionState(v4, v3);
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      LODWORD(v31) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1336);
      v8 = -1073741816;
      goto LABEL_7;
    }
    v9 = *(_QWORD *)(UserSessionState + 68664);
  }
  else
  {
    v9 = *(_QWORD *)(UserSessionState + 68648);
  }
  v8 = -1073741816;
  if ( v9 != -1 )
  {
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 69144),
          2,
          2,
          13,
          (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids);
      }
      v8 = 0;
      goto LABEL_41;
    }
    v31 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v7, v6);
    v23 = PsGetCurrentProcess(v22, v21);
    v8 = ObDuplicateObject(v23, v9, CurrentProcess, &v31, 0, 512, 2, 0);
    if ( v8 >= 0 )
    {
      v8 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(*((char **)this + 1), &DestinationString, v2, v31, 0, 0LL);
      if ( v8 >= 0 )
        goto LABEL_41;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v29 = v8;
      v14 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v25) + 69144);
      v28 = 15;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v24 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v24 & 2) == 0)
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v29 = v8;
      v14 = *(_QWORD *)(W32GetUserSessionState(v24, WPP_GLOBAL_Control) + 69144);
      v28 = 14;
    }
    v27 = 2;
    goto LABEL_40;
  }
LABEL_7:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = v2;
    v14 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 69144);
    v28 = 12;
    v27 = 4;
LABEL_40:
    LOBYTE(v13) = v11;
    LOBYTE(v12) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v13,
      v14,
      v27,
      2,
      v28,
      (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
      v29);
  }
LABEL_41:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v32);
  return (unsigned int)v8;
}
