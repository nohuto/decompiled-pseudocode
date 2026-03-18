/*
 * XREFs of ?OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ @ 0x140219BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 */

__int64 __fastcall CKeyboardSensor::OnKeyboardStateUpdateEvent(CKeyboardSensor *this, __int64 a2, int a3)
{
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  if ( *((_DWORD *)this + 334) )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)WPP_GLOBAL_Control, a3);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        2,
        14,
        (__int64)&WPP_14ad0bfeaf2b3540facc3bd591c39789_Traceguids);
    }
    CKeyboardSensor::_KeyboardIOControl(this);
  }
  return 0LL;
}
