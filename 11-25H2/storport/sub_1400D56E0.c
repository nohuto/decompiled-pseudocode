/*
 * XREFs of sub_1400D56E0 @ 0x1400D56E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400D56E0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  bool v22; // zf
  int v23; // ecx
  unsigned int v24; // edx
  bool v25; // zf
  const EVENT_DESCRIPTOR *v26; // rdx
  unsigned __int64 v27; // rdx
  char v28; // r14
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char v31; // r11
  char v32; // r12
  char v33; // r15
  char *v34; // rdi
  char v35; // r13
  unsigned int v36; // ebp
  unsigned __int64 v37; // rsi
  __int64 v38; // r8
  int v39; // ecx
  char v40; // cl
  char v41; // r8
  _BYTE *v42; // rax
  unsigned int v43; // eax
  char v44; // al
  __int64 v45; // [rsp+60h] [rbp-68h]
  unsigned int v46; // [rsp+68h] [rbp-60h]
  GUID v47; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v5 = *a2;
  v7 = *(_QWORD *)(*a2 + 4184);
  v8 = *(_QWORD *)(*a2 + 4224);
  v45 = v7;
  if ( a3 )
  {
    v9 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    v5 = *a2;
    v9 = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v9;
  v10 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 2 )
      {
        v11 = v10 >> 1;
        if ( (unsigned __int8)v11 != 128
          && (unsigned __int8)v11 != 129
          && (unsigned __int8)v11 != 130
          && (unsigned __int8)v11 != 131
          && (unsigned __int8)v11 != 132 )
        {
          v12 = (unsigned __int8)v11 - 133;
          if ( (unsigned __int8)v11 != 133 )
          {
LABEL_96:
            if ( v12 == 1 )
              goto LABEL_97;
          }
        }
      }
LABEL_105:
      v18 = -1073741435;
      goto LABEL_29;
    }
    v13 = v10 >> 1;
    if ( (unsigned __int8)v13 > 0x80u )
    {
      if ( (unsigned __int8)v13 == 129 )
        goto LABEL_28;
      v17 = (unsigned __int8)v13 - 130;
      if ( (unsigned __int8)v13 != 130 )
        goto LABEL_85;
    }
    else
    {
      if ( (unsigned __int8)v13 == 128 )
        goto LABEL_28;
      if ( (unsigned __int8)v13 <= 0x11u )
      {
        if ( (unsigned __int8)v13 != 17 )
        {
          if ( (unsigned __int8)v13 <= 9u )
          {
            if ( (unsigned __int8)v13 == 9
              || !(_BYTE)v13
              || (unsigned __int8)v13 == 1
              || (unsigned __int8)v13 == 2
              || (unsigned __int8)v13 == 3 )
            {
              goto LABEL_28;
            }
            v15 = (unsigned __int8)v13 - 5;
            v14 = (unsigned __int8)v13 == 5;
LABEL_25:
            if ( v14 )
              goto LABEL_28;
            v16 = v15 - 1;
            if ( !v16 )
              goto LABEL_28;
            v17 = v16 - 1;
            if ( !v17 )
              goto LABEL_28;
LABEL_85:
            v25 = v17 == 1;
LABEL_104:
            if ( !v25 )
              goto LABEL_105;
LABEL_28:
            v18 = -1073741808;
            goto LABEL_29;
          }
          if ( (unsigned __int8)v13 == 10 )
            goto LABEL_28;
          if ( (unsigned __int8)v13 != 11 )
          {
            if ( (unsigned __int8)v13 == 12
              || (unsigned __int8)v13 == 13
              || (unsigned __int8)v13 == 14
              || (unsigned __int8)v13 == 15 )
            {
              goto LABEL_28;
            }
            if ( (unsigned __int8)v13 != 16 )
              goto LABEL_105;
          }
        }
        v18 = -2147483210;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v13 <= 0x1Au )
      {
        switch ( (unsigned __int8)v13 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_57;
          case 0x14u:
            v18 = -1073741800;
            goto LABEL_29;
          case 0x15u:
            goto LABEL_105;
          case 0x16u:
            goto LABEL_57;
        }
        v23 = (unsigned __int8)v13 - 24;
        v22 = (unsigned __int8)v13 == 24;
        goto LABEL_55;
      }
      if ( (unsigned __int8)v13 == 27 )
      {
        v18 = -1073741637;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v13 == 28 )
        goto LABEL_28;
      if ( (unsigned __int8)v13 != 30 )
      {
        v15 = (unsigned __int8)v13 - 31;
        v14 = (unsigned __int8)v13 == 31;
        goto LABEL_25;
      }
    }
LABEL_97:
    v18 = -1073741790;
    goto LABEL_29;
  }
  v24 = v10 >> 1;
  if ( (unsigned __int8)v24 > 0x80u )
  {
    if ( (unsigned __int8)v24 == 129 )
      goto LABEL_28;
    v17 = (unsigned __int8)v24 - 130;
    if ( (unsigned __int8)v24 != 130 )
      goto LABEL_85;
    v18 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v24 == 128 )
      goto LABEL_28;
    if ( (unsigned __int8)v24 <= 0xEu )
    {
      if ( (unsigned __int8)v24 == 14 )
        goto LABEL_28;
      if ( (unsigned __int8)v24 > 7u )
      {
        if ( (unsigned __int8)v24 != 8 && (unsigned __int8)v24 != 9 && (unsigned __int8)v24 != 10 )
        {
          if ( (unsigned __int8)v24 == 11 )
            goto LABEL_28;
          v17 = (unsigned __int8)v24 - 12;
          if ( (unsigned __int8)v24 == 12 )
          {
            v18 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_85;
        }
      }
      else if ( (unsigned __int8)v24 != 7 )
      {
        if ( !(_BYTE)v24 )
        {
          v18 = 0;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v24 == 1 || (unsigned __int8)v24 == 2 )
          goto LABEL_28;
        if ( (unsigned __int8)v24 == 3 || (unsigned __int8)v24 == 4 )
          goto LABEL_105;
        v23 = (unsigned __int8)v24 - 5;
        v22 = (unsigned __int8)v24 == 5;
LABEL_55:
        if ( !v22 && v23 != 1 )
          goto LABEL_105;
        goto LABEL_57;
      }
LABEL_87:
      v18 = -1073741248;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v24 <= 0x16u )
    {
      if ( (unsigned __int8)v24 == 22
        || (unsigned __int8)v24 == 15
        || (unsigned __int8)v24 == 16
        || (unsigned __int8)v24 == 17
        || (unsigned __int8)v24 == 18
        || (unsigned __int8)v24 == 19 )
      {
        goto LABEL_28;
      }
      v12 = (unsigned __int8)v24 - 20;
      if ( (unsigned __int8)v24 != 20 )
        goto LABEL_96;
LABEL_57:
      v18 = -1073741436;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v24 == 24 )
      goto LABEL_28;
    if ( (unsigned __int8)v24 != 25 && (unsigned __int8)v24 != 26 )
    {
      if ( (unsigned __int8)v24 != 27 )
      {
        if ( (unsigned __int8)v24 == 28 )
          goto LABEL_105;
        v25 = (unsigned __int8)v24 == 30;
        goto LABEL_104;
      }
      goto LABEL_87;
    }
    v18 = -1073741643;
  }
LABEL_29:
  *(_DWORD *)(v7 + 48) = v18;
  *(_QWORD *)(v7 + 56) = 0LL;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  sub_140122C20(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 152));
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(v7 + 141) = -84;
  if ( v14 )
    goto LABEL_163;
  v47 = 0LL;
  IoGetActivityIdIrp(v7, &v47);
  v20 = *(_QWORD *)(v7 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_163;
    v26 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_162;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_163;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v21 = *(int **)(v7 + 56);
        if ( v21 )
          v3 = *v21;
        sub_140056AB0(v19, v20, &v47, v7, v3, *(_DWORD *)(v7 + 48));
      }
      goto LABEL_163;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_163;
    v26 = &stru_140149FE8;
LABEL_162:
    sub_140052F3C(v19, v26, &v47, v7, *(_DWORD *)(v7 + 48));
    goto LABEL_163;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_163;
  v27 = *(_QWORD *)(v20 + 8);
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v27 + 2) != 40 )
  {
    v40 = *(_BYTE *)(v27 + 72);
    v29 = *(_BYTE **)(v27 + 32);
    v30 = *(_BYTE *)(v27 + 11);
    v28 = *(_BYTE *)(v27 + 4);
    if ( *(_BYTE *)(v27 + 2) )
      goto LABEL_163;
LABEL_141:
    LOBYTE(v19) = v40 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_163;
    v41 = *(_BYTE *)(v27 + 3);
    if ( v41 == 1 || !v29 || !v30 )
      goto LABEL_158;
    LOBYTE(v27) = 0;
    v19 = (unsigned __int64)&v29[v30];
    v42 = v29 + 8;
    if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v42 > v19 )
        goto LABEL_156;
      v32 = v29[2];
      v31 = v29[1] & 0xF;
      v33 = v29[3];
    }
    else
    {
      if ( (unsigned __int64)v42 > v19 )
        goto LABEL_156;
      v31 = v29[2] & 0xF;
      v43 = v30;
      if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
        v43 = (unsigned __int8)v29[7] + 8;
      v19 = (unsigned __int64)(v29 + 13);
      v27 = (unsigned __int64)&v29[v43];
      if ( (unsigned __int64)(v29 + 13) <= v27 )
        v32 = v29[12];
      if ( (unsigned __int64)(v29 + 14) <= v27 )
        v33 = *(_BYTE *)v19;
    }
    LOBYTE(v27) = 1;
LABEL_156:
    if ( (_BYTE)v27 )
    {
      LOBYTE(v3) = v32;
      v44 = v33;
LABEL_159:
      sub_140052E64(v19, v27, &v47, v7, *(_DWORD *)(v7 + 48), v41, v28, v31, v3, v44, v7);
      goto LABEL_163;
    }
LABEL_158:
    v31 = 0;
    v44 = 0;
    goto LABEL_159;
  }
  v34 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v27 + 20) )
    goto LABEL_163;
  v36 = 0;
  v46 = *(_DWORD *)(v27 + 56);
  if ( !v46 )
    goto LABEL_138;
  while ( 1 )
  {
    v19 = *(unsigned int *)(v27 + 4LL * v36 + 120);
    if ( (unsigned int)v19 >= 0x80 )
    {
      v37 = *(unsigned int *)(v27 + 16);
      if ( (unsigned int)v19 < (unsigned int)v37 )
        break;
    }
LABEL_131:
    if ( ++v36 >= v46 )
      goto LABEL_137;
  }
  v38 = (unsigned int)v19;
  v39 = *(_DWORD *)(v19 + v27) - 64;
  if ( v39 )
  {
    v19 = (unsigned int)(v39 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 == 1 )
      {
        v19 = v38 + 40;
        if ( v38 + 40 <= v37 )
        {
          if ( *(_DWORD *)(v38 + v27 + 12) )
            v34 = (char *)(v38 + v27 + 32);
          v29 = *(_BYTE **)(v38 + v27 + 24);
          goto LABEL_136;
        }
      }
    }
    else
    {
      v19 = v38 + 56;
      if ( v38 + 56 <= v37 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v38 + v27 + 10) )
          v34 = (char *)(v38 + v27 + 24);
        v28 = *(_BYTE *)(v38 + v27 + 8);
        v29 = *(_BYTE **)(v38 + v27 + 16);
        v30 = *(_BYTE *)(v38 + v27 + 9);
      }
    }
    goto LABEL_130;
  }
  v19 = v38 + 40;
  if ( v38 + 40 > v37 )
  {
LABEL_130:
    if ( v35 )
      goto LABEL_137;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(v38 + v27 + 10) )
    v34 = (char *)(v38 + v27 + 24);
  v29 = *(_BYTE **)(v38 + v27 + 16);
LABEL_136:
  v30 = *(_BYTE *)(v38 + v27 + 9);
  v28 = *(_BYTE *)(v38 + v27 + 8);
LABEL_137:
  v7 = v45;
LABEL_138:
  if ( v34 )
  {
    v40 = *v34;
    goto LABEL_141;
  }
LABEL_163:
  IofCompleteRequest((PIRP)v7, 1);
}
