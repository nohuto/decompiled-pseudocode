/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1401451A4
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x140145180 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  bool v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx

  v2 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      6,
      18,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
  *((_DWORD *)this + 943) = 0;
}
