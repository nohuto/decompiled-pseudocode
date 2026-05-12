/*
 * XREFs of sub_14003CF28 @ 0x14003CF28
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14003CF28(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  bool v8; // zf
  char *v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  __int128 *v12; // r8
  __int128 *v13; // r8
  unsigned __int64 v14; // rdx
  char v15; // r12
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // r14
  char v19; // r11
  char v20; // r13
  char *v21; // r11
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  char v27; // cl
  char v28; // r8
  char *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  __int128 *v32; // r8
  int *v33; // rax
  unsigned __int64 v34; // rdx
  char v35; // r12
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r14
  char v39; // r11
  char v40; // r13
  char *v41; // r11
  unsigned int v42; // eax
  unsigned int v43; // r8d
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r15
  char v47; // cl
  char v48; // r8
  char *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  int v53; // ebx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  __int64 v57; // rcx
  char *v58; // rcx
  __int64 v59; // rdx
  int *v60; // rax
  void *v61; // rdx
  unsigned __int64 v62; // rdx
  char v63; // r12
  _BYTE *v64; // r9
  unsigned __int8 v65; // r10
  char v66; // r11
  char v67; // r14
  char v68; // r13
  char *v69; // r14
  unsigned int v70; // eax
  unsigned int v71; // r8d
  unsigned int *v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // r15
  char v75; // cl
  char v76; // r8
  char *v77; // rax
  unsigned int v78; // eax
  char v79; // al
  int v80; // ebx
  char *v81; // rcx
  __int64 v82; // rdx
  int *v83; // rax
  unsigned __int64 v84; // rdx
  char v85; // r12
  _BYTE *v86; // r9
  unsigned __int8 v87; // r10
  char v88; // r14
  char v89; // r11
  char v90; // r13
  char *v91; // r11
  unsigned int v92; // eax
  unsigned int v93; // r8d
  unsigned int *v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // r15
  char v97; // cl
  char v98; // r8
  char *v99; // rax
  unsigned int v100; // eax
  char v101; // al
  ULONG v102; // [rsp+20h] [rbp-E0h]
  char v103; // [rsp+60h] [rbp-A0h] BYREF
  char v104; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v105; // [rsp+64h] [rbp-9Ch]
  unsigned int v106; // [rsp+68h] [rbp-98h] BYREF
  char v107; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v108; // [rsp+70h] [rbp-90h]
  unsigned __int64 v109; // [rsp+78h] [rbp-88h]
  __int128 v110; // [rsp+80h] [rbp-80h] BYREF
  __int128 v111; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h]
  __int64 v114; // [rsp+C8h] [rbp-38h]
  __int64 v115; // [rsp+D0h] [rbp-30h]
  __int64 v116; // [rsp+D8h] [rbp-28h]
  unsigned int *v117; // [rsp+E0h] [rbp-20h]
  __int64 v118; // [rsp+E8h] [rbp-18h]
  char *v119; // [rsp+F0h] [rbp-10h]
  __int64 v120; // [rsp+F8h] [rbp-8h]
  char *v121; // [rsp+100h] [rbp+0h]
  __int64 v122; // [rsp+108h] [rbp+8h]
  char *v123; // [rsp+110h] [rbp+10h]
  __int64 v124; // [rsp+118h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(unsigned int *)(v2 + 8);
  if ( *(_DWORD *)(v2 + 16) >= 0x28u )
  {
    if ( (unsigned int)v6 >= 0x28 )
    {
      if ( *(_DWORD *)v5 == 40 && *(_DWORD *)(v5 + 4) == 40 )
      {
        LOBYTE(v53) = 0;
        *(_OWORD *)(a1 + 2104) = *(_OWORD *)(v5 + 8);
        *(_DWORD *)v5 = 40;
        *(_DWORD *)(v5 + 4) = 40;
        *(_OWORD *)(v5 + 24) = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 5064LL);
        *(_QWORD *)(a2 + 56) = 40LL;
        if ( (unsigned int)dword_140168178 > 5 && (unsigned __int8)sub_14003F840(v6, 0x400000000000LL) )
        {
          v57 = *(_QWORD *)(v55 + 24);
          v114 = 16LL;
          v115 = v56;
          v116 = 16LL;
          v113 = v57 + 5064;
          v106 = *(_DWORD *)(v57 + 56);
          v117 = &v106;
          v104 = *(_BYTE *)(v55 + 104);
          v119 = &v104;
          v103 = *(_BYTE *)(v55 + 105);
          v121 = &v103;
          v107 = *(_BYTE *)(v55 + 106);
          v123 = &v107;
          v118 = 4LL;
          v120 = 1LL;
          v122 = 1LL;
          v124 = 1LL;
          sub_140037A5C(v57, (unsigned __int8 *)dword_1401564D3, v54, v55, 8u, &v112);
        }
        v8 = byte_140168DAA == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = 0;
        if ( v8 )
          goto LABEL_209;
        v110 = 0LL;
        IoGetActivityIdIrp(a2, &v110);
        v59 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v59 )
        {
          case 0xE:
            if ( (byte_1401694F2 & 8) == 0 )
              goto LABEL_209;
            v61 = &unk_140148B18;
            break;
          case 0xF:
            if ( byte_1401694F1 >= 0 )
              goto LABEL_209;
            v62 = *(_QWORD *)(v59 + 8);
            v63 = 0;
            v64 = 0LL;
            v103 = 0;
            v65 = 0;
            v66 = 0;
            v67 = 0;
            v68 = 0;
            if ( *(_BYTE *)(v62 + 2) != 40 )
            {
              v75 = *(_BYTE *)(v62 + 72);
              v64 = *(_BYTE **)(v62 + 32);
              v65 = *(_BYTE *)(v62 + 11);
              v63 = *(_BYTE *)(v62 + 4);
              if ( !*(_BYTE *)(v62 + 2) )
                goto LABEL_185;
              goto LABEL_209;
            }
            v69 = 0LL;
            v104 = 0;
            if ( *(_DWORD *)(v62 + 20) )
              goto LABEL_209;
            v70 = *(_DWORD *)(v62 + 56);
            LODWORD(v58) = 0;
            v105 = 0;
            v106 = v70;
            if ( !v70 )
              goto LABEL_182;
            v71 = v106;
            v72 = (unsigned int *)(v62 + 120);
            v109 = v62 + 120;
            while ( 1 )
            {
              v73 = *v72;
              if ( (unsigned int)v73 >= 0x80 )
              {
                v74 = *(unsigned int *)(v62 + 16);
                if ( (unsigned int)v73 < (unsigned int)v74 )
                {
                  if ( *(_DWORD *)(v73 + v62) == 64 )
                  {
                    LODWORD(v58) = v73 + 40;
                    if ( v73 + 40 <= v74 )
                    {
                      if ( *(_BYTE *)(v73 + v62 + 10) )
                        v69 = (char *)(v73 + v62 + 24);
                      v64 = *(_BYTE **)(v73 + v62 + 16);
LABEL_181:
                      v65 = *(_BYTE *)(v73 + v62 + 9);
                      v63 = *(_BYTE *)(v73 + v62 + 8);
LABEL_182:
                      if ( v69 )
                      {
                        v75 = *v69;
                        v67 = 0;
LABEL_185:
                        LOBYTE(v58) = v75 - 8;
                        if ( ((unsigned __int8)v58 & 0x5D) == 0 )
                        {
                          v76 = *(_BYTE *)(v62 + 3);
                          if ( v76 == 1 || !v64 || !v65 )
                            goto LABEL_204;
                          LOBYTE(v62) = 0;
                          v58 = &v64[v65];
                          v77 = v64 + 8;
                          if ( (unsigned __int8)((*v64 & 0x7F) - 114) <= 1u )
                          {
                            if ( v77 <= v58 )
                            {
                              LOBYTE(v62) = 1;
                              v67 = v64[2];
                              v66 = v64[1] & 0xF;
                              v68 = v64[3];
                            }
                          }
                          else
                          {
                            if ( v77 <= v58 )
                            {
                              v66 = v64[2] & 0xF;
                              v78 = v65;
                              if ( (unsigned int)(unsigned __int8)v64[7] + 8 <= v65 )
                                v78 = (unsigned __int8)v64[7] + 8;
                              v58 = v64 + 13;
                              v62 = (unsigned __int64)&v64[v78];
                              if ( (unsigned __int64)(v64 + 13) > v62 )
                                v103 = 0;
                              else
                                v103 = v64[12];
                              if ( (unsigned __int64)(v64 + 14) <= v62 )
                                v68 = *v58;
                              LOBYTE(v62) = 1;
                            }
                            v67 = v103;
                          }
                          if ( (_BYTE)v62 )
                          {
                            LOBYTE(v53) = v67;
                            v79 = v68;
                          }
                          else
                          {
LABEL_204:
                            v66 = 0;
                            v79 = 0;
                          }
                          sub_140052E64(
                            (_DWORD)v58,
                            v62,
                            (unsigned int)&v110,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v76,
                            v63,
                            v66,
                            v53,
                            v79,
                            a2);
                        }
                      }
                      goto LABEL_209;
                    }
                  }
                  else
                  {
                    LODWORD(v58) = *(_DWORD *)(v73 + v62) - 65;
                    if ( *(_DWORD *)(v73 + v62) == 65 )
                    {
                      LODWORD(v58) = v73 + 56;
                      if ( v73 + 56 <= v74 )
                      {
                        v104 = 1;
                        if ( *(_BYTE *)(v73 + v62 + 10) )
                          v69 = (char *)(v73 + v62 + 24);
                        v63 = *(_BYTE *)(v73 + v62 + 8);
                        v64 = *(_BYTE **)(v73 + v62 + 16);
                        v65 = *(_BYTE *)(v73 + v62 + 9);
                      }
                    }
                    else if ( *(_DWORD *)(v73 + v62) == 66 )
                    {
                      LODWORD(v58) = v73 + 40;
                      if ( v73 + 40 <= v74 )
                      {
                        if ( *(_DWORD *)(v73 + v62 + 12) )
                          v69 = (char *)(v73 + v62 + 32);
                        v64 = *(_BYTE **)(v73 + v62 + 24);
                        goto LABEL_181;
                      }
                    }
                  }
                  if ( v104 )
                    goto LABEL_182;
                  LODWORD(v58) = v105;
                  v71 = v106;
                }
              }
              LODWORD(v58) = (_DWORD)v58 + 1;
              v72 = (unsigned int *)(v109 + 4);
              v105 = (unsigned int)v58;
              v109 += 4LL;
              if ( (unsigned int)v58 >= v71 )
                goto LABEL_182;
            }
          case 0x1B:
            if ( *(_BYTE *)(v59 + 1) == 7 && !*(_DWORD *)(v59 + 8) )
            {
              if ( (byte_1401694F2 & 0x40) != 0 )
              {
                v60 = *(int **)(a2 + 56);
                if ( v60 )
                  v53 = *v60;
                sub_140056AB0((_DWORD)v58, v59, (unsigned int)&v110, a2, v53, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_209;
            }
            if ( (byte_1401694F2 & 0x20) == 0 )
            {
LABEL_209:
              IofCompleteRequest((PIRP)a2, 0);
              return 0LL;
            }
            v61 = &unk_140149FE8;
            break;
          default:
            goto LABEL_209;
        }
        sub_140052F3C(v58, v61, &v110, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_209;
      }
      LOBYTE(v80) = 0;
      *(_BYTE *)(a2 + 141) = -84;
      v8 = byte_140168DAA == 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( !v8 )
      {
        v110 = 0LL;
        IoGetActivityIdIrp(a2, &v110);
        v82 = *(_QWORD *)(a2 + 184);
        if ( *(_BYTE *)v82 == 14 )
        {
          if ( (byte_1401694F2 & 8) != 0 )
            sub_140052F3C(*(unsigned int *)(a2 + 48), &unk_140148B18, &v110, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_275;
        }
        if ( *(_BYTE *)v82 != 15 )
        {
          if ( *(_BYTE *)v82 == 27 )
          {
            if ( *(_BYTE *)(v82 + 1) != 7 || *(_DWORD *)(v82 + 8) )
            {
              if ( (byte_1401694F2 & 0x20) != 0 )
                sub_140052F3C(v81, &unk_140149FE8, &v110, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v83 = *(int **)(a2 + 56);
              if ( v83 )
                v80 = *v83;
              sub_140056AB0((_DWORD)v81, v82, (unsigned int)&v110, a2, v80, *(_DWORD *)(a2 + 48));
            }
          }
          goto LABEL_275;
        }
        if ( byte_1401694F1 < 0 )
        {
          v84 = *(_QWORD *)(v82 + 8);
          v85 = 0;
          v86 = 0LL;
          v103 = 0;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          v90 = 0;
          if ( *(_BYTE *)(v84 + 2) != 40 )
          {
            v97 = *(_BYTE *)(v84 + 72);
            v86 = *(_BYTE **)(v84 + 32);
            v87 = *(_BYTE *)(v84 + 11);
            v85 = *(_BYTE *)(v84 + 4);
            if ( !*(_BYTE *)(v84 + 2) )
              goto LABEL_252;
            goto LABEL_275;
          }
          v91 = 0LL;
          v104 = 0;
          if ( *(_DWORD *)(v84 + 20) )
            goto LABEL_275;
          v92 = *(_DWORD *)(v84 + 56);
          LODWORD(v81) = 0;
          v105 = 0;
          v106 = v92;
          if ( !v92 )
            goto LABEL_249;
          v93 = v106;
          v94 = (unsigned int *)(v84 + 120);
          v109 = v84 + 120;
          while ( 1 )
          {
            v95 = *v94;
            if ( (unsigned int)v95 >= 0x80 )
            {
              v96 = *(unsigned int *)(v84 + 16);
              if ( (unsigned int)v95 < (unsigned int)v96 )
              {
                if ( *(_DWORD *)(v95 + v84) == 64 )
                {
                  LODWORD(v81) = v95 + 40;
                  if ( v95 + 40 <= v96 )
                  {
                    if ( *(_BYTE *)(v95 + v84 + 10) )
                      v91 = (char *)(v95 + v84 + 24);
                    v86 = *(_BYTE **)(v95 + v84 + 16);
LABEL_248:
                    v87 = *(_BYTE *)(v95 + v84 + 9);
                    v85 = *(_BYTE *)(v95 + v84 + 8);
LABEL_249:
                    if ( v91 )
                    {
                      v97 = *v91;
                      v89 = 0;
LABEL_252:
                      LOBYTE(v81) = v97 - 8;
                      if ( ((unsigned __int8)v81 & 0x5D) == 0 )
                      {
                        v98 = *(_BYTE *)(v84 + 3);
                        if ( v98 == 1 || !v86 || !v87 )
                          goto LABEL_271;
                        LOBYTE(v84) = 0;
                        v81 = &v86[v87];
                        v99 = v86 + 8;
                        if ( (unsigned __int8)((*v86 & 0x7F) - 114) <= 1u )
                        {
                          if ( v99 <= v81 )
                          {
                            LOBYTE(v84) = 1;
                            v89 = v86[2];
                            v88 = v86[1] & 0xF;
                            v90 = v86[3];
                          }
                        }
                        else
                        {
                          if ( v99 <= v81 )
                          {
                            v88 = v86[2] & 0xF;
                            v100 = v87;
                            if ( (unsigned int)(unsigned __int8)v86[7] + 8 <= v87 )
                              v100 = (unsigned __int8)v86[7] + 8;
                            v81 = v86 + 13;
                            v84 = (unsigned __int64)&v86[v100];
                            if ( (unsigned __int64)(v86 + 13) > v84 )
                              v103 = 0;
                            else
                              v103 = v86[12];
                            if ( (unsigned __int64)(v86 + 14) <= v84 )
                              v90 = *v81;
                            LOBYTE(v84) = 1;
                          }
                          v89 = v103;
                        }
                        if ( (_BYTE)v84 )
                        {
                          LOBYTE(v80) = v89;
                          v101 = v90;
                        }
                        else
                        {
LABEL_271:
                          v88 = 0;
                          v101 = 0;
                        }
                        sub_140052E64(
                          (_DWORD)v81,
                          v84,
                          (unsigned int)&v110,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v98,
                          v85,
                          v88,
                          v80,
                          v101,
                          a2);
                      }
                    }
                    break;
                  }
                }
                else
                {
                  LODWORD(v81) = *(_DWORD *)(v95 + v84) - 65;
                  if ( *(_DWORD *)(v95 + v84) == 65 )
                  {
                    LODWORD(v81) = v95 + 56;
                    if ( v95 + 56 <= v96 )
                    {
                      v104 = 1;
                      if ( *(_BYTE *)(v95 + v84 + 10) )
                        v91 = (char *)(v95 + v84 + 24);
                      v85 = *(_BYTE *)(v95 + v84 + 8);
                      v86 = *(_BYTE **)(v95 + v84 + 16);
                      v87 = *(_BYTE *)(v95 + v84 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v95 + v84) == 66 )
                  {
                    LODWORD(v81) = v95 + 40;
                    if ( v95 + 40 <= v96 )
                    {
                      if ( *(_DWORD *)(v95 + v84 + 12) )
                        v91 = (char *)(v95 + v84 + 32);
                      v86 = *(_BYTE **)(v95 + v84 + 24);
                      goto LABEL_248;
                    }
                  }
                }
                if ( v104 )
                  goto LABEL_249;
                LODWORD(v81) = v105;
                v93 = v106;
              }
            }
            LODWORD(v81) = (_DWORD)v81 + 1;
            v94 = (unsigned int *)(v109 + 4);
            v105 = (unsigned int)v81;
            v109 += 4LL;
            if ( (unsigned int)v81 >= v93 )
              goto LABEL_249;
          }
        }
      }
LABEL_275:
      IofCompleteRequest((PIRP)a2, 0);
      return 3221225485LL;
    }
    LOBYTE(v7) = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v8 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v106 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    if ( v8 )
      goto LABEL_137;
    v110 = 0LL;
    IoGetActivityIdIrp(a2, &v110);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 != 14 )
    {
      if ( *(_BYTE *)v10 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_137;
        v34 = *(_QWORD *)(v10 + 8);
        v35 = 0;
        v36 = 0LL;
        v103 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        if ( *(_BYTE *)(v34 + 2) == 40 )
        {
          v41 = 0LL;
          v104 = 0;
          if ( *(_DWORD *)(v34 + 20) )
            goto LABEL_137;
          v42 = *(_DWORD *)(v34 + 56);
          LODWORD(v9) = 0;
          v108 = 0;
          v105 = v42;
          if ( !v42 )
            goto LABEL_110;
          v43 = v105;
          v44 = (unsigned int *)(v34 + 120);
          v109 = v34 + 120;
          while ( 1 )
          {
            v45 = *v44;
            if ( (unsigned int)v45 >= 0x80 )
            {
              v46 = *(unsigned int *)(v34 + 16);
              if ( (unsigned int)v45 < (unsigned int)v46 )
              {
                if ( *(_DWORD *)(v45 + v34) == 64 )
                {
                  LODWORD(v9) = v45 + 40;
                  if ( v45 + 40 <= v46 )
                  {
                    if ( *(_BYTE *)(v45 + v34 + 10) )
                      v41 = (char *)(v45 + v34 + 24);
                    v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_109:
                    v37 = *(_BYTE *)(v45 + v34 + 9);
                    v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_110:
                    if ( !v41 )
                      goto LABEL_137;
                    v47 = *v41;
                    v39 = 0;
LABEL_113:
                    LOBYTE(v9) = v47 - 8;
                    if ( ((unsigned __int8)v9 & 0x5D) == 0 )
                    {
                      v48 = *(_BYTE *)(v34 + 3);
                      if ( v48 == 1 || !v36 || !v37 )
                        goto LABEL_132;
                      LOBYTE(v34) = 0;
                      v9 = &v36[v37];
                      v49 = v36 + 8;
                      if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
                      {
                        if ( v49 <= v9 )
                        {
                          LOBYTE(v34) = 1;
                          v39 = v36[2];
                          v38 = v36[1] & 0xF;
                          v40 = v36[3];
                        }
                      }
                      else
                      {
                        if ( v49 <= v9 )
                        {
                          v38 = v36[2] & 0xF;
                          v50 = v37;
                          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
                            v50 = (unsigned __int8)v36[7] + 8;
                          v9 = v36 + 13;
                          v34 = (unsigned __int64)&v36[v50];
                          if ( (unsigned __int64)(v36 + 13) > v34 )
                            v103 = 0;
                          else
                            v103 = v36[12];
                          if ( (unsigned __int64)(v36 + 14) <= v34 )
                            v40 = *v9;
                          LOBYTE(v34) = 1;
                        }
                        v39 = v103;
                      }
                      if ( (_BYTE)v34 )
                      {
                        LOBYTE(v7) = v39;
                        v51 = v40;
                      }
                      else
                      {
LABEL_132:
                        v38 = 0;
                        v51 = 0;
                      }
                      sub_140052E64(
                        (_DWORD)v9,
                        v34,
                        (unsigned int)&v110,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v48,
                        v35,
                        v38,
                        v7,
                        v51,
                        a2);
                    }
                    goto LABEL_137;
                  }
                }
                else
                {
                  LODWORD(v9) = *(_DWORD *)(v45 + v34) - 65;
                  if ( *(_DWORD *)(v45 + v34) == 65 )
                  {
                    LODWORD(v9) = v45 + 56;
                    if ( v45 + 56 <= v46 )
                    {
                      v104 = 1;
                      if ( *(_BYTE *)(v45 + v34 + 10) )
                        v41 = (char *)(v45 + v34 + 24);
                      v35 = *(_BYTE *)(v45 + v34 + 8);
                      v36 = *(_BYTE **)(v45 + v34 + 16);
                      v37 = *(_BYTE *)(v45 + v34 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v45 + v34) == 66 )
                  {
                    LODWORD(v9) = v45 + 40;
                    if ( v45 + 40 <= v46 )
                    {
                      if ( *(_DWORD *)(v45 + v34 + 12) )
                        v41 = (char *)(v45 + v34 + 32);
                      v36 = *(_BYTE **)(v45 + v34 + 24);
                      goto LABEL_109;
                    }
                  }
                }
                if ( v104 )
                  goto LABEL_110;
                LODWORD(v9) = v108;
                v43 = v105;
              }
            }
            LODWORD(v9) = (_DWORD)v9 + 1;
            v44 = (unsigned int *)(v109 + 4);
            v108 = (unsigned int)v9;
            v109 += 4LL;
            if ( (unsigned int)v9 >= v43 )
              goto LABEL_110;
          }
        }
        v47 = *(_BYTE *)(v34 + 72);
        v36 = *(_BYTE **)(v34 + 32);
        v37 = *(_BYTE *)(v34 + 11);
        v35 = *(_BYTE *)(v34 + 4);
        if ( *(_BYTE *)(v34 + 2) )
          goto LABEL_137;
        goto LABEL_113;
      }
      if ( *(_BYTE *)v10 != 27 )
        goto LABEL_137;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_137;
        v33 = *(int **)(a2 + 56);
        if ( v33 )
          v7 = *v33;
        v12 = &v110;
LABEL_12:
        sub_140056AB0((_DWORD)v9, v10, (_DWORD)v12, a2, v7, *(_DWORD *)(a2 + 48));
        goto LABEL_137;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_137;
      v13 = &v110;
LABEL_15:
      sub_140052F3C(v9, &unk_140149FE8, v13, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_137;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_137;
    v32 = &v110;
    v102 = *(_DWORD *)(a2 + 48);
LABEL_136:
    sub_140052F3C(v9, &unk_140148B18, v32, a2, v102);
    goto LABEL_137;
  }
  LOBYTE(v7) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v8 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v106 = -1073741820;
  *(_DWORD *)(a2 + 48) = -1073741820;
  if ( v8 )
    goto LABEL_137;
  v111 = 0LL;
  IoGetActivityIdIrp(a2, &v111);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_137;
    v32 = &v111;
    v102 = *(_DWORD *)(a2 + 48);
    goto LABEL_136;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_137;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_137;
      v11 = *(int **)(a2 + 56);
      if ( v11 )
        v7 = *v11;
      v12 = &v111;
      goto LABEL_12;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_137;
    v13 = &v111;
    goto LABEL_15;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_137;
  v14 = *(_QWORD *)(v10 + 8);
  v15 = 0;
  v16 = 0LL;
  v103 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_46;
    goto LABEL_137;
  }
  v21 = 0LL;
  v104 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_137;
  v22 = *(_DWORD *)(v14 + 56);
  LODWORD(v9) = 0;
  v105 = 0;
  v108 = v22;
  if ( !v22 )
    goto LABEL_43;
  v23 = v108;
  v24 = (unsigned int *)(v14 + 120);
  v109 = v14 + 120;
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_37:
    LODWORD(v9) = (_DWORD)v9 + 1;
    v24 = (unsigned int *)(v109 + 4);
    v105 = (unsigned int)v9;
    v109 += 4LL;
    if ( (unsigned int)v9 >= v23 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v25 + v14) != 64 )
  {
    LODWORD(v9) = *(_DWORD *)(v25 + v14) - 65;
    if ( *(_DWORD *)(v25 + v14) == 65 )
    {
      LODWORD(v9) = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v104 = 1;
        if ( *(_BYTE *)(v25 + v14 + 10) )
          v21 = (char *)(v25 + v14 + 24);
        v15 = *(_BYTE *)(v25 + v14 + 8);
        v16 = *(_BYTE **)(v25 + v14 + 16);
        v17 = *(_BYTE *)(v25 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v14) == 66 )
    {
      LODWORD(v9) = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v14 + 12) )
          v21 = (char *)(v25 + v14 + 32);
        v16 = *(_BYTE **)(v25 + v14 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_35;
  }
  LODWORD(v9) = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_35:
    if ( v104 )
      goto LABEL_43;
    LODWORD(v9) = v105;
    v23 = v108;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v25 + v14 + 10) )
    v21 = (char *)(v25 + v14 + 24);
  v16 = *(_BYTE **)(v25 + v14 + 16);
LABEL_42:
  v17 = *(_BYTE *)(v25 + v14 + 9);
  v15 = *(_BYTE *)(v25 + v14 + 8);
LABEL_43:
  if ( v21 )
  {
    v27 = *v21;
    v19 = 0;
LABEL_46:
    LOBYTE(v9) = v27 - 8;
    if ( ((unsigned __int8)v9 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v14 + 3);
      if ( v28 == 1 || !v16 || !v17 )
        goto LABEL_65;
      LOBYTE(v14) = 0;
      v9 = &v16[v17];
      v29 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( v29 <= v9 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( v29 <= v9 )
        {
          v18 = v16[2] & 0xF;
          v30 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v30 = (unsigned __int8)v16[7] + 8;
          v9 = v16 + 13;
          v14 = (unsigned __int64)&v16[v30];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v103 = 0;
          else
            v103 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *v9;
          LOBYTE(v14) = 1;
        }
        v19 = v103;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v7) = v19;
        v31 = v20;
      }
      else
      {
LABEL_65:
        v18 = 0;
        v31 = 0;
      }
      sub_140052E64((_DWORD)v9, v14, (unsigned int)&v111, a2, *(_DWORD *)(a2 + 48), v28, v15, v18, v7, v31, a2);
    }
  }
LABEL_137:
  IofCompleteRequest((PIRP)a2, 0);
  return v106;
}
