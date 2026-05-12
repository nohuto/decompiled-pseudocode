/*
 * XREFs of sub_1400FC9A0 @ 0x1400FC9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400FC9A0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // ecx
  unsigned int v20; // edx
  bool v21; // zf
  char v22; // al
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  __int64 v28; // rsi
  __int64 v29; // r9
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  int *v32; // rax
  const EVENT_DESCRIPTOR *v33; // rdx
  __int64 v34; // rdx
  char v35; // r15
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r11
  char v39; // r13
  char v40; // r12
  char *v41; // rsi
  unsigned int v42; // r14d
  unsigned __int64 v43; // rbp
  __int64 v44; // r8
  int v45; // ecx
  char v46; // cl
  char v47; // r8
  _BYTE *v48; // rax
  unsigned int v49; // eax
  unsigned __int64 v50; // r8
  char v51; // al
  char v52; // [rsp+60h] [rbp-58h]
  unsigned int v53; // [rsp+64h] [rbp-54h]
  GUID v54; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  if ( a3 )
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
  v6 = *a2;
  v7 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((v7 >> 9) & 7) != 0 )
  {
    if ( ((v7 >> 9) & 7) != 1 )
    {
      if ( ((v7 >> 9) & 7) == 2 )
      {
        v8 = v7 >> 1;
        if ( (unsigned __int8)v8 != 128
          && (unsigned __int8)v8 != 129
          && (unsigned __int8)v8 != 130
          && (unsigned __int8)v8 != 131
          && (unsigned __int8)v8 != 132 )
        {
          v9 = (unsigned __int8)v8 - 133;
          if ( (unsigned __int8)v8 != 133 )
          {
LABEL_87:
            if ( v9 == 1 )
              goto LABEL_88;
          }
        }
      }
LABEL_96:
      v15 = -1073741435;
      goto LABEL_28;
    }
    v10 = v7 >> 1;
    if ( (unsigned __int8)v10 > 0x80u )
    {
      if ( (unsigned __int8)v10 == 129 )
        goto LABEL_27;
      v14 = (unsigned __int8)v10 - 130;
      if ( (unsigned __int8)v10 != 130 )
        goto LABEL_76;
    }
    else
    {
      if ( (unsigned __int8)v10 == 128 )
        goto LABEL_27;
      if ( (unsigned __int8)v10 <= 0x11u )
      {
        if ( (unsigned __int8)v10 != 17 )
        {
          if ( (unsigned __int8)v10 <= 9u )
          {
            if ( (unsigned __int8)v10 == 9
              || !(_BYTE)v10
              || (unsigned __int8)v10 == 1
              || (unsigned __int8)v10 == 2
              || (unsigned __int8)v10 == 3 )
            {
              goto LABEL_27;
            }
            v12 = (unsigned __int8)v10 - 5;
            v11 = (unsigned __int8)v10 == 5;
LABEL_24:
            if ( v11 )
              goto LABEL_27;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_27;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_27;
LABEL_76:
            v21 = v14 == 1;
LABEL_95:
            if ( !v21 )
              goto LABEL_96;
LABEL_27:
            v15 = -1073741808;
            goto LABEL_28;
          }
          if ( (unsigned __int8)v10 == 10 )
            goto LABEL_27;
          if ( (unsigned __int8)v10 != 11 )
          {
            if ( (unsigned __int8)v10 == 12
              || (unsigned __int8)v10 == 13
              || (unsigned __int8)v10 == 14
              || (unsigned __int8)v10 == 15 )
            {
              goto LABEL_27;
            }
            if ( (unsigned __int8)v10 != 16 )
              goto LABEL_96;
          }
        }
        v15 = -2147483210;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v10 <= 0x1Au )
      {
        switch ( (unsigned __int8)v10 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_48;
          case 0x14u:
            v15 = -1073741800;
            goto LABEL_28;
          case 0x15u:
            goto LABEL_96;
          case 0x16u:
            goto LABEL_48;
        }
        v19 = (unsigned __int8)v10 - 24;
        v18 = (unsigned __int8)v10 == 24;
        goto LABEL_46;
      }
      if ( (unsigned __int8)v10 == 27 )
      {
        v15 = -1073741637;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v10 == 28 )
        goto LABEL_27;
      if ( (unsigned __int8)v10 != 30 )
      {
        v12 = (unsigned __int8)v10 - 31;
        v11 = (unsigned __int8)v10 == 31;
        goto LABEL_24;
      }
    }
LABEL_88:
    v15 = -1073741790;
    goto LABEL_28;
  }
  v20 = v7 >> 1;
  if ( (unsigned __int8)v20 > 0x80u )
  {
    if ( (unsigned __int8)v20 == 129 )
      goto LABEL_27;
    v14 = (unsigned __int8)v20 - 130;
    if ( (unsigned __int8)v20 != 130 )
      goto LABEL_76;
    v15 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v20 == 128 )
      goto LABEL_27;
    if ( (unsigned __int8)v20 <= 0xEu )
    {
      if ( (unsigned __int8)v20 == 14 )
        goto LABEL_27;
      if ( (unsigned __int8)v20 > 7u )
      {
        if ( (unsigned __int8)v20 != 8 && (unsigned __int8)v20 != 9 && (unsigned __int8)v20 != 10 )
        {
          if ( (unsigned __int8)v20 == 11 )
            goto LABEL_27;
          v14 = (unsigned __int8)v20 - 12;
          if ( (unsigned __int8)v20 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_28;
          }
          goto LABEL_76;
        }
      }
      else if ( (unsigned __int8)v20 != 7 )
      {
        if ( !(_BYTE)v20 )
        {
          v15 = 0;
          goto LABEL_28;
        }
        if ( (unsigned __int8)v20 == 1 || (unsigned __int8)v20 == 2 )
          goto LABEL_27;
        if ( (unsigned __int8)v20 == 3 || (unsigned __int8)v20 == 4 )
          goto LABEL_96;
        v19 = (unsigned __int8)v20 - 5;
        v18 = (unsigned __int8)v20 == 5;
LABEL_46:
        if ( !v18 && v19 != 1 )
          goto LABEL_96;
        goto LABEL_48;
      }
LABEL_78:
      v15 = -1073741248;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v20 <= 0x16u )
    {
      if ( (unsigned __int8)v20 == 22
        || (unsigned __int8)v20 == 15
        || (unsigned __int8)v20 == 16
        || (unsigned __int8)v20 == 17
        || (unsigned __int8)v20 == 18
        || (unsigned __int8)v20 == 19 )
      {
        goto LABEL_27;
      }
      v9 = (unsigned __int8)v20 - 20;
      if ( (unsigned __int8)v20 != 20 )
        goto LABEL_87;
LABEL_48:
      v15 = -1073741436;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v20 == 24 )
      goto LABEL_27;
    if ( (unsigned __int8)v20 != 25 && (unsigned __int8)v20 != 26 )
    {
      if ( (unsigned __int8)v20 != 27 )
      {
        if ( (unsigned __int8)v20 == 28 )
          goto LABEL_96;
        v21 = (unsigned __int8)v20 == 30;
        goto LABEL_95;
      }
      goto LABEL_78;
    }
    v15 = -1073741643;
  }
LABEL_28:
  v16 = *(_QWORD *)(v6 + 4184);
  if ( v15 < 0 )
  {
    *(_DWORD *)(v16 + 48) = v15;
    v17 = 0LL;
  }
  else
  {
    *(_DWORD *)(v16 + 48) = 0;
    v17 = *(unsigned int *)(*a2 + 4248);
  }
  *(_QWORD *)(v16 + 56) = v17;
  v22 = sub_140007B40(v15);
  if ( *(char *)(v25 + 3) < 0 )
    v22 |= 0x80u;
  *(_BYTE *)(v25 + 3) = v22;
  if ( v26 )
  {
    *(_DWORD *)(v24 + 96) = *(_DWORD *)v26;
    *(_WORD *)(v24 + 86) = *(_WORD *)(v26 + 14);
  }
  v28 = *(_QWORD *)(*(_QWORD *)v27 + 4216LL);
  v29 = *(_QWORD *)(v28 + 16);
  if ( (unsigned __int8)*(_DWORD *)(v24 + 16) == 9 && (unsigned __int8)*(_DWORD *)(v24 + 56) == 6 )
  {
    if ( v23 >= 0 )
      *(_QWORD *)(v29 + 136) = ((unsigned __int64)*(unsigned int *)(v24 + 60) << 19) ^ (*(_QWORD *)(v29 + 136) ^ ((unsigned __int64)*(unsigned int *)(v24 + 60) << 19)) & 0xFFFFFFFFFFF7FFFFuLL;
    *(_QWORD *)(v29 + 1096) = *(unsigned int *)(v24 + 60) ^ (*(_QWORD *)(v29 + 1096) ^ *(unsigned int *)(v24 + 60)) & 0xFFFFFFFFFFFFFFFEuLL | 2;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v27 + 4256LL), 3u);
  sub_140122C20(a1, v27);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v28 + 120));
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(v16 + 141) = -84;
  if ( v11 )
    goto LABEL_173;
  v54 = 0LL;
  IoGetActivityIdIrp(v16, &v54);
  v31 = *(_QWORD *)(v16 + 184);
  if ( *(_BYTE *)v31 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_173;
    v33 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_172;
  }
  if ( *(_BYTE *)v31 != 15 )
  {
    if ( *(_BYTE *)v31 != 27 )
      goto LABEL_173;
    if ( *(_BYTE *)(v31 + 1) == 7 && !*(_DWORD *)(v31 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v32 = *(int **)(v16 + 56);
        if ( v32 )
          v3 = *v32;
        sub_140056AB0(v30, v31, &v54, v16, v3, *(_DWORD *)(v16 + 48));
      }
      goto LABEL_173;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_173;
    v33 = &stru_140149FE8;
LABEL_172:
    sub_140052F3C(v30, v33, &v54, v16, *(_DWORD *)(v16 + 48));
    goto LABEL_173;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_173;
  v34 = *(_QWORD *)(v31 + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_BYTE *)(v34 + 2) != 40 )
  {
    v46 = *(_BYTE *)(v34 + 72);
    v36 = *(_BYTE **)(v34 + 32);
    v37 = *(_BYTE *)(v34 + 11);
    v35 = *(_BYTE *)(v34 + 4);
    if ( *(_BYTE *)(v34 + 2) )
      goto LABEL_173;
LABEL_151:
    LOBYTE(v30) = v46 - 8;
    if ( (v30 & 0x5D) != 0 )
      goto LABEL_173;
    if ( *(_BYTE *)(v34 + 3) == 1 || !v36 || !v37 )
      goto LABEL_168;
    v47 = 0;
    v30 = (unsigned __int64)&v36[v37];
    v48 = v36 + 8;
    if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v48 > v30 )
        goto LABEL_166;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      if ( (unsigned __int64)v48 > v30 )
        goto LABEL_166;
      v38 = v36[2] & 0xF;
      v49 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v49 = (unsigned __int8)v36[7] + 8;
      v30 = (unsigned __int64)(v36 + 13);
      v50 = (unsigned __int64)&v36[v49];
      if ( (unsigned __int64)(v36 + 13) <= v50 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) <= v50 )
        v40 = *(_BYTE *)v30;
    }
    v47 = 1;
LABEL_166:
    if ( v47 )
    {
      LOBYTE(v3) = v39;
      v51 = v40;
LABEL_169:
      sub_140052E64(v30, v34, &v54, v16, *(_DWORD *)(v16 + 48), *(_BYTE *)(v34 + 3), v35, v38, v3, v51, v16);
      goto LABEL_173;
    }
LABEL_168:
    v38 = 0;
    v51 = 0;
    goto LABEL_169;
  }
  v41 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v34 + 20) )
    goto LABEL_173;
  v42 = 0;
  v53 = *(_DWORD *)(v34 + 56);
  if ( !v53 )
    goto LABEL_148;
  while ( 1 )
  {
    v30 = *(unsigned int *)(v34 + 4LL * v42 + 120);
    if ( (unsigned int)v30 >= 0x80 )
    {
      v43 = *(unsigned int *)(v34 + 16);
      if ( (unsigned int)v30 < (unsigned int)v43 )
        break;
    }
LABEL_142:
    if ( ++v42 >= v53 )
      goto LABEL_148;
  }
  v44 = (unsigned int)v30;
  v45 = *(_DWORD *)(v30 + v34) - 64;
  if ( v45 )
  {
    v30 = (unsigned int)(v45 - 1);
    if ( (_DWORD)v30 )
    {
      if ( (_DWORD)v30 == 1 )
      {
        v30 = v44 + 40;
        if ( v44 + 40 <= v43 )
        {
          if ( *(_DWORD *)(v44 + v34 + 12) )
            v41 = (char *)(v44 + v34 + 32);
          v36 = *(_BYTE **)(v44 + v34 + 24);
          goto LABEL_147;
        }
      }
    }
    else
    {
      v30 = v44 + 56;
      if ( v44 + 56 <= v43 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v44 + v34 + 10) )
          v41 = (char *)(v44 + v34 + 24);
        v35 = *(_BYTE *)(v44 + v34 + 8);
        v36 = *(_BYTE **)(v44 + v34 + 16);
        v37 = *(_BYTE *)(v44 + v34 + 9);
      }
    }
    goto LABEL_141;
  }
  v30 = v44 + 40;
  if ( v44 + 40 > v43 )
  {
LABEL_141:
    if ( v52 )
      goto LABEL_148;
    goto LABEL_142;
  }
  if ( *(_BYTE *)(v44 + v34 + 10) )
    v41 = (char *)(v44 + v34 + 24);
  v36 = *(_BYTE **)(v44 + v34 + 16);
LABEL_147:
  v37 = *(_BYTE *)(v44 + v34 + 9);
  v35 = *(_BYTE *)(v44 + v34 + 8);
LABEL_148:
  if ( v41 )
  {
    v46 = *v41;
    goto LABEL_151;
  }
LABEL_173:
  IofCompleteRequest((PIRP)v16, 1);
}
