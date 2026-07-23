/*
 * XREFs of IoIsIoPriorityBoostActive @ 0x140493990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IoIsIoPriorityBoostActive(__int64 a1)
{
  return *(_DWORD *)(a1 + 1508) != 0;
}
