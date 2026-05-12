/*
 * XREFs of sub_14010F610 @ 0x14010F610
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400C93F4 @ 0x1400C93F4 (sub_1400C93F4.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_14010F610(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // r15
  int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  bool v20; // zf
  int v21; // ecx
  unsigned int v22; // edx
  bool v23; // zf
  __int64 v24; // rax
  _DWORD *v25; // rbx
  unsigned __int64 v26; // rbp
  _BYTE *v27; // r15
  char v28; // al
  unsigned int v29; // eax
  unsigned int v30; // r9d
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // r10d
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  int *v39; // rax
  const EVENT_DESCRIPTOR *v40; // rdx
  __int64 v41; // rdx
  char v42; // bp
  _BYTE *v43; // r9
  unsigned __int8 v44; // r10
  char v45; // r11
  char v46; // r13
  char v47; // r12
  char *v48; // rbx
  unsigned int v49; // r15d
  unsigned __int64 v50; // r14
  __int64 v51; // r8
  int v52; // ecx
  char v53; // cl
  char v54; // r8
  _BYTE *v55; // rax
  char *v56; // r12
  unsigned int v57; // eax
  char v58; // al
  __int64 v59; // [rsp+20h] [rbp-E8h]
  __int64 v60; // [rsp+28h] [rbp-E0h]
  __int64 v61; // [rsp+30h] [rbp-D8h]
  __int64 v62; // [rsp+38h] [rbp-D0h]
  __int64 v63; // [rsp+40h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  char v65; // [rsp+A0h] [rbp-68h]
  unsigned int v67; // [rsp+A8h] [rbp-60h]
  GUID v68; // [rsp+B0h] [rbp-58h] BYREF

  v4 = a2;
  v5 = 0;
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
LABEL_85:
            if ( v9 == 1 )
              goto LABEL_86;
          }
        }
      }
LABEL_94:
      v15 = -1073741435;
      goto LABEL_26;
    }
    v10 = v7 >> 1;
    if ( (unsigned __int8)v10 > 0x80u )
    {
      if ( (unsigned __int8)v10 == 129 )
        goto LABEL_25;
      v14 = (unsigned __int8)v10 - 130;
      if ( (unsigned __int8)v10 != 130 )
        goto LABEL_74;
    }
    else
    {
      if ( (unsigned __int8)v10 == 128 )
        goto LABEL_25;
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
              goto LABEL_25;
            }
            v12 = (unsigned __int8)v10 - 5;
            v11 = (unsigned __int8)v10 == 5;
LABEL_22:
            if ( v11 )
              goto LABEL_25;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_25;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_25;
LABEL_74:
            v23 = v14 == 1;
LABEL_93:
            if ( !v23 )
              goto LABEL_94;
LABEL_25:
            v15 = -1073741808;
            goto LABEL_26;
          }
          if ( (unsigned __int8)v10 == 10 )
            goto LABEL_25;
          if ( (unsigned __int8)v10 != 11 )
          {
            if ( (unsigned __int8)v10 == 12
              || (unsigned __int8)v10 == 13
              || (unsigned __int8)v10 == 14
              || (unsigned __int8)v10 == 15 )
            {
              goto LABEL_25;
            }
            if ( (unsigned __int8)v10 != 16 )
              goto LABEL_94;
          }
        }
        v15 = -2147483210;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 <= 0x1Au )
      {
        switch ( (unsigned __int8)v10 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_46;
          case 0x14u:
            v15 = -1073741800;
            goto LABEL_26;
          case 0x15u:
            goto LABEL_94;
          case 0x16u:
            goto LABEL_46;
        }
        v21 = (unsigned __int8)v10 - 24;
        v20 = (unsigned __int8)v10 == 24;
        goto LABEL_44;
      }
      if ( (unsigned __int8)v10 == 27 )
      {
        v15 = -1073741637;
        goto LABEL_26;
      }
      if ( (unsigned __int8)v10 == 28 )
        goto LABEL_25;
      if ( (unsigned __int8)v10 != 30 )
      {
        v12 = (unsigned __int8)v10 - 31;
        v11 = (unsigned __int8)v10 == 31;
        goto LABEL_22;
      }
    }
LABEL_86:
    v15 = -1073741790;
    goto LABEL_26;
  }
  v22 = v7 >> 1;
  if ( (unsigned __int8)v22 > 0x80u )
  {
    if ( (unsigned __int8)v22 == 129 )
      goto LABEL_25;
    v14 = (unsigned __int8)v22 - 130;
    if ( (unsigned __int8)v22 != 130 )
      goto LABEL_74;
    v15 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v22 == 128 )
      goto LABEL_25;
    if ( (unsigned __int8)v22 <= 0xEu )
    {
      if ( (unsigned __int8)v22 == 14 )
        goto LABEL_25;
      if ( (unsigned __int8)v22 > 7u )
      {
        if ( (unsigned __int8)v22 != 8 && (unsigned __int8)v22 != 9 && (unsigned __int8)v22 != 10 )
        {
          if ( (unsigned __int8)v22 == 11 )
            goto LABEL_25;
          v14 = (unsigned __int8)v22 - 12;
          if ( (unsigned __int8)v22 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)v22 != 7 )
      {
        if ( !(_BYTE)v22 )
        {
          v15 = 0;
          goto LABEL_26;
        }
        if ( (unsigned __int8)v22 == 1 || (unsigned __int8)v22 == 2 )
          goto LABEL_25;
        if ( (unsigned __int8)v22 == 3 || (unsigned __int8)v22 == 4 )
          goto LABEL_94;
        v21 = (unsigned __int8)v22 - 5;
        v20 = (unsigned __int8)v22 == 5;
LABEL_44:
        if ( !v20 && v21 != 1 )
          goto LABEL_94;
        goto LABEL_46;
      }
LABEL_76:
      v15 = -1073741248;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v22 <= 0x16u )
    {
      if ( (unsigned __int8)v22 == 22
        || (unsigned __int8)v22 == 15
        || (unsigned __int8)v22 == 16
        || (unsigned __int8)v22 == 17
        || (unsigned __int8)v22 == 18
        || (unsigned __int8)v22 == 19 )
      {
        goto LABEL_25;
      }
      v9 = (unsigned __int8)v22 - 20;
      if ( (unsigned __int8)v22 != 20 )
        goto LABEL_85;
LABEL_46:
      v15 = -1073741436;
      goto LABEL_26;
    }
    if ( (unsigned __int8)v22 == 24 )
      goto LABEL_25;
    if ( (unsigned __int8)v22 != 25 && (unsigned __int8)v22 != 26 )
    {
      if ( (unsigned __int8)v22 != 27 )
      {
        if ( (unsigned __int8)v22 == 28 )
          goto LABEL_94;
        v23 = (unsigned __int8)v22 == 30;
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v15 = -1073741643;
  }
LABEL_26:
  v16 = *(_QWORD *)(v6 + 4216);
  v17 = *(_QWORD *)(v6 + 4184);
  if ( v15 >= 0 )
  {
    v24 = *(_QWORD *)(v17 + 184);
    v25 = *(_DWORD **)(v17 + 24);
    *(_DWORD *)(v17 + 48) = 0;
    v26 = *(unsigned int *)(v24 + 8);
    v27 = *(_BYTE **)(*v4 + 4160);
    memset_0(v25, 0, (unsigned int)v26);
    *((_BYTE *)v25 + 8) &= ~1u;
    *v25 = 56;
    v25[1] = 56;
    *((_BYTE *)v25 + 9) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 260LL) >> 1) & 7;
    *((_BYTE *)v25 + 10) = *v27 & 7;
    v28 = -1;
    if ( ((*v27 >> 4) & 7) != 0 )
      v28 = (*v27 >> 4) & 7;
    *((_BYTE *)v25 + 11) = v28;
    *((_BYTE *)v25 + 12) = 1;
    v29 = sub_1400C93F4(a1);
    v30 = v29;
    if ( v29 )
    {
      v25[4] = v29;
      v31 = *(_QWORD *)(a1 + 128);
      v18 = *(unsigned int *)(v31 + 200);
      v32 = *(_DWORD *)(v31 + 200) - (unsigned int)v18 % v29;
      if ( !((unsigned int)v18 % v30) )
        v32 = *(_DWORD *)(v31 + 200);
    }
    else
    {
      v25[4] = 4;
      v32 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
    }
    v25[5] = v32;
    v33 = 0;
    v34 = *(_QWORD *)(a1 + 592);
    if ( (*(_BYTE *)(v34 + 260) & 0xE) != 0 )
    {
      while ( 1 )
      {
        v35 = v33 + 1;
        if ( v26 < 32 * (unsigned __int64)(v33 + 1) + 24 )
          break;
        if ( v33 )
          v25[1] += 32;
        v18 = 32LL * v33;
        v36 = v33;
        *(_DWORD *)((char *)v25 + v18 + 24) = 32;
        *(_DWORD *)((char *)v25 + v18 + 28) = 32;
        *((_BYTE *)v25 + v18 + 32) = v33 + 1;
        if ( v33 )
          *((_BYTE *)v25 + v18 + 33) &= ~1u;
        else
          *((_BYTE *)v25 + v18 + 33) ^= (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 260LL) ^ *((_BYTE *)v25 + v18 + 33)) & 1;
        ++v33;
        *(_QWORD *)((char *)v25 + v18 + 40) = *(_QWORD *)&v27[8 * v36 + 8];
        v34 = *(_QWORD *)(a1 + 592);
        if ( v35 >= ((*(unsigned __int8 *)(v34 + 260) >> 1) & 7u) )
          goto LABEL_116;
      }
      v25[1] = 32 * ((*(unsigned __int8 *)(v34 + 260) >> 1) & 7) + 24;
      *(_DWORD *)(v17 + 48) = -2147483643;
    }
LABEL_116:
    v19 = (unsigned int)v25[1];
    v4 = a2;
    if ( (unsigned int)v26 < (unsigned int)v19 )
      v19 = (unsigned int)v26;
  }
  else
  {
    sub_1400A870C(
      a1,
      1,
      2,
      (__int64)L"Failed to retrieve firmware slot information log from controller.",
      L"NVMeStatus",
      *(_WORD *)(a3 + 14),
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v19 = 0LL;
    *(_DWORD *)(v17 + 48) = v15;
  }
  *(_QWORD *)(v17 + 56) = v19;
  sub_1400F5FEC(a1, *(_DWORD *)(*v4 + 4248), v18, *(_QWORD *)(*v4 + 4160), *(_QWORD *)(*v4 + 4168));
  _interlockedbittestandreset((volatile signed __int32 *)(*v4 + 4256), 3u);
  sub_140122C20(a1, v4);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v16 + 120));
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(v17 + 141) = -84;
  if ( v11 )
    goto LABEL_181;
  v68 = 0LL;
  IoGetActivityIdIrp(v17, &v68);
  v38 = *(_QWORD *)(v17 + 184);
  if ( *(_BYTE *)v38 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_181;
    v40 = &stru_140148B18;
    goto LABEL_180;
  }
  if ( *(_BYTE *)v38 != 15 )
  {
    if ( *(_BYTE *)v38 != 27 )
      goto LABEL_181;
    if ( *(_BYTE *)(v38 + 1) == 7 && !*(_DWORD *)(v38 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v39 = *(int **)(v17 + 56);
        if ( v39 )
          v5 = *v39;
        LODWORD(v60) = *(_DWORD *)(v17 + 48);
        LODWORD(v59) = v5;
        sub_140056AB0(v37, v38, &v68, v17, v59, v60);
      }
      goto LABEL_181;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_181;
    v40 = &stru_140149FE8;
LABEL_180:
    LODWORD(v59) = *(_DWORD *)(v17 + 48);
    sub_140052F3C(v37, v40, &v68, v17, v59);
    goto LABEL_181;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_181;
  v41 = *(_QWORD *)(v38 + 8);
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( *(_BYTE *)(v41 + 2) != 40 )
  {
    v53 = *(_BYTE *)(v41 + 72);
    v43 = *(_BYTE **)(v41 + 32);
    v44 = *(_BYTE *)(v41 + 11);
    v42 = *(_BYTE *)(v41 + 4);
    if ( *(_BYTE *)(v41 + 2) )
      goto LABEL_181;
LABEL_158:
    LOBYTE(v37) = v53 - 8;
    if ( (v37 & 0x5D) != 0 )
      goto LABEL_181;
    if ( *(_BYTE *)(v41 + 3) == 1 || !v43 || !v44 )
      goto LABEL_176;
    v54 = 0;
    v37 = (unsigned __int64)&v43[v44];
    v55 = v43 + 8;
    if ( (unsigned __int8)((*v43 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v55 > v37 )
        goto LABEL_174;
      v46 = v43[2];
      v45 = v43[1] & 0xF;
      v47 = v43[3];
    }
    else
    {
      if ( (unsigned __int64)v55 > v37 )
        goto LABEL_174;
      v56 = v43 + 13;
      v45 = v43[2] & 0xF;
      v57 = v44;
      if ( (unsigned int)(unsigned __int8)v43[7] + 8 <= v44 )
        v57 = (unsigned __int8)v43[7] + 8;
      v37 = (unsigned __int64)&v43[v57];
      if ( (unsigned __int64)v56 <= v37 )
        v46 = v43[12];
      if ( (unsigned __int64)(v43 + 14) > v37 )
        v47 = 0;
      else
        v47 = *v56;
    }
    v54 = 1;
LABEL_174:
    if ( v54 )
    {
      LOBYTE(v5) = v46;
      v58 = v47;
LABEL_177:
      LOBYTE(v64) = v58;
      LOBYTE(v63) = v5;
      LOBYTE(v62) = v45;
      LOBYTE(v61) = v42;
      LOBYTE(v60) = *(_BYTE *)(v41 + 3);
      LODWORD(v59) = *(_DWORD *)(v17 + 48);
      sub_140052E64(v37, v41, &v68, v17, v59, v60, v61, v62, v63, v64, v17);
      goto LABEL_181;
    }
LABEL_176:
    v45 = 0;
    v58 = 0;
    goto LABEL_177;
  }
  v48 = 0LL;
  v65 = 0;
  if ( *(_DWORD *)(v41 + 20) )
    goto LABEL_181;
  v49 = 0;
  v67 = *(_DWORD *)(v41 + 56);
  if ( !v67 )
    goto LABEL_155;
  while ( 1 )
  {
    v37 = *(unsigned int *)(v41 + 4LL * v49 + 120);
    if ( (unsigned int)v37 >= 0x80 )
    {
      v50 = *(unsigned int *)(v41 + 16);
      if ( (unsigned int)v37 < (unsigned int)v50 )
        break;
    }
LABEL_149:
    if ( ++v49 >= v67 )
      goto LABEL_155;
  }
  v51 = (unsigned int)v37;
  v52 = *(_DWORD *)(v37 + v41) - 64;
  if ( v52 )
  {
    v37 = (unsigned int)(v52 - 1);
    if ( (_DWORD)v37 )
    {
      if ( (_DWORD)v37 == 1 )
      {
        v37 = v51 + 40;
        if ( v51 + 40 <= v50 )
        {
          if ( *(_DWORD *)(v51 + v41 + 12) )
            v48 = (char *)(v51 + v41 + 32);
          v43 = *(_BYTE **)(v51 + v41 + 24);
          goto LABEL_154;
        }
      }
    }
    else
    {
      v37 = v51 + 56;
      if ( v51 + 56 <= v50 )
      {
        v65 = 1;
        if ( *(_BYTE *)(v51 + v41 + 10) )
          v48 = (char *)(v51 + v41 + 24);
        v42 = *(_BYTE *)(v51 + v41 + 8);
        v43 = *(_BYTE **)(v51 + v41 + 16);
        v44 = *(_BYTE *)(v51 + v41 + 9);
      }
    }
    goto LABEL_148;
  }
  v37 = v51 + 40;
  if ( v51 + 40 > v50 )
  {
LABEL_148:
    if ( v65 )
      goto LABEL_155;
    goto LABEL_149;
  }
  if ( *(_BYTE *)(v51 + v41 + 10) )
    v48 = (char *)(v51 + v41 + 24);
  v43 = *(_BYTE **)(v51 + v41 + 16);
LABEL_154:
  v44 = *(_BYTE *)(v51 + v41 + 9);
  v42 = *(_BYTE *)(v51 + v41 + 8);
LABEL_155:
  if ( v48 )
  {
    v53 = *v48;
    goto LABEL_158;
  }
LABEL_181:
  IofCompleteRequest((PIRP)v17, 1);
}
