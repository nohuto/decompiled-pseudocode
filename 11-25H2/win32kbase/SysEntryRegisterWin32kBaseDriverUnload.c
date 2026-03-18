/*
 * XREFs of SysEntryRegisterWin32kBaseDriverUnload @ 0x1401A0D30
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SysEntryRegisterWin32kBaseDriverUnload(
        __int64 a1,
        __int64 a2))(void (__fastcall *)(struct _DRIVER_OBJECT *a1, __int64 a2))
{
  __int64 (__fastcall *result)(void (__fastcall *)(struct _DRIVER_OBJECT *, __int64)); // rax

  result = *(__int64 (__fastcall **)(void (__fastcall *)(struct _DRIVER_OBJECT *, __int64)))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                                                                           + 96LL);
  if ( result )
    return (__int64 (__fastcall *)(void (__fastcall *)(struct _DRIVER_OBJECT *, __int64)))result(Win32KBaseDriverUnload);
  return result;
}
