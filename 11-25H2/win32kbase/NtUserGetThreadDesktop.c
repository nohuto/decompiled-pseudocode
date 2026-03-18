/*
 * XREFs of NtUserGetThreadDesktop @ 0x14010C230
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetThreadDesktopEntryPoint @ 0x14010C248 (ApiSetEditionGetThreadDesktopEntryPoint.c)
 */

__int64 NtUserGetThreadDesktop()
{
  return ApiSetEditionGetThreadDesktopEntryPoint();
}
