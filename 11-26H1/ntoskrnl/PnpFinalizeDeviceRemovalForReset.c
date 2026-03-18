/*
 * XREFs of PnpFinalizeDeviceRemovalForReset @ 0x1407A2BCC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopLogDeviceResetComplete @ 0x1407A27D4 (IopLogDeviceResetComplete.c)
 *     IopMarkDeviceToBeReset @ 0x1407A2860 (IopMarkDeviceToBeReset.c)
 *     IopEnumerateRelations @ 0x140AEAAAC (IopEnumerateRelations.c)
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
