/*
 * XREFs of Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401ACC7C
 * Callers:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8 (-AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AD2C4 (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1401A89B4 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401AD3F8 (Win32JobObject--_anonymous_namespace_--SetRestrictedFlags.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions(
        __int64 a1,
        _QWORD *a2,
        int a3))(_QWORD *)
{
  _QWORD *v4; // rdi
  bool v6; // si
  bool v7; // r15
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 (__fastcall *result)(_QWORD *); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v4 = a2;
  if ( !a2[94] && a1 )
  {
    a2 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v9, *(_QWORD *)(UserSessionState + 69144));
    }
    v4[94] = a1;
  }
  LOBYTE(a2) = a3 != 0;
  result = (__int64 (__fastcall *)(_QWORD *))Win32JobObject::_anonymous_namespace_::SetRestrictedFlags(v4, a2);
  v4[101] |= 0x4000000uLL;
  if ( (a3 & 0x100) != 0 )
  {
    result = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48) + 640LL);
    if ( result )
      return (__int64 (__fastcall *)(_QWORD *))result(v4);
  }
  return result;
}
