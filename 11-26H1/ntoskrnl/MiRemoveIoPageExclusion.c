/*
 * XREFs of MiRemoveIoPageExclusion @ 0x1406F9A64
 * Callers:
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 */

__int64 __fastcall MiRemoveIoPageExclusion(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = MiLockIoPfnTree(2);
  RtlAvlRemoveNode((unsigned __int64 *)&xmmword_140E36040 + 1, a1);
  LOBYTE(v3) = v2;
  return MiUnlockIoPfnTree(v3, 2LL, v4, v5);
}
