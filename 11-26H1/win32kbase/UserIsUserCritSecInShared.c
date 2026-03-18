/*
 * XREFs of UserIsUserCritSecInShared @ 0x1401922B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140049888 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

_BOOL8 __fastcall UserIsUserCritSecInShared(__int64 a1, __int64 a2)
{
  return IS_USERCRIT_OWNED_SHAREDONLY(a1, a2);
}
