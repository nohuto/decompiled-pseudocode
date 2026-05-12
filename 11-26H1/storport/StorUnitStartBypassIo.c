/*
 * XREFs of StorUnitStartBypassIo @ 0x1400AB260
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwIORequestDispatch @ 0x1400036E4 (StorEtwIORequestDispatch.c)
 *     RaidUnitSubmitRequest @ 0x140004BD0 (RaidUnitSubmitRequest.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqqD @ 0x1400826E0 (WPP_SF_qqqD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorUnitStartBypassIo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // eax
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r15
  char *v22; // r15
  unsigned int v23; // r13d
  unsigned __int64 v24; // r12
  __int64 v25; // r8
  int v26; // ecx
  char v27; // r12
  char v28; // cl
  char v29; // r8
  char v30; // al
  char *v31; // r11
  unsigned int v32; // eax
  bool v33; // zf
  unsigned int v34; // ebx
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int8 *v37; // rdx
  int v38; // eax
  int *v39; // rax
  const EVENT_DESCRIPTOR *v40; // rdx
  __int64 v41; // rdx
  _BYTE *v42; // r9
  unsigned __int8 v43; // r11
  char v44; // si
  char v45; // r10
  char v46; // r15
  int v47; // eax
  char *v48; // r15
  unsigned int v49; // r13d
  unsigned __int64 v50; // r12
  __int64 v51; // r8
  int v52; // ecx
  char v53; // r12
  char v54; // cl
  char v55; // r8
  char v56; // al
  char *v57; // r10
  unsigned int v58; // eax
  unsigned int v59; // r13d
  unsigned __int64 v60; // r12
  __int64 v61; // r8
  int v62; // ecx
  char v63; // cl
  __int64 v64; // rax
  unsigned int v65; // r13d
  unsigned __int64 v66; // r12
  int v67; // ecx
  _DWORD *v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  int *v72; // rax
  const EVENT_DESCRIPTOR *v73; // rdx
  __int64 v74; // rdx
  _BYTE *v75; // r9
  unsigned __int8 v76; // r11
  char v77; // si
  char v78; // r10
  char v79; // r15
  char *v80; // r15
  unsigned int v81; // r13d
  unsigned __int64 v82; // r12
  __int64 v83; // r8
  int v84; // ecx
  char v85; // r12
  char v86; // cl
  char v87; // r8
  char v88; // al
  char *v89; // r10
  unsigned int v90; // eax
  int v91; // r13d
  unsigned int v92; // r13d
  unsigned __int64 v93; // r12
  int v94; // ecx
  __int64 v95; // rcx
  __int64 v96; // rax
  _BYTE *v97; // r9
  unsigned __int8 v98; // si
  char v99; // r11
  char v100; // r14
  char v101; // r10
  char v102; // r15
  int v103; // eax
  char *v104; // r15
  unsigned int v105; // r13d
  unsigned __int64 v106; // r12
  __int64 v107; // r8
  int v108; // ecx
  char v109; // r12
  char v110; // cl
  char v111; // r8
  char *v112; // r10
  unsigned int v113; // eax
  unsigned int v114; // r13d
  unsigned __int64 v115; // r12
  int v116; // ecx
  unsigned __int8 *v117; // r8
  char v118; // r13
  unsigned int v119; // r11d
  unsigned int v120; // r10d
  __int64 v121; // rcx
  unsigned __int64 v122; // r9
  __int64 v123; // rdx
  int v124; // ecx
  int v125; // ecx
  __int64 v126; // r8
  unsigned __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // r9
  unsigned __int8 v130; // cl
  unsigned int v131; // r13d
  unsigned __int64 v132; // r12
  int v133; // ecx
  char v134; // al
  unsigned __int64 v135; // rcx
  unsigned __int8 v136; // cl
  __int64 v138; // [rsp+20h] [rbp-59h]
  __int64 v139; // [rsp+28h] [rbp-51h]
  __int64 v140; // [rsp+30h] [rbp-49h]
  char v141; // [rsp+30h] [rbp-49h]
  char v142; // [rsp+38h] [rbp-41h]
  char v143; // [rsp+40h] [rbp-39h]
  char v144; // [rsp+48h] [rbp-31h]
  __int64 v145; // [rsp+50h] [rbp-29h]
  char v146; // [rsp+60h] [rbp-19h]
  char v147; // [rsp+60h] [rbp-19h]
  char v148; // [rsp+60h] [rbp-19h]
  char v149; // [rsp+60h] [rbp-19h]
  char v150; // [rsp+61h] [rbp-18h]
  char v151; // [rsp+61h] [rbp-18h]
  char v152; // [rsp+61h] [rbp-18h]
  char v153; // [rsp+61h] [rbp-18h]
  char v154; // [rsp+61h] [rbp-18h]
  char v155; // [rsp+61h] [rbp-18h]
  char v156; // [rsp+61h] [rbp-18h]
  char v157; // [rsp+61h] [rbp-18h]
  char v158; // [rsp+61h] [rbp-18h]
  unsigned int v159; // [rsp+64h] [rbp-15h]
  unsigned int v160; // [rsp+64h] [rbp-15h]
  unsigned int v161; // [rsp+64h] [rbp-15h]
  unsigned int v162; // [rsp+64h] [rbp-15h]
  unsigned int v163; // [rsp+64h] [rbp-15h]
  int v164; // [rsp+64h] [rbp-15h]
  unsigned int v165; // [rsp+64h] [rbp-15h]
  unsigned int v166; // [rsp+64h] [rbp-15h]
  unsigned int v167; // [rsp+64h] [rbp-15h]
  unsigned int v168; // [rsp+64h] [rbp-15h]
  __int64 v169; // [rsp+68h] [rbp-11h]
  GUID v171; // [rsp+78h] [rbp-1h] BYREF
  __int128 v172; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v169 = v2;
  v5 = 0;
  v6 = *(_DWORD *)v2;
  v7 = 0LL;
  *(_QWORD *)(a2 + 184) -= 72LL;
  --*(_BYTE *)(a2 + 67);
  v8 = *(_QWORD *)(a2 + 184);
  v172 = 0LL;
  *(_QWORD *)(v8 + 40) = a1;
  v9 = *(_QWORD *)(a2 + 184);
  v10 = *(_QWORD *)(v9 + 8);
  if ( v6 != 1431193940 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v33 )
      goto LABEL_70;
    v171 = 0LL;
    IoGetActivityIdIrp(a2, &v171);
    v12 = *(unsigned __int8 **)(a2 + 184);
    if ( *v12 != 14 )
    {
      v13 = *v12 - 15;
      if ( *v12 != 15 )
      {
LABEL_5:
        if ( v13 != 12 )
          goto LABEL_70;
        if ( v12[1] == 7 && !*((_DWORD *)v12 + 2) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v14 = *(int **)(a2 + 56);
            if ( v14 )
              v5 = *v14;
            LODWORD(v139) = *(_DWORD *)(a2 + 48);
            LODWORD(v138) = v5;
            McTemplateK0pqd_EtwWriteTransfer(v11, (__int64)v12, &v171, a2, v138, v139);
          }
          goto LABEL_70;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_70;
        v15 = &EventPnpRequestComplete;
LABEL_69:
        LODWORD(v138) = *(_DWORD *)(a2 + 48);
        McTemplateK0pd_EtwWriteTransfer(v11, v15, &v171, a2, v138);
        goto LABEL_70;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_70;
      v16 = *((_QWORD *)v12 + 1);
      v146 = 0;
      v17 = 0LL;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( *(_BYTE *)(v16 + 2) == 40 )
      {
        v22 = 0LL;
        v150 = 0;
        if ( *(_DWORD *)(v16 + 20) )
          goto LABEL_70;
        v23 = 0;
        v159 = *(_DWORD *)(v16 + 56);
        if ( !v159 )
          goto LABEL_70;
        do
        {
          v11 = *(unsigned int *)(v16 + 4LL * v23 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v24 = *(unsigned int *)(v16 + 16);
            if ( (unsigned int)v11 < (unsigned int)v24 )
            {
              v25 = (unsigned int)v11;
              v26 = *(_DWORD *)(v11 + v16) - 64;
              if ( v26 )
              {
                v11 = (unsigned int)(v26 - 1);
                if ( (_DWORD)v11 )
                {
                  if ( (_DWORD)v11 == 1 )
                  {
                    v11 = v25 + 40;
                    if ( v25 + 40 <= v24 )
                    {
                      if ( *(_DWORD *)(v25 + v16 + 12) )
                        v22 = (char *)(v25 + v16 + 32);
                      v17 = *(_BYTE **)(v25 + v16 + 24);
LABEL_27:
                      v27 = *(_BYTE *)(v25 + v16 + 8);
                      v18 = *(_BYTE *)(v25 + v16 + 9);
                      goto LABEL_36;
                    }
                  }
                }
                else
                {
                  v11 = v25 + 56;
                  if ( v25 + 56 <= v24 )
                  {
                    v150 = 1;
                    if ( *(_BYTE *)(v25 + v16 + 10) )
                      v22 = (char *)(v25 + v16 + 24);
                    v17 = *(_BYTE **)(v25 + v16 + 16);
                    v18 = *(_BYTE *)(v25 + v16 + 9);
                    v146 = *(_BYTE *)(v25 + v16 + 8);
                  }
                }
              }
              else
              {
                v11 = v25 + 40;
                if ( v25 + 40 <= v24 )
                {
                  if ( *(_BYTE *)(v25 + v16 + 10) )
                    v22 = (char *)(v25 + v16 + 24);
                  v17 = *(_BYTE **)(v25 + v16 + 16);
                  goto LABEL_27;
                }
              }
              if ( v150 )
                break;
            }
          }
          ++v23;
        }
        while ( v23 < v159 );
        v27 = v146;
LABEL_36:
        if ( !v22 )
          goto LABEL_70;
        v28 = *v22;
        v21 = 0;
      }
      else
      {
        v28 = *(_BYTE *)(v16 + 72);
        v17 = *(_BYTE **)(v16 + 32);
        v18 = *(_BYTE *)(v16 + 11);
        v27 = *(_BYTE *)(v16 + 4);
        if ( *(_BYTE *)(v16 + 2) )
          goto LABEL_70;
      }
      LOBYTE(v11) = v28 - 8;
      if ( (v11 & 0x5D) != 0 )
        goto LABEL_70;
      v29 = *(_BYTE *)(v16 + 3);
      if ( v29 == 1 || !v17 || !v18 )
      {
LABEL_61:
        if ( byte_140173441 >= 0 )
          goto LABEL_70;
        if ( !v21 )
        {
          v20 = 0;
          LOBYTE(v7) = 0;
          v19 = 0;
        }
        v145 = a2;
        v144 = v20;
        v143 = v7;
        v142 = v19;
        v141 = v27;
        LOBYTE(v139) = v29;
        goto LABEL_65;
      }
      v30 = *v17 & 0x7F;
      if ( v30 == 114 || v30 == 115 )
      {
        v11 = (unsigned __int64)&v17[v18];
        LOBYTE(v16) = 0;
        if ( (unsigned __int64)(v17 + 8) > v11 )
          goto LABEL_59;
        LOBYTE(v7) = v17[2];
        v19 = v17[1] & 0xF;
        v20 = v17[3];
      }
      else
      {
        v11 = (unsigned __int64)&v17[v18];
        LOBYTE(v16) = 0;
        if ( (unsigned __int64)(v17 + 8) > v11 )
          goto LABEL_59;
        v31 = v17 + 13;
        v19 = v17[2] & 0xF;
        v32 = v18;
        if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
          v32 = (unsigned __int8)v17[7] + 8;
        v11 = (unsigned __int64)&v17[v32];
        if ( (unsigned __int64)v31 <= v11 )
          LOBYTE(v7) = v17[12];
        if ( (unsigned __int64)(v17 + 14) > v11 )
          v20 = 0;
        else
          v20 = *v31;
      }
      LOBYTE(v16) = 1;
LABEL_59:
      if ( (_BYTE)v16 )
        v21 = 1;
      goto LABEL_61;
    }
    goto LABEL_66;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v33 )
      goto LABEL_139;
    v171 = 0LL;
    IoGetActivityIdIrp(a2, &v171);
    v37 = *(unsigned __int8 **)(a2 + 184);
    if ( *v37 != 14 )
    {
      v38 = *v37 - 15;
      if ( *v37 != 15 )
      {
LABEL_76:
        if ( v38 != 12 )
          goto LABEL_139;
        if ( v37[1] == 7 && !*((_DWORD *)v37 + 2) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v39 = *(int **)(a2 + 56);
            if ( v39 )
              v5 = *v39;
            McTemplateK0pqd_EtwWriteTransfer(v36, (__int64)v37, &v171, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_139;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_139;
        v40 = &EventPnpRequestComplete;
LABEL_138:
        McTemplateK0pd_EtwWriteTransfer(v36, v40, &v171, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_139;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_139;
      v41 = *((_QWORD *)v37 + 1);
      v147 = 0;
      v42 = 0LL;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = *(unsigned __int8 *)(v41 + 2);
      if ( (_BYTE)v47 == 40 )
      {
        v48 = 0LL;
        v151 = 0;
        if ( !*(_DWORD *)(v41 + 20) )
        {
          v49 = 0;
          v160 = *(_DWORD *)(v41 + 56);
          if ( v160 )
          {
            while ( 1 )
            {
              v36 = *(unsigned int *)(v41 + 4LL * v49 + 120);
              if ( (unsigned int)v36 >= 0x80 )
              {
                v50 = *(unsigned int *)(v41 + 16);
                if ( (unsigned int)v36 < (unsigned int)v50 )
                {
                  v51 = (unsigned int)v36;
                  v52 = *(_DWORD *)(v36 + v41) - 64;
                  if ( v52 )
                  {
                    v36 = (unsigned int)(v52 - 1);
                    if ( (_DWORD)v36 )
                    {
                      if ( (_DWORD)v36 == 1 )
                      {
                        v36 = v51 + 40;
                        if ( v51 + 40 <= v50 )
                          goto LABEL_95;
                      }
                    }
                    else
                    {
                      v36 = v51 + 56;
                      if ( v51 + 56 <= v50 )
                      {
                        v151 = 1;
                        if ( *(_BYTE *)(v51 + v41 + 10) )
                          v48 = (char *)(v51 + v41 + 24);
                        v42 = *(_BYTE **)(v51 + v41 + 16);
                        v43 = *(_BYTE *)(v51 + v41 + 9);
                        v147 = *(_BYTE *)(v51 + v41 + 8);
                      }
                    }
                  }
                  else
                  {
                    v36 = v51 + 40;
                    if ( v51 + 40 <= v50 )
                      goto LABEL_109;
                  }
                  if ( v151 )
                    goto LABEL_106;
                }
              }
              if ( ++v49 >= v160 )
                goto LABEL_106;
            }
          }
        }
        goto LABEL_139;
      }
LABEL_112:
      v53 = *(_BYTE *)(v41 + 4);
      v43 = *(_BYTE *)(v41 + 11);
      v42 = *(_BYTE **)(v41 + 32);
      v54 = *(_BYTE *)(v41 + 72);
      if ( v47 )
        goto LABEL_139;
LABEL_113:
      LOBYTE(v36) = v54 - 8;
      if ( (v36 & 0x5D) != 0 )
      {
LABEL_139:
        IofCompleteRequest((PIRP)a2, 0);
        v34 = -1073741811;
        goto LABEL_71;
      }
      v55 = *(_BYTE *)(v41 + 3);
      if ( v55 == 1 || !v42 || !v43 )
      {
LABEL_132:
        if ( byte_140173441 < 0 )
        {
          if ( !v46 )
          {
            v45 = 0;
            LOBYTE(v7) = 0;
            v44 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v36, v41, &v171, a2, *(_DWORD *)(a2 + 48), v55, v53, v44, v7, v45, a2);
        }
        goto LABEL_139;
      }
      v56 = *v42 & 0x7F;
      if ( v56 == 114 || v56 == 115 )
      {
        v36 = (unsigned __int64)&v42[v43];
        LOBYTE(v41) = 0;
        if ( (unsigned __int64)(v42 + 8) > v36 )
          goto LABEL_130;
        v45 = v42[3];
        v44 = v42[1] & 0xF;
        LOBYTE(v7) = v42[2];
      }
      else
      {
        v36 = (unsigned __int64)&v42[v43];
        LOBYTE(v41) = 0;
        if ( (unsigned __int64)(v42 + 8) > v36 )
          goto LABEL_130;
        v57 = v42 + 13;
        v44 = v42[2] & 0xF;
        v58 = v43;
        if ( (unsigned int)(unsigned __int8)v42[7] + 8 <= v43 )
          v58 = (unsigned __int8)v42[7] + 8;
        v36 = (unsigned __int64)&v42[v58];
        if ( (unsigned __int64)v57 <= v36 )
          LOBYTE(v7) = v42[12];
        if ( (unsigned __int64)(v42 + 14) > v36 )
          v45 = 0;
        else
          v45 = *v57;
      }
      LOBYTE(v41) = 1;
LABEL_130:
      if ( (_BYTE)v41 )
        v46 = 1;
      goto LABEL_132;
    }
    goto LABEL_136;
  }
  if ( !v10 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v33 )
      goto LABEL_139;
    v171 = 0LL;
    IoGetActivityIdIrp(a2, &v171);
    v37 = *(unsigned __int8 **)(a2 + 184);
    if ( *v37 != 14 )
    {
      v38 = *v37 - 15;
      if ( *v37 != 15 )
        goto LABEL_76;
      if ( byte_140173441 >= 0 )
        goto LABEL_139;
      v41 = *((_QWORD *)v37 + 1);
      v147 = 0;
      v42 = 0LL;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = *(unsigned __int8 *)(v41 + 2);
      if ( (_BYTE)v47 == 40 )
      {
        v48 = 0LL;
        v152 = 0;
        if ( !*(_DWORD *)(v41 + 20) )
        {
          v59 = 0;
          v161 = *(_DWORD *)(v41 + 56);
          if ( v161 )
          {
            while ( 1 )
            {
              v36 = *(unsigned int *)(v41 + 4LL * v59 + 120);
              if ( (unsigned int)v36 >= 0x80 )
              {
                v60 = *(unsigned int *)(v41 + 16);
                if ( (unsigned int)v36 < (unsigned int)v60 )
                {
                  v61 = (unsigned int)v36;
                  v62 = *(_DWORD *)(v41 + v36) - 64;
                  if ( v62 )
                  {
                    v36 = (unsigned int)(v62 - 1);
                    if ( (_DWORD)v36 )
                    {
                      if ( (_DWORD)v36 == 1 )
                      {
                        v36 = v61 + 40;
                        if ( v61 + 40 <= v60 )
                          goto LABEL_154;
                      }
                    }
                    else
                    {
                      v36 = v61 + 56;
                      if ( v61 + 56 <= v60 )
                      {
                        v152 = 1;
                        if ( *(_BYTE *)(v41 + v61 + 10) )
                          v48 = (char *)(v61 + v41 + 24);
                        v42 = *(_BYTE **)(v41 + v61 + 16);
                        v43 = *(_BYTE *)(v41 + v61 + 9);
                        v147 = *(_BYTE *)(v41 + v61 + 8);
                      }
                    }
                  }
                  else
                  {
                    v36 = v61 + 40;
                    if ( v61 + 40 <= v60 )
                      goto LABEL_166;
                  }
                  if ( v152 )
                    goto LABEL_106;
                }
              }
              if ( ++v59 >= v161 )
                goto LABEL_106;
            }
          }
        }
        goto LABEL_139;
      }
      goto LABEL_112;
    }
LABEL_136:
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_139;
    v40 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_138;
  }
  v63 = *(_BYTE *)(v10 + 2);
  v64 = 24LL;
  if ( v63 != 40 )
    v64 = 12LL;
  if ( (*(_DWORD *)(v64 + v10) & 0x4000) == 0 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v33 )
      goto LABEL_139;
    v171 = 0LL;
    IoGetActivityIdIrp(a2, &v171);
    v37 = *(unsigned __int8 **)(a2 + 184);
    if ( *v37 != 14 )
    {
      v38 = *v37 - 15;
      if ( *v37 != 15 )
        goto LABEL_76;
      if ( byte_140173441 >= 0 )
        goto LABEL_139;
      v41 = *((_QWORD *)v37 + 1);
      v42 = 0LL;
      v147 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = *(unsigned __int8 *)(v41 + 2);
      if ( (_BYTE)v47 == 40 )
      {
        v48 = 0LL;
        v153 = 0;
        if ( *(_DWORD *)(v41 + 20) )
          goto LABEL_139;
        v65 = 0;
        v162 = *(_DWORD *)(v41 + 56);
        if ( !v162 )
          goto LABEL_139;
        while ( 1 )
        {
          v36 = *(unsigned int *)(v41 + 4LL * v65 + 120);
          if ( (unsigned int)v36 >= 0x80 )
          {
            v66 = *(unsigned int *)(v41 + 16);
            if ( (unsigned int)v36 < (unsigned int)v66 )
            {
              v61 = (unsigned int)v36;
              v67 = *(_DWORD *)(v41 + v36) - 64;
              if ( v67 )
              {
                v36 = (unsigned int)(v67 - 1);
                if ( (_DWORD)v36 )
                {
                  if ( (_DWORD)v36 == 1 )
                  {
                    v36 = v61 + 40;
                    if ( v61 + 40 <= v66 )
                    {
LABEL_154:
                      if ( *(_DWORD *)(v41 + v61 + 12) )
                        v48 = (char *)(v61 + v41 + 32);
                      v42 = *(_BYTE **)(v41 + v61 + 24);
                      goto LABEL_157;
                    }
                  }
                }
                else
                {
                  v36 = v61 + 56;
                  if ( v61 + 56 <= v66 )
                  {
                    v153 = 1;
                    if ( *(_BYTE *)(v41 + v61 + 10) )
                      v48 = (char *)(v61 + v41 + 24);
                    v42 = *(_BYTE **)(v41 + v61 + 16);
                    v43 = *(_BYTE *)(v41 + v61 + 9);
                    v147 = *(_BYTE *)(v41 + v61 + 8);
                  }
                }
              }
              else
              {
                v36 = v61 + 40;
                if ( v61 + 40 <= v66 )
                {
LABEL_166:
                  if ( *(_BYTE *)(v41 + v61 + 10) )
                    v48 = (char *)(v61 + v41 + 24);
                  v42 = *(_BYTE **)(v41 + v61 + 16);
LABEL_157:
                  v53 = *(_BYTE *)(v41 + v61 + 8);
                  v43 = *(_BYTE *)(v41 + v61 + 9);
LABEL_107:
                  if ( v48 )
                  {
                    v54 = *v48;
                    v46 = 0;
                    goto LABEL_113;
                  }
                  goto LABEL_139;
                }
              }
              if ( v153 )
                goto LABEL_106;
            }
          }
          if ( ++v65 >= v162 )
            goto LABEL_106;
        }
      }
      goto LABEL_112;
    }
    goto LABEL_136;
  }
  v68 = *(_DWORD **)(v2 + 24);
  if ( *v68 == 1314275652 )
  {
    v69 = (__int64)v68 + 274;
  }
  else if ( *v68 == 1094997074 )
  {
    v69 = (__int64)v68 + 482;
  }
  else
  {
    v69 = 98LL;
  }
  if ( v63 == 40 )
  {
    if ( *(_BYTE *)v69 != 1 )
    {
      v33 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v10 + 3) = 6;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741637;
      if ( v33 )
        goto LABEL_267;
      v171 = 0LL;
      IoGetActivityIdIrp(a2, &v171);
      v71 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v71 == 14 )
      {
        if ( (byte_140173442 & 8) != 0 )
        {
          v73 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
          goto LABEL_266;
        }
LABEL_267:
        IofCompleteRequest((PIRP)a2, 0);
        v34 = -1073741637;
        goto LABEL_71;
      }
      if ( *(_BYTE *)v71 != 15 )
      {
        if ( *(_BYTE *)v71 == 27 )
        {
          if ( *(_BYTE *)(v71 + 1) == 7 && !*(_DWORD *)(v71 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v72 = *(int **)(a2 + 56);
              if ( v72 )
                v5 = *v72;
              McTemplateK0pqd_EtwWriteTransfer(v70, v71, &v171, a2, v5, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_267;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v73 = &EventPnpRequestComplete;
LABEL_266:
            McTemplateK0pd_EtwWriteTransfer(v70, v73, &v171, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_267;
          }
        }
        goto LABEL_267;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_267;
      v74 = *(_QWORD *)(v71 + 8);
      v75 = 0LL;
      v148 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      if ( *(_BYTE *)(v74 + 2) == 40 )
      {
        v80 = 0LL;
        v154 = 0;
        if ( *(_DWORD *)(v74 + 20) )
          goto LABEL_267;
        v81 = 0;
        v163 = *(_DWORD *)(v74 + 56);
        if ( !v163 )
          goto LABEL_267;
        do
        {
          v70 = *(unsigned int *)(v74 + 4LL * v81 + 120);
          if ( (unsigned int)v70 >= 0x80 )
          {
            v82 = *(unsigned int *)(v74 + 16);
            if ( (unsigned int)v70 < (unsigned int)v82 )
            {
              v83 = (unsigned int)v70;
              v84 = *(_DWORD *)(v74 + v70) - 64;
              if ( v84 )
              {
                v70 = (unsigned int)(v84 - 1);
                if ( (_DWORD)v70 )
                {
                  if ( (_DWORD)v70 == 1 )
                  {
                    v70 = v83 + 40;
                    if ( v83 + 40 <= v82 )
                    {
                      if ( *(_DWORD *)(v74 + v83 + 12) )
                        v80 = (char *)(v83 + v74 + 32);
                      v75 = *(_BYTE **)(v74 + v83 + 24);
LABEL_226:
                      v85 = *(_BYTE *)(v74 + v83 + 8);
                      v76 = *(_BYTE *)(v74 + v83 + 9);
                      goto LABEL_235;
                    }
                  }
                }
                else
                {
                  v70 = v83 + 56;
                  if ( v83 + 56 <= v82 )
                  {
                    v154 = 1;
                    if ( *(_BYTE *)(v74 + v83 + 10) )
                      v80 = (char *)(v83 + v74 + 24);
                    v75 = *(_BYTE **)(v74 + v83 + 16);
                    v76 = *(_BYTE *)(v74 + v83 + 9);
                    v148 = *(_BYTE *)(v74 + v83 + 8);
                  }
                }
              }
              else
              {
                v70 = v83 + 40;
                if ( v83 + 40 <= v82 )
                {
                  if ( *(_BYTE *)(v74 + v83 + 10) )
                    v80 = (char *)(v83 + v74 + 24);
                  v75 = *(_BYTE **)(v74 + v83 + 16);
                  goto LABEL_226;
                }
              }
              if ( v154 )
                break;
            }
          }
          ++v81;
        }
        while ( v81 < v163 );
        v85 = v148;
LABEL_235:
        if ( !v80 )
          goto LABEL_267;
        v86 = *v80;
        v79 = 0;
      }
      else
      {
        v86 = *(_BYTE *)(v74 + 72);
        v75 = *(_BYTE **)(v74 + 32);
        v76 = *(_BYTE *)(v74 + 11);
        v85 = *(_BYTE *)(v74 + 4);
        if ( *(_BYTE *)(v74 + 2) )
          goto LABEL_267;
      }
      LOBYTE(v70) = v86 - 8;
      if ( (v70 & 0x5D) != 0 )
        goto LABEL_267;
      v87 = *(_BYTE *)(v74 + 3);
      if ( v87 == 1 || !v75 || !v76 )
      {
LABEL_260:
        if ( byte_140173441 < 0 )
        {
          if ( !v79 )
          {
            v78 = 0;
            LOBYTE(v7) = 0;
            v77 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v70, v74, &v171, a2, *(_DWORD *)(a2 + 48), v87, v85, v77, v7, v78, a2);
        }
        goto LABEL_267;
      }
      v88 = *v75 & 0x7F;
      if ( v88 == 114 || v88 == 115 )
      {
        v70 = (unsigned __int64)&v75[v76];
        LOBYTE(v74) = 0;
        if ( (unsigned __int64)(v75 + 8) > v70 )
          goto LABEL_258;
        LOBYTE(v7) = v75[2];
        v77 = v75[1] & 0xF;
        v78 = v75[3];
      }
      else
      {
        v70 = (unsigned __int64)&v75[v76];
        LOBYTE(v74) = 0;
        if ( (unsigned __int64)(v75 + 8) > v70 )
          goto LABEL_258;
        v89 = v75 + 13;
        v77 = v75[2] & 0xF;
        v90 = v76;
        if ( (unsigned int)(unsigned __int8)v75[7] + 8 <= v76 )
          v90 = (unsigned __int8)v75[7] + 8;
        v70 = (unsigned __int64)&v75[v90];
        if ( (unsigned __int64)v89 <= v70 )
          LOBYTE(v7) = v75[12];
        if ( (unsigned __int64)(v75 + 14) > v70 )
          v78 = 0;
        else
          v78 = *v89;
      }
      LOBYTE(v74) = 1;
LABEL_258:
      if ( (_BYTE)v74 )
        v79 = 1;
      goto LABEL_260;
    }
    v7 = v10;
    v91 = *(_DWORD *)(v10 + 20);
    v164 = *(_DWORD *)(v10 + 24);
    if ( *(_DWORD *)(v10 + 8) != 1397899864 || *(_DWORD *)(v10 + 48) || *(_QWORD *)(v10 + 72) )
    {
      v33 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v10 + 3) = 6;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v33 )
        goto LABEL_139;
      v171 = 0LL;
      IoGetActivityIdIrp(a2, &v171);
      v37 = *(unsigned __int8 **)(a2 + 184);
      if ( *v37 != 14 )
      {
        v38 = *v37 - 15;
        if ( *v37 != 15 )
          goto LABEL_76;
        if ( byte_140173441 >= 0 )
          goto LABEL_139;
        v41 = *((_QWORD *)v37 + 1);
        v42 = 0LL;
        v147 = 0;
        v43 = 0;
        v44 = 0;
        LOBYTE(v7) = 0;
        v45 = 0;
        v46 = 0;
        v47 = *(unsigned __int8 *)(v41 + 2);
        if ( (_BYTE)v47 == 40 )
        {
          v48 = 0LL;
          v155 = 0;
          if ( *(_DWORD *)(v41 + 20) )
            goto LABEL_139;
          v92 = 0;
          v165 = *(_DWORD *)(v41 + 56);
          if ( !v165 )
            goto LABEL_139;
          while ( 1 )
          {
            v36 = *(unsigned int *)(v41 + 4LL * v92 + 120);
            if ( (unsigned int)v36 >= 0x80 )
            {
              v93 = *(unsigned int *)(v41 + 16);
              if ( (unsigned int)v36 < (unsigned int)v93 )
              {
                v51 = (unsigned int)v36;
                v94 = *(_DWORD *)(v36 + v41) - 64;
                if ( v94 )
                {
                  v36 = (unsigned int)(v94 - 1);
                  if ( (_DWORD)v36 )
                  {
                    if ( (_DWORD)v36 == 1 )
                    {
                      v36 = v51 + 40;
                      if ( v51 + 40 <= v93 )
                      {
LABEL_95:
                        if ( *(_DWORD *)(v51 + v41 + 12) )
                          v48 = (char *)(v51 + v41 + 32);
                        v42 = *(_BYTE **)(v51 + v41 + 24);
LABEL_98:
                        v53 = *(_BYTE *)(v51 + v41 + 8);
                        v43 = *(_BYTE *)(v51 + v41 + 9);
                        goto LABEL_107;
                      }
                    }
                  }
                  else
                  {
                    v36 = v51 + 56;
                    if ( v51 + 56 <= v93 )
                    {
                      v155 = 1;
                      if ( *(_BYTE *)(v51 + v41 + 10) )
                        v48 = (char *)(v51 + v41 + 24);
                      v42 = *(_BYTE **)(v51 + v41 + 16);
                      v43 = *(_BYTE *)(v51 + v41 + 9);
                      v147 = *(_BYTE *)(v51 + v41 + 8);
                    }
                  }
                }
                else
                {
                  v36 = v51 + 40;
                  if ( v51 + 40 <= v93 )
                  {
LABEL_109:
                    if ( *(_BYTE *)(v51 + v41 + 10) )
                      v48 = (char *)(v51 + v41 + 24);
                    v42 = *(_BYTE **)(v51 + v41 + 16);
                    goto LABEL_98;
                  }
                }
                if ( v155 )
                  goto LABEL_106;
              }
            }
            if ( ++v92 >= v165 )
            {
LABEL_106:
              v53 = v147;
              goto LABEL_107;
            }
          }
        }
        goto LABEL_112;
      }
      goto LABEL_136;
    }
  }
  else
  {
    v91 = *(unsigned __int8 *)(v10 + 2);
    v164 = *(_DWORD *)(v10 + 12);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Cu,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      v2,
      a2,
      v91);
    v2 = v169;
  }
  if ( (v164 & 0x100000) != 0 )
  {
    if ( (v95 = *(_QWORD *)(v2 + 24), (v96 = *(_QWORD *)(v95 + 5024)) != 0) && (*(_DWORD *)(v96 + 20) & 1) == 0
      || (*(_BYTE *)(v95 + 107) & 4) != 0
      || *(_DWORD *)(v95 + 348) != 1 )
    {
      v33 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v10 + 3) = 36;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741823;
      if ( v33 )
        goto LABEL_70;
      v171 = 0LL;
      IoGetActivityIdIrp(a2, &v171);
      v12 = *(unsigned __int8 **)(a2 + 184);
      if ( *v12 != 14 )
      {
        v13 = *v12 - 15;
        if ( *v12 == 15 )
        {
          if ( byte_140173441 >= 0 )
            goto LABEL_70;
          v16 = *((_QWORD *)v12 + 1);
          v97 = 0LL;
          v149 = 0;
          v98 = 0;
          v99 = 0;
          v100 = 0;
          v101 = 0;
          v102 = 0;
          v103 = *(unsigned __int8 *)(v16 + 2);
          if ( (_BYTE)v103 == 40 )
          {
            v104 = 0LL;
            v156 = 0;
            if ( !*(_DWORD *)(v16 + 20) )
            {
              v105 = 0;
              v166 = *(_DWORD *)(v16 + 56);
              if ( v166 )
              {
                while ( 1 )
                {
                  v11 = *(unsigned int *)(v16 + 4LL * v105 + 120);
                  if ( (unsigned int)v11 >= 0x80 )
                  {
                    v106 = *(unsigned int *)(v16 + 16);
                    if ( (unsigned int)v11 < (unsigned int)v106 )
                    {
                      v107 = (unsigned int)v11;
                      v108 = *(_DWORD *)(v16 + v11) - 64;
                      if ( v108 )
                      {
                        v11 = (unsigned int)(v108 - 1);
                        if ( (_DWORD)v11 )
                        {
                          if ( (_DWORD)v11 == 1 )
                          {
                            v11 = v107 + 40;
                            if ( v107 + 40 <= v106 )
                              goto LABEL_316;
                          }
                        }
                        else
                        {
                          v11 = v107 + 56;
                          if ( v107 + 56 <= v106 )
                          {
                            v156 = 1;
                            if ( *(_BYTE *)(v16 + v107 + 10) )
                              v104 = (char *)(v107 + v16 + 24);
                            v97 = *(_BYTE **)(v16 + v107 + 16);
                            v98 = *(_BYTE *)(v16 + v107 + 9);
                            v149 = *(_BYTE *)(v16 + v107 + 8);
                          }
                        }
                      }
                      else
                      {
                        v11 = v107 + 40;
                        if ( v107 + 40 <= v106 )
                          goto LABEL_420;
                      }
                      if ( v156 )
                        goto LABEL_327;
                    }
                  }
                  if ( ++v105 >= v166 )
                    goto LABEL_327;
                }
              }
            }
            goto LABEL_70;
          }
          goto LABEL_423;
        }
        goto LABEL_5;
      }
      goto LABEL_66;
    }
  }
  if ( v91 )
  {
    v33 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v10 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v33 )
      goto LABEL_70;
    v171 = 0LL;
    IoGetActivityIdIrp(a2, &v171);
    v12 = *(unsigned __int8 **)(a2 + 184);
    if ( *v12 != 14 )
    {
      v13 = *v12 - 15;
      if ( *v12 == 15 )
      {
        if ( byte_140173441 >= 0 )
          goto LABEL_70;
        v16 = *((_QWORD *)v12 + 1);
        v97 = 0LL;
        v149 = 0;
        v98 = 0;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v102 = 0;
        v103 = *(unsigned __int8 *)(v16 + 2);
        if ( (_BYTE)v103 == 40 )
        {
          v104 = 0LL;
          v157 = 0;
          if ( !*(_DWORD *)(v16 + 20) )
          {
            v114 = 0;
            v167 = *(_DWORD *)(v16 + 56);
            if ( v167 )
            {
              while ( 1 )
              {
                v11 = *(unsigned int *)(v16 + 4LL * v114 + 120);
                if ( (unsigned int)v11 >= 0x80 )
                {
                  v115 = *(unsigned int *)(v16 + 16);
                  if ( (unsigned int)v11 < (unsigned int)v115 )
                  {
                    v107 = (unsigned int)v11;
                    v116 = *(_DWORD *)(v16 + v11) - 64;
                    if ( v116 )
                    {
                      v11 = (unsigned int)(v116 - 1);
                      if ( (_DWORD)v11 )
                      {
                        if ( (_DWORD)v11 == 1 )
                        {
                          v11 = v107 + 40;
                          if ( v107 + 40 <= v115 )
                            goto LABEL_316;
                        }
                      }
                      else
                      {
                        v11 = v107 + 56;
                        if ( v107 + 56 <= v115 )
                        {
                          v157 = 1;
                          if ( *(_BYTE *)(v16 + v107 + 10) )
                            v104 = (char *)(v107 + v16 + 24);
                          v97 = *(_BYTE **)(v16 + v107 + 16);
                          v98 = *(_BYTE *)(v16 + v107 + 9);
                          v149 = *(_BYTE *)(v16 + v107 + 8);
                        }
                      }
                    }
                    else
                    {
                      v11 = v107 + 40;
                      if ( v107 + 40 <= v115 )
                        goto LABEL_420;
                    }
                    if ( v157 )
                      goto LABEL_327;
                  }
                }
                if ( ++v114 >= v167 )
                  goto LABEL_327;
              }
            }
          }
          goto LABEL_70;
        }
        goto LABEL_423;
      }
      goto LABEL_5;
    }
LABEL_66:
    v33 = (byte_140173442 & 8) == 0;
LABEL_67:
    if ( v33 )
      goto LABEL_70;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_69;
  }
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v117 = (unsigned __int8 *)(v10 + 72);
    goto LABEL_393;
  }
  v117 = 0LL;
  v118 = 0;
  if ( *(_BYTE *)(v7 + 2) != 40 )
    goto LABEL_393;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_393;
  v119 = *(_DWORD *)(v7 + 56);
  v120 = 0;
  if ( !v119 )
    goto LABEL_393;
  while ( 1 )
  {
    v121 = *(unsigned int *)(v7 + 4LL * v120 + 120);
    if ( (unsigned int)v121 >= 0x80 )
    {
      v122 = *(unsigned int *)(v7 + 16);
      if ( (unsigned int)v121 < (unsigned int)v122 )
        break;
    }
LABEL_387:
    if ( ++v120 >= v119 )
      goto LABEL_393;
  }
  v123 = (unsigned int)v121;
  v124 = *(_DWORD *)(v121 + v7) - 64;
  if ( v124 )
  {
    v125 = v124 - 1;
    if ( v125 )
    {
      if ( v125 == 1 && v123 + 40 <= v122 )
      {
        if ( !*(_DWORD *)(v123 + v7 + 12) )
          goto LABEL_393;
        v126 = v7 + 32;
        goto LABEL_391;
      }
    }
    else if ( v123 + 56 <= v122 )
    {
      v118 = 1;
      if ( !*(_BYTE *)(v123 + v7 + 10) )
        goto LABEL_393;
      v117 = (unsigned __int8 *)(v123 + v7 + 24);
    }
    goto LABEL_386;
  }
  if ( v123 + 40 > v122 )
  {
LABEL_386:
    if ( v118 )
      goto LABEL_393;
    goto LABEL_387;
  }
  if ( !*(_BYTE *)(v123 + v7 + 10) )
    goto LABEL_393;
  v126 = v7 + 24;
LABEL_391:
  v117 = (unsigned __int8 *)(v123 + v126);
LABEL_393:
  v127 = *v117;
  v128 = 0x50000000400LL;
  v129 = 0x500000005LL;
  if ( (_BYTE)v127 == 8
    || (unsigned __int8)v127 <= 0x2Au && _bittest64(&v128, v127)
    || (v130 = v127 + 120, v130 <= 0x22u) && _bittest64(&v129, v130) )
  {
    if ( StorEtwLoggingEnabled && (byte_140173441 & 0x1E) != 0 )
    {
      if ( (v135 = *v117, (_BYTE)v135 == 8)
        || (unsigned __int8)v135 <= 0x2Au && _bittest64(&v128, v135)
        || (v136 = v135 + 120, v136 <= 0x22u) && _bittest64(&v129, v136) )
      {
        IoGetActivityIdIrp(a2, &v172);
        StorEtwIORequestDispatch(a2);
      }
    }
    v35 = v169;
    *(_BYTE *)(a2 + 141) = -88;
    v34 = RaidUnitSubmitRequest(v169, a2);
    goto LABEL_441;
  }
  v33 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v10 + 3) = 6;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v33 )
    goto LABEL_70;
  v171 = 0LL;
  IoGetActivityIdIrp(a2, &v171);
  v12 = *(unsigned __int8 **)(a2 + 184);
  if ( *v12 == 14 )
  {
    v33 = (byte_140173442 & 8) == 0;
    goto LABEL_67;
  }
  v13 = *v12 - 15;
  if ( *v12 != 15 )
    goto LABEL_5;
  if ( byte_140173441 >= 0 )
    goto LABEL_70;
  v16 = *((_QWORD *)v12 + 1);
  v97 = 0LL;
  v149 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = *(unsigned __int8 *)(v16 + 2);
  if ( (_BYTE)v103 == 40 )
  {
    v104 = 0LL;
    v158 = 0;
    if ( !*(_DWORD *)(v16 + 20) )
    {
      v131 = 0;
      v168 = *(_DWORD *)(v16 + 56);
      if ( v168 )
      {
        do
        {
          v11 = *(unsigned int *)(v16 + 4LL * v131 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v132 = *(unsigned int *)(v16 + 16);
            if ( (unsigned int)v11 < (unsigned int)v132 )
            {
              v107 = (unsigned int)v11;
              v133 = *(_DWORD *)(v16 + v11) - 64;
              if ( v133 )
              {
                v11 = (unsigned int)(v133 - 1);
                if ( (_DWORD)v11 )
                {
                  if ( (_DWORD)v11 == 1 )
                  {
                    v11 = v107 + 40;
                    if ( v107 + 40 <= v132 )
                    {
LABEL_316:
                      if ( *(_DWORD *)(v16 + v107 + 12) )
                        v104 = (char *)(v107 + v16 + 32);
                      v97 = *(_BYTE **)(v16 + v107 + 24);
LABEL_319:
                      v109 = *(_BYTE *)(v16 + v107 + 8);
                      v98 = *(_BYTE *)(v16 + v107 + 9);
                      goto LABEL_328;
                    }
                  }
                }
                else
                {
                  v11 = v107 + 56;
                  if ( v107 + 56 <= v132 )
                  {
                    v158 = 1;
                    if ( *(_BYTE *)(v16 + v107 + 10) )
                      v104 = (char *)(v107 + v16 + 24);
                    v97 = *(_BYTE **)(v16 + v107 + 16);
                    v98 = *(_BYTE *)(v16 + v107 + 9);
                    v149 = *(_BYTE *)(v16 + v107 + 8);
                  }
                }
              }
              else
              {
                v11 = v107 + 40;
                if ( v107 + 40 <= v132 )
                {
LABEL_420:
                  if ( *(_BYTE *)(v16 + v107 + 10) )
                    v104 = (char *)(v107 + v16 + 24);
                  v97 = *(_BYTE **)(v16 + v107 + 16);
                  goto LABEL_319;
                }
              }
              if ( v158 )
                break;
            }
          }
          ++v131;
        }
        while ( v131 < v168 );
LABEL_327:
        v109 = v149;
LABEL_328:
        if ( v104 )
        {
          v110 = *v104;
          v102 = 0;
          goto LABEL_424;
        }
      }
    }
    goto LABEL_70;
  }
LABEL_423:
  v109 = *(_BYTE *)(v16 + 4);
  v98 = *(_BYTE *)(v16 + 11);
  v97 = *(_BYTE **)(v16 + 32);
  v110 = *(_BYTE *)(v16 + 72);
  if ( v103 )
    goto LABEL_70;
LABEL_424:
  LOBYTE(v11) = v110 - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v16 + 3) != 1 && v97 && v98 )
    {
      v134 = *v97 & 0x7F;
      if ( v134 == 114 || v134 == 115 )
      {
        v11 = (unsigned __int64)&v97[v98];
        v111 = 0;
        if ( (unsigned __int64)(v97 + 8) <= v11 )
        {
          v101 = v97[3];
          v99 = v97[1] & 0xF;
          v100 = v97[2];
          goto LABEL_340;
        }
      }
      else
      {
        v11 = (unsigned __int64)&v97[v98];
        v111 = 0;
        if ( (unsigned __int64)(v97 + 8) <= v11 )
        {
          v112 = v97 + 13;
          v99 = v97[2] & 0xF;
          v113 = v98;
          if ( (unsigned int)(unsigned __int8)v97[7] + 8 <= v98 )
            v113 = (unsigned __int8)v97[7] + 8;
          v11 = (unsigned __int64)&v97[v113];
          if ( (unsigned __int64)v112 <= v11 )
            v100 = v97[12];
          if ( (unsigned __int64)(v97 + 14) > v11 )
            v101 = 0;
          else
            v101 = *v112;
LABEL_340:
          v111 = 1;
        }
      }
      if ( v111 )
        v102 = 1;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_70;
    if ( !v102 )
    {
      v101 = 0;
      v100 = 0;
      v99 = 0;
    }
    v145 = a2;
    v144 = v101;
    v143 = v100;
    v142 = v99;
    v141 = v109;
    LOBYTE(v139) = *(_BYTE *)(v16 + 3);
LABEL_65:
    LODWORD(v138) = *(_DWORD *)(a2 + 48);
    McTemplateK0pduuuuup_EtwWriteTransfer(v11, v16, &v171, a2, v138, v139, v141, v142, v143, v144, v145);
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  v34 = -1073741823;
LABEL_71:
  v35 = v169;
LABEL_441:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v140) = v34;
    WPP_SF_qqqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Du,
      (__int64)&WPP_25fa594137633db1985de5dda85c818b_Traceguids,
      a1,
      v35,
      a2,
      v140);
  }
  return v34;
}
