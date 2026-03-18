/*
 * XREFs of SmmIoMmuDeleteTreeNode @ 0x14009BC7C
 * Callers:
 *     SmmClearPageManager @ 0x14009BBCC (SmmClearPageManager.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmIoMmuDeleteTreeNode(PVOID Entry, __int64 a2)
{
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 16), Entry);
}
