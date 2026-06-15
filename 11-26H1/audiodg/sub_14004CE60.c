/*
 * XREFs of sub_14004CE60 @ 0x14004CE60
 * Callers:
 *     sub_14004C8C4 @ 0x14004C8C4 (sub_14004C8C4.c)
 *     sub_14005069C @ 0x14005069C (sub_14005069C.c)
 * Callees:
 *     sub_14004F968 @ 0x14004F968 (sub_14004F968.c)
 */

__int64 __fastcall sub_14004CE60(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return sub_14004F968(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
