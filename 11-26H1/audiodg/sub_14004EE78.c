/*
 * XREFs of sub_14004EE78 @ 0x14004EE78
 * Callers:
 *     sub_14004C6F4 @ 0x14004C6F4 (sub_14004C6F4.c)
 *     sub_14004EFD0 @ 0x14004EFD0 (sub_14004EFD0.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004EE78(__int64 a1)
{
  __int64 v2; // rax

  if ( !a1 )
    return 1LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  return v2 + 1;
}
