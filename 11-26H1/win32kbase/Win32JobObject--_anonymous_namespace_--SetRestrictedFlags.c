/*
 * XREFs of Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401CF568
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401CEF44 (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___ @ 0x1401CED20 (W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1401CF958 (WPP_RECORDER_AND_TRACE_SF_Ds.c)
 */

_UNKNOWN **__fastcall Win32JobObject::_anonymous_namespace_::SetRestrictedFlags(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  char v3; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct _KPROCESS *v10; // rcx
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  char v12; // [rsp+58h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 1;
  if ( a2 != ((*(_DWORD *)(a1 + 12) & 0x2000000) != 0) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v3 = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, (_DWORD)WPP_GLOBAL_Control, (*(_DWORD *)(a1 + 12) >> 25) & 1);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v3;
      WPP_RECORDER_AND_TRACE_SF_Ds(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69136));
    }
    v10 = *(struct _KPROCESS **)a1;
    v11 = a1;
    v12 = a2;
    return (_UNKNOWN **)W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e_(v10, (__int64)&v11);
  }
  return result;
}
