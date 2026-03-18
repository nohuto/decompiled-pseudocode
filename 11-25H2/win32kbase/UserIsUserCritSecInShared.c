/*
 * XREFs of UserIsUserCritSecInShared @ 0x140158660
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

_BOOL8 UserIsUserCritSecInShared()
{
  return IS_USERCRIT_OWNED_SHAREDONLY();
}
