/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14069B960
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x14062F720 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlReleasePrivilege @ 0x1409BE610 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140A26808 (BiAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x140A280B4 (RtlAcquirePrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
