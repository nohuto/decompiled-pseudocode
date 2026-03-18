/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1401DC9D4
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  char v8; // si
  _UNKNOWN **result; // rax
  bool v10; // bp
  int v11; // ebx
  int v12; // edi
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, a2) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 114);
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 704) = v6 + 250;
  *(_OWORD *)(a1 + 496) = *a2;
  *(_OWORD *)(a1 + 512) = a2[1];
  *(_OWORD *)(a1 + 528) = a2[2];
  *(_OWORD *)(a1 + 544) = a2[3];
  *(_OWORD *)(a1 + 560) = a2[4];
  *(_OWORD *)(a1 + 576) = a2[5];
  *(_OWORD *)(a1 + 592) = a2[6];
  *(_OWORD *)(a1 + 608) = *a3;
  *(_OWORD *)(a1 + 624) = a3[1];
  *(_OWORD *)(a1 + 640) = a3[2];
  *(_OWORD *)(a1 + 656) = a3[3];
  *(_OWORD *)(a1 + 672) = a3[4];
  *(_OWORD *)(a1 + 688) = a3[5];
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *(_DWORD *)(a1 + 652);
    v12 = *(_DWORD *)(a1 + 648);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v8;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Dd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v15,
                          v14,
                          *(_QWORD *)(UserSessionState + 19336),
                          4,
                          1,
                          10,
                          (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                          v12,
                          v11);
  }
  return result;
}
