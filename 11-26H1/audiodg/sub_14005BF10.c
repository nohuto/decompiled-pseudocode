/*
 * XREFs of sub_14005BF10 @ 0x14005BF10
 * Callers:
 *     sub_14005C2EC @ 0x14005C2EC (sub_14005C2EC.c)
 *     sub_14005C388 @ 0x14005C388 (sub_14005C388.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_14005C130 @ 0x14005C130 (sub_14005C130.c)
 */

__int64 __fastcall sub_14005BF10(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax

  if ( !a2 )
    sub_14004639C(-2147467259);
  sub_140003238((__int64 *)(a2 + 8));
  result = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 16) = result;
  *(_QWORD *)(a1 + 64) = a2;
  v5 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v5 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v6 = sub_14005C090(a1, v5);
    result = sub_14005C130(a1, v6);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    return sub_14000C390(a1);
  return result;
}
