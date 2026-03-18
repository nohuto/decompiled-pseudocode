/*
 * XREFs of MiIsPfnOriginalPteLost @ 0x140408658
 * Callers:
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140408014 (MiStoreWriteModifiedPagePostIssue.c)
 *     MiWritePageFileHash @ 0x140470698 (MiWritePageFileHash.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiIsPfnOriginalPteLost(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
    return MiCanPfnOriginalPteBeLost(a1);
  else
    return 0LL;
}
