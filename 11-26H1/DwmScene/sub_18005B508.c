/*
 * XREFs of sub_18005B508 @ 0x18005B508
 * Callers:
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 * Callees:
 *     sub_18001896C @ 0x18001896C (sub_18001896C.c)
 */

_OWORD *__fastcall sub_18005B508(__int64 a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD *result; // rax
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // r9
  _OWORD v13[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v14[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-48h] BYREF

  v1 = *(_OWORD *)(a1 + 628);
  v14[0] = *(_OWORD *)(a1 + 612);
  v2 = *(_OWORD *)(a1 + 644);
  v14[1] = v1;
  v3 = *(_OWORD *)(a1 + 660);
  v14[2] = v2;
  v4 = *(_OWORD *)(a1 + 932);
  v14[3] = v3;
  v5 = *(_OWORD *)(a1 + 948);
  v13[0] = v4;
  v6 = *(_OWORD *)(a1 + 964);
  v13[1] = v5;
  v7 = *(_OWORD *)(a1 + 980);
  v13[2] = v6;
  v13[3] = v7;
  result = sub_18001896C((__int64)&v15, v14, v13);
  v9 = result[1];
  v10 = result[2];
  v11 = result[3];
  *(_OWORD *)(v12 + 676) = *result;
  *(_OWORD *)(v12 + 692) = v9;
  *(_OWORD *)(v12 + 708) = v10;
  *(_OWORD *)(v12 + 724) = v11;
  return result;
}
