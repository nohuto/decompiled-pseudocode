/*
 * XREFs of NtUserGetAltTabInfo @ 0x1401F1050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 NtUserGetAltTabInfo()
{
  UserSetLastError(1400);
  return 0LL;
}
