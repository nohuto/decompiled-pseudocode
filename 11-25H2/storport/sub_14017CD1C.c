/*
 * XREFs of sub_14017CD1C @ 0x14017CD1C
 * Callers:
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A1E68 @ 0x1400A1E68 (sub_1400A1E68.c)
 *     sub_1400A1EB8 @ 0x1400A1EB8 (sub_1400A1EB8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AD6C4 @ 0x1401AD6C4 (sub_1401AD6C4.c)
 */

__int64 __fastcall sub_14017CD1C(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v5; // r15d
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const GUID *v14; // r8
  const GUID *v15; // r8
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // si
  char v22; // r11
  char v23; // r12
  char *v24; // r11
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  const GUID *v33; // r8
  int *v34; // rax
  char v35; // r15
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // si
  char v39; // r11
  char v40; // r12
  char *v41; // r11
  unsigned int *v42; // r13
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  unsigned int v51; // r14d
  __int64 v52; // rax
  _BYTE *v53; // r9
  _BYTE *v54; // rax
  _BYTE *v55; // r9
  _QWORD *v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  int *v59; // rax
  const EVENT_DESCRIPTOR *v60; // rdx
  unsigned __int64 v61; // rdx
  char v62; // r15
  _BYTE *v63; // r9
  unsigned __int8 v64; // r10
  char v65; // si
  char v66; // r11
  char v67; // r12
  char *v68; // r11
  unsigned int *v69; // r13
  __int64 v70; // rax
  unsigned __int64 v71; // r14
  char v72; // cl
  char v73; // r8
  _BYTE *v74; // rax
  unsigned int v75; // eax
  char v76; // al
  unsigned __int64 v77; // rcx
  __int64 v78; // rdx
  int *v79; // rax
  const EVENT_DESCRIPTOR *v80; // rdx
  unsigned __int64 v81; // rdx
  char v82; // r15
  _BYTE *v83; // r9
  unsigned __int8 v84; // r10
  char v85; // si
  char v86; // r11
  char v87; // r12
  char *v88; // r11
  unsigned int *v89; // r13
  __int64 v90; // rax
  unsigned __int64 v91; // r14
  char v92; // cl
  char v93; // r8
  _BYTE *v94; // rax
  unsigned int v95; // eax
  char v96; // al
  __int64 v97; // [rsp+20h] [rbp-79h]
  int v98; // [rsp+20h] [rbp-79h]
  __int64 v99; // [rsp+28h] [rbp-71h]
  char v100; // [rsp+28h] [rbp-71h]
  char v101; // [rsp+30h] [rbp-69h]
  char v102; // [rsp+38h] [rbp-61h]
  char v103; // [rsp+40h] [rbp-59h]
  char v104; // [rsp+48h] [rbp-51h]
  __int64 v105; // [rsp+50h] [rbp-49h]
  char v106; // [rsp+60h] [rbp-39h]
  char v107; // [rsp+60h] [rbp-39h]
  char v108; // [rsp+60h] [rbp-39h]
  char v109; // [rsp+60h] [rbp-39h]
  char v110; // [rsp+61h] [rbp-38h]
  char v111; // [rsp+61h] [rbp-38h]
  char v112; // [rsp+61h] [rbp-38h]
  char v113; // [rsp+61h] [rbp-38h]
  int v114; // [rsp+64h] [rbp-35h]
  int v115; // [rsp+64h] [rbp-35h]
  int v116; // [rsp+64h] [rbp-35h]
  int v117; // [rsp+64h] [rbp-35h]
  unsigned int v118; // [rsp+68h] [rbp-31h]
  unsigned int v119; // [rsp+68h] [rbp-31h]
  unsigned int v120; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v121; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v122; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v123; // [rsp+6Ch] [rbp-2Dh]
  GUID v124; // [rsp+70h] [rbp-29h] BYREF
  __int128 v125; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v126[16]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v127[24]; // [rsp+A0h] [rbp+7h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_DWORD **)(a1 + 24);
  if ( *v6 == 1094997074 )
  {
    v7 = v6 + 94;
  }
  else
  {
    if ( *v6 != 1314275652 )
      goto LABEL_231;
    v7 = v6 + 42;
  }
  if ( !v7 )
  {
LABEL_231:
    v10 = byte_140168DAA == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v10 )
      goto LABEL_297;
    v124 = 0LL;
    IoGetActivityIdIrp(a2, &v124);
    v78 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v78 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_297;
        v77 = *(unsigned int *)(a2 + 48);
        v80 = &stru_140148B18;
        v98 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_297;
        v81 = *(_QWORD *)(v78 + 8);
        v82 = 0;
        v83 = 0LL;
        v109 = 0;
        v84 = 0;
        v85 = 0;
        v86 = 0;
        v87 = 0;
        if ( *(_BYTE *)(v81 + 2) != 40 )
        {
          v92 = *(_BYTE *)(v81 + 72);
          v83 = *(_BYTE **)(v81 + 32);
          v84 = *(_BYTE *)(v81 + 11);
          v82 = *(_BYTE *)(v81 + 4);
          if ( !*(_BYTE *)(v81 + 2) )
            goto LABEL_273;
          goto LABEL_297;
        }
        v88 = 0LL;
        v113 = 0;
        if ( *(_DWORD *)(v81 + 20) )
          goto LABEL_297;
        v77 = 0LL;
        v117 = 0;
        v123 = *(_DWORD *)(v81 + 56);
        if ( !v123 )
          goto LABEL_270;
        v89 = (unsigned int *)(v81 + 120);
        while ( 1 )
        {
          v90 = *v89;
          if ( (unsigned int)v90 >= 0x80 )
          {
            v91 = *(unsigned int *)(v81 + 16);
            if ( (unsigned int)v90 < (unsigned int)v91 )
            {
              if ( *(_DWORD *)(v90 + v81) == 64 )
              {
                v77 = v90 + 40;
                if ( v90 + 40 <= v91 )
                {
                  if ( *(_BYTE *)(v90 + v81 + 10) )
                    v88 = (char *)(v90 + v81 + 24);
                  v83 = *(_BYTE **)(v90 + v81 + 16);
LABEL_269:
                  v84 = *(_BYTE *)(v90 + v81 + 9);
                  v82 = *(_BYTE *)(v90 + v81 + 8);
LABEL_270:
                  if ( v88 )
                  {
                    v92 = *v88;
                    v86 = 0;
LABEL_273:
                    LOBYTE(v77) = v92 - 8;
                    if ( (v77 & 0x5D) == 0 )
                    {
                      v93 = *(_BYTE *)(v81 + 3);
                      if ( v93 == 1 || !v83 || !v84 )
                        goto LABEL_292;
                      LOBYTE(v81) = 0;
                      v77 = (unsigned __int64)&v83[v84];
                      v94 = v83 + 8;
                      if ( (unsigned __int8)((*v83 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v94 <= v77 )
                        {
                          LOBYTE(v81) = 1;
                          v86 = v83[2];
                          v85 = v83[1] & 0xF;
                          v87 = v83[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v94 <= v77 )
                        {
                          v85 = v83[2] & 0xF;
                          v95 = v84;
                          if ( (unsigned int)(unsigned __int8)v83[7] + 8 <= v84 )
                            v95 = (unsigned __int8)v83[7] + 8;
                          v77 = (unsigned __int64)(v83 + 13);
                          v81 = (unsigned __int64)&v83[v95];
                          if ( (unsigned __int64)(v83 + 13) > v81 )
                            v109 = 0;
                          else
                            v109 = v83[12];
                          if ( (unsigned __int64)(v83 + 14) <= v81 )
                            v87 = *(_BYTE *)v77;
                          LOBYTE(v81) = 1;
                        }
                        v86 = v109;
                      }
                      if ( (_BYTE)v81 )
                      {
                        LOBYTE(v3) = v86;
                        v96 = v87;
                      }
                      else
                      {
LABEL_292:
                        v85 = 0;
                        v96 = 0;
                      }
                      sub_140052E64(v77, v81, &v124, a2, *(_DWORD *)(a2 + 48), v93, v82, v85, v3, v96, a2);
                    }
                  }
                  goto LABEL_297;
                }
              }
              else
              {
                v77 = (unsigned int)(*(_DWORD *)(v90 + v81) - 65);
                if ( *(_DWORD *)(v90 + v81) == 65 )
                {
                  v77 = v90 + 56;
                  if ( v90 + 56 <= v91 )
                  {
                    v113 = 1;
                    if ( *(_BYTE *)(v90 + v81 + 10) )
                      v88 = (char *)(v90 + v81 + 24);
                    v82 = *(_BYTE *)(v90 + v81 + 8);
                    v83 = *(_BYTE **)(v90 + v81 + 16);
                    v84 = *(_BYTE *)(v90 + v81 + 9);
                  }
                }
                else if ( *(_DWORD *)(v90 + v81) == 66 )
                {
                  v77 = v90 + 40;
                  if ( v90 + 40 <= v91 )
                  {
                    if ( *(_DWORD *)(v90 + v81 + 12) )
                      v88 = (char *)(v90 + v81 + 32);
                    v83 = *(_BYTE **)(v90 + v81 + 24);
                    goto LABEL_269;
                  }
                }
              }
              if ( v113 )
                goto LABEL_270;
              LODWORD(v77) = v117;
            }
          }
          v77 = (unsigned int)(v77 + 1);
          ++v89;
          v117 = v77;
          if ( (unsigned int)v77 >= v123 )
            goto LABEL_270;
        }
      case 0x1B:
        if ( *(_BYTE *)(v78 + 1) == 7 && !*(_DWORD *)(v78 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v79 = *(int **)(a2 + 56);
            if ( v79 )
              v3 = *v79;
            sub_140056AB0(v77, v78, &v124, a2, v3, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_297;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_297:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225485LL;
        }
        v80 = &stru_140149FE8;
        v98 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_297;
    }
    sub_140052F3C(v77, v80, &v124, a2, v98);
    goto LABEL_297;
  }
  v8 = (wchar_t *)sub_1400143E0(256LL, 512LL, 1414619474LL, *(_QWORD *)(a1 + 8));
  v9 = v8;
  if ( !v8 )
  {
    *(_BYTE *)(a2 + 141) = -84;
    if ( v5 <= 1 )
    {
      v10 = byte_140168DAA == 0;
      v118 = -1073741801;
      *(_DWORD *)(a2 + 48) = -1073741801;
      if ( v10 )
        goto LABEL_143;
      v124 = 0LL;
      IoGetActivityIdIrp(a2, &v124);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 != 14 )
      {
        if ( *(_BYTE *)v12 == 15 )
        {
          if ( byte_1401694F1 >= 0 )
            goto LABEL_143;
          v17 = *(_QWORD *)(v12 + 8);
          v35 = 0;
          v36 = 0LL;
          v107 = 0;
          v37 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          if ( *(_BYTE *)(v17 + 2) != 40 )
          {
            v45 = *(_BYTE *)(v17 + 72);
            v36 = *(_BYTE **)(v17 + 32);
            v37 = *(_BYTE *)(v17 + 11);
            v35 = *(_BYTE *)(v17 + 4);
            if ( *(_BYTE *)(v17 + 2) )
              goto LABEL_143;
            goto LABEL_118;
          }
          v41 = 0LL;
          v111 = 0;
          if ( *(_DWORD *)(v17 + 20) )
            goto LABEL_143;
          v11 = 0LL;
          v115 = 0;
          v121 = *(_DWORD *)(v17 + 56);
          if ( !v121 )
            goto LABEL_115;
          v42 = (unsigned int *)(v17 + 120);
          while ( 1 )
          {
            v43 = *v42;
            if ( (unsigned int)v43 >= 0x80 )
            {
              v44 = *(unsigned int *)(v17 + 16);
              if ( (unsigned int)v43 < (unsigned int)v44 )
              {
                if ( *(_DWORD *)(v43 + v17) == 64 )
                {
                  v11 = v43 + 40;
                  if ( v43 + 40 <= v44 )
                  {
                    if ( *(_BYTE *)(v43 + v17 + 10) )
                      v41 = (char *)(v43 + v17 + 24);
                    v36 = *(_BYTE **)(v43 + v17 + 16);
LABEL_114:
                    v37 = *(_BYTE *)(v43 + v17 + 9);
                    v35 = *(_BYTE *)(v43 + v17 + 8);
LABEL_115:
                    if ( !v41 )
                      goto LABEL_143;
                    v45 = *v41;
                    v39 = 0;
LABEL_118:
                    LOBYTE(v11) = v45 - 8;
                    if ( (v11 & 0x5D) != 0 )
                      goto LABEL_143;
                    v46 = *(_BYTE *)(v17 + 3);
                    if ( v46 == 1 || !v36 || !v37 )
                      goto LABEL_137;
                    LOBYTE(v17) = 0;
                    v11 = (unsigned __int64)&v36[v37];
                    v47 = v36 + 8;
                    if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v47 <= v11 )
                      {
                        LOBYTE(v17) = 1;
                        v39 = v36[2];
                        v38 = v36[1] & 0xF;
                        v40 = v36[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v47 <= v11 )
                      {
                        v38 = v36[2] & 0xF;
                        v48 = v37;
                        if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
                          v48 = (unsigned __int8)v36[7] + 8;
                        v11 = (unsigned __int64)(v36 + 13);
                        v17 = (unsigned __int64)&v36[v48];
                        if ( (unsigned __int64)(v36 + 13) > v17 )
                          v107 = 0;
                        else
                          v107 = v36[12];
                        if ( (unsigned __int64)(v36 + 14) <= v17 )
                          v40 = *(_BYTE *)v11;
                        LOBYTE(v17) = 1;
                      }
                      v39 = v107;
                    }
                    if ( (_BYTE)v17 )
                    {
                      LOBYTE(v3) = v39;
                      v49 = v40;
                    }
                    else
                    {
LABEL_137:
                      v38 = 0;
                      v49 = 0;
                    }
                    v105 = a2;
                    v104 = v49;
                    v103 = v3;
                    v102 = v38;
                    v101 = v35;
                    v100 = v46;
                    v33 = &v124;
LABEL_73:
                    sub_140052E64(v11, v17, v33, a2, *(_DWORD *)(a2 + 48), v100, v101, v102, v103, v104, v105);
                    goto LABEL_143;
                  }
                }
                else
                {
                  v11 = (unsigned int)(*(_DWORD *)(v43 + v17) - 65);
                  if ( *(_DWORD *)(v43 + v17) == 65 )
                  {
                    v11 = v43 + 56;
                    if ( v43 + 56 <= v44 )
                    {
                      v111 = 1;
                      if ( *(_BYTE *)(v43 + v17 + 10) )
                        v41 = (char *)(v43 + v17 + 24);
                      v35 = *(_BYTE *)(v43 + v17 + 8);
                      v36 = *(_BYTE **)(v43 + v17 + 16);
                      v37 = *(_BYTE *)(v43 + v17 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v43 + v17) == 66 )
                  {
                    v11 = v43 + 40;
                    if ( v43 + 40 <= v44 )
                    {
                      if ( *(_DWORD *)(v43 + v17 + 12) )
                        v41 = (char *)(v43 + v17 + 32);
                      v36 = *(_BYTE **)(v43 + v17 + 24);
                      goto LABEL_114;
                    }
                  }
                }
                if ( v111 )
                  goto LABEL_115;
                LODWORD(v11) = v115;
              }
            }
            v11 = (unsigned int)(v11 + 1);
            ++v42;
            v115 = v11;
            if ( (unsigned int)v11 >= v121 )
              goto LABEL_115;
          }
        }
        if ( *(_BYTE *)v12 != 27 )
          goto LABEL_143;
        if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_143;
          v34 = *(int **)(a2 + 56);
          if ( v34 )
            v3 = *v34;
          v14 = &v124;
LABEL_18:
          sub_140056AB0(v11, v12, v14, a2, v3, *(_DWORD *)(a2 + 48));
          goto LABEL_143;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_143;
        v15 = &v124;
        goto LABEL_21;
      }
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_143;
      v15 = &v124;
    }
    else
    {
      v10 = byte_140168DAA == 0;
      v118 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      if ( v10 )
        goto LABEL_143;
      v125 = 0LL;
      IoGetActivityIdIrp(a2, &v125);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 != 14 )
      {
        if ( *(_BYTE *)v12 == 15 )
        {
          if ( byte_1401694F1 >= 0 )
            goto LABEL_143;
          v17 = *(_QWORD *)(v12 + 8);
          v18 = 0;
          v19 = 0LL;
          v106 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          if ( *(_BYTE *)(v17 + 2) == 40 )
          {
            v24 = 0LL;
            v110 = 0;
            if ( *(_DWORD *)(v17 + 20) )
              goto LABEL_143;
            v11 = 0LL;
            v114 = 0;
            v120 = *(_DWORD *)(v17 + 56);
            if ( !v120 )
              goto LABEL_49;
            v25 = (unsigned int *)(v17 + 120);
            while ( 1 )
            {
              v26 = *v25;
              if ( (unsigned int)v26 >= 0x80 )
              {
                v27 = *(unsigned int *)(v17 + 16);
                if ( (unsigned int)v26 < (unsigned int)v27 )
                {
                  if ( *(_DWORD *)(v26 + v17) == 64 )
                  {
                    v11 = v26 + 40;
                    if ( v26 + 40 <= v27 )
                    {
                      if ( *(_BYTE *)(v26 + v17 + 10) )
                        v24 = (char *)(v26 + v17 + 24);
                      v19 = *(_BYTE **)(v26 + v17 + 16);
LABEL_48:
                      v20 = *(_BYTE *)(v26 + v17 + 9);
                      v18 = *(_BYTE *)(v26 + v17 + 8);
LABEL_49:
                      if ( v24 )
                      {
                        v28 = *v24;
                        v22 = 0;
                        goto LABEL_52;
                      }
                      goto LABEL_143;
                    }
                  }
                  else
                  {
                    v11 = (unsigned int)(*(_DWORD *)(v26 + v17) - 65);
                    if ( *(_DWORD *)(v26 + v17) == 65 )
                    {
                      v11 = v26 + 56;
                      if ( v26 + 56 <= v27 )
                      {
                        v110 = 1;
                        if ( *(_BYTE *)(v26 + v17 + 10) )
                          v24 = (char *)(v26 + v17 + 24);
                        v18 = *(_BYTE *)(v26 + v17 + 8);
                        v19 = *(_BYTE **)(v26 + v17 + 16);
                        v20 = *(_BYTE *)(v26 + v17 + 9);
                      }
                    }
                    else if ( *(_DWORD *)(v26 + v17) == 66 )
                    {
                      v11 = v26 + 40;
                      if ( v26 + 40 <= v27 )
                      {
                        if ( *(_DWORD *)(v26 + v17 + 12) )
                          v24 = (char *)(v26 + v17 + 32);
                        v19 = *(_BYTE **)(v26 + v17 + 24);
                        goto LABEL_48;
                      }
                    }
                  }
                  if ( v110 )
                    goto LABEL_49;
                  LODWORD(v11) = v114;
                }
              }
              v11 = (unsigned int)(v11 + 1);
              ++v25;
              v114 = v11;
              if ( (unsigned int)v11 >= v120 )
                goto LABEL_49;
            }
          }
          v28 = *(_BYTE *)(v17 + 72);
          v19 = *(_BYTE **)(v17 + 32);
          v20 = *(_BYTE *)(v17 + 11);
          v18 = *(_BYTE *)(v17 + 4);
          if ( *(_BYTE *)(v17 + 2) )
            goto LABEL_143;
LABEL_52:
          LOBYTE(v11) = v28 - 8;
          if ( (v11 & 0x5D) == 0 )
          {
            v29 = *(_BYTE *)(v17 + 3);
            if ( v29 == 1 || !v19 || !v20 )
              goto LABEL_71;
            LOBYTE(v17) = 0;
            v11 = (unsigned __int64)&v19[v20];
            v30 = v19 + 8;
            if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
            {
              if ( (unsigned __int64)v30 <= v11 )
              {
                LOBYTE(v17) = 1;
                v22 = v19[2];
                v21 = v19[1] & 0xF;
                v23 = v19[3];
              }
            }
            else
            {
              if ( (unsigned __int64)v30 <= v11 )
              {
                v21 = v19[2] & 0xF;
                v31 = v20;
                if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
                  v31 = (unsigned __int8)v19[7] + 8;
                v11 = (unsigned __int64)(v19 + 13);
                v17 = (unsigned __int64)&v19[v31];
                if ( (unsigned __int64)(v19 + 13) > v17 )
                  v106 = 0;
                else
                  v106 = v19[12];
                if ( (unsigned __int64)(v19 + 14) <= v17 )
                  v23 = *(_BYTE *)v11;
                LOBYTE(v17) = 1;
              }
              v22 = v106;
            }
            if ( (_BYTE)v17 )
            {
              LOBYTE(v3) = v22;
              v32 = v23;
            }
            else
            {
LABEL_71:
              v21 = 0;
              v32 = 0;
            }
            v105 = a2;
            v104 = v32;
            v103 = v3;
            v102 = v21;
            v101 = v18;
            v100 = v29;
            v33 = (const GUID *)&v125;
            goto LABEL_73;
          }
LABEL_143:
          IofCompleteRequest((PIRP)a2, 0);
          return v118;
        }
        if ( *(_BYTE *)v12 != 27 )
          goto LABEL_143;
        if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_143;
          v13 = *(int **)(a2 + 56);
          if ( v13 )
            v3 = *v13;
          v14 = (const GUID *)&v125;
          goto LABEL_18;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_143;
        v15 = (const GUID *)&v125;
LABEL_21:
        v16 = &stru_140149FE8;
LABEL_142:
        sub_140052F3C(v11, v16, v15, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_143;
      }
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_143;
      v15 = (const GUID *)&v125;
    }
    v16 = &stru_140148B18;
    goto LABEL_142;
  }
  if ( !v5 )
  {
    if ( (*(_DWORD *)(a1 + 1952) & 1) != 0 )
    {
      sub_14003BCD4(v8, 256LL, L"VM passthrough LUN device");
      goto LABEL_162;
    }
    sub_1400A1EB8((__int64 *)(a1 + 112), (__int64)v126);
    sub_1400A1E68(a1 + 112, (__int64)v127);
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 29) + 184LL) & 0x10) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 )
      {
        sub_14003BCD4(v9, 256LL, L"NVMe %hs %hs Device", v127, "ZNSDisk");
      }
      else
      {
        v56 = (_QWORD *)sub_1401AD6C4(**(_BYTE **)(a1 + 112) & 0x1F);
        sub_14003BCD4(v9, 256LL, L"%hs %hs SCSI %hs Device", v126, v127, *v56);
      }
      goto LABEL_162;
    }
    v52 = *(_QWORD *)(a1 + 160);
    if ( v52 )
    {
      v53 = (_BYTE *)(v52 + 8);
      v54 = (_BYTE *)(v52 + 25);
      if ( *v53 )
      {
LABEL_153:
        sub_14003BCD4(v9, 256LL, L"%hs %hs", v53, v54);
        goto LABEL_162;
      }
      v55 = v54;
    }
    else
    {
      v55 = *(_BYTE **)(a1 + 152);
      if ( !v55 )
      {
        v54 = v127;
        v53 = v126;
        goto LABEL_153;
      }
    }
    sub_14003BCD4(v9, 256LL, L"%hs", v55);
    goto LABEL_162;
  }
  if ( v5 == 1 )
  {
    sub_14003BCD4(
      v8,
      256LL,
      L"Bus Number %d, Target Id %d, LUN %d",
      *(unsigned __int8 *)(a1 + 104),
      *(unsigned __int8 *)(a1 + 105),
      *(unsigned __int8 *)(a1 + 106));
LABEL_162:
    v51 = 0;
    goto LABEL_163;
  }
  ExFreePoolWithTag(v8, 0x54516152u);
  v9 = 0LL;
  v51 = -1073741637;
LABEL_163:
  v10 = byte_140168DAA == 0;
  v119 = v51;
  *(_QWORD *)(a2 + 56) = v9;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v51;
  if ( v10 )
    goto LABEL_230;
  v124 = 0LL;
  IoGetActivityIdIrp(a2, &v124);
  v58 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v58 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_230;
    v57 = *(unsigned int *)(a2 + 48);
    v60 = &stru_140148B18;
    LODWORD(v97) = *(_DWORD *)(a2 + 48);
    goto LABEL_229;
  }
  if ( *(_BYTE *)v58 != 15 )
  {
    if ( *(_BYTE *)v58 != 27 )
      goto LABEL_230;
    if ( *(_BYTE *)(v58 + 1) == 7 && !*(_DWORD *)(v58 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v59 = *(int **)(a2 + 56);
        if ( v59 )
          v3 = *v59;
        LODWORD(v99) = *(_DWORD *)(a2 + 48);
        LODWORD(v97) = v3;
        sub_140056AB0(v57, v58, &v124, a2, v97, v99);
      }
      goto LABEL_230;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_230;
    v60 = &stru_140149FE8;
    LODWORD(v97) = *(_DWORD *)(a2 + 48);
LABEL_229:
    sub_140052F3C(v57, v60, &v124, a2, v97);
    goto LABEL_230;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_230;
  v61 = *(_QWORD *)(v58 + 8);
  v62 = 0;
  v63 = 0LL;
  v108 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  if ( *(_BYTE *)(v61 + 2) != 40 )
  {
    v72 = *(_BYTE *)(v61 + 72);
    v63 = *(_BYTE **)(v61 + 32);
    v64 = *(_BYTE *)(v61 + 11);
    v62 = *(_BYTE *)(v61 + 4);
    if ( !*(_BYTE *)(v61 + 2) )
      goto LABEL_206;
    goto LABEL_230;
  }
  v68 = 0LL;
  v112 = 0;
  if ( *(_DWORD *)(v61 + 20) )
    goto LABEL_230;
  v57 = 0LL;
  v116 = 0;
  v122 = *(_DWORD *)(v61 + 56);
  if ( !v122 )
    goto LABEL_203;
  v69 = (unsigned int *)(v61 + 120);
  while ( 1 )
  {
    v70 = *v69;
    if ( (unsigned int)v70 >= 0x80 )
    {
      v71 = *(unsigned int *)(v61 + 16);
      if ( (unsigned int)v70 < (unsigned int)v71 )
        break;
    }
LABEL_196:
    v57 = (unsigned int)(v57 + 1);
    ++v69;
    v116 = v57;
    if ( (unsigned int)v57 >= v122 )
      goto LABEL_202;
  }
  if ( *(_DWORD *)(v70 + v61) != 64 )
  {
    v57 = (unsigned int)(*(_DWORD *)(v70 + v61) - 65);
    if ( *(_DWORD *)(v70 + v61) == 65 )
    {
      v57 = v70 + 56;
      if ( v70 + 56 <= v71 )
      {
        v112 = 1;
        if ( *(_BYTE *)(v70 + v61 + 10) )
          v68 = (char *)(v70 + v61 + 24);
        v62 = *(_BYTE *)(v70 + v61 + 8);
        v63 = *(_BYTE **)(v70 + v61 + 16);
        v64 = *(_BYTE *)(v70 + v61 + 9);
      }
    }
    else if ( *(_DWORD *)(v70 + v61) == 66 )
    {
      v57 = v70 + 40;
      if ( v70 + 40 <= v71 )
      {
        if ( *(_DWORD *)(v70 + v61 + 12) )
          v68 = (char *)(v70 + v61 + 32);
        v63 = *(_BYTE **)(v70 + v61 + 24);
        goto LABEL_201;
      }
    }
    goto LABEL_194;
  }
  v57 = v70 + 40;
  if ( v70 + 40 > v71 )
  {
LABEL_194:
    if ( v112 )
      goto LABEL_202;
    LODWORD(v57) = v116;
    goto LABEL_196;
  }
  if ( *(_BYTE *)(v70 + v61 + 10) )
    v68 = (char *)(v70 + v61 + 24);
  v63 = *(_BYTE **)(v70 + v61 + 16);
LABEL_201:
  v64 = *(_BYTE *)(v70 + v61 + 9);
  v62 = *(_BYTE *)(v70 + v61 + 8);
LABEL_202:
  v51 = v119;
LABEL_203:
  if ( v68 )
  {
    v72 = *v68;
    v66 = 0;
LABEL_206:
    LOBYTE(v57) = v72 - 8;
    if ( (v57 & 0x5D) == 0 )
    {
      v73 = *(_BYTE *)(v61 + 3);
      if ( v73 == 1 || !v63 || !v64 )
        goto LABEL_225;
      LOBYTE(v61) = 0;
      v57 = (unsigned __int64)&v63[v64];
      v74 = v63 + 8;
      if ( (unsigned __int8)((*v63 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v74 <= v57 )
        {
          LOBYTE(v61) = 1;
          v66 = v63[2];
          v65 = v63[1] & 0xF;
          v67 = v63[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v74 <= v57 )
        {
          v65 = v63[2] & 0xF;
          v75 = v64;
          if ( (unsigned int)(unsigned __int8)v63[7] + 8 <= v64 )
            v75 = (unsigned __int8)v63[7] + 8;
          v57 = (unsigned __int64)(v63 + 13);
          v61 = (unsigned __int64)&v63[v75];
          if ( (unsigned __int64)(v63 + 13) > v61 )
            v108 = 0;
          else
            v108 = v63[12];
          if ( (unsigned __int64)(v63 + 14) <= v61 )
            v67 = *(_BYTE *)v57;
          LOBYTE(v61) = 1;
        }
        v66 = v108;
      }
      if ( (_BYTE)v61 )
      {
        LOBYTE(v3) = v66;
        v76 = v67;
      }
      else
      {
LABEL_225:
        v65 = 0;
        v76 = 0;
      }
      LOBYTE(v99) = v73;
      LODWORD(v97) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v57, v61, &v124, a2, v97, v99, v62, v65, v3, v76, a2);
    }
  }
LABEL_230:
  IofCompleteRequest((PIRP)a2, 0);
  return v51;
}
