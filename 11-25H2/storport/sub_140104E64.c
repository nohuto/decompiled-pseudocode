/*
 * XREFs of sub_140104E64 @ 0x140104E64
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140104E64(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v4; // zf
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r8
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r12
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r14
  char v17; // r11
  char v18; // r13
  char *v19; // r11
  unsigned int v20; // r15d
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  int v23; // ecx
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  const GUID *v29; // r8
  int *v30; // rax
  char v31; // r12
  _BYTE *v32; // r9
  unsigned __int8 v33; // r10
  char v34; // r14
  char v35; // r11
  char v36; // r13
  char *v37; // r11
  unsigned int v38; // r15d
  unsigned __int64 v39; // rsi
  __int64 v40; // r8
  int v41; // ecx
  char v42; // cl
  char v43; // r8
  _BYTE *v44; // rax
  unsigned int v45; // eax
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int *v49; // rax
  __int64 v50; // rcx
  const EVENT_DESCRIPTOR *v51; // rdx
  unsigned __int64 v52; // rdx
  char v53; // r12
  _BYTE *v54; // r9
  unsigned __int8 v55; // r10
  char v56; // si
  char v57; // r11
  unsigned __int8 v58; // r13
  char *v59; // r11
  unsigned int v60; // r15d
  __int64 v61; // rcx
  unsigned __int64 v62; // r14
  __int64 v63; // r8
  int v64; // ecx
  int v65; // ecx
  char v66; // cl
  char v67; // r8
  _BYTE *v68; // rcx
  _BYTE *v69; // rax
  unsigned int v70; // eax
  char v71; // al
  __int64 v72; // rcx
  char v74; // [rsp+30h] [rbp-41h]
  char v75; // [rsp+38h] [rbp-39h]
  char v76; // [rsp+40h] [rbp-31h]
  char v77; // [rsp+48h] [rbp-29h]
  char v78; // [rsp+50h] [rbp-21h]
  __int64 v79; // [rsp+58h] [rbp-19h]
  char v80; // [rsp+68h] [rbp-9h]
  char v81; // [rsp+68h] [rbp-9h]
  char v82; // [rsp+68h] [rbp-9h]
  char v83; // [rsp+69h] [rbp-8h]
  char v84; // [rsp+69h] [rbp-8h]
  char v85; // [rsp+69h] [rbp-8h]
  unsigned int v86; // [rsp+6Ch] [rbp-5h]
  unsigned int v87; // [rsp+6Ch] [rbp-5h]
  unsigned int v88; // [rsp+6Ch] [rbp-5h]
  __int128 v89; // [rsp+70h] [rbp-1h] BYREF
  __int128 v90; // [rsp+80h] [rbp+Fh] BYREF
  GUID v91; // [rsp+90h] [rbp+1Fh] BYREF

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
    {
      v4 = byte_140168DAA == 0;
      **(_BYTE **)(a2 + 24) = (*(_BYTE *)(a1 + 112) & 2) == 0;
      *(_QWORD *)(a2 + 56) = 1LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v4 )
        goto LABEL_201;
      v91 = 0LL;
      IoGetActivityIdIrp(a2, &v91);
      v48 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v48 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_201;
          v51 = &stru_140148B18;
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            goto LABEL_201;
          v52 = *(_QWORD *)(v48 + 8);
          v53 = 0;
          v54 = 0LL;
          v82 = 0;
          v55 = 0;
          v56 = 0;
          v57 = 0;
          v58 = 0;
          if ( *(_BYTE *)(v52 + 2) != 40 )
          {
            v66 = *(_BYTE *)(v52 + 72);
            v54 = *(_BYTE **)(v52 + 32);
            v55 = *(_BYTE *)(v52 + 11);
            v53 = *(_BYTE *)(v52 + 4);
            if ( !*(_BYTE *)(v52 + 2) )
              goto LABEL_177;
            goto LABEL_201;
          }
          v59 = 0LL;
          v85 = 0;
          if ( *(_DWORD *)(v52 + 20) )
            goto LABEL_201;
          v60 = 0;
          v88 = *(_DWORD *)(v52 + 56);
          if ( !v88 )
            goto LABEL_174;
          while ( 1 )
          {
            v61 = *(unsigned int *)(v52 + 4LL * v60 + 120);
            if ( (unsigned int)v61 >= 0x80 )
            {
              v62 = *(unsigned int *)(v52 + 16);
              if ( (unsigned int)v61 < (unsigned int)v62 )
              {
                v63 = (unsigned int)v61;
                v64 = *(_DWORD *)(v52 + v61) - 64;
                if ( v64 )
                {
                  v65 = v64 - 1;
                  if ( v65 )
                  {
                    if ( v65 == 1 && v63 + 40 <= v62 )
                    {
                      if ( *(_DWORD *)(v52 + v63 + 12) )
                        v59 = (char *)(v63 + v52 + 32);
                      v54 = *(_BYTE **)(v52 + v63 + 24);
                      goto LABEL_173;
                    }
                  }
                  else if ( v63 + 56 <= v62 )
                  {
                    v85 = 1;
                    if ( *(_BYTE *)(v52 + v63 + 10) )
                      v59 = (char *)(v63 + v52 + 24);
                    v53 = *(_BYTE *)(v52 + v63 + 8);
                    v54 = *(_BYTE **)(v52 + v63 + 16);
                    v55 = *(_BYTE *)(v52 + v63 + 9);
                  }
                }
                else if ( v63 + 40 <= v62 )
                {
                  if ( *(_BYTE *)(v52 + v63 + 10) )
                    v59 = (char *)(v63 + v52 + 24);
                  v54 = *(_BYTE **)(v52 + v63 + 16);
LABEL_173:
                  v55 = *(_BYTE *)(v52 + v63 + 9);
                  v53 = *(_BYTE *)(v52 + v63 + 8);
LABEL_174:
                  if ( v59 )
                  {
                    v66 = *v59;
                    v57 = 0;
LABEL_177:
                    if ( ((v66 - 8) & 0x5D) == 0 )
                    {
                      v67 = *(_BYTE *)(v52 + 3);
                      if ( v67 == 1 || !v54 || !v55 )
                        goto LABEL_196;
                      LOBYTE(v52) = 0;
                      v68 = &v54[v55];
                      v69 = v54 + 8;
                      if ( (unsigned __int8)((*v54 & 0x7F) - 114) <= 1u )
                      {
                        if ( v69 <= v68 )
                        {
                          LOBYTE(v52) = 1;
                          v57 = v54[2];
                          v56 = v54[1] & 0xF;
                          v58 = v54[3];
                        }
                      }
                      else
                      {
                        if ( v69 <= v68 )
                        {
                          v56 = v54[2] & 0xF;
                          v70 = v55;
                          if ( (unsigned int)(unsigned __int8)v54[7] + 8 <= v55 )
                            v70 = (unsigned __int8)v54[7] + 8;
                          v52 = (unsigned __int64)&v54[v70];
                          if ( (unsigned __int64)(v54 + 13) > v52 )
                            v82 = 0;
                          else
                            v82 = v54[12];
                          if ( (unsigned __int64)(v54 + 14) <= v52 )
                            v58 = v54[13];
                          LOBYTE(v52) = 1;
                        }
                        v57 = v82;
                      }
                      if ( (_BYTE)v52 )
                      {
                        v71 = v57;
                        v72 = v58;
                      }
                      else
                      {
LABEL_196:
                        v56 = 0;
                        v71 = 0;
                        v72 = 0LL;
                      }
                      sub_140052E64(v72, v52, &v91, a2, *(_DWORD *)(a2 + 48), v67, v53, v56, v71, v72, a2);
                    }
                  }
                  goto LABEL_201;
                }
                if ( v85 )
                  goto LABEL_174;
              }
            }
            if ( ++v60 >= v88 )
              goto LABEL_174;
          }
        case 0x1B:
          if ( *(_BYTE *)(v48 + 1) == 7 && !*(_DWORD *)(v48 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v49 = *(unsigned int **)(a2 + 56);
              if ( v49 )
                v50 = *v49;
              else
                v50 = 0LL;
              sub_140056AB0(v50, v48, &v91, a2, v50, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_201;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
          {
LABEL_201:
            v5 = 0;
            goto LABEL_202;
          }
          v51 = &stru_140149FE8;
          break;
        default:
          goto LABEL_201;
      }
      sub_140052F3C(v47, v51, &v91, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_201;
    }
    v4 = byte_140168DAA == 0;
    v5 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v4 )
      goto LABEL_202;
    v90 = 0LL;
    IoGetActivityIdIrp(a2, &v90);
    v7 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v7 != 14 )
    {
      if ( *(_BYTE *)v7 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_202;
        v12 = *(_QWORD *)(v7 + 8);
        v31 = 0;
        v32 = 0LL;
        v81 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        if ( *(_BYTE *)(v12 + 2) != 40 )
        {
          v42 = *(_BYTE *)(v12 + 72);
          v32 = *(_BYTE **)(v12 + 32);
          v33 = *(_BYTE *)(v12 + 11);
          v31 = *(_BYTE *)(v12 + 4);
          if ( *(_BYTE *)(v12 + 2) )
            goto LABEL_202;
          goto LABEL_111;
        }
        v37 = 0LL;
        v84 = 0;
        if ( *(_DWORD *)(v12 + 20) )
          goto LABEL_202;
        v38 = 0;
        v87 = *(_DWORD *)(v12 + 56);
        if ( !v87 )
          goto LABEL_108;
        while ( 1 )
        {
          v6 = *(unsigned int *)(v12 + 4LL * v38 + 120);
          if ( (unsigned int)v6 >= 0x80 )
          {
            v39 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v6 < (unsigned int)v39 )
            {
              v40 = (unsigned int)v6;
              v41 = *(_DWORD *)(v6 + v12) - 64;
              if ( v41 )
              {
                v6 = (unsigned int)(v41 - 1);
                if ( (_DWORD)v6 )
                {
                  if ( (_DWORD)v6 == 1 )
                  {
                    v6 = v40 + 40;
                    if ( v40 + 40 <= v39 )
                    {
                      if ( *(_DWORD *)(v40 + v12 + 12) )
                        v37 = (char *)(v40 + v12 + 32);
                      v32 = *(_BYTE **)(v40 + v12 + 24);
LABEL_106:
                      v33 = *(_BYTE *)(v40 + v12 + 9);
                      v31 = *(_BYTE *)(v40 + v12 + 8);
LABEL_107:
                      v5 = -1073741789;
LABEL_108:
                      if ( !v37 )
                        goto LABEL_202;
                      v42 = *v37;
                      v35 = 0;
LABEL_111:
                      LOBYTE(v6) = v42 - 8;
                      if ( (v6 & 0x5D) != 0 )
                        goto LABEL_202;
                      v43 = *(_BYTE *)(v12 + 3);
                      if ( v43 == 1 || !v32 || !v33 )
                        goto LABEL_130;
                      LOBYTE(v12) = 0;
                      v6 = (unsigned __int64)&v32[v33];
                      v44 = v32 + 8;
                      if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v44 <= v6 )
                        {
                          LOBYTE(v12) = 1;
                          v35 = v32[2];
                          v34 = v32[1] & 0xF;
                          v36 = v32[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v44 <= v6 )
                        {
                          v34 = v32[2] & 0xF;
                          v45 = v33;
                          if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
                            v45 = (unsigned __int8)v32[7] + 8;
                          v6 = (unsigned __int64)(v32 + 13);
                          v12 = (unsigned __int64)&v32[v45];
                          if ( (unsigned __int64)(v32 + 13) > v12 )
                            v81 = 0;
                          else
                            v81 = v32[12];
                          if ( (unsigned __int64)(v32 + 14) <= v12 )
                            v36 = *(_BYTE *)v6;
                          LOBYTE(v12) = 1;
                        }
                        v35 = v81;
                      }
                      if ( (_BYTE)v12 )
                      {
                        LOBYTE(v2) = v35;
                        v46 = v36;
                      }
                      else
                      {
LABEL_130:
                        v34 = 0;
                        v46 = 0;
                      }
                      v79 = a2;
                      v78 = v46;
                      v77 = v2;
                      v76 = v34;
                      v75 = v31;
                      v74 = v43;
                      v29 = (const GUID *)&v90;
LABEL_66:
                      sub_140052E64(v6, v12, v29, a2, *(_DWORD *)(a2 + 48), v74, v75, v76, v77, v78, v79);
                      goto LABEL_202;
                    }
                  }
                }
                else
                {
                  v6 = v40 + 56;
                  if ( v40 + 56 <= v39 )
                  {
                    v84 = 1;
                    if ( *(_BYTE *)(v40 + v12 + 10) )
                      v37 = (char *)(v40 + v12 + 24);
                    v31 = *(_BYTE *)(v40 + v12 + 8);
                    v32 = *(_BYTE **)(v40 + v12 + 16);
                    v33 = *(_BYTE *)(v40 + v12 + 9);
                  }
                }
              }
              else
              {
                v6 = v40 + 40;
                if ( v40 + 40 <= v39 )
                {
                  if ( *(_BYTE *)(v40 + v12 + 10) )
                    v37 = (char *)(v40 + v12 + 24);
                  v32 = *(_BYTE **)(v40 + v12 + 16);
                  goto LABEL_106;
                }
              }
              if ( v84 )
                goto LABEL_107;
            }
          }
          if ( ++v38 >= v87 )
            goto LABEL_107;
        }
      }
      if ( *(_BYTE *)v7 != 27 )
        goto LABEL_202;
      if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_202;
        v30 = *(int **)(a2 + 56);
        if ( v30 )
          v2 = *v30;
        v9 = (const GUID *)&v90;
        goto LABEL_12;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_202;
      v10 = (const GUID *)&v90;
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_202;
    v10 = (const GUID *)&v90;
LABEL_134:
    v11 = &stru_140148B18;
    goto LABEL_135;
  }
  v4 = byte_140168DAA == 0;
  v5 = -1073741808;
  *(_DWORD *)(a2 + 48) = -1073741808;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v4 )
    goto LABEL_202;
  v89 = 0LL;
  IoGetActivityIdIrp(a2, &v89);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_202;
    v10 = (const GUID *)&v89;
    goto LABEL_134;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_202;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_202;
      v8 = *(int **)(a2 + 56);
      if ( v8 )
        v2 = *v8;
      v9 = (const GUID *)&v89;
LABEL_12:
      sub_140056AB0(v6, v7, v9, a2, v2, *(_DWORD *)(a2 + 48));
      goto LABEL_202;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_202;
    v10 = (const GUID *)&v89;
LABEL_15:
    v11 = &stru_140149FE8;
LABEL_135:
    sub_140052F3C(v6, v11, v10, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_202;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_202;
  v12 = *(_QWORD *)(v7 + 8);
  v13 = 0;
  v14 = 0LL;
  v80 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( *(_BYTE *)(v12 + 2) )
      goto LABEL_202;
LABEL_45:
    LOBYTE(v6) = v24 - 8;
    if ( (v6 & 0x5D) != 0 )
      goto LABEL_202;
    v25 = *(_BYTE *)(v12 + 3);
    if ( v25 == 1 || !v14 || !v15 )
      goto LABEL_64;
    LOBYTE(v12) = 0;
    v6 = (unsigned __int64)&v14[v15];
    v26 = v14 + 8;
    if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v26 <= v6 )
      {
        LOBYTE(v12) = 1;
        v17 = v14[2];
        v16 = v14[1] & 0xF;
        v18 = v14[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v26 <= v6 )
      {
        v16 = v14[2] & 0xF;
        v27 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v27 = (unsigned __int8)v14[7] + 8;
        v6 = (unsigned __int64)(v14 + 13);
        v12 = (unsigned __int64)&v14[v27];
        if ( (unsigned __int64)(v14 + 13) > v12 )
          v80 = 0;
        else
          v80 = v14[12];
        if ( (unsigned __int64)(v14 + 14) <= v12 )
          v18 = *(_BYTE *)v6;
        LOBYTE(v12) = 1;
      }
      v17 = v80;
    }
    if ( (_BYTE)v12 )
    {
      LOBYTE(v2) = v17;
      v28 = v18;
    }
    else
    {
LABEL_64:
      v16 = 0;
      v28 = 0;
    }
    v79 = a2;
    v78 = v28;
    v77 = v2;
    v76 = v16;
    v75 = v13;
    v74 = v25;
    v29 = (const GUID *)&v89;
    goto LABEL_66;
  }
  v19 = 0LL;
  v83 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_202;
  v20 = 0;
  v86 = *(_DWORD *)(v12 + 56);
  if ( !v86 )
    goto LABEL_42;
  while ( 1 )
  {
    v6 = *(unsigned int *)(v12 + 4LL * v20 + 120);
    if ( (unsigned int)v6 >= 0x80 )
    {
      v21 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v6 < (unsigned int)v21 )
        break;
    }
LABEL_35:
    if ( ++v20 >= v86 )
      goto LABEL_41;
  }
  v22 = (unsigned int)v6;
  v23 = *(_DWORD *)(v6 + v12) - 64;
  if ( v23 )
  {
    v6 = (unsigned int)(v23 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v6 = v22 + 40;
        if ( v22 + 40 <= v21 )
        {
          if ( *(_DWORD *)(v22 + v12 + 12) )
            v19 = (char *)(v22 + v12 + 32);
          v14 = *(_BYTE **)(v22 + v12 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v6 = v22 + 56;
      if ( v22 + 56 <= v21 )
      {
        v83 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    goto LABEL_34;
  }
  v6 = v22 + 40;
  if ( v22 + 40 > v21 )
  {
LABEL_34:
    if ( v83 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_40:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_41:
  v5 = -1073741808;
LABEL_42:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
    goto LABEL_45;
  }
LABEL_202:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
