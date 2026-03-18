/*
 * XREFs of sub_1400217C8 @ 0x1400217C8
 * Callers:
 *     sub_140001810 @ 0x140001810 (sub_140001810.c)
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140027D64 @ 0x140027D64 (sub_140027D64.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400217C8(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r8
  __int64 v3; // r13
  unsigned __int8 v6; // cl
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // r15
  __int64 v11; // rax
  bool v12; // bp
  char v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rax
  char v16; // r8
  _QWORD *v17; // r10
  char v18; // r11
  unsigned int *v19; // r14
  __int64 result; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned int *v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]

  v24 = 0LL;
  v2 = 40;
  v3 = *(_QWORD *)(a1 + 1560);
  v25 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 8LL * v6 + 1672);
  v9 = v8 + 68;
  v10 = (_QWORD *)(v8 + 84);
  v11 = *(_QWORD *)(v8 + 68) - v25;
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 8) - *((_QWORD *)&v25 + 1);
  v12 = v11 != 0;
  if ( !v11 )
  {
    v13 = 20;
    if ( *v10 == (_QWORD)v25 )
      v13 = 30;
    v2 = v13;
  }
  v14 = v2 + 4;
  v15 = sub_14000B900(a2, &v24);
  v19 = v24;
  if ( *v24 < v14 )
  {
    sub_140002330(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  *(_WORD *)v15 = 0x8000;
  *(_BYTE *)(v15 + 3) = v16;
  if ( v12 )
  {
    v21 = 16LL;
  }
  else
  {
    if ( !v18 )
    {
      *(_OWORD *)(v15 + 4) = *(_OWORD *)(v3 + 4);
      *(_DWORD *)(v15 + 20) = *(_DWORD *)(v3 + 20);
      *(_BYTE *)(v15 + 24) = 95;
      v22 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v7 + 1672) + 18LL);
      *(_BYTE *)(v15 + 28) = a0123456789abcd[*(_WORD *)(*(_QWORD *)(a1 + 8 * v7 + 1672) + 18LL) & 0xF];
      *(_BYTE *)(v15 + 27) = a0123456789abcd[(unsigned __int8)v22 >> 4];
      *(_BYTE *)(v15 + 26) = a0123456789abcd[((unsigned int)v22 >> 8) & 0xF];
      *(_BYTE *)(v15 + 25) = a0123456789abcd[v22 >> 12];
      v23 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v7 + 1672) + 16LL);
      *(_BYTE *)(v15 + 32) = a0123456789abcd[*(_WORD *)(*(_QWORD *)(a1 + 8 * v7 + 1672) + 16LL) & 0xF];
      *(_BYTE *)(v15 + 31) = a0123456789abcd[(unsigned __int8)v23 >> 4];
      *(_BYTE *)(v15 + 30) = a0123456789abcd[((unsigned int)v23 >> 8) & 0xF];
      *(_BYTE *)(v15 + 29) = a0123456789abcd[v23 >> 12];
      *(_BYTE *)(v15 + 33) = 46;
      goto LABEL_19;
    }
    v17 = v10;
    v21 = 8LL;
  }
  result = sub_140027D64(v17, v21, v15 + 4);
  if ( !(_DWORD)result )
  {
LABEL_19:
    *v19 = v14;
    result = 0LL;
    *(_BYTE *)(a2 + 3) = 1;
  }
  return result;
}
