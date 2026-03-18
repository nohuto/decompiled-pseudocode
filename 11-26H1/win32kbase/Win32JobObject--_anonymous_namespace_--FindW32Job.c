/*
 * XREFs of Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401CF0D4
 * Callers:
 *     IsHandleEntrySecure @ 0x1401CE84C (IsHandleEntrySecure.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401CF1BC (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401CF2F0 (-GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Win32JobObject::_anonymous_namespace_::FindW32Job(int a1, int a2, int a3)
{
  __int64 *result; // rax

  for ( result = *(__int64 **)(W32GetUserSessionState(a1, a2, a3) + 69088);
        result && *((_DWORD *)result + 4) != a1;
        result = (__int64 *)*result )
  {
    ;
  }
  return result;
}
