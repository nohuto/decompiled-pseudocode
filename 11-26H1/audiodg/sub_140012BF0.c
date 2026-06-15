/*
 * XREFs of sub_140012BF0 @ 0x140012BF0
 * Callers:
 *     sub_140012B40 @ 0x140012B40 (sub_140012B40.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140012BF0(__int64 a1)
{
  __int64 v2; // rcx
  _OWORD *v3; // rdx
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 result; // rax
  _BYTE v13[280]; // [rsp+20h] [rbp-118h] BYREF

  *(_DWORD *)(a1 + 272) = 0;
  memset(v13, 0, 0x108uLL);
  v2 = 2LL;
  v3 = (_OWORD *)(a1 + 280);
  v4 = v13;
  do
  {
    v5 = v4[1];
    *v3 = *v4;
    v6 = v4[2];
    v3[1] = v5;
    v7 = v4[3];
    v3[2] = v6;
    v8 = v4[4];
    v3[3] = v7;
    v9 = v4[5];
    v3[4] = v8;
    v10 = v4[6];
    v3[5] = v9;
    v11 = v4[7];
    v4 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)v3 = *(_QWORD *)v4;
  result = 0LL;
  *(_OWORD *)(a1 + 544) = 0LL;
  return result;
}
