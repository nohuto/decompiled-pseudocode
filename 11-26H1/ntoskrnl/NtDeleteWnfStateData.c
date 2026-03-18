/*
 * XREFs of NtDeleteWnfStateData @ 0x14083F6A0
 * Callers:
 *     DifNtDeleteWnfStateDataWrapper @ 0x140675E20 (DifNtDeleteWnfStateDataWrapper.c)
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x14083F2A8 (ExpNtDeleteWnfStateData.c)
 */

__int64 __fastcall NtDeleteWnfStateData(void *a1, __int64 a2)
{
  return ExpNtDeleteWnfStateData(a1, a2, 1);
}
