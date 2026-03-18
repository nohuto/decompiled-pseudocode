/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1400E91C0
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 * Callees:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140060460 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1400CFCDC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1400E937C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140218948 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  _UNKNOWN **v5; // rax
  int v6; // edx
  int v7; // r8d
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  LOBYTE(v5) = isChildPartition((int)a1, a2, a3);
  if ( !(_BYTE)v5 )
  {
    if ( CBaseInput::SensorInitialized(a1) )
    {
      if ( (unsigned int)v3 < 4 )
      {
        if ( *((_DWORD *)&unk_140255E00 + 6 * v3) != (_DWORD)v3 )
        {
          v14 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1105LL);
        }
        if ( *((_DWORD *)&unk_140255E00 + 6 * v3 + 4) >= 0x13u || CBaseInput::ExecutingOnSensorHostingThread(a1) )
        {
          funcs_1400E9369[3 * v3](a1);
        }
        else
        {
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v14, 1);
          CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_140255E00 + 6 * v3 + 4));
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v14);
        }
      }
      LOBYTE(v5) = (*(__int64 (__fastcall **)(CBaseInput *, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, (unsigned int)v3);
    }
    else
    {
      if ( (((_DWORD)v3 - 1) & 0xFFFFFFFD) != 0 )
      {
        v14 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1037LL);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v8 = 0;
      }
      v5 = &WPP_RECORDER_INITIALIZED;
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        LOBYTE(v5) = WPP_RECORDER_AND_TRACE_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v12,
                       v11,
                       *(_QWORD *)(UserSessionState + 69136),
                       3,
                       3,
                       11,
                       (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
      }
    }
  }
  return (char)v5;
}
