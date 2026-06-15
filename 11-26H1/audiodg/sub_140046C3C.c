/*
 * XREFs of sub_140046C3C @ 0x140046C3C
 * Callers:
 *     sub_140046C10 @ 0x140046C10 (sub_140046C10.c)
 * Callees:
 *     _o_free @ 0x14004A64C (_o_free.c)
 */

__int64 __fastcall sub_140046C3C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    result = o_free(v2);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}
