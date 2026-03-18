/*
 * XREFs of NtUserCloseDesktop @ 0x140117D80
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCloseDesktopEntryPoint @ 0x140117D98 (ApiSetEditionCloseDesktopEntryPoint.c)
 */

__int64 NtUserCloseDesktop()
{
  return (int)ApiSetEditionCloseDesktopEntryPoint();
}
