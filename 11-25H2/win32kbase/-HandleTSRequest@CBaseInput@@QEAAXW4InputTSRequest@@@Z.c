/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00
 * Callers:
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140210230 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140210C00 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140210D04 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, __int64 a2)
{
  __int64 v2; // rdi
  _UNKNOWN **v4; // rax
  __int64 v5; // rdx
  char v6; // si
  bool v7; // bl
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = (unsigned int)a2;
  LOBYTE(v4) = isChildPartition((__int64)a1, a2);
  if ( !(_BYTE)v4 )
  {
    if ( CBaseInput::SensorInitialized(a1) )
    {
      if ( (unsigned int)v2 < 4 )
      {
        if ( *((_DWORD *)&unk_140257E80 + 6 * v2) != (_DWORD)v2 )
        {
          v14 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1127);
        }
        if ( *((_DWORD *)&unk_140257E80 + 6 * v2 + 4) >= 0x13u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
        {
          funcs_14020FF6C[3 * v2](a1);
        }
        else
        {
          LOBYTE(v11) = 1;
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v14, v11);
          CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_140257E80 + 6 * v2 + 4));
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v14, v12);
        }
      }
      LOBYTE(v4) = (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v2);
    }
    else
    {
      if ( (((_DWORD)v2 - 1) & 0xFFFFFFFD) != 0 )
      {
        v14 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1059);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v6 = 0;
      }
      v4 = &WPP_RECORDER_INITIALIZED;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        LOBYTE(v4) = WPP_RECORDER_AND_TRACE_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v10,
                       v9,
                       *(_QWORD *)(UserSessionState + 69144),
                       3,
                       3,
                       11,
                       (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids);
      }
    }
  }
  return (char)v4;
}
