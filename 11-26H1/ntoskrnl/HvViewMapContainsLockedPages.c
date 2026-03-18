/*
 * XREFs of HvViewMapContainsLockedPages @ 0x140B00124
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 4) != 0;
}
