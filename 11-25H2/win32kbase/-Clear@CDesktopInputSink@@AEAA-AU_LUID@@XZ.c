/*
 * XREFs of ?Clear@CDesktopInputSink@@AEAA?AU_LUID@@XZ @ 0x14019F968
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1401609D8 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

struct _LUID __fastcall CDesktopInputSink::Clear(CDesktopInputSink *this, _QWORD *a2)
{
  __int64 v2; // rax
  void *v4; // rcx
  __int64 v6; // rdx
  bool v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  v2 = *((_QWORD *)this + 3);
  v4 = (void *)*((_QWORD *)this + 2);
  *a2 = v2;
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 2) = 0LL;
    v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        2,
        18,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
    }
  }
  return (struct _LUID)a2;
}
