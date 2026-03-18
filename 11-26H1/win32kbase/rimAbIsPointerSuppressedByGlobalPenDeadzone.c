/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1400F8450
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1400F85FC (rimAbIsPointInGlobalPenDeadzone.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x14014BE54 (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IsPointInGlobalPenDeadzone; // r15d
  int v8; // ecx
  int v9; // r8d
  char v10; // r14
  bool v11; // r12
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  IsPointInGlobalPenDeadzone = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 167LL);
  if ( (unsigned int)RIMIsTouchPointerDevice(a2) )
  {
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, a2 + 156, a3);
    if ( IsPointInGlobalPenDeadzone )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v8 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v8 & 1) == 0)
        || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v10 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v8, (_DWORD)WPP_GLOBAL_Control, v9);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_dDdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 19368));
      }
    }
  }
  return IsPointInGlobalPenDeadzone;
}
