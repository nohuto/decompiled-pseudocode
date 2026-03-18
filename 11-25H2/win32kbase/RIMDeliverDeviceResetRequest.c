/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x140032DCC
 * Callers:
 *     rimDeviceResetApc @ 0x140033010 (rimDeviceResetApc.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 * Callees:
 *     ?DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x140032FA4 (-DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *OutputBuffer)
{
  __int64 v2; // rdx
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  NTSTATUS v8; // esi
  __int64 v10; // rcx
  bool v11; // bl
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  InputTraceLogging::RIM::DeliverDeviceResetRequest((const struct RIMDEV *)OutputBuffer);
  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      10,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)OutputBuffer);
  }
  ObfReferenceObject(*((PVOID *)OutputBuffer + 4));
  v8 = ZwDeviceIoControlFile(
         *((HANDLE *)OutputBuffer + 26),
         0LL,
         rimDeviceResetApc,
         OutputBuffer,
         (PIO_STATUS_BLOCK)(OutputBuffer + 152),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v8 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)OutputBuffer + 4));
    v11 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v10 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v10 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        v11 = 1;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(v10, WPP_GLOBAL_Control);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 19336),
        3,
        1,
        11,
        (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids);
    }
  }
  return (unsigned int)v8;
}
