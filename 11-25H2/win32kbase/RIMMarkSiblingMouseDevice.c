/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x14017F7BC
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D5E2C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCAUsageToLegacyFlag @ 0x1401E6A60 (RIMCAUsageToLegacyFlag.c)
 */

void __fastcall RIMMarkSiblingMouseDevice(struct RIMDEV *a1, __int64 a2)
{
  unsigned __int16 v2; // bp
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v2 = a2;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      82,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      (char)a1);
  }
  *((_WORD *)a1 + 432) = (*((_WORD *)a1 + 432) | RIMCAUsageToLegacyFlag(v2)) & 0xFFFE;
  if ( v2 == 5 )
    *((_DWORD *)a1 + 42) |= 0x18000000u;
  InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
}
