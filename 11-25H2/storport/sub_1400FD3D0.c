/*
 * XREFs of sub_1400FD3D0 @ 0x1400FD3D0
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

void __fastcall sub_1400FD3D0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool v17; // zf
  int v18; // ecx
  unsigned int v19; // edx
  bool v20; // zf
  char v21; // al
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  int *v28; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  unsigned __int64 v30; // rdx
  char v31; // r14
  _BYTE *v32; // r8
  unsigned __int8 v33; // r10
  char v34; // r11
  char v35; // r13
  char v36; // r15
  char *v37; // rbx
  unsigned int *v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // rbp
  char v41; // cl
  char v42; // r9
  _BYTE *v43; // rax
  unsigned int v44; // eax
  char v45; // al
  char v46; // [rsp+60h] [rbp-68h]
  int v47; // [rsp+64h] [rbp-64h]
  unsigned int v48; // [rsp+68h] [rbp-60h]
  GUID v49; // [rsp+70h] [rbp-58h] BYREF

  v4 = 0;
  *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
  v5 = *a2;
  v6 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((v6 >> 9) & 7) != 0 )
  {
    if ( ((v6 >> 9) & 7) != 1 )
    {
      if ( ((v6 >> 9) & 7) == 2 )
      {
        v7 = v6 >> 1;
        if ( (unsigned __int8)v7 != 128
          && (unsigned __int8)v7 != 129
          && (unsigned __int8)v7 != 130
          && (unsigned __int8)v7 != 131
          && (unsigned __int8)v7 != 132 )
        {
          v8 = (unsigned __int8)v7 - 133;
          if ( (unsigned __int8)v7 != 133 )
          {
LABEL_85:
            if ( v8 == 1 )
              goto LABEL_86;
          }
        }
      }
LABEL_94:
      v14 = -1073741435;
      goto LABEL_26;
    }
    v9 = v6 >> 1;
    if ( (unsigned __int8)v9 > 0x80u )
    {
      if ( (unsigned __int8)v9 == 129 )
        goto LABEL_25;
      v13 = (unsigned __int8)v9 - 130;
      if ( (unsigned __int8)v9 != 130 )
        goto LABEL_74;
    }
    else
    {
      if ( (unsigned __int8)v9 == 128 )
        goto LABEL_25;
      if ( (unsigned __int8)v9 <= 0x11u )
      {
        if ( (unsigned __int8)v9 != 17 )
        {
          if ( (unsigned __int8)v9 <= 9u )
          {
            if ( (unsigned __int8)v9 == 9
              || !(_BYTE)v9
              || (unsigned __int8)v9 == 1
              || (unsigned __int8)v9 == 2
              || (unsigned __int8)v9 == 3 )
            {
              goto LABEL_25;
            }
            v11 = (unsigned __int8)v9 - 5;
            v10 = (unsigned __int8)v9 == 5;
LABEL_22:
            if ( v10 )
              goto LABEL_25;
            v12 = v11 - 1;
            if ( !v12 )
              goto LABEL_25;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_25;
LABEL_74:
            v20 = v13 == 1;
LABEL_93:
            if ( !v20 )
              goto LABEL_94;
LABEL_25:
            v14 = -1073741808;
            goto LABEL_26;
          }
          if ( (unsigned __int8)v9 == 10 )
            goto LABEL_25;
          if ( (unsigned __int8)v9 != 11 )
          {
            if ( (unsigned __int8)v9 == 12
              || (unsigned __int8)v9 == 13
              || (unsigned __int8)v9 == 14
              || (unsigned __int8)v9 == 15 )
            {
              goto LABEL_25;
            }
            if ( (unsigned __int8)v9 != 16 )
              goto LABEL_94;
          }
        }
        v14 = -2147483210;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v9 <= 0x1Au )
      {
        switch ( (unsigned __int8)v9 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_46;
          case 0x14u:
            v14 = -1073741800;
            goto LABEL_26;
          case 0x15u:
            goto LABEL_94;
          case 0x16u:
            goto LABEL_46;
        }
        v18 = (unsigned __int8)v9 - 24;
        v17 = (unsigned __int8)v9 == 24;
        goto LABEL_44;
      }
      if ( (unsigned __int8)v9 == 27 )
      {
        v14 = -1073741637;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v9 == 28 )
        goto LABEL_25;
      if ( (unsigned __int8)v9 != 30 )
      {
        v11 = (unsigned __int8)v9 - 31;
        v10 = (unsigned __int8)v9 == 31;
        goto LABEL_22;
      }
    }
LABEL_86:
    v14 = -1073741790;
    goto LABEL_26;
  }
  v19 = v6 >> 1;
  if ( (unsigned __int8)v19 > 0x80u )
  {
    if ( (unsigned __int8)v19 == 129 )
      goto LABEL_25;
    v13 = (unsigned __int8)v19 - 130;
    if ( (unsigned __int8)v19 != 130 )
      goto LABEL_74;
    v14 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v19 == 128 )
      goto LABEL_25;
    if ( (unsigned __int8)v19 <= 0xEu )
    {
      if ( (unsigned __int8)v19 == 14 )
        goto LABEL_25;
      if ( (unsigned __int8)v19 > 7u )
      {
        if ( (unsigned __int8)v19 != 8 && (unsigned __int8)v19 != 9 && (unsigned __int8)v19 != 10 )
        {
          if ( (unsigned __int8)v19 == 11 )
            goto LABEL_25;
          v13 = (unsigned __int8)v19 - 12;
          if ( (unsigned __int8)v19 == 12 )
          {
            v14 = -1073740758;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)v19 != 7 )
      {
        if ( !(_BYTE)v19 )
        {
          v14 = 0;
          goto LABEL_26;
        }
        if ( (unsigned __int8)v19 == 1 || (unsigned __int8)v19 == 2 )
          goto LABEL_25;
        if ( (unsigned __int8)v19 == 3 || (unsigned __int8)v19 == 4 )
          goto LABEL_94;
        v18 = (unsigned __int8)v19 - 5;
        v17 = (unsigned __int8)v19 == 5;
LABEL_44:
        if ( !v17 && v18 != 1 )
          goto LABEL_94;
        goto LABEL_46;
      }
LABEL_76:
      v14 = -1073741248;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v19 <= 0x16u )
    {
      if ( (unsigned __int8)v19 == 22
        || (unsigned __int8)v19 == 15
        || (unsigned __int8)v19 == 16
        || (unsigned __int8)v19 == 17
        || (unsigned __int8)v19 == 18
        || (unsigned __int8)v19 == 19 )
      {
        goto LABEL_25;
      }
      v8 = (unsigned __int8)v19 - 20;
      if ( (unsigned __int8)v19 != 20 )
        goto LABEL_85;
LABEL_46:
      v14 = -1073741436;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v19 == 24 )
      goto LABEL_25;
    if ( (unsigned __int8)v19 != 25 && (unsigned __int8)v19 != 26 )
    {
      if ( (unsigned __int8)v19 != 27 )
      {
        if ( (unsigned __int8)v19 == 28 )
          goto LABEL_94;
        v20 = (unsigned __int8)v19 == 30;
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v14 = -1073741643;
  }
LABEL_26:
  v15 = *(_QWORD *)(v5 + 4184);
  if ( v14 < 0 )
  {
    *(_DWORD *)(v15 + 48) = v14;
    v16 = 0LL;
  }
  else
  {
    *(_DWORD *)(v15 + 48) = 0;
    v16 = *(unsigned int *)(*a2 + 4248);
  }
  *(_QWORD *)(v15 + 56) = v16;
  v21 = sub_140007B40(v14);
  v24 = *(_QWORD *)(*(_QWORD *)(v15 + 184) + 8LL);
  if ( *(char *)(v24 + 3) < 0 )
    v21 |= 0x80u;
  *(_BYTE *)(v24 + 3) = v21;
  v25 = *(_QWORD *)(*(_QWORD *)v22 + 4216LL);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v22 + 4256LL), 3u);
  sub_140122C20(v23, v22);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v25 + 120));
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(v15 + 141) = -84;
  if ( v10 )
    goto LABEL_166;
  v49 = 0LL;
  IoGetActivityIdIrp(v15, &v49);
  v27 = *(_QWORD *)(v15 + 184);
  if ( *(_BYTE *)v27 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_166;
    v29 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_165;
  }
  if ( *(_BYTE *)v27 != 15 )
  {
    if ( *(_BYTE *)v27 != 27 )
      goto LABEL_166;
    if ( *(_BYTE *)(v27 + 1) == 7 && !*(_DWORD *)(v27 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v28 = *(int **)(v15 + 56);
        if ( v28 )
          v4 = *v28;
        sub_140056AB0(v26, v27, &v49, v15, v4, *(_DWORD *)(v15 + 48));
      }
      goto LABEL_166;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_166;
    v29 = &stru_140149FE8;
LABEL_165:
    sub_140052F3C(v26, v29, &v49, v15, *(_DWORD *)(v15 + 48));
    goto LABEL_166;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_166;
  v30 = *(_QWORD *)(v27 + 8);
  v31 = 0;
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(v30 + 2) != 40 )
  {
    v41 = *(_BYTE *)(v30 + 72);
    v32 = *(_BYTE **)(v30 + 32);
    v33 = *(_BYTE *)(v30 + 11);
    v31 = *(_BYTE *)(v30 + 4);
    if ( *(_BYTE *)(v30 + 2) )
      goto LABEL_166;
LABEL_144:
    LOBYTE(v26) = v41 - 8;
    if ( (v26 & 0x5D) != 0 )
      goto LABEL_166;
    v42 = *(_BYTE *)(v30 + 3);
    if ( v42 == 1 || !v32 || !v33 )
      goto LABEL_161;
    LOBYTE(v30) = 0;
    v26 = (unsigned __int64)&v32[v33];
    v43 = v32 + 8;
    if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v43 > v26 )
        goto LABEL_159;
      v35 = v32[2];
      v34 = v32[1] & 0xF;
      v36 = v32[3];
    }
    else
    {
      if ( (unsigned __int64)v43 > v26 )
        goto LABEL_159;
      v34 = v32[2] & 0xF;
      v44 = v33;
      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
        v44 = (unsigned __int8)v32[7] + 8;
      v26 = (unsigned __int64)(v32 + 13);
      v30 = (unsigned __int64)&v32[v44];
      if ( (unsigned __int64)(v32 + 13) <= v30 )
        v35 = v32[12];
      if ( (unsigned __int64)(v32 + 14) <= v30 )
        v36 = *(_BYTE *)v26;
    }
    LOBYTE(v30) = 1;
LABEL_159:
    if ( (_BYTE)v30 )
    {
      LOBYTE(v4) = v35;
      v45 = v36;
LABEL_162:
      sub_140052E64(v26, v30, &v49, v15, *(_DWORD *)(v15 + 48), v42, v31, v34, v4, v45, v15);
      goto LABEL_166;
    }
LABEL_161:
    v34 = 0;
    v45 = 0;
    goto LABEL_162;
  }
  v37 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(v30 + 20) )
    goto LABEL_166;
  v26 = 0LL;
  v47 = 0;
  v48 = *(_DWORD *)(v30 + 56);
  if ( !v48 )
    goto LABEL_141;
  v38 = (unsigned int *)(v30 + 120);
  while ( 1 )
  {
    v39 = *v38;
    if ( (unsigned int)v39 >= 0x80 )
    {
      v40 = *(unsigned int *)(v30 + 16);
      if ( (unsigned int)v39 < (unsigned int)v40 )
        break;
    }
LABEL_135:
    v26 = (unsigned int)(v26 + 1);
    ++v38;
    v47 = v26;
    if ( (unsigned int)v26 >= v48 )
      goto LABEL_141;
  }
  if ( *(_DWORD *)(v39 + v30) != 64 )
  {
    v26 = (unsigned int)(*(_DWORD *)(v39 + v30) - 65);
    if ( *(_DWORD *)(v39 + v30) == 65 )
    {
      v26 = v39 + 56;
      if ( v39 + 56 <= v40 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v39 + v30 + 10) )
          v37 = (char *)(v39 + v30 + 24);
        v31 = *(_BYTE *)(v39 + v30 + 8);
        v32 = *(_BYTE **)(v39 + v30 + 16);
        v33 = *(_BYTE *)(v39 + v30 + 9);
      }
    }
    else if ( *(_DWORD *)(v39 + v30) == 66 )
    {
      v26 = v39 + 40;
      if ( v39 + 40 <= v40 )
      {
        if ( *(_DWORD *)(v39 + v30 + 12) )
          v37 = (char *)(v39 + v30 + 32);
        v32 = *(_BYTE **)(v39 + v30 + 24);
        goto LABEL_140;
      }
    }
    goto LABEL_133;
  }
  v26 = v39 + 40;
  if ( v39 + 40 > v40 )
  {
LABEL_133:
    if ( v46 )
      goto LABEL_141;
    LODWORD(v26) = v47;
    goto LABEL_135;
  }
  if ( *(_BYTE *)(v39 + v30 + 10) )
    v37 = (char *)(v39 + v30 + 24);
  v32 = *(_BYTE **)(v39 + v30 + 16);
LABEL_140:
  v33 = *(_BYTE *)(v39 + v30 + 9);
  v31 = *(_BYTE *)(v39 + v30 + 8);
LABEL_141:
  if ( v37 )
  {
    v41 = *v37;
    goto LABEL_144;
  }
LABEL_166:
  IofCompleteRequest((PIRP)v15, 1);
}
