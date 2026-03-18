/*
 * XREFs of MiRemoveIoPageExclusion @ 0x1406F4DF4
 * Callers:
 *     MiMapNewPfns @ 0x140866674 (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     MiLockIoPfnTree @ 0x1406F4668 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F4E8C (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiRemoveIoPageExclusion(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = MiLockIoPfnTree(2);
  RtlAvlRemoveNode((unsigned __int64 *)&xmmword_140E35EC0 + 1, a1);
  LOBYTE(v3) = v2;
  return MiUnlockIoPfnTree(v3, 2LL, v4, v5);
}
