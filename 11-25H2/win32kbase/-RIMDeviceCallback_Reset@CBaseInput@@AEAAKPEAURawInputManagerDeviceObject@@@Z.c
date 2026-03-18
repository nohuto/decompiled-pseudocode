/*
 * XREFs of ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140108430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Reset(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  char v2; // di
  bool v3; // bl
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx

  v2 = (char)a2;
  if ( a2 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        2,
        22,
        (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
        v2);
    }
  }
  return 0LL;
}
