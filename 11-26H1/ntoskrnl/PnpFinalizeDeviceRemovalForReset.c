/*
 * XREFs of PnpFinalizeDeviceRemovalForReset @ 0x1407A570C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopLogDeviceResetComplete @ 0x1407A5314 (IopLogDeviceResetComplete.c)
 *     IopMarkDeviceToBeReset @ 0x1407A53A0 (IopMarkDeviceToBeReset.c)
 *     IopEnumerateRelations @ 0x140AED59C (IopEnumerateRelations.c)
 */

NTSTATUS __fastcall PnpFinalizeDeviceRemovalForReset(__int64 a1, int a2)
{
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  v6 = 1LL;
  while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v6, (unsigned int)&BugCheckParameter2, 0, 0LL) )
    IopMarkDeviceToBeReset(BugCheckParameter2);
  return IopLogDeviceResetComplete(a1, 0);
}
