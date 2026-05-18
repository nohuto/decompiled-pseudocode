/*
 * XREFs of sub_18001955C @ 0x18001955C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_18003CF74 @ 0x18003CF74 (sub_18003CF74.c)
 *     sub_18005B198 @ 0x18005B198 (sub_18005B198.c)
 *     sub_18005B3C0 @ 0x18005B3C0 (sub_18005B3C0.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 * Callees:
 *     sub_18001B570 @ 0x18001B570 (sub_18001B570.c)
 */

__int64 __fastcall sub_18001955C(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  v8 = 0LL;
  *(double *)&v2 = sub_18001B570(&v8);
  *(_OWORD *)a2 = v2;
  result = a2;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  *(_OWORD *)(a2 + 48) = v6;
  return result;
}
