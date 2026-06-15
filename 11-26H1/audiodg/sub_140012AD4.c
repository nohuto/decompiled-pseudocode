/*
 * XREFs of sub_140012AD4 @ 0x140012AD4
 * Callers:
 *     sub_140012538 @ 0x140012538 (sub_140012538.c)
 *     sub_140012A80 @ 0x140012A80 (sub_140012A80.c)
 * Callees:
 *     sub_14000C390 @ 0x14000C390 (sub_14000C390.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_14005C090 @ 0x14005C090 (sub_14005C090.c)
 *     sub_1400624AC @ 0x1400624AC (sub_1400624AC.c)
 */

__int64 __fastcall sub_140012AD4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax

  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  result = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 32) = result;
  *(_QWORD *)(a1 + 64) = a2;
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_14005C090(a1, v4);
    result = sub_1400624AC(a1, v5);
  }
  if ( !*(_QWORD *)(a1 + 8) )
    return sub_14000C390(a1);
  return result;
}
