/*
 * XREFs of sub_140026F14 @ 0x140026F14
 * Callers:
 *     sub_140001D70 @ 0x140001D70 (sub_140001D70.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140026F14(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  unsigned int v8; // ecx
  _DWORD *v9; // rbp
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  bool v16; // zf
  int v17; // eax
  int v18; // eax
  __int64 result; // rax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  char v23; // cl
  int v24; // eax
  unsigned __int8 v25; // cl
  int v26; // eax
  __int64 v27; // rdi
  int v28; // edx
  int v29; // ecx
  char v30; // cl
  __int64 v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v32 = 0LL;
  v4 = sub_140005000(a2);
  v5 = 0;
  v6 = (_DWORD *)sub_14000B900(a2, &v31);
  v7 = v6;
  v8 = v6[11];
  if ( v8 >= 0x800 )
    goto LABEL_52;
  if ( v6[10] != 5 )
  {
    v9 = 0LL;
    if ( (unsigned __int8)v8 > 0x80u )
      goto LABEL_5;
    if ( (unsigned __int8)v8 == 128 )
      goto LABEL_40;
    if ( (unsigned __int8)v8 > 9u )
    {
      if ( (unsigned __int8)v8 != 10
        && (unsigned __int8)v8 != 11
        && (unsigned __int8)v8 != 12
        && (unsigned __int8)v8 != 13
        && (unsigned __int8)v8 != 14 )
      {
        v17 = (unsigned __int8)v8 - 16;
        v16 = (unsigned __int8)v8 == 16;
        goto LABEL_38;
      }
    }
    else if ( (unsigned __int8)v8 != 9
           && (unsigned __int8)v8 != 1
           && (unsigned __int8)v8 != 2
           && (unsigned __int8)v8 != 3
           && (unsigned __int8)v8 != 5
           && (unsigned __int8)v8 != 6 )
    {
      v17 = (unsigned __int8)v8 - 7;
      v16 = (unsigned __int8)v8 == 7;
LABEL_38:
      if ( !v16 && v17 != 1 )
        goto LABEL_41;
    }
LABEL_40:
    if ( v7[12] )
      goto LABEL_52;
    goto LABEL_41;
  }
  if ( (unsigned __int8)v8 < 0xC0u )
    goto LABEL_52;
  v9 = v6 + 7;
LABEL_5:
  if ( (unsigned __int8)v8 == 130 || (unsigned __int8)v8 == 131 )
    goto LABEL_40;
  if ( (unsigned __int8)v8 == 192
    || (unsigned __int8)v8 == 194
    || (unsigned __int8)v8 == 196
    || (unsigned int)(unsigned __int8)v8 - 198 <= 1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && !v9 && v6[12] )
      goto LABEL_52;
    v10 = (unsigned __int8)v8;
    goto LABEL_15;
  }
LABEL_41:
  v10 = (unsigned __int8)v8;
  if ( (unsigned __int8)v8 <= 0x7Du )
  {
    if ( (unsigned __int8)v8 != 125 )
    {
      if ( (unsigned __int8)v8 > 9u )
      {
        switch ( (unsigned __int8)v8 )
        {
          case 0xAu:
          case 0xBu:
            goto LABEL_61;
          case 0xCu:
            v15 = 256;
            goto LABEL_62;
          case 0xDu:
            goto LABEL_67;
          case 0xEu:
            v15 = 8;
            goto LABEL_62;
        }
        v18 = (unsigned __int8)v8 - 16;
        if ( (unsigned __int8)v8 == 16 )
          goto LABEL_61;
      }
      else
      {
        switch ( (unsigned __int8)v8 )
        {
          case 9u:
          case 1u:
          case 2u:
            goto LABEL_61;
          case 3u:
            goto LABEL_68;
          case 4u:
          case 5u:
          case 6u:
            goto LABEL_61;
        }
        v18 = (unsigned __int8)v8 - 7;
        if ( (unsigned __int8)v8 == 7 )
          goto LABEL_52;
      }
      if ( v18 != 1 )
      {
LABEL_20:
        if ( v9 )
        {
          v15 = v9[7];
          goto LABEL_69;
        }
        goto LABEL_68;
      }
      goto LABEL_61;
    }
LABEL_67:
    v5 = -1;
    goto LABEL_68;
  }
LABEL_15:
  v11 = v10 - 126;
  if ( !v11 )
    goto LABEL_67;
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( (unsigned int)(v14 - 1) < 2 )
        {
          v15 = 0;
          goto LABEL_69;
        }
        goto LABEL_20;
      }
      v15 = 16;
LABEL_62:
      v5 = -1;
      goto LABEL_69;
    }
LABEL_61:
    v15 = 0;
    goto LABEL_62;
  }
LABEL_68:
  v15 = 4096;
LABEL_69:
  if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
    goto LABEL_76;
  v20 = (unsigned __int8)v8 - 192;
  if ( v20 )
  {
    v21 = v20 - 2;
    if ( !v21 || (v22 = v21 - 2) == 0 || (unsigned int)(v22 - 2) <= 1 )
    {
      v15 = 0;
      v5 = 0;
      goto LABEL_78;
    }
LABEL_76:
    if ( !v15 )
      goto LABEL_78;
    goto LABEL_77;
  }
  v15 = 4096;
  v5 = -(*(_BYTE *)(a1 + 9) != 0);
LABEL_77:
  if ( v7[13] < 0x28u )
  {
LABEL_79:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_78:
  if ( v7[14] < v15 )
    goto LABEL_79;
  if ( v9 )
  {
    v23 = *(_BYTE *)(a2 + 2);
    v5 = v9[13];
    if ( v23 == 40 )
      v24 = *(_DWORD *)(a2 + 24);
    else
      v24 = *(_DWORD *)(a2 + 12);
    if ( (v24 & 1) != 0 )
    {
      if ( (unsigned int)(v5 - 1) > 0xFFFFFFFD )
        goto LABEL_102;
LABEL_52:
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    if ( v5 )
      goto LABEL_52;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 || v5 == -1 )
      goto LABEL_102;
    v23 = *(_BYTE *)(a2 + 2);
    if ( v23 == 40 )
      v26 = *(_DWORD *)(a2 + 24);
    else
      v26 = *(_DWORD *)(a2 + 12);
    if ( (v26 & 1) != 0 )
    {
      v5 = -1;
      goto LABEL_102;
    }
  }
  if ( v23 == 40 )
    v25 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v25 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v25 < *(_DWORD *)(a1 + 224) && (v27 = *(_QWORD *)(a1 + 8LL * v25 + 1672)) != 0 )
    v5 = *(_DWORD *)(v27 + 16);
  else
    v5 = 0;
LABEL_102:
  if ( v15 )
  {
    sub_140006100(a1, v15);
    if ( !v32 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    if ( (v15 & 3) != 0 )
    {
      sub_140032C80(v32, 0LL, v15);
    }
    else if ( v15 >> 2 )
    {
      sub_140032C80(v32, 0LL, 4LL * (v15 >> 2));
    }
  }
  *(_BYTE *)(v4 + 4225) = *(_BYTE *)(v4 + 4225) & 0xFD | (v15 != 0 ? 2 : 0) | 1;
  sub_1400042C0(a1, a2);
  v28 = v7[12];
  v29 = v7[11];
  *(_QWORD *)(v4 + 4120) = 0LL;
  *(_BYTE *)(v4 + 4096) = 10;
  *(_DWORD *)(v4 + 4100) = v5;
  *(_DWORD *)(v4 + 4136) = v29;
  *(_DWORD *)(v4 + 4140) = v28;
  if ( v9 )
  {
    *(_DWORD *)(v4 + 4136) = v9[4];
    *(_DWORD *)(v4 + 4140) = v9[5];
    *(_DWORD *)(v4 + 4144) = v9[9];
    *(_DWORD *)(v4 + 4148) = v9[10];
    *(_DWORD *)(v4 + 4152) = v9[11];
    *(_DWORD *)(v4 + 4156) = v9[12];
  }
  v30 = *(_BYTE *)(v4 + 4225) & 0xFB | (v15 != 0 ? 4 : 0);
  *(_QWORD *)(v4 + 4192) = sub_140011210;
  *(_BYTE *)(v4 + 4225) = v30;
  *(_QWORD *)(v4 + 4160) = v32;
  *(_QWORD *)(v4 + 4168) = 0LL;
  result = 0LL;
  *(_DWORD *)(v4 + 4208) = v15;
  return result;
}
