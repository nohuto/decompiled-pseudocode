/*
 * XREFs of sub_140024A30 @ 0x140024A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140020894 @ 0x140020894 (sub_140020894.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_140024A30(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int *v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  char v16; // al
  unsigned int v17; // r8d
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  __int16 v23; // ax
  char v24; // r8
  __int64 v25; // rcx
  int v27; // [rsp+28h] [rbp-90h]
  unsigned int *v28; // [rsp+C0h] [rbp+8h] BYREF

  v4 = sub_140005000(a2);
  v28 = 0LL;
  v5 = v4;
  v9 = sub_14000B900(a2, &v28);
  v7 = *(_QWORD *)(a1 + 1560);
  v8 = v9;
  LOBYTE(v9) = *(_BYTE *)(v5 + 4200);
  v10 = v28;
  if ( (_BYTE)v9 != 7 )
  {
    if ( (_BYTE)v9 != 8 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      if ( (*(_BYTE *)(v5 + 4203) & 1) != 0 )
        *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_39;
    }
    v18 = *(_QWORD *)(v5 + 4160);
    if ( (*(_BYTE *)(v5 + 4203) & 1) != 0 )
    {
LABEL_29:
      v21 = *(unsigned __int16 *)(v18 + 12);
      if ( (*(_BYTE *)(v7 + 261) & 0x40) != 0 )
      {
        LODWORD(v9) = *(_DWORD *)(v18 + 16);
        if ( v21 <= (unsigned int)v9 )
          v21 = *(_DWORD *)(v18 + 16);
      }
      if ( v21 )
      {
        v22 = (v21 + 1) << 9;
        v23 = 8 * (*(unsigned __int8 *)(v5 + 4201) + 1);
        v24 = 16;
        *(_BYTE *)(v8 + 31) = v23;
        *(_BYTE *)(v8 + 30) = HIBYTE(v23);
        if ( *(_BYTE *)(v5 + 4202) == 16 )
          v24 = 17;
        *(_BYTE *)(v8 + 8LL * *(unsigned __int8 *)(v5 + 4201) + 32) = v24;
        *(_BYTE *)(v8 + 8LL * *(unsigned __int8 *)(v5 + 4201) + 33) = 2;
        *(_BYTE *)(v8 + 8LL * *(unsigned __int8 *)(v5 + 4201) + 34) = *(_BYTE *)(v8
                                                                               + 8LL * *(unsigned __int8 *)(v5 + 4201)
                                                                               + 34) & 0xF0 | 2;
        v25 = *(unsigned __int8 *)(v5 + 4201);
        *(_BYTE *)(v8 + 8 * v25 + 38) = BYTE1(v22);
        *(_BYTE *)(v8 + 8 * v25 + 37) = BYTE2(v22);
        *(_BYTE *)(v8 + 8 * v25 + 39) = v22;
        *(_BYTE *)(v8 + 8 * v25 + 36) = HIBYTE(v22);
        v9 = *(unsigned __int8 *)(v5 + 4201);
        *(_BYTE *)(a1 + 4045) = *(_BYTE *)(v8 + 8 * v9 + 32);
        *(_DWORD *)(a1 + 4040) = v22;
        ++*(_BYTE *)(v5 + 4201);
      }
      goto LABEL_39;
    }
    v19 = *v28;
    if ( (*v28 & 3) != 0 )
    {
      if ( v19 )
      {
        sub_140032C80(v8, 0LL, *v28);
        goto LABEL_27;
      }
    }
    else
    {
      v20 = v19 >> 2;
      if ( v20 )
      {
        sub_140032C80(v8, 0LL, 4LL * v20);
LABEL_27:
        v6 = 0LL;
      }
    }
    *(_WORD *)v8 = *(_WORD *)(v18 + 5);
    LOBYTE(v9) = *(_BYTE *)(v18 + 7);
    *(_BYTE *)(v8 + 9) |= 6u;
    *(_BYTE *)(v8 + 2) = v9;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(a2 + 3) != 1 || (v11 = *(_QWORD *)(v5 + 4160), *(_BYTE *)v11 != 7) )
  {
LABEL_18:
    *(_BYTE *)(v5 + 4225) |= 3u;
    sub_1400042C0(a1, a2);
    *(_BYTE *)(v5 + 4200) = 8;
    LOBYTE(v17) = 8;
    sub_140020894(a1, v5, v17, *(_DWORD *)(v5 + 4208), *(_QWORD *)(v5 + 4168), v27, 0LL, 1, 1u);
    *(_BYTE *)(v5 + 4225) |= 4u;
    *(_QWORD *)(v5 + 4192) = sub_140024A30;
    LOBYTE(v9) = sub_1400092F0(a1, a2);
    return v9;
  }
  *(_BYTE *)(v5 + 4203) = 1;
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
  {
    v12 = *v10;
    if ( (*v10 & 3) != 0 )
    {
      if ( v12 )
      {
        sub_140032C80(v8, 0LL, *v10);
        goto LABEL_10;
      }
    }
    else
    {
      v13 = v12 >> 2;
      if ( v13 )
      {
        sub_140032C80(v8, 0LL, 4LL * v13);
LABEL_10:
        v6 = 0LL;
      }
    }
  }
  *(_WORD *)v8 = *(_WORD *)(v11 + 5);
  LOBYTE(v9) = *(_BYTE *)(v11 + 7);
  *(_BYTE *)(v8 + 9) |= 6u;
  *(_BYTE *)(v8 + 2) = v9;
  v14 = *(unsigned __int16 *)(v11 + 12);
  if ( (*(_BYTE *)(v7 + 261) & 0x40) != 0 )
  {
    LODWORD(v9) = *(_DWORD *)(v11 + 16);
    if ( v14 <= (unsigned int)v9 )
      v14 = *(_DWORD *)(v11 + 16);
  }
  if ( v14 )
  {
    v15 = (v14 + 1) << 9;
    v16 = *(_BYTE *)(v8 + 34) & 0xF0 | 3;
    *(_DWORD *)(v8 + 30) = 17827840;
    *(_BYTE *)(v8 + 34) = v16;
    *(_BYTE *)(v8 + 39) = v15;
    *(_BYTE *)(v8 + 38) = BYTE1(v15);
    *(_BYTE *)(v8 + 37) = BYTE2(v15);
    *(_BYTE *)(v8 + 36) = HIBYTE(v15);
    *(_BYTE *)(a1 + 4044) = 16;
    *(_DWORD *)(a1 + 4036) = v15;
    *(_BYTE *)(v5 + 4201) = 1;
    LOBYTE(v9) = *(_BYTE *)(v8 + 32);
    *(_BYTE *)(v5 + 4202) = v9;
  }
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
    goto LABEL_18;
  *(_WORD *)(v11 + 5) = v6;
  *(_BYTE *)(v11 + 7) = v6;
  *(_DWORD *)(v11 + 8) = 0;
  *(_WORD *)(v11 + 12) = v6;
LABEL_39:
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    LODWORD(v9) = 8 * *(unsigned __int8 *)(v5 + 4201) + 32;
    *v10 = v9;
  }
  else if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
    LOBYTE(v9) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
    v6 = 0LL;
  }
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
  {
    LOBYTE(v9) = sub_14000CF50(a1, *(unsigned int *)(v5 + 4208), (__int64 *)(v5 + 4160), *(_QWORD *)(v5 + 4168));
    v6 = 0LL;
  }
  *(_BYTE *)(v5 + 4225) |= 8u;
  *(_QWORD *)(v5 + 4160) = v6;
  *(_DWORD *)(v5 + 4208) = v6;
  return v9;
}
