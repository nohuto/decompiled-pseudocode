/*
 * XREFs of sub_14004EE9C @ 0x14004EE9C
 * Callers:
 *     sub_14004C76C @ 0x14004C76C (sub_14004C76C.c)
 *     sub_14004EFD0 @ 0x14004EFD0 (sub_14004EFD0.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004EE9C(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  return 2 * v2 + 2;
}
