/*
 * XREFs of sub_14008C1A0 @ 0x14008C1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004D37C @ 0x14004D37C (sub_14004D37C.c)
 *     sub_14008ADAC @ 0x14008ADAC (sub_14008ADAC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008C1A0(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4, __int64 *a5)
{
  __int64 v7; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  int v13; // ebx
  unsigned int v15; // edi
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  _WORD *v18; // rdx
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // cx
  __int64 v21; // rax
  _DWORD *v22; // rbx
  _BYTE *v23; // rdi
  __int64 v24; // rcx
  _WORD *v25; // rax
  unsigned __int16 v26; // cx
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-D0h]
  unsigned int v30; // [rsp+38h] [rbp-C8h]
  int v31; // [rsp+3Ch] [rbp-C4h]
  _BYTE v32[264]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[264]; // [rsp+148h] [rbp+48h] BYREF
  _UNKNOWN *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v7 = a4;
  v29 = 0LL;
  v28 = 0LL;
  memset(v32, 0, sizeof(v32));
  sub_14004D37C((__int64)v32, 88LL, 3LL);
  memset(v33, 0, sizeof(v33));
  sub_14004D37C((__int64)v33, 88LL, 3LL);
  v30 = a2;
  v31 = v7;
  if ( a2 > 3 )
  {
    v12 = 196;
LABEL_3:
    v13 = -2147024774;
LABEL_4:
    sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v13);
    return (unsigned int)v13;
  }
  v15 = 0;
  if ( a2 )
  {
    v16 = &v32[8];
    while ( 1 )
    {
      v17 = *a3;
      *((_QWORD *)v16 - 1) = *(_QWORD *)(*a3 + 8);
      *v16 = *(_DWORD *)(v17 + 16);
      v18 = (_WORD *)sub_1400B6010(*(_QWORD *)(v17 + 24));
      v19 = v18[8];
      if ( v19 > 0x36u )
        break;
      v20 = v19 + 18;
      if ( v20 > 0x48u )
        v20 = 72;
      memcpy(&v32[88 * v15 + 12], v18, v20);
      v21 = *a3;
      ++v15;
      ++a3;
      v16[19] = *(_DWORD *)(v21 + 32);
      v16 += 22;
      if ( v15 >= a2 )
        goto LABEL_11;
    }
    v12 = 202;
    goto LABEL_3;
  }
LABEL_11:
  if ( (unsigned int)v7 > 3 )
  {
    v12 = 208;
    goto LABEL_3;
  }
  if ( (_DWORD)v7 )
  {
    v22 = &v33[8];
    v23 = &v33[12];
    do
    {
      v24 = *a5;
      *((_QWORD *)v22 - 1) = *(_QWORD *)(*a5 + 8);
      *v22 = *(_DWORD *)(v24 + 16);
      v25 = (_WORD *)sub_1400B6010(*(_QWORD *)(v24 + 24));
      v26 = v25[8] + 18;
      if ( v26 > 0x48u )
        v26 = 72;
      memcpy(v23, v25, v26);
      v27 = *a5;
      v23 += 88;
      ++a5;
      v22[19] = *(_DWORD *)(v27 + 32);
      v22 += 22;
      --v7;
    }
    while ( v7 );
  }
  v13 = sub_14008ADAC((_QWORD *)(a1 - 48), (__int64)&v28, v10, v11);
  if ( v13 < 0 )
  {
    v12 = 219;
    goto LABEL_4;
  }
  return 0LL;
}
