/*
 * XREFs of sub_140102C4C @ 0x140102C4C
 * Callers:
 *     sub_140008DD0 @ 0x140008DD0 (sub_140008DD0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     sub_14012E508 @ 0x14012E508 (sub_14012E508.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140102C4C(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // r14d
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  unsigned int *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char v23; // cl
  char v24; // r8
  _BYTE *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  int v29; // ecx
  unsigned int v30; // r12d
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  int *v33; // rax
  const EVENT_DESCRIPTOR *v34; // rdx
  unsigned __int64 v35; // rdx
  char v36; // r15
  _BYTE *v37; // r9
  unsigned __int8 v38; // r10
  char v39; // si
  char v40; // r11
  char v41; // r13
  char *v42; // r11
  unsigned int v43; // r8d
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  const EVENT_DESCRIPTOR *v56; // rdx
  unsigned __int64 v57; // rdx
  char v58; // r15
  _BYTE *v59; // r9
  unsigned __int8 v60; // r10
  char v61; // si
  char v62; // r11
  unsigned __int8 v63; // r12
  char *v64; // r11
  unsigned int v65; // ecx
  unsigned int *v66; // r13
  __int64 v67; // rax
  unsigned __int64 v68; // r14
  char v69; // cl
  char v70; // r8
  _BYTE *v71; // rcx
  _BYTE *v72; // rax
  unsigned int v73; // eax
  char v74; // al
  __int64 v75; // rcx
  char v76; // [rsp+60h] [rbp-19h]
  char v77; // [rsp+60h] [rbp-19h]
  char v78; // [rsp+60h] [rbp-19h]
  char v79; // [rsp+61h] [rbp-18h]
  char v80; // [rsp+61h] [rbp-18h]
  char v81; // [rsp+61h] [rbp-18h]
  int v82; // [rsp+64h] [rbp-15h]
  unsigned int v83; // [rsp+64h] [rbp-15h]
  int v84; // [rsp+68h] [rbp-11h]
  int v85; // [rsp+68h] [rbp-11h]
  unsigned int v86; // [rsp+70h] [rbp-9h]
  unsigned __int64 v87; // [rsp+70h] [rbp-9h]
  unsigned int v88; // [rsp+70h] [rbp-9h]
  GUID v89; // [rsp+78h] [rbp-1h] BYREF
  GUID v90; // [rsp+88h] [rbp+Fh] BYREF

  *(_QWORD *)&v89.Data1 = a1;
  v3 = a1;
  v4 = sub_1400F8C38(a1, a2);
  v5 = 0;
  v84 = v4;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v29 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL) - 2;
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL) == 2 )
    {
      v30 = sub_14012E508(v3, a2);
      goto LABEL_210;
    }
    *(_BYTE *)(a2 + 141) = -84;
    if ( v29 != 1 )
    {
      v7 = byte_140168DAA == 0;
      v30 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      if ( v7 )
        goto LABEL_137;
      v90 = 0LL;
      IoGetActivityIdIrp(a2, &v90);
      v32 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v32 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_137;
          v34 = &stru_140148B18;
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            goto LABEL_137;
          v35 = *(_QWORD *)(v32 + 8);
          v36 = 0;
          v37 = 0LL;
          v77 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          if ( *(_BYTE *)(v35 + 2) != 40 )
          {
            v47 = *(_BYTE *)(v35 + 72);
            v37 = *(_BYTE **)(v35 + 32);
            v38 = *(_BYTE *)(v35 + 11);
            v36 = *(_BYTE *)(v35 + 4);
            if ( !*(_BYTE *)(v35 + 2) )
              goto LABEL_115;
            goto LABEL_136;
          }
          v42 = 0LL;
          v80 = 0;
          if ( *(_DWORD *)(v35 + 20) )
            goto LABEL_136;
          v31 = 0LL;
          v85 = 0;
          if ( !*(_DWORD *)(v35 + 56) )
            goto LABEL_112;
          v43 = *(_DWORD *)(v35 + 56);
          v44 = (unsigned int *)(v35 + 120);
          v87 = v35 + 120;
          while ( 1 )
          {
            v45 = *v44;
            if ( (unsigned int)v45 >= 0x80 )
            {
              v46 = *(unsigned int *)(v35 + 16);
              if ( (unsigned int)v45 < (unsigned int)v46 )
              {
                if ( *(_DWORD *)(v45 + v35) == 64 )
                {
                  v31 = v45 + 40;
                  if ( v45 + 40 <= v46 )
                  {
                    if ( *(_BYTE *)(v45 + v35 + 10) )
                      v42 = (char *)(v45 + v35 + 24);
                    v37 = *(_BYTE **)(v45 + v35 + 16);
LABEL_111:
                    v38 = *(_BYTE *)(v45 + v35 + 9);
                    v36 = *(_BYTE *)(v45 + v35 + 8);
LABEL_112:
                    if ( v42 )
                    {
                      v47 = *v42;
                      v40 = 0;
LABEL_115:
                      LOBYTE(v31) = v47 - 8;
                      if ( (v31 & 0x5D) == 0 )
                      {
                        v48 = *(_BYTE *)(v35 + 3);
                        if ( v48 == 1 || !v37 || !v38 )
                          goto LABEL_134;
                        LOBYTE(v35) = 0;
                        v31 = (unsigned __int64)&v37[v38];
                        v49 = v37 + 8;
                        if ( (unsigned __int8)((*v37 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v49 <= v31 )
                          {
                            LOBYTE(v35) = 1;
                            v40 = v37[2];
                            v39 = v37[1] & 0xF;
                            v41 = v37[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v49 <= v31 )
                          {
                            v39 = v37[2] & 0xF;
                            v50 = v38;
                            if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
                              v50 = (unsigned __int8)v37[7] + 8;
                            v31 = (unsigned __int64)(v37 + 13);
                            v35 = (unsigned __int64)&v37[v50];
                            if ( (unsigned __int64)(v37 + 13) > v35 )
                              v77 = 0;
                            else
                              v77 = v37[12];
                            if ( (unsigned __int64)(v37 + 14) <= v35 )
                              v41 = *(_BYTE *)v31;
                            LOBYTE(v35) = 1;
                          }
                          v40 = v77;
                        }
                        if ( (_BYTE)v35 )
                        {
                          LOBYTE(v5) = v40;
                          v51 = v41;
                        }
                        else
                        {
LABEL_134:
                          v39 = 0;
                          v51 = 0;
                        }
                        sub_140052E64(v31, v35, &v90, a2, *(_DWORD *)(a2 + 48), v48, v36, v39, v5, v51, a2);
                      }
                    }
LABEL_136:
                    v3 = *(_QWORD *)&v89.Data1;
LABEL_137:
                    IofCompleteRequest((PIRP)a2, 0);
LABEL_210:
                    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 120));
                    return v30;
                  }
                }
                else
                {
                  v31 = (unsigned int)(*(_DWORD *)(v45 + v35) - 65);
                  if ( *(_DWORD *)(v45 + v35) == 65 )
                  {
                    v31 = v45 + 56;
                    if ( v45 + 56 <= v46 )
                    {
                      v80 = 1;
                      if ( *(_BYTE *)(v45 + v35 + 10) )
                        v42 = (char *)(v45 + v35 + 24);
                      v36 = *(_BYTE *)(v45 + v35 + 8);
                      v37 = *(_BYTE **)(v45 + v35 + 16);
                      v38 = *(_BYTE *)(v45 + v35 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v45 + v35) == 66 )
                  {
                    v31 = v45 + 40;
                    if ( v45 + 40 <= v46 )
                    {
                      if ( *(_DWORD *)(v45 + v35 + 12) )
                        v42 = (char *)(v45 + v35 + 32);
                      v37 = *(_BYTE **)(v45 + v35 + 24);
                      goto LABEL_111;
                    }
                  }
                }
                if ( v80 )
                  goto LABEL_112;
                LODWORD(v31) = v85;
                v43 = *(_DWORD *)(v35 + 56);
              }
            }
            v31 = (unsigned int)(v31 + 1);
            v44 = (unsigned int *)(v87 + 4);
            v85 = v31;
            v87 += 4LL;
            if ( (unsigned int)v31 >= v43 )
              goto LABEL_112;
          }
        case 0x1B:
          if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v33 = *(int **)(a2 + 56);
              if ( v33 )
                v5 = *v33;
              sub_140056AB0(v31, v32, &v90, a2, v5, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_137;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
            goto LABEL_137;
          v34 = &stru_140149FE8;
          break;
        default:
          goto LABEL_137;
      }
      sub_140052F3C(v31, v34, &v90, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_137;
    }
    v7 = byte_140168DAA == 0;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v7 )
      goto LABEL_206;
    v90 = 0LL;
    IoGetActivityIdIrp(a2, &v90);
    v53 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v53 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_206;
        v56 = &stru_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_206;
        v57 = *(_QWORD *)(v53 + 8);
        v58 = 0;
        v59 = 0LL;
        v78 = 0;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        if ( *(_BYTE *)(v57 + 2) != 40 )
        {
          v69 = *(_BYTE *)(v57 + 72);
          v59 = *(_BYTE **)(v57 + 32);
          v60 = *(_BYTE *)(v57 + 11);
          v58 = *(_BYTE *)(v57 + 4);
          if ( !*(_BYTE *)(v57 + 2) )
            goto LABEL_184;
          goto LABEL_205;
        }
        v64 = 0LL;
        v81 = 0;
        if ( *(_DWORD *)(v57 + 20) )
          goto LABEL_205;
        v65 = 0;
        v83 = 0;
        v88 = *(_DWORD *)(v57 + 56);
        if ( !v88 )
          goto LABEL_181;
        v66 = (unsigned int *)(v57 + 120);
        while ( 1 )
        {
          v67 = *v66;
          if ( (unsigned int)v67 >= 0x80 )
          {
            v68 = *(unsigned int *)(v57 + 16);
            if ( (unsigned int)v67 < (unsigned int)v68 )
            {
              if ( *(_DWORD *)(v67 + v57) == 64 )
              {
                if ( v67 + 40 <= v68 )
                {
                  if ( *(_BYTE *)(v67 + v57 + 10) )
                    v64 = (char *)(v67 + v57 + 24);
                  v59 = *(_BYTE **)(v67 + v57 + 16);
LABEL_180:
                  v60 = *(_BYTE *)(v67 + v57 + 9);
                  v58 = *(_BYTE *)(v67 + v57 + 8);
LABEL_181:
                  if ( v64 )
                  {
                    v69 = *v64;
                    v62 = 0;
LABEL_184:
                    if ( ((v69 - 8) & 0x5D) == 0 )
                    {
                      v70 = *(_BYTE *)(v57 + 3);
                      if ( v70 == 1 || !v59 || !v60 )
                        goto LABEL_203;
                      LOBYTE(v57) = 0;
                      v71 = &v59[v60];
                      v72 = v59 + 8;
                      if ( (unsigned __int8)((*v59 & 0x7F) - 114) <= 1u )
                      {
                        if ( v72 <= v71 )
                        {
                          LOBYTE(v57) = 1;
                          v62 = v59[2];
                          v61 = v59[1] & 0xF;
                          v63 = v59[3];
                        }
                      }
                      else
                      {
                        if ( v72 <= v71 )
                        {
                          v61 = v59[2] & 0xF;
                          v73 = v60;
                          if ( (unsigned int)(unsigned __int8)v59[7] + 8 <= v60 )
                            v73 = (unsigned __int8)v59[7] + 8;
                          v57 = (unsigned __int64)&v59[v73];
                          if ( (unsigned __int64)(v59 + 13) > v57 )
                            v78 = 0;
                          else
                            v78 = v59[12];
                          if ( (unsigned __int64)(v59 + 14) <= v57 )
                            v63 = v59[13];
                          LOBYTE(v57) = 1;
                        }
                        v62 = v78;
                      }
                      if ( (_BYTE)v57 )
                      {
                        v74 = v62;
                        v75 = v63;
                      }
                      else
                      {
LABEL_203:
                        v61 = 0;
                        v74 = 0;
                        v75 = 0LL;
                      }
                      sub_140052E64(v75, v57, &v90, a2, *(_DWORD *)(a2 + 48), v70, v58, v61, v74, v75, a2);
                    }
                  }
LABEL_205:
                  v3 = *(_QWORD *)&v89.Data1;
                  goto LABEL_206;
                }
              }
              else if ( *(_DWORD *)(v67 + v57) == 65 )
              {
                if ( v67 + 56 <= v68 )
                {
                  v81 = 1;
                  if ( *(_BYTE *)(v67 + v57 + 10) )
                    v64 = (char *)(v67 + v57 + 24);
                  v58 = *(_BYTE *)(v67 + v57 + 8);
                  v59 = *(_BYTE **)(v67 + v57 + 16);
                  v60 = *(_BYTE *)(v67 + v57 + 9);
                }
              }
              else if ( *(_DWORD *)(v67 + v57) == 66 && v67 + 40 <= v68 )
              {
                if ( *(_DWORD *)(v67 + v57 + 12) )
                  v64 = (char *)(v67 + v57 + 32);
                v59 = *(_BYTE **)(v67 + v57 + 24);
                goto LABEL_180;
              }
              if ( v81 )
                goto LABEL_181;
              v65 = v83;
            }
          }
          ++v65;
          ++v66;
          v83 = v65;
          if ( v65 >= v88 )
            goto LABEL_181;
        }
      case 0x1B:
        if ( *(_BYTE *)(v53 + 1) == 7 && !*(_DWORD *)(v53 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v54 = *(unsigned int **)(a2 + 56);
            if ( v54 )
              v55 = *v54;
            else
              v55 = 0LL;
            sub_140056AB0(v55, v53, &v90, a2, v55, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_206;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_206:
          IofCompleteRequest((PIRP)a2, 0);
          v30 = 0;
          goto LABEL_210;
        }
        v56 = &stru_140149FE8;
        break;
      default:
        goto LABEL_206;
    }
    sub_140052F3C(v52, v56, &v90, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_206;
  }
  v7 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v7 )
    goto LABEL_69;
  v89 = 0LL;
  IoGetActivityIdIrp(a2, &v89);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v11 = &stru_140148B18;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v5 = *v10;
        sub_140056AB0(v8, v9, &v89, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v11 = &stru_140149FE8;
LABEL_68:
    sub_140052F3C(v8, v11, &v89, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v76 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v19 = 0LL;
  v79 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_69;
  v8 = 0LL;
  v82 = 0;
  v86 = *(_DWORD *)(v12 + 56);
  if ( !v86 )
    goto LABEL_42;
  v20 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_35:
    v8 = (unsigned int)(v8 + 1);
    ++v20;
    v82 = v8;
    if ( (unsigned int)v8 >= v86 )
      goto LABEL_41;
  }
  if ( *(_DWORD *)(v21 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v21 + v12) - 65);
    if ( *(_DWORD *)(v21 + v12) == 65 )
    {
      v8 = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v79 = 1;
        if ( *(_BYTE *)(v21 + v12 + 10) )
          v19 = (char *)(v21 + v12 + 24);
        v13 = *(_BYTE *)(v21 + v12 + 8);
        v14 = *(_BYTE **)(v21 + v12 + 16);
        v15 = *(_BYTE *)(v21 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v12) == 66 )
    {
      v8 = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v12 + 12) )
          v19 = (char *)(v21 + v12 + 32);
        v14 = *(_BYTE **)(v21 + v12 + 24);
        goto LABEL_40;
      }
    }
    goto LABEL_33;
  }
  v8 = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_33:
    if ( v79 )
      goto LABEL_41;
    LODWORD(v8) = v82;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v21 + v12 + 10) )
    v19 = (char *)(v21 + v12 + 24);
  v14 = *(_BYTE **)(v21 + v12 + 16);
LABEL_40:
  v15 = *(_BYTE *)(v21 + v12 + 9);
  v13 = *(_BYTE *)(v21 + v12 + 8);
LABEL_41:
  v6 = v84;
LABEL_42:
  if ( v19 )
  {
    v23 = *v19;
    v17 = 0;
LABEL_45:
    LOBYTE(v8) = v23 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v12 + 3);
      if ( v24 == 1 || !v14 || !v15 )
        goto LABEL_64;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v25 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v25 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v26 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v26 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v26];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v76 = 0;
          else
            v76 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v76;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v5) = v17;
        v27 = v18;
      }
      else
      {
LABEL_64:
        v16 = 0;
        v27 = 0;
      }
      sub_140052E64(v8, v12, &v89, a2, *(_DWORD *)(a2 + 48), v24, v13, v16, v5, v27, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
