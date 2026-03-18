/*
 * XREFs of Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401CEF44
 * Callers:
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401CF45C (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 * Callees:
 *     Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CE7F4 (Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401CF568 (Win32JobObject--_anonymous_namespace_--SetRestrictedFlags.c)
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CF888 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions(
        __int64 a1,
        int a2))(__int64)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v7; // rcx

  if ( (unsigned int)Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline() )
    LOBYTE(v4) = a2 & 1;
  else
    LOBYTE(v4) = a2 != 0;
  Win32JobObject::_anonymous_namespace_::SetRestrictedFlags(a1, v4);
  result = (__int64 (__fastcall *)(__int64))Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v5);
  if ( !(_DWORD)result )
    *(_QWORD *)(a1 + 808) |= 0x4000000uLL;
  if ( (a2 & 0x100) != 0 )
  {
    result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48) + 632LL);
    if ( result )
      return (__int64 (__fastcall *)(__int64))result(a1);
  }
  return result;
}
