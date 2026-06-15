/*
 * XREFs of sub_140011068 @ 0x140011068
 * Callers:
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_1400110B8 @ 0x1400110B8 (sub_1400110B8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140011068(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  v3 = *(_QWORD *)(a2 + 8);
  while ( v3 )
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    result = sub_1400110B8(a1, v4 + 16);
  }
  return result;
}
