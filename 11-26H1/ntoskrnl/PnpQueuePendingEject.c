/*
 * XREFs of PnpQueuePendingEject @ 0x1407A7A18
 * Callers:
 *     IopEjectDevice @ 0x1407B5808 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1LL);
  v2 = (_QWORD *)qword_140F84438;
  if ( *(__int64 **)qword_140F84438 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_140F84438 = (__int64)a1;
  PpDevNodeUnlockTree(1LL);
  return 1;
}
