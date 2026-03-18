/*
 * XREFs of ?Initialize@CDesktopInputSink@@SAJXZ @ 0x14018C3F8
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall CDesktopInputSink::Initialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  _QWORD *v3; // rax
  char v5; // bl
  bool v6; // di
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x66747455u);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    *(_QWORD *)(UserSessionState + 19128) = v3;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(UserSessionState + 19128) = 0LL;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v5 = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(v7 + 69144),
        2,
        14,
        10,
        (__int64)&WPP_476bf90e779730ded759a21f7207b574_Traceguids);
    }
    return 3221225495LL;
  }
}
