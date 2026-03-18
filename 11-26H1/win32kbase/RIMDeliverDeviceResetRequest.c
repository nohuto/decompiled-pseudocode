/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x14005B0E0
 * Callers:
 *     rimDeviceResetApc @ 0x1400599D0 (rimDeviceResetApc.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 * Callees:
 *     ?DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14005B2C4 (-DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *ApcContext)
{
  int v2; // edx
  int v3; // r8d
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  NTSTATUS v9; // esi
  int v11; // ecx
  int v12; // r8d
  bool v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  InputTraceLogging::RIM::DeliverDeviceResetRequest((const struct RIMDEV *)ApcContext);
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v2, v3);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      10,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)ApcContext);
  }
  ObfReferenceObject(*((PVOID *)ApcContext + 4));
  v9 = ZwDeviceIoControlFile(
         *((HANDLE *)ApcContext + 26),
         0LL,
         (PIO_APC_ROUTINE)rimDeviceResetApc,
         ApcContext,
         (PIO_STATUS_BLOCK)(ApcContext + 152),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v9 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)ApcContext + 4));
    v13 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v11 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v11 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        v13 = 1;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(v11, (_DWORD)WPP_GLOBAL_Control, v12);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19368),
        3,
        1,
        11,
        (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids);
    }
  }
  return (unsigned int)v9;
}
