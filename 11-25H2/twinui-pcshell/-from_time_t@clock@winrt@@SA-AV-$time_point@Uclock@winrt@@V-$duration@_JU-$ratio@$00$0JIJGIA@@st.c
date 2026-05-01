/*
 * XREFs of ?from_time_t@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@_J@Z @ 0x180565D24
 * Callers:
 *     ?TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x18021A2D8 (-TryGetLastActiveTimestampForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::clock::from_time_t(_QWORD *a1)
{
  *a1 = 116444736000000000LL;
  return a1;
}
