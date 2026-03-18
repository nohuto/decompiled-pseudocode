/*
 * XREFs of CmpInsertKeyHash @ 0x140859398
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x140859538 (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpAddKeyHashToEntry @ 0x140AE137C (CmpAddKeyHashToEntry.c)
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpAddKeyHashToEntry(
           a2,
           *(_QWORD *)(a1 + 1648)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0LL);
}
