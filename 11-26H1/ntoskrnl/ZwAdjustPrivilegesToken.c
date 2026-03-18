/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x140723C10
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x140698CF0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     BiAdjustPrivilege @ 0x1409D1E78 (BiAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409D2010 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140AEBFD0 (RtlReleasePrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
