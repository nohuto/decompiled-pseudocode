/*
 * XREFs of sub_14000A5C4 @ 0x14000A5C4
 * Callers:
 *     sub_14000A6C4 @ 0x14000A6C4 (sub_14000A6C4.c)
 * Callees:
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000A5C4(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  bool v5; // zf

  v1 = *(__int64 **)a1;
  if ( !*(_QWORD *)a1 )
    sub_14004639C(2147500037LL, 0LL);
  v3 = *v1;
  v4 = v1[2];
  *(_QWORD *)a1 = *v1;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    *(_QWORD *)(a1 + 8) = 0LL;
  *v1 = *(_QWORD *)(a1 + 32);
  v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = v1;
  if ( v5 )
    sub_14000D9B8(a1);
  return v4;
}
