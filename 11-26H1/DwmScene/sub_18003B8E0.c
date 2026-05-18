/*
 * XREFs of sub_18003B8E0 @ 0x18003B8E0
 * Callers:
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 * Callees:
 *     sub_18003D5B8 @ 0x18003D5B8 (sub_18003D5B8.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_OWORD *__fastcall sub_18003B8E0(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  sub_18003D718(a1);
  if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
    sub_18003D5B8(a1);
  result = a2;
  v5 = *(_OWORD *)(a1 + 240);
  *a2 = *(_OWORD *)(a1 + 224);
  v6 = *(_OWORD *)(a1 + 256);
  a2[1] = v5;
  v7 = *(_OWORD *)(a1 + 272);
  a2[2] = v6;
  a2[3] = v7;
  return result;
}
