/*
 * XREFs of sub_140103A50 @ 0x140103A50
 * Callers:
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 * Callees:
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140107454 @ 0x140107454 (sub_140107454.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     sub_140113BA0 @ 0x140113BA0 (sub_140113BA0.c)
 *     sub_140113D7C @ 0x140113D7C (sub_140113D7C.c)
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140103A50(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // r13d
  __int64 v5; // rdi
  __int64 v7; // rsi
  char *v8; // r9
  char v9; // r14
  unsigned int v10; // r12d
  unsigned int v11; // r11d
  unsigned int *v12; // r10
  __int64 v13; // rax
  __int64 v14; // r9
  char v15; // al
  int v16; // eax
  unsigned int v17; // r14d
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r12
  _BYTE *v25; // r9
  unsigned __int8 v26; // r10
  char v27; // si
  char v28; // r11
  char v29; // r13
  char *v30; // r11
  unsigned int v31; // r8d
  unsigned int *v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  char v35; // cl
  char v36; // r8
  _BYTE *v37; // rax
  unsigned int v38; // eax
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int *v42; // rax
  __int64 v43; // rcx
  const EVENT_DESCRIPTOR *v44; // rdx
  unsigned __int64 v45; // rdx
  char v46; // r15
  _BYTE *v47; // r9
  unsigned __int8 v48; // r10
  char v49; // si
  char v50; // r11
  unsigned __int8 v51; // r12
  char *v52; // r11
  unsigned int v53; // ecx
  unsigned int *v54; // r13
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  char v57; // cl
  char v58; // r8
  _BYTE *v59; // rcx
  _BYTE *v60; // rax
  unsigned int v61; // eax
  char v62; // al
  __int64 v63; // rcx
  __int64 v65; // [rsp+20h] [rbp-59h]
  char v66; // [rsp+60h] [rbp-19h]
  char v67; // [rsp+60h] [rbp-19h]
  char v68; // [rsp+61h] [rbp-18h]
  char v69; // [rsp+61h] [rbp-18h]
  int v70; // [rsp+64h] [rbp-15h]
  unsigned int v71; // [rsp+64h] [rbp-15h]
  unsigned int v72; // [rsp+68h] [rbp-11h]
  unsigned int v73; // [rsp+68h] [rbp-11h]
  GUID v74; // [rsp+70h] [rbp-9h] BYREF
  GUID v75; // [rsp+80h] [rbp+7h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v8 = (char *)(v7 + 72);
    goto LABEL_24;
  }
  v8 = 0LL;
  v9 = 0;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v10 = *(_DWORD *)(v7 + 56);
    v11 = 0;
    if ( v10 )
    {
      v12 = (unsigned int *)(v7 + 120);
      do
      {
        v13 = *v12;
        if ( (unsigned int)v13 >= 0x80 )
        {
          a3 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v13 < (unsigned int)a3 )
          {
            if ( *(_DWORD *)(v13 + v7) == 64 )
            {
              if ( v13 + 40 <= a3 )
              {
                if ( !*(_BYTE *)(v13 + v7 + 10) )
                  break;
                v14 = v7 + 24;
LABEL_22:
                v8 = (char *)(v13 + v14);
                break;
              }
            }
            else if ( *(_DWORD *)(v13 + v7) == 65 )
            {
              if ( v13 + 56 <= a3 )
              {
                v9 = 1;
                if ( !*(_BYTE *)(v13 + v7 + 10) )
                  break;
                v8 = (char *)(v13 + v7 + 24);
              }
            }
            else if ( *(_DWORD *)(v13 + v7) == 66 && v13 + 40 <= a3 )
            {
              if ( !*(_DWORD *)(v13 + v7 + 12) )
                break;
              v14 = v7 + 32;
              goto LABEL_22;
            }
            if ( v9 )
              break;
          }
        }
        ++v11;
        ++v12;
      }
      while ( v11 < v10 );
    }
  }
LABEL_24:
  v15 = *v8;
  if ( *v8 == 53 )
  {
    v16 = sub_140113D7C(a1, a2, v7, (_DWORD)v8, v4);
LABEL_34:
    v17 = v16;
    if ( v16 == -2147483631 || v16 == -1073741300 )
    {
      sub_140107454(a1, v5, v4);
      return 259;
    }
    if ( v16 >= 0 )
    {
      if ( v16 )
        return v17;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
      v18 = byte_140168DAA == 0;
      *(_BYTE *)(v5 + 141) = -84;
      *(_DWORD *)(v5 + 48) = 0;
      if ( v18 )
        goto LABEL_171;
      v74 = 0LL;
      IoGetActivityIdIrp(v5, &v74);
      v41 = *(_QWORD *)(v5 + 184);
      switch ( *(_BYTE *)v41 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_171;
          v44 = &stru_140148B18;
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            goto LABEL_171;
          v45 = *(_QWORD *)(v41 + 8);
          v46 = 0;
          v47 = 0LL;
          v67 = 0;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          v51 = 0;
          if ( *(_BYTE *)(v45 + 2) != 40 )
          {
            v57 = *(_BYTE *)(v45 + 72);
            v47 = *(_BYTE **)(v45 + 32);
            v48 = *(_BYTE *)(v45 + 11);
            v46 = *(_BYTE *)(v45 + 4);
            if ( !*(_BYTE *)(v45 + 2) )
              goto LABEL_147;
            goto LABEL_171;
          }
          v52 = 0LL;
          v69 = 0;
          if ( *(_DWORD *)(v45 + 20) )
            goto LABEL_171;
          v53 = 0;
          v71 = 0;
          v73 = *(_DWORD *)(v45 + 56);
          if ( !v73 )
            goto LABEL_144;
          v54 = (unsigned int *)(v45 + 120);
          while ( 1 )
          {
            v55 = *v54;
            if ( (unsigned int)v55 >= 0x80 )
            {
              v56 = *(unsigned int *)(v45 + 16);
              if ( (unsigned int)v55 < (unsigned int)v56 )
              {
                if ( *(_DWORD *)(v55 + v45) == 64 )
                {
                  if ( v55 + 40 <= v56 )
                  {
                    if ( *(_BYTE *)(v55 + v45 + 10) )
                      v52 = (char *)(v55 + v45 + 24);
                    v47 = *(_BYTE **)(v55 + v45 + 16);
LABEL_143:
                    v48 = *(_BYTE *)(v55 + v45 + 9);
                    v46 = *(_BYTE *)(v55 + v45 + 8);
LABEL_144:
                    if ( v52 )
                    {
                      v57 = *v52;
                      v50 = 0;
LABEL_147:
                      if ( ((v57 - 8) & 0x5D) == 0 )
                      {
                        v58 = *(_BYTE *)(v45 + 3);
                        if ( v58 == 1 || !v47 || !v48 )
                          goto LABEL_166;
                        LOBYTE(v45) = 0;
                        v59 = &v47[v48];
                        v60 = v47 + 8;
                        if ( (unsigned __int8)((*v47 & 0x7F) - 114) <= 1u )
                        {
                          if ( v60 <= v59 )
                          {
                            LOBYTE(v45) = 1;
                            v50 = v47[2];
                            v49 = v47[1] & 0xF;
                            v51 = v47[3];
                          }
                        }
                        else
                        {
                          if ( v60 <= v59 )
                          {
                            v49 = v47[2] & 0xF;
                            v61 = v48;
                            if ( (unsigned int)(unsigned __int8)v47[7] + 8 <= v48 )
                              v61 = (unsigned __int8)v47[7] + 8;
                            v45 = (unsigned __int64)&v47[v61];
                            if ( (unsigned __int64)(v47 + 13) > v45 )
                              v67 = 0;
                            else
                              v67 = v47[12];
                            if ( (unsigned __int64)(v47 + 14) <= v45 )
                              v51 = v47[13];
                            LOBYTE(v45) = 1;
                          }
                          v50 = v67;
                        }
                        if ( (_BYTE)v45 )
                        {
                          v62 = v50;
                          v63 = v51;
                        }
                        else
                        {
LABEL_166:
                          v49 = 0;
                          v62 = 0;
                          v63 = 0LL;
                        }
                        LODWORD(v65) = *(_DWORD *)(v5 + 48);
                        sub_140052E64(v63, v45, &v74, v5, v65, v58, v46, v49, v62, v63, v5);
                      }
                    }
                    goto LABEL_171;
                  }
                }
                else if ( *(_DWORD *)(v55 + v45) == 65 )
                {
                  if ( v55 + 56 <= v56 )
                  {
                    v69 = 1;
                    if ( *(_BYTE *)(v55 + v45 + 10) )
                      v52 = (char *)(v55 + v45 + 24);
                    v46 = *(_BYTE *)(v55 + v45 + 8);
                    v47 = *(_BYTE **)(v55 + v45 + 16);
                    v48 = *(_BYTE *)(v55 + v45 + 9);
                  }
                }
                else if ( *(_DWORD *)(v55 + v45) == 66 && v55 + 40 <= v56 )
                {
                  if ( *(_DWORD *)(v55 + v45 + 12) )
                    v52 = (char *)(v55 + v45 + 32);
                  v47 = *(_BYTE **)(v55 + v45 + 24);
                  goto LABEL_143;
                }
                if ( v69 )
                  goto LABEL_144;
                v53 = v71;
              }
            }
            ++v53;
            ++v54;
            v71 = v53;
            if ( v53 >= v73 )
              goto LABEL_144;
          }
        case 0x1B:
          if ( *(_BYTE *)(v41 + 1) == 7 && !*(_DWORD *)(v41 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v42 = *(unsigned int **)(v5 + 56);
              if ( v42 )
                v43 = *v42;
              else
                v43 = 0LL;
              LODWORD(v65) = v43;
              sub_140056AB0(v43, v41, &v74, v5, v65, *(_DWORD *)(v5 + 48));
            }
            goto LABEL_171;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
          {
LABEL_171:
            v17 = 0;
            goto LABEL_172;
          }
          v44 = &stru_140149FE8;
          break;
        default:
          goto LABEL_171;
      }
      LODWORD(v65) = *(_DWORD *)(v5 + 48);
      sub_140052F3C(v40, v44, &v74, v5, v65);
      goto LABEL_171;
    }
    goto LABEL_37;
  }
  if ( v15 == 66 )
  {
    v16 = sub_140113EA8(a1, a2, v7, (_DWORD)v8, v4);
    goto LABEL_34;
  }
  if ( v15 == 40 || v15 == -120 || v15 == 42 || v15 == -118 )
  {
    v16 = sub_140113BA0(a1, a2, v7, (_DWORD)v8, v4);
    goto LABEL_34;
  }
  LOBYTE(v8) = 32;
  LOBYTE(a3) = 5;
  LOBYTE(a2) = 6;
  sub_140112680(v7, a2, a3, (_DWORD)v8, 0);
  v17 = -1073741808;
LABEL_37:
  *(_BYTE *)(v7 + 3) = sub_140007B40(v17);
  *(_QWORD *)(v5 + 56) = 0LL;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  v18 = byte_140168DAA == 0;
  *(_BYTE *)(v5 + 141) = -84;
  *(_DWORD *)(v5 + 48) = v17;
  if ( v18 )
    goto LABEL_172;
  v75 = 0LL;
  IoGetActivityIdIrp(v5, &v75);
  v20 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_172;
    v22 = &stru_140148B18;
    goto LABEL_102;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_172;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v21 = *(int **)(v5 + 56);
        if ( v21 )
          v3 = *v21;
        LODWORD(v65) = v3;
        sub_140056AB0(v19, v20, &v75, v5, v65, *(_DWORD *)(v5 + 48));
      }
      goto LABEL_172;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_172;
    v22 = &stru_140149FE8;
LABEL_102:
    LODWORD(v65) = *(_DWORD *)(v5 + 48);
    sub_140052F3C(v19, v22, &v75, v5, v65);
    goto LABEL_172;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_172;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0;
  v25 = 0LL;
  v66 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v35 = *(_BYTE *)(v23 + 72);
    v25 = *(_BYTE **)(v23 + 32);
    v26 = *(_BYTE *)(v23 + 11);
    v24 = *(_BYTE *)(v23 + 4);
    if ( !*(_BYTE *)(v23 + 2) )
      goto LABEL_79;
    goto LABEL_172;
  }
  v30 = 0LL;
  v68 = 0;
  if ( *(_DWORD *)(v23 + 20) )
    goto LABEL_172;
  v19 = 0LL;
  v70 = 0;
  v72 = *(_DWORD *)(v23 + 56);
  if ( !v72 )
    goto LABEL_76;
  v31 = *(_DWORD *)(v23 + 56);
  v32 = (unsigned int *)(v23 + 120);
  *(_QWORD *)&v74.Data1 = v23 + 120;
  while ( 1 )
  {
    v33 = *v32;
    if ( (unsigned int)v33 >= 0x80 )
    {
      v34 = *(unsigned int *)(v23 + 16);
      if ( (unsigned int)v33 < (unsigned int)v34 )
        break;
    }
LABEL_70:
    v19 = (unsigned int)(v19 + 1);
    v32 = (unsigned int *)(*(_QWORD *)&v74.Data1 + 4LL);
    v70 = v19;
    *(_QWORD *)&v74.Data1 += 4LL;
    if ( (unsigned int)v19 >= v31 )
      goto LABEL_76;
  }
  if ( *(_DWORD *)(v33 + v23) != 64 )
  {
    v19 = (unsigned int)(*(_DWORD *)(v33 + v23) - 65);
    if ( *(_DWORD *)(v33 + v23) == 65 )
    {
      v19 = v33 + 56;
      if ( v33 + 56 <= v34 )
      {
        v68 = 1;
        if ( *(_BYTE *)(v33 + v23 + 10) )
          v30 = (char *)(v33 + v23 + 24);
        v24 = *(_BYTE *)(v33 + v23 + 8);
        v25 = *(_BYTE **)(v33 + v23 + 16);
        v26 = *(_BYTE *)(v33 + v23 + 9);
      }
    }
    else if ( *(_DWORD *)(v33 + v23) == 66 )
    {
      v19 = v33 + 40;
      if ( v33 + 40 <= v34 )
      {
        if ( *(_DWORD *)(v33 + v23 + 12) )
          v30 = (char *)(v33 + v23 + 32);
        v25 = *(_BYTE **)(v33 + v23 + 24);
        goto LABEL_75;
      }
    }
    goto LABEL_68;
  }
  v19 = v33 + 40;
  if ( v33 + 40 > v34 )
  {
LABEL_68:
    if ( v68 )
      goto LABEL_76;
    LODWORD(v19) = v70;
    v31 = v72;
    goto LABEL_70;
  }
  if ( *(_BYTE *)(v33 + v23 + 10) )
    v30 = (char *)(v33 + v23 + 24);
  v25 = *(_BYTE **)(v33 + v23 + 16);
LABEL_75:
  v26 = *(_BYTE *)(v33 + v23 + 9);
  v24 = *(_BYTE *)(v33 + v23 + 8);
LABEL_76:
  if ( v30 )
  {
    v35 = *v30;
    v28 = 0;
LABEL_79:
    LOBYTE(v19) = v35 - 8;
    if ( (v19 & 0x5D) == 0 )
    {
      v36 = *(_BYTE *)(v23 + 3);
      if ( v36 == 1 || !v25 || !v26 )
        goto LABEL_98;
      LOBYTE(v23) = 0;
      v19 = (unsigned __int64)&v25[v26];
      v37 = v25 + 8;
      if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v37 <= v19 )
        {
          LOBYTE(v23) = 1;
          v28 = v25[2];
          v27 = v25[1] & 0xF;
          v29 = v25[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v37 <= v19 )
        {
          v27 = v25[2] & 0xF;
          v38 = v26;
          if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
            v38 = (unsigned __int8)v25[7] + 8;
          v19 = (unsigned __int64)(v25 + 13);
          v23 = (unsigned __int64)&v25[v38];
          if ( (unsigned __int64)(v25 + 13) > v23 )
            v66 = 0;
          else
            v66 = v25[12];
          if ( (unsigned __int64)(v25 + 14) <= v23 )
            v29 = *(_BYTE *)v19;
          LOBYTE(v23) = 1;
        }
        v28 = v66;
      }
      if ( (_BYTE)v23 )
      {
        LOBYTE(v3) = v28;
        v39 = v29;
      }
      else
      {
LABEL_98:
        v27 = 0;
        v39 = 0;
      }
      LODWORD(v65) = *(_DWORD *)(v5 + 48);
      sub_140052E64(v19, v23, &v75, v5, v65, v36, v24, v27, v3, v39, v5);
    }
  }
LABEL_172:
  IofCompleteRequest((PIRP)v5, 0);
  return v17;
}
