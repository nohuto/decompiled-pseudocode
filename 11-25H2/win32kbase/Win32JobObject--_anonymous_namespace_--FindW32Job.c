/*
 * XREFs of Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401AD018
 * Callers:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z @ 0x1401AC9F8 (-AddProcess@Win32JobObject@@YAXPEAU_EJOB@@PEAU_EPROCESS@@@Z.c)
 *     ?GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z @ 0x1401AD054 (-GetJobProcessAtomTable@Win32JobObject@@YA_NPEAPEAX@Z.c)
 *     ?GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z @ 0x1401AD160 (-GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AD2C4 (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD4F4 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z @ 0x1401AD64C (-Terminated@Win32JobObject@@YAXPEAU_EJOB@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32JobObject::_anonymous_namespace_::FindW32Job(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 69096); result && result[1] != a1; result = (_QWORD *)*result )
    ;
  return result;
}
