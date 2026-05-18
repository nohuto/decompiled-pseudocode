/*
 * XREFs of sub_1800CA5F0 @ 0x1800CA5F0
 * Callers:
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CA5F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rax
  __m128i si128; // xmm0
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int32 v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int32 v18; // ecx
  int v19; // eax
  __int64 result; // rax
  __m128i v21; // [rsp+0h] [rbp-20h]
  int v22; // [rsp+10h] [rbp-10h]
  int v23; // [rsp+14h] [rbp-Ch]
  int v24; // [rsp+18h] [rbp-8h]

  v2 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v4 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 48) = 0;
  do
    v21.m128i_i32[v2++] = v5++;
  while ( v2 < 8 );
  v6 = *(unsigned int *)(a1 + 68);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801914F0);
  *(_DWORD *)(a2 + 20) = 1;
  *(_DWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 8) = v21.m128i_i32[v6];
  *(_DWORD *)(a2 + 28) = 1;
  *(_WORD *)(a2 + 16) = -1;
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 36) = 1;
  *(_DWORD *)(a2 + 40) = 1;
  *(_DWORD *)(a2 + 44) = 1;
  *(_DWORD *)(a2 + 48) = 1;
  *(_DWORD *)a2 = *(unsigned __int8 *)(a1 + 61);
  v8 = *(_BYTE *)(a1 + 62) == 0;
  v21 = si128;
  v22 = 4;
  *(_DWORD *)(a2 + 4) = !v8;
  *(_DWORD *)(a2 + 12) = *(unsigned __int8 *)(a1 + 63);
  v9 = *(unsigned int *)(a1 + 28);
  v23 = 8;
  v24 = 5;
  *(_DWORD *)(a2 + 20) = v21.m128i_i32[v9];
  v10 = *(unsigned int *)(a1 + 32);
  v21 = si128;
  v22 = 4;
  v23 = 8;
  v24 = 5;
  *(_DWORD *)(a2 + 24) = v21.m128i_i32[v10];
  v11 = *(unsigned int *)(a1 + 36);
  v21 = si128;
  v22 = 4;
  v23 = 8;
  v24 = 5;
  v12 = v21.m128i_i32[v11];
  v13 = 0LL;
  *(_DWORD *)(a2 + 28) = v12;
  v14 = 1;
  do
    v21.m128i_i32[v13++] = v14++;
  while ( v13 < 8 );
  *(_DWORD *)(a2 + 32) = v21.m128i_i32[*(unsigned int *)(a1 + 40)];
  v15 = *(unsigned int *)(a1 + 44);
  v21 = si128;
  v22 = 4;
  v23 = 8;
  v24 = 5;
  *(_DWORD *)(a2 + 36) = v21.m128i_i32[v15];
  v16 = *(unsigned int *)(a1 + 48);
  v21 = si128;
  v22 = 4;
  v23 = 8;
  v24 = 5;
  *(_DWORD *)(a2 + 40) = v21.m128i_i32[v16];
  v17 = *(unsigned int *)(a1 + 52);
  v21 = si128;
  v22 = 4;
  v23 = 8;
  v24 = 5;
  v18 = v21.m128i_i32[v17];
  v19 = 1;
  *(_DWORD *)(a2 + 44) = v18;
  do
    v21.m128i_i32[v4++] = v19++;
  while ( v4 < 8 );
  result = *(unsigned int *)(a1 + 56);
  *(_DWORD *)(a2 + 48) = v21.m128i_i32[result];
  return result;
}
