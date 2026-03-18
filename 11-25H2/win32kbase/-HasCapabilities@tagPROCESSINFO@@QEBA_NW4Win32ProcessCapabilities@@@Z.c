/*
 * XREFs of ?HasCapabilities@tagPROCESSINFO@@QEBA_NW4Win32ProcessCapabilities@@@Z @ 0x1401A90D4
 * Callers:
 *     ?CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A9080 (-CheckAccess@Win32ProcessCapability@@YA_NPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dis @ 0x1401A971C (WPP_RECORDER_AND_TRACE_SF_Dis.c)
 */

bool __fastcall tagPROCESSINFO::HasCapabilities(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  bool v3; // di
  bool v4; // bp
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v2 = *(_QWORD *)(a1 + 1168) & a2;
  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_Dis(*((_QWORD *)WPP_GLOBAL_Control + 3), v7, v6, *(_QWORD *)(UserSessionState + 69144));
  }
  return v2 != 0;
}
