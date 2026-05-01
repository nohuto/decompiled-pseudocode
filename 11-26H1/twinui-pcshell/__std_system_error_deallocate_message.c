/*
 * XREFs of __std_system_error_deallocate_message @ 0x1802CD43C
 * Callers:
 *     ??1_System_error_message@std@@QEAA@XZ @ 0x18031078C (--1_System_error_message@std@@QEAA@XZ.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1803154F0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __stdcall _std_system_error_deallocate_message(HLOCAL hMem)
{
  return LocalFree(hMem);
}
