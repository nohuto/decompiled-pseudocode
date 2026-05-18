/*
 * XREFs of sub_1800390E0 @ 0x1800390E0
 * Callers:
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_1800390E0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v3; // esi
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *result; // rax
  _DWORD v10[15]; // [rsp+28h] [rbp-21h]
  __m128i si128; // [rsp+64h] [rbp+1Bh]
  int v12; // [rsp+74h] [rbp+2Bh]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+84h] [rbp+3Bh]
  int v17; // [rsp+88h] [rbp+3Fh]

  v3 = 0;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(*a2 + 112LL);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 20);
    else
      v6 = 0;
    v10[0] = 0;
    v10[1] = 4;
    v10[2] = 4;
    v10[3] = 4;
    v10[6] = 16;
    v10[11] = 16;
    v10[5] = 12;
    v10[13] = 1;
    v16 = 1;
    v10[10] = 12;
    v10[4] = 8;
    v10[7] = 4;
    v10[8] = 4;
    v10[9] = 8;
    v10[12] = 2;
    v10[14] = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1801914D0);
    v12 = 2;
    v13 = 4;
    v14 = 8;
    v15 = 4;
    v17 = 2;
    v3 = v10[v6];
  }
  v7 = *(_QWORD *)(a1 + 96);
  v8 = a3;
  result = sub_180013540((__int64 *)(v7 + 16LL * a3 + 72), a2);
  *(_DWORD *)(v7 + 4 * v8 + 792) = 0;
  *(_DWORD *)(v7 + 4 * v8 + 972) = v3;
  return result;
}
