/*
 * XREFs of sub_140010154 @ 0x140010154
 * Callers:
 *     sub_140003090 @ 0x140003090 (sub_140003090.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140010154(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(__int64 **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  return sub_14000ED10(v2, a2);
}
