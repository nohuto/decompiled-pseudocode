/*
 * XREFs of sub_140011670 @ 0x140011670
 * Callers:
 *     sub_140001D70 @ 0x140001D70 (sub_140001D70.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_14000D6D0 @ 0x14000D6D0 (sub_14000D6D0.c)
 *     sub_1400209C8 @ 0x1400209C8 (sub_1400209C8.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140011670(__int64 a1, __int64 a2)
{
  char v2; // r10
  _DWORD *v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // r11
  unsigned int v8; // eax
  bool v9; // dl
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rsi
  _DWORD *v13; // r12
  __int64 v14; // rcx
  unsigned int v16; // esi
  bool v17; // al
  bool v18; // cf
  int v19; // r13d
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // [rsp+88h] [rbp-1h]
  char v25; // [rsp+F0h] [rbp+67h]

  v2 = *(_BYTE *)(a2 + 2);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 208);
  v7 = *(_QWORD *)(a1 + 1560);
  if ( v6 > 0x200000 )
    v6 = 0x200000;
  v8 = *(_DWORD *)(a1 + 32);
  v9 = 1;
  if ( v8 && v6 >= v8 )
    v6 = *(_DWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 52);
  if ( v10 && v10 < v6 )
    v6 = *(_DWORD *)(a1 + 52);
  v24 = 0LL;
  if ( v2 == 40 )
    v11 = *(_QWORD *)(a2 + 64);
  else
    v11 = *(_QWORD *)(a2 + 24);
  v12 = *(unsigned __int8 *)(v11 + 44);
  v13 = (_DWORD *)(v11 + 28);
  v25 = v12;
  if ( v13[3] == 4 )
  {
    if ( (unsigned __int8)v12 < 0xC0u )
    {
      if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
      {
LABEL_72:
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
LABEL_76:
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v5 = v13;
  }
  v14 = *(_QWORD *)(a1 + 4232);
  if ( v14 && (*(_DWORD *)(v14 + 4 * v12) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      goto LABEL_24;
    goto LABEL_25;
  }
  if ( v5 && (v5[11] & 0x800000) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
LABEL_24:
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
LABEL_25:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002690LL;
  }
  switch ( (int)v12 )
  {
    case 0:
      if ( *(_WORD *)(a1 + 186) < 2u )
        goto LABEL_25;
      goto LABEL_28;
    case 1:
      v16 = v13[7];
      v9 = v16 >= 0x40;
      goto LABEL_41;
    case 2:
      v16 = 512;
      goto LABEL_53;
    case 3:
    case 9:
      v16 = 512;
      goto LABEL_53;
    case 4:
      v16 = 4096;
      goto LABEL_53;
    case 5:
      v16 = 4096;
      v17 = (*(_BYTE *)(v7 + 261) & 2) != 0;
      goto LABEL_52;
    case 6:
      v16 = 564;
      goto LABEL_53;
    case 7:
    case 8:
      v16 = v13[7];
      v17 = (*(_BYTE *)(v7 + 261) & 8) != 0;
      v18 = v16 < 0x200;
      goto LABEL_51;
    case 13:
      v16 = v13[7];
      v9 = v16 >= 0x200;
      v17 = (*(_BYTE *)(v7 + 261) & 0x10) != 0;
      if ( (*(_BYTE *)(v7 + 261) & 0x10) != 0 )
        v24 = (unsigned __int64)*(unsigned int *)(v7 + 352) << 16;
      goto LABEL_52;
    case 18:
LABEL_28:
      v16 = 1024;
      v17 = (*(_BYTE *)(v7 + 261) & 0x20) != 0;
      v18 = v13[7] < 0x400u;
      goto LABEL_51;
    case 19:
      v16 = v13[7];
      v17 = (*(_BYTE *)(v7 + 261) & 0x20) != 0;
      v18 = v16 < 0x1000;
LABEL_51:
      v9 = !v18;
LABEL_52:
      if ( v17 )
        goto LABEL_53;
      goto LABEL_25;
    case 128:
      v16 = 64;
      goto LABEL_53;
    case 129:
      v16 = 512;
LABEL_53:
      if ( v13[7] < v16 )
        goto LABEL_54;
      goto LABEL_41;
    default:
      v16 = v13[7];
LABEL_41:
      if ( !v16 || !v9 )
      {
LABEL_54:
        if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
          StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        *(_BYTE *)(a2 + 3) = 21;
        return 3238002694LL;
      }
      switch ( v25 )
      {
        case 0:
          v23 = v14;
          return sub_1400209C8(v13, v23, v16, a2);
        case 5:
          v23 = *(_QWORD *)(a1 + 3712);
          return sub_1400209C8(v13, v23, v16, a2);
        case 18:
          v23 = *(_QWORD *)(a1 + 4248);
          return sub_1400209C8(v13, v23, v16, a2);
      }
      if ( v5 )
      {
        v19 = v5[13];
        if ( v2 == 40 )
          v20 = *(_DWORD *)(a2 + 24);
        else
          v20 = *(_DWORD *)(a2 + 12);
        if ( (v20 & 1) != 0 )
        {
          if ( (unsigned int)(v19 - 1) <= 0xFFFFFFFD )
          {
            if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
              goto LABEL_72;
            goto LABEL_76;
          }
        }
        else if ( v19 )
        {
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            goto LABEL_72;
          goto LABEL_76;
        }
      }
      if ( (*(_BYTE *)(v7 + 261) & 4) != 0 )
      {
        if ( !v5 )
        {
          v21 = ((unsigned __int64)(unsigned int)v13[9] << 32) | (unsigned int)v13[5];
          goto LABEL_70;
        }
        v21 = *(_QWORD *)(v13 + 9);
      }
      else
      {
        v21 = 0LL;
        if ( !v5 )
          goto LABEL_70;
      }
      if ( 4 * (*((unsigned __int16 *)v5 + 9) | ((unsigned __int64)(unsigned __int16)v5[5] << 16)) + 4 > v16 )
      {
        if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
          goto LABEL_72;
        goto LABEL_76;
      }
LABEL_70:
      if ( v24 )
      {
        if ( v21 >= v24 )
          goto LABEL_72;
        if ( v16 > (int)v24 - (int)v21 )
          v16 = v24 - v21;
      }
      v22 = v6;
      if ( v16 <= v6 )
        v22 = v16;
      sub_140006100(a1, v22);
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
  }
}
