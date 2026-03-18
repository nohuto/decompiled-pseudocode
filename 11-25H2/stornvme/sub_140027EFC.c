/*
 * XREFs of sub_140027EFC @ 0x140027EFC
 * Callers:
 *     sub_140022B60 @ 0x140022B60 (sub_140022B60.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140027EFC(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rax
  char v7; // r8
  _DWORD *v8; // rbp
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  char v28; // cl
  int v29; // eax
  unsigned __int8 v30; // cl
  int v31; // eax
  __int64 v32; // rbx
  int v33; // ecx
  int v34; // r11d
  int v35; // r10d
  int v36; // r9d
  int v37; // r8d
  int v38; // edx
  __int64 v39[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = sub_140005000(a2);
  v5 = 0;
  v6 = sub_14000B900(a2, v39);
  v8 = (_DWORD *)(v6 + 28);
  v9 = *(_DWORD *)(v6 + 44);
  if ( (v9 & 0x7FFFFF00) != 0 )
    goto LABEL_8;
  v10 = (unsigned __int8)v9;
  if ( v8[3] == 5 )
  {
    if ( (unsigned __int8)v9 >= 0xC0u )
    {
      v7 = 1;
      goto LABEL_22;
    }
LABEL_8:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002694LL;
  }
  if ( (unsigned __int8)v9 <= 0x80u )
  {
    if ( (unsigned __int8)v9 == 128 )
      goto LABEL_8;
    if ( (unsigned __int8)v9 <= 9u )
      goto LABEL_8;
    v12 = (unsigned __int8)v9 - 10;
    if ( v10 == 10 || v12 != 6 )
      goto LABEL_8;
    goto LABEL_22;
  }
  if ( (unsigned __int8)v9 > 0xC2u )
  {
    v19 = (unsigned __int8)v9 - 195;
    if ( v10 == 195 )
      goto LABEL_21;
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_21;
    v21 = v20 - 1;
    if ( !v21 )
      goto LABEL_21;
    v17 = v21 - 1;
    v16 = v17 == 0;
  }
  else
  {
    if ( (unsigned __int8)v9 == 194 )
      goto LABEL_21;
    v13 = (unsigned __int8)v9 - 129;
    if ( v10 == 129 )
      goto LABEL_22;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_22;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_22;
    v17 = v15 - 61;
    v16 = v17 == 0;
  }
  if ( !v16 && v17 != 1 )
    goto LABEL_8;
LABEL_21:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_8;
LABEL_22:
  v18 = 16;
  if ( v10 == 16 )
  {
    v5 = -1;
  }
  else
  {
    if ( v10 == 129 )
    {
      v5 = -1;
      goto LABEL_39;
    }
    if ( (unsigned int)(v10 - 130) >= 2 )
    {
      if ( v7 )
      {
        v18 = v8[7];
        goto LABEL_27;
      }
      v18 = 4096;
      goto LABEL_40;
    }
  }
  v18 = 0;
LABEL_39:
  if ( v7 )
    goto LABEL_27;
LABEL_40:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_27;
  v22 = v10 - 192;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_48;
    v24 = v23 - 1;
    if ( !v24 )
      goto LABEL_48;
    v25 = v24 - 1;
    if ( !v25 )
      goto LABEL_48;
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_48;
    v27 = v26 - 1;
    if ( v27 )
    {
      if ( (unsigned int)(v27 - 1) <= 1 )
      {
LABEL_48:
        v18 = 0;
        v5 = 0;
        goto LABEL_29;
      }
LABEL_27:
      if ( !v18 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v18 = 4096;
    v5 = 0;
  }
  else
  {
    v18 = 4096;
    v5 = -(*(_BYTE *)(a1 + 9) != 0);
  }
LABEL_28:
  if ( v8[6] < 0x40u )
  {
LABEL_30:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_29:
  if ( v8[7] < v18 )
    goto LABEL_30;
  if ( !v7 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 || v5 == -1 )
      goto LABEL_73;
    v28 = *(_BYTE *)(a2 + 2);
    if ( v28 == 40 )
      v31 = *(_DWORD *)(a2 + 24);
    else
      v31 = *(_DWORD *)(a2 + 12);
    if ( (v31 & 1) != 0 )
    {
      v5 = -1;
      goto LABEL_73;
    }
    goto LABEL_59;
  }
  v28 = *(_BYTE *)(a2 + 2);
  v5 = v8[13];
  if ( v28 == 40 )
    v29 = *(_DWORD *)(a2 + 24);
  else
    v29 = *(_DWORD *)(a2 + 12);
  if ( (v29 & 1) == 0 )
  {
    if ( v5 )
      goto LABEL_8;
LABEL_59:
    if ( v28 == 40 )
      v30 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v30 = *(_BYTE *)(a2 + 7);
    if ( (unsigned int)v30 < *(_DWORD *)(a1 + 224) && (v32 = *(_QWORD *)(a1 + 8LL * v30 + 1672)) != 0 )
      v5 = *(_DWORD *)(v32 + 16);
    else
      v5 = 0;
    goto LABEL_73;
  }
  if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
    goto LABEL_8;
LABEL_73:
  if ( v18 )
  {
    sub_140006100(a1, v18);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v4 + 4225) = *(_BYTE *)(v4 + 4225) & 0xFD | (v18 != 0 ? 2 : 0) | 1;
    sub_1400042C0(a1, a2);
    v33 = v8[4];
    v34 = v8[12];
    v35 = v8[11];
    v36 = v8[10];
    v37 = v8[9];
    v38 = v8[5];
    *(_QWORD *)(v4 + 4120) = 0LL;
    *(_DWORD *)(v4 + 4136) = v33;
    *(_BYTE *)(v4 + 4096) = 9;
    *(_DWORD *)(v4 + 4100) = v5;
    *(_DWORD *)(v4 + 4140) = v38;
    *(_DWORD *)(v4 + 4144) = v37;
    *(_DWORD *)(v4 + 4148) = v36;
    *(_DWORD *)(v4 + 4152) = v35;
    *(_DWORD *)(v4 + 4156) = v34;
    LOBYTE(v33) = *(_BYTE *)(v4 + 4225) & 0xFB | (v18 != 0 ? 4 : 0);
    *(_QWORD *)(v4 + 4192) = sub_140027E40;
    *(_BYTE *)(v4 + 4225) = v33;
    *(_QWORD *)(v4 + 4160) = 0LL;
    *(_QWORD *)(v4 + 4168) = 0LL;
    result = 0LL;
    *(_DWORD *)(v4 + 4208) = v18;
  }
  return result;
}
