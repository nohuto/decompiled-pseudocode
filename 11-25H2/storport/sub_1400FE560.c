/*
 * XREFs of sub_1400FE560 @ 0x1400FE560
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400FE560(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ebx
  unsigned int v8; // edx
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  unsigned int v15; // edx
  bool v16; // zf
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int *v20; // rax
  __int64 v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  unsigned __int64 v23; // rdx
  char v24; // r14
  unsigned __int8 v25; // si
  _BYTE *v26; // r9
  unsigned __int8 v27; // r11
  char v28; // r13
  char *v29; // rsi
  char v30; // r15
  unsigned int v31; // r12d
  __int64 v32; // r14
  __int64 v33; // rcx
  unsigned __int64 v34; // r10
  __int64 v35; // r8
  int v36; // ecx
  int v37; // ecx
  char v38; // r10
  char v39; // cl
  char v40; // r8
  _BYTE *v41; // rcx
  _BYTE *v42; // rax
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  char v45; // al
  unsigned __int8 v46; // al
  char v47; // al
  __int64 v48; // rcx
  char *v49; // rsi
  _QWORD **v50; // r13
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  _QWORD *v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  const EVENT_DESCRIPTOR *v58; // rdx
  unsigned __int64 v59; // rdx
  char v60; // si
  char v61; // r15
  unsigned __int8 v62; // r14
  _BYTE *v63; // r9
  unsigned __int8 v64; // r11
  char *v65; // rsi
  unsigned int v66; // r12d
  __int64 v67; // r14
  __int64 v68; // rcx
  unsigned __int64 v69; // r10
  __int64 v70; // r8
  int v71; // ecx
  int v72; // ecx
  char v73; // r10
  char v74; // cl
  char v75; // r8
  _BYTE *v76; // rcx
  _BYTE *v77; // rax
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  char v80; // al
  unsigned __int8 v81; // al
  char v82; // al
  __int64 v83; // rcx
  KIRQL v84; // r8
  _QWORD **v85; // rdx
  _QWORD *v86; // rcx
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rbx
  __int64 v90; // [rsp+28h] [rbp-39h]
  __int64 v91; // [rsp+30h] [rbp-31h]
  __int64 v92; // [rsp+38h] [rbp-29h]
  __int64 v93; // [rsp+40h] [rbp-21h]
  __int64 v94; // [rsp+48h] [rbp-19h]
  __int64 v95; // [rsp+50h] [rbp-11h]
  char v96; // [rsp+68h] [rbp+7h]
  char v97; // [rsp+68h] [rbp+7h]
  unsigned __int8 v98; // [rsp+69h] [rbp+8h]
  unsigned __int8 v99; // [rsp+69h] [rbp+8h]
  char v100; // [rsp+6Ah] [rbp+9h]
  char v101; // [rsp+6Ah] [rbp+9h]
  char *Context; // [rsp+70h] [rbp+Fh]
  GUID v103; // [rsp+78h] [rbp+17h] BYREF

  if ( a3 )
  {
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
    v4 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
    if ( ((v4 >> 9) & 7) != 0 )
    {
      if ( ((v4 >> 9) & 7) != 1 )
      {
        if ( ((v4 >> 9) & 7) != 2 )
          goto LABEL_11;
        v5 = v4 >> 1;
        switch ( (unsigned __int8)v5 )
        {
          case 0x80u:
            goto LABEL_11;
          case 0x81u:
            goto LABEL_11;
          case 0x82u:
            goto LABEL_11;
          case 0x83u:
            goto LABEL_11;
          case 0x84u:
            goto LABEL_11;
        }
        v6 = (unsigned __int8)v5 - 133;
        if ( (unsigned __int8)v5 == 133 )
          goto LABEL_11;
LABEL_84:
        if ( v6 == 1 )
          goto LABEL_85;
LABEL_11:
        v7 = -1073741435;
        goto LABEL_99;
      }
      v8 = v4 >> 1;
      if ( (unsigned __int8)v8 > 0x80u )
      {
        if ( (unsigned __int8)v8 == 129 )
          goto LABEL_26;
        v12 = (unsigned __int8)v8 - 130;
        if ( (unsigned __int8)v8 != 130 )
          goto LABEL_73;
      }
      else
      {
        if ( (unsigned __int8)v8 == 128 )
          goto LABEL_26;
        if ( (unsigned __int8)v8 <= 0x11u )
        {
          if ( (unsigned __int8)v8 != 17 )
          {
            if ( (unsigned __int8)v8 <= 9u )
            {
              if ( (unsigned __int8)v8 == 9
                || !(_BYTE)v8
                || (unsigned __int8)v8 == 1
                || (unsigned __int8)v8 == 2
                || (unsigned __int8)v8 == 3 )
              {
                goto LABEL_26;
              }
              v10 = (unsigned __int8)v8 - 5;
              v9 = (unsigned __int8)v8 == 5;
LABEL_23:
              if ( v9 )
                goto LABEL_26;
              v11 = v10 - 1;
              if ( !v11 )
                goto LABEL_26;
              v12 = v11 - 1;
              if ( !v12 )
                goto LABEL_26;
LABEL_73:
              v16 = v12 == 1;
LABEL_92:
              if ( !v16 )
                goto LABEL_11;
LABEL_26:
              v7 = -1073741808;
              goto LABEL_99;
            }
            if ( (unsigned __int8)v8 == 10 )
              goto LABEL_26;
            if ( (unsigned __int8)v8 != 11 )
            {
              if ( (unsigned __int8)v8 == 12
                || (unsigned __int8)v8 == 13
                || (unsigned __int8)v8 == 14
                || (unsigned __int8)v8 == 15 )
              {
                goto LABEL_26;
              }
              if ( (unsigned __int8)v8 != 16 )
                goto LABEL_11;
            }
          }
          v7 = -2147483210;
          goto LABEL_99;
        }
        if ( (unsigned __int8)v8 <= 0x1Au )
        {
          if ( (unsigned __int8)v8 != 26 && (unsigned __int8)v8 != 18 && (unsigned __int8)v8 != 19 )
          {
            if ( (unsigned __int8)v8 == 20 )
            {
              v7 = -1073741800;
              goto LABEL_99;
            }
            if ( (unsigned __int8)v8 == 21 )
              goto LABEL_11;
            if ( (unsigned __int8)v8 != 22 )
            {
              v14 = (unsigned __int8)v8 - 24;
              v13 = (unsigned __int8)v8 == 24;
LABEL_43:
              if ( !v13 && v14 != 1 )
                goto LABEL_11;
            }
          }
LABEL_45:
          v7 = -1073741436;
          goto LABEL_99;
        }
        if ( (unsigned __int8)v8 == 27 )
        {
          v7 = -1073741637;
          goto LABEL_99;
        }
        if ( (unsigned __int8)v8 == 28 )
          goto LABEL_26;
        if ( (unsigned __int8)v8 != 30 )
        {
          v10 = (unsigned __int8)v8 - 31;
          v9 = (unsigned __int8)v8 == 31;
          goto LABEL_23;
        }
      }
LABEL_85:
      v7 = -1073741790;
      goto LABEL_99;
    }
    v15 = v4 >> 1;
    if ( (unsigned __int8)v15 > 0x80u )
    {
      if ( (unsigned __int8)v15 == 129 )
        goto LABEL_26;
      v12 = (unsigned __int8)v15 - 130;
      if ( (unsigned __int8)v15 != 130 )
        goto LABEL_73;
      v7 = -1073741661;
    }
    else
    {
      if ( (unsigned __int8)v15 == 128 )
        goto LABEL_26;
      if ( (unsigned __int8)v15 <= 0xEu )
      {
        if ( (unsigned __int8)v15 == 14 )
          goto LABEL_26;
        if ( (unsigned __int8)v15 > 7u )
        {
          if ( (unsigned __int8)v15 != 8 && (unsigned __int8)v15 != 9 && (unsigned __int8)v15 != 10 )
          {
            if ( (unsigned __int8)v15 == 11 )
              goto LABEL_26;
            v12 = (unsigned __int8)v15 - 12;
            if ( (unsigned __int8)v15 == 12 )
            {
              v7 = -1073740758;
              goto LABEL_99;
            }
            goto LABEL_73;
          }
        }
        else if ( (unsigned __int8)v15 != 7 )
        {
          if ( !(_BYTE)v15 )
          {
            v7 = 0;
            goto LABEL_99;
          }
          if ( (unsigned __int8)v15 == 1 || (unsigned __int8)v15 == 2 )
            goto LABEL_26;
          if ( (unsigned __int8)v15 == 3 || (unsigned __int8)v15 == 4 )
            goto LABEL_11;
          v14 = (unsigned __int8)v15 - 5;
          v13 = (unsigned __int8)v15 == 5;
          goto LABEL_43;
        }
LABEL_75:
        v7 = -1073741248;
        goto LABEL_99;
      }
      if ( (unsigned __int8)v15 <= 0x16u )
      {
        if ( (unsigned __int8)v15 == 22
          || (unsigned __int8)v15 == 15
          || (unsigned __int8)v15 == 16
          || (unsigned __int8)v15 == 17
          || (unsigned __int8)v15 == 18
          || (unsigned __int8)v15 == 19 )
        {
          goto LABEL_26;
        }
        v6 = (unsigned __int8)v15 - 20;
        if ( (unsigned __int8)v15 != 20 )
          goto LABEL_84;
        goto LABEL_45;
      }
      if ( (unsigned __int8)v15 == 24 )
        goto LABEL_26;
      if ( (unsigned __int8)v15 != 25 && (unsigned __int8)v15 != 26 )
      {
        if ( (unsigned __int8)v15 != 27 )
        {
          if ( (unsigned __int8)v15 == 28 )
            goto LABEL_11;
          v16 = (unsigned __int8)v15 == 30;
          goto LABEL_92;
        }
        goto LABEL_75;
      }
      v7 = -1073741643;
    }
  }
  else
  {
    v7 = -1073740757;
  }
LABEL_99:
  v17 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  Context = *(char **)(*(_QWORD *)a2 + 4216LL);
  *(_QWORD *)(v17 + 56) = 0LL;
  *(_DWORD *)(v17 + 48) = v7;
  memset_0(*(void **)a2, 0, 0x10B0uLL);
  *(_DWORD *)(a2 + 48) &= ~1u;
  v9 = byte_140168DAA == 0;
  *(_BYTE *)(v17 + 141) = -84;
  *(_DWORD *)(v17 + 48) = v7;
  if ( !v9 )
  {
    v103 = 0LL;
    IoGetActivityIdIrp(v17, &v103);
    v19 = *(_QWORD *)(v17 + 184);
    switch ( *(_BYTE *)v19 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) != 0 )
        {
          v22 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
          goto LABEL_165;
        }
        break;
      case 0xF:
        if ( byte_1401694F1 < 0 )
        {
          v23 = *(_QWORD *)(v19 + 8);
          v24 = 0;
          v25 = 0;
          v96 = 0;
          v26 = 0LL;
          v100 = 0;
          v27 = 0;
          v98 = 0;
          v28 = 0;
          if ( *(_BYTE *)(v23 + 2) == 40 )
          {
            v29 = 0LL;
            v30 = 0;
            if ( *(_DWORD *)(v23 + 20) )
              break;
            v31 = *(_DWORD *)(v23 + 56);
            v32 = 0LL;
            if ( v31 )
            {
              do
              {
                v33 = *(unsigned int *)(v23 + 4 * v32 + 120);
                if ( (unsigned int)v33 >= 0x80 )
                {
                  v34 = *(unsigned int *)(v23 + 16);
                  if ( (unsigned int)v33 < (unsigned int)v34 )
                  {
                    v35 = (unsigned int)v33;
                    v36 = *(_DWORD *)(v33 + v23) - 64;
                    if ( v36 )
                    {
                      v37 = v36 - 1;
                      if ( v37 )
                      {
                        if ( v37 == 1 && v35 + 40 <= v34 )
                        {
                          if ( *(_DWORD *)(v35 + v23 + 12) )
                            v29 = (char *)(v35 + v23 + 32);
                          v26 = *(_BYTE **)(v35 + v23 + 24);
LABEL_125:
                          v38 = *(_BYTE *)(v35 + v23 + 8);
                          v27 = *(_BYTE *)(v35 + v23 + 9);
                          goto LABEL_134;
                        }
                      }
                      else if ( v35 + 56 <= v34 )
                      {
                        v30 = 1;
                        if ( *(_BYTE *)(v35 + v23 + 10) )
                          v29 = (char *)(v35 + v23 + 24);
                        v26 = *(_BYTE **)(v35 + v23 + 16);
                        v27 = *(_BYTE *)(v35 + v23 + 9);
                        v96 = *(_BYTE *)(v35 + v23 + 8);
                      }
                    }
                    else if ( v35 + 40 <= v34 )
                    {
                      if ( *(_BYTE *)(v35 + v23 + 10) )
                        v29 = (char *)(v35 + v23 + 24);
                      v26 = *(_BYTE **)(v35 + v23 + 16);
                      goto LABEL_125;
                    }
                    if ( v30 )
                      break;
                  }
                }
                v32 = (unsigned int)(v32 + 1);
              }
              while ( (unsigned int)v32 < v31 );
              v38 = v96;
            }
            else
            {
              v38 = 0;
            }
LABEL_134:
            if ( !v29 )
              break;
            v39 = *v29;
            v24 = 0;
            v25 = 0;
          }
          else
          {
            v39 = *(_BYTE *)(v23 + 72);
            v26 = *(_BYTE **)(v23 + 32);
            v27 = *(_BYTE *)(v23 + 11);
            v38 = *(_BYTE *)(v23 + 4);
            if ( *(_BYTE *)(v23 + 2) )
              break;
          }
          if ( ((v39 - 8) & 0x5D) == 0 )
          {
            v40 = *(_BYTE *)(v23 + 3);
            if ( v40 == 1 || !v26 || !v27 )
              goto LABEL_161;
            LOBYTE(v23) = 0;
            v41 = &v26[v27];
            v42 = v26 + 8;
            if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
            {
              if ( v42 <= v41 )
              {
                LOBYTE(v23) = 1;
                v24 = v26[2];
                v28 = v26[1] & 0xF;
                v25 = v26[3];
              }
            }
            else
            {
              if ( v42 <= v41 )
              {
                v23 = (unsigned __int64)(v26 + 13);
                v28 = v26[2] & 0xF;
                v43 = v27;
                if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
                  v43 = (unsigned __int8)v26[7] + 8;
                v44 = (unsigned __int64)&v26[v43];
                if ( v23 > v44 )
                  v45 = 0;
                else
                  v45 = v26[12];
                v100 = v45;
                if ( (unsigned __int64)(v26 + 14) > v44 )
                  v46 = 0;
                else
                  v46 = *(_BYTE *)v23;
                v98 = v46;
                LOBYTE(v23) = 1;
              }
              v25 = v98;
              v24 = v100;
            }
            if ( (_BYTE)v23 )
            {
              v47 = v24;
              v48 = v25;
            }
            else
            {
LABEL_161:
              v28 = 0;
              v47 = 0;
              v48 = 0LL;
            }
            sub_140052E64(v48, v23, &v103, v17, *(_DWORD *)(v17 + 48), v40, v38, v28, v47, v48, v17);
          }
        }
        break;
      case 0x1B:
        if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v20 = *(unsigned int **)(v17 + 56);
            if ( v20 )
              v21 = *v20;
            else
              v21 = 0LL;
            sub_140056AB0(v21, v19, &v103, v17, v21, *(_DWORD *)(v17 + 48));
          }
          break;
        }
        if ( (byte_1401694F2 & 0x20) != 0 )
        {
          v22 = &stru_140149FE8;
LABEL_165:
          sub_140052F3C(v18, v22, &v103, v17, *(_DWORD *)(v17 + 48));
        }
        break;
    }
  }
  IofCompleteRequest((PIRP)v17, 1);
  v49 = Context;
  v50 = (_QWORD **)(Context + 560);
  while ( 1 )
  {
    v51 = *v50;
    if ( *v50 == v50 )
      break;
    if ( (_QWORD **)v51[1] != v50 || (v52 = (_QWORD *)*v51, *(_QWORD **)(*v51 + 8LL) != v51) )
LABEL_245:
      __fastfail(3u);
    *v50 = v52;
    v53 = v51 - 21;
    v52[1] = v50;
    v51[1] = v51;
    *v51 = v51;
    v53[7] = 0LL;
    *((_DWORD *)v53 + 12) = v7;
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v49 + 15));
    v9 = byte_140168DAA == 0;
    *((_BYTE *)v53 + 141) = -84;
    *((_DWORD *)v53 + 12) = v7;
    if ( !v9 )
    {
      v103 = 0LL;
      IoGetActivityIdIrp(v53, &v103);
      v55 = v53[23];
      switch ( *(_BYTE *)v55 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) != 0 )
          {
            v58 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
LABEL_183:
            LODWORD(v90) = *((_DWORD *)v53 + 12);
            sub_140052F3C(v54, v58, &v103, v53, v90);
          }
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            break;
          v59 = *(_QWORD *)(v55 + 8);
          v60 = 0;
          v61 = 0;
          v101 = 0;
          v62 = 0;
          v63 = 0LL;
          v97 = 0;
          v64 = 0;
          v99 = 0;
          if ( *(_BYTE *)(v59 + 2) == 40 )
          {
            v65 = 0LL;
            if ( !*(_DWORD *)(v59 + 20) )
            {
              v66 = *(_DWORD *)(v59 + 56);
              v67 = 0LL;
              if ( v66 )
              {
                do
                {
                  v68 = *(unsigned int *)(v59 + 4 * v67 + 120);
                  if ( (unsigned int)v68 >= 0x80 )
                  {
                    v69 = *(unsigned int *)(v59 + 16);
                    if ( (unsigned int)v68 < (unsigned int)v69 )
                    {
                      v70 = (unsigned int)v68;
                      v71 = *(_DWORD *)(v68 + v59) - 64;
                      if ( v71 )
                      {
                        v72 = v71 - 1;
                        if ( v72 )
                        {
                          if ( v72 == 1 && v70 + 40 <= v69 )
                          {
                            if ( *(_DWORD *)(v70 + v59 + 12) )
                              v65 = (char *)(v70 + v59 + 32);
                            v63 = *(_BYTE **)(v70 + v59 + 24);
LABEL_197:
                            v73 = *(_BYTE *)(v70 + v59 + 8);
                            v64 = *(_BYTE *)(v70 + v59 + 9);
                            goto LABEL_206;
                          }
                        }
                        else if ( v70 + 56 <= v69 )
                        {
                          v61 = 1;
                          if ( *(_BYTE *)(v70 + v59 + 10) )
                            v65 = (char *)(v70 + v59 + 24);
                          v63 = *(_BYTE **)(v70 + v59 + 16);
                          v64 = *(_BYTE *)(v70 + v59 + 9);
                          v101 = *(_BYTE *)(v70 + v59 + 8);
                        }
                      }
                      else if ( v70 + 40 <= v69 )
                      {
                        if ( *(_BYTE *)(v70 + v59 + 10) )
                          v65 = (char *)(v70 + v59 + 24);
                        v63 = *(_BYTE **)(v70 + v59 + 16);
                        goto LABEL_197;
                      }
                      if ( v61 )
                        break;
                    }
                  }
                  v67 = (unsigned int)(v67 + 1);
                }
                while ( (unsigned int)v67 < v66 );
                v73 = v101;
              }
              else
              {
                v73 = 0;
              }
LABEL_206:
              if ( v65 )
              {
                v74 = *v65;
                v60 = 0;
                v62 = 0;
                v61 = 0;
LABEL_213:
                if ( ((v74 - 8) & 0x5D) == 0 )
                {
                  v75 = *(_BYTE *)(v59 + 3);
                  if ( v75 == 1 || !v63 || !v64 )
                    goto LABEL_233;
                  LOBYTE(v59) = 0;
                  v76 = &v63[v64];
                  v77 = v63 + 8;
                  if ( (unsigned __int8)((*v63 & 0x7F) - 114) <= 1u )
                  {
                    if ( v77 <= v76 )
                    {
                      LOBYTE(v59) = 1;
                      v61 = v63[2];
                      v60 = v63[1] & 0xF;
                      v62 = v63[3];
                    }
                  }
                  else
                  {
                    if ( v77 <= v76 )
                    {
                      v59 = (unsigned __int64)(v63 + 13);
                      v60 = v63[2] & 0xF;
                      v78 = v64;
                      if ( (unsigned int)(unsigned __int8)v63[7] + 8 <= v64 )
                        v78 = (unsigned __int8)v63[7] + 8;
                      v79 = (unsigned __int64)&v63[v78];
                      if ( v59 > v79 )
                        v80 = 0;
                      else
                        v80 = v63[12];
                      v97 = v80;
                      if ( (unsigned __int64)(v63 + 14) > v79 )
                        v81 = 0;
                      else
                        v81 = *(_BYTE *)v59;
                      v99 = v81;
                      LOBYTE(v59) = 1;
                    }
                    v62 = v99;
                    v61 = v97;
                  }
                  if ( (_BYTE)v59 )
                  {
                    v82 = v61;
                    v83 = v62;
                  }
                  else
                  {
LABEL_233:
                    v60 = 0;
                    v82 = 0;
                    v83 = 0LL;
                  }
                  LOBYTE(v95) = v83;
                  LOBYTE(v94) = v82;
                  LOBYTE(v93) = v60;
                  LOBYTE(v92) = v73;
                  LOBYTE(v91) = v75;
                  LODWORD(v90) = *((_DWORD *)v53 + 12);
                  sub_140052E64(v83, v59, &v103, v53, v90, v91, v92, v93, v94, v95, v53);
                }
              }
            }
          }
          else
          {
            v74 = *(_BYTE *)(v59 + 72);
            v63 = *(_BYTE **)(v59 + 32);
            v64 = *(_BYTE *)(v59 + 11);
            v73 = *(_BYTE *)(v59 + 4);
            if ( !*(_BYTE *)(v59 + 2) )
              goto LABEL_213;
          }
          v49 = Context;
          break;
        case 0x1B:
          if ( *(_BYTE *)(v55 + 1) != 7 || *(_DWORD *)(v55 + 8) )
          {
            if ( (byte_1401694F2 & 0x20) == 0 )
              break;
            v58 = &stru_140149FE8;
            goto LABEL_183;
          }
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v56 = (unsigned int *)v53[7];
            if ( v56 )
              v57 = *v56;
            else
              v57 = 0LL;
            LODWORD(v91) = *((_DWORD *)v53 + 12);
            LODWORD(v90) = v57;
            sub_140056AB0(v57, v55, &v103, v53, v90, v91);
          }
          break;
        default:
          break;
      }
    }
    IofCompleteRequest((PIRP)v53, 1);
  }
  v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v49 + 68);
  v85 = (_QWORD **)(v49 + 584);
  while ( 1 )
  {
    v86 = *v85;
    if ( *v85 == v85 )
      break;
    if ( (_QWORD **)v86[1] != v85 )
      goto LABEL_245;
    v87 = (_QWORD *)*v86;
    if ( *(_QWORD **)(*v86 + 8LL) != v86 )
      goto LABEL_245;
    *v85 = v87;
    v87[1] = v85;
    v88 = (_QWORD *)*((_QWORD *)Context + 71);
    if ( (_QWORD **)*v88 != v50 )
      goto LABEL_245;
    *v86 = v50;
    v86[1] = v88;
    *v88 = v86;
    *((_QWORD *)Context + 71) = v86;
  }
  v89 = *((_QWORD *)v49 + 72);
  *((_QWORD *)v49 + 72) = 0LL;
  *((_QWORD *)v49 + 69) = v89;
  KeReleaseSpinLock((PKSPIN_LOCK)v49 + 68, v84);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v49 + 15));
  if ( v89 )
    IoQueueWorkItemEx(*((PIO_WORKITEM *)v49 + 67), sub_1400FFA50, DelayedWorkQueue, v49);
}
