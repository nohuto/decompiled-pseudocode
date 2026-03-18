/*
 * XREFs of NtUserSetProcessWindowStation @ 0x14014A230
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetProcessWindowStationEntryPoint @ 0x14014A248 (ApiSetEditionSetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserSetProcessWindowStation()
{
  return (int)ApiSetEditionSetProcessWindowStationEntryPoint();
}
