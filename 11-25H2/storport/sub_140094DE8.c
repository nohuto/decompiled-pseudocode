/*
 * XREFs of sub_140094DE8 @ 0x140094DE8
 * Callers:
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14017C99C @ 0x14017C99C (sub_14017C99C.c)
 *     sub_1401A9540 @ 0x1401A9540 (sub_1401A9540.c)
 */

__int64 __fastcall sub_140094DE8(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  int v9; // ebx
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
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // eax
  int *v38; // rax
  char v39; // r15
  _BYTE *v40; // r9
  unsigned __int8 v41; // r10
  char v42; // si
  char v43; // r11
  char v44; // r12
  char *v45; // r11
  unsigned int *v46; // r13
  __int64 v47; // rax
  unsigned __int64 v48; // r14
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  char v53; // al
  int *v54; // rax
  char v55; // r15
  _BYTE *v56; // r9
  unsigned __int8 v57; // r10
  char v58; // si
  char v59; // r11
  char v60; // r12
  char *v61; // r11
  unsigned int *v62; // r13
  __int64 v63; // rax
  unsigned __int64 v64; // r14
  char v65; // cl
  char v66; // r8
  _BYTE *v67; // rax
  unsigned int v68; // eax
  char v69; // al
  __int64 v70; // [rsp+28h] [rbp-59h]
  __int64 v71; // [rsp+30h] [rbp-51h]
  __int64 v72; // [rsp+38h] [rbp-49h]
  char v73; // [rsp+40h] [rbp-41h]
  char v74; // [rsp+48h] [rbp-39h]
  char v75; // [rsp+50h] [rbp-31h]
  __int64 v76; // [rsp+58h] [rbp-29h]
  char v77; // [rsp+68h] [rbp-19h]
  char v78; // [rsp+68h] [rbp-19h]
  char v79; // [rsp+68h] [rbp-19h]
  char v80; // [rsp+69h] [rbp-18h]
  char v81; // [rsp+69h] [rbp-18h]
  char v82; // [rsp+69h] [rbp-18h]
  int v83; // [rsp+6Ch] [rbp-15h]
  int v84; // [rsp+6Ch] [rbp-15h]
  int v85; // [rsp+6Ch] [rbp-15h]
  unsigned int v86; // [rsp+70h] [rbp-11h]
  unsigned int v87; // [rsp+70h] [rbp-11h]
  unsigned int v88; // [rsp+70h] [rbp-11h]
  unsigned int v89; // [rsp+74h] [rbp-Dh]
  __int128 v90; // [rsp+78h] [rbp-9h] BYREF
  __int128 v91; // [rsp+88h] [rbp+7h] BYREF
  __int128 v92; // [rsp+98h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(void **)(v2 + 8);
  if ( v5 == &unk_14014AED8 || RtlCompareMemory(v5, &unk_14014AED8, 0x10uLL) == 16 )
  {
    v34 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    if ( v34 && (v35 = *(_DWORD *)(a1 + 56)) != 0 && (unsigned int)(v35 - 5) > 1 )
    {
      if ( *(_DWORD *)v34 == 1094997074 || *(_DWORD *)v34 == 1314275652 )
        v36 = *(_QWORD *)(v34 + 8);
      else
        LODWORD(v36) = 0;
      v37 = sub_1401A9540(
              (unsigned int)*(_QWORD *)(a1 + 112) + 16,
              a2,
              v36,
              (unsigned int)*(_QWORD *)(a1 + 112) + 8,
              *(_QWORD *)(a1 + 112) + 16LL,
              **(_BYTE **)(a1 + 112) & 0x1F,
              *(_DWORD *)(a1 + 3432));
      v10 = byte_140168DAA == 0;
      v89 = v37;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v37;
      if ( v10 )
        goto LABEL_213;
      v91 = 0LL;
      IoGetActivityIdIrp(a2, &v91);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_213;
        v15 = (const GUID *)&v91;
        goto LABEL_211;
      }
      if ( *(_BYTE *)v12 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_213;
        v17 = *(_QWORD *)(v12 + 8);
        v39 = 0;
        v40 = 0LL;
        v78 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = 0;
        if ( *(_BYTE *)(v17 + 2) != 40 )
        {
          v49 = *(_BYTE *)(v17 + 72);
          v40 = *(_BYTE **)(v17 + 32);
          v41 = *(_BYTE *)(v17 + 11);
          v39 = *(_BYTE *)(v17 + 4);
          if ( *(_BYTE *)(v17 + 2) )
            goto LABEL_213;
          goto LABEL_123;
        }
        v45 = 0LL;
        v81 = 0;
        if ( *(_DWORD *)(v17 + 20) )
          goto LABEL_213;
        v11 = 0LL;
        v84 = 0;
        v87 = *(_DWORD *)(v17 + 56);
        if ( !v87 )
          goto LABEL_120;
        v46 = (unsigned int *)(v17 + 120);
        while ( 1 )
        {
          v47 = *v46;
          if ( (unsigned int)v47 >= 0x80 )
          {
            v48 = *(unsigned int *)(v17 + 16);
            if ( (unsigned int)v47 < (unsigned int)v48 )
            {
              if ( *(_DWORD *)(v47 + v17) == 64 )
              {
                v11 = v47 + 40;
                if ( v47 + 40 <= v48 )
                {
                  if ( *(_BYTE *)(v47 + v17 + 10) )
                    v45 = (char *)(v47 + v17 + 24);
                  v40 = *(_BYTE **)(v47 + v17 + 16);
LABEL_119:
                  v41 = *(_BYTE *)(v47 + v17 + 9);
                  v39 = *(_BYTE *)(v47 + v17 + 8);
LABEL_120:
                  if ( !v45 )
                    goto LABEL_213;
                  v49 = *v45;
                  v43 = 0;
LABEL_123:
                  LOBYTE(v11) = v49 - 8;
                  if ( (v11 & 0x5D) != 0 )
                    goto LABEL_213;
                  v50 = *(_BYTE *)(v17 + 3);
                  if ( v50 == 1 || !v40 || !v41 )
                    goto LABEL_142;
                  LOBYTE(v17) = 0;
                  v11 = (unsigned __int64)&v40[v41];
                  v51 = v40 + 8;
                  if ( (unsigned __int8)((*v40 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v51 <= v11 )
                    {
                      LOBYTE(v17) = 1;
                      v43 = v40[2];
                      v42 = v40[1] & 0xF;
                      v44 = v40[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v51 <= v11 )
                    {
                      v42 = v40[2] & 0xF;
                      v52 = v41;
                      if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
                        v52 = (unsigned __int8)v40[7] + 8;
                      v11 = (unsigned __int64)(v40 + 13);
                      v17 = (unsigned __int64)&v40[v52];
                      if ( (unsigned __int64)(v40 + 13) > v17 )
                        v78 = 0;
                      else
                        v78 = v40[12];
                      if ( (unsigned __int64)(v40 + 14) <= v17 )
                        v44 = *(_BYTE *)v11;
                      LOBYTE(v17) = 1;
                    }
                    v43 = v78;
                  }
                  if ( (_BYTE)v17 )
                  {
                    LOBYTE(v9) = v43;
                    v53 = v44;
                  }
                  else
                  {
LABEL_142:
                    v42 = 0;
                    v53 = 0;
                  }
                  v76 = a2;
                  v75 = v53;
                  v74 = v9;
                  v73 = v42;
                  LOBYTE(v72) = v39;
                  LOBYTE(v71) = v50;
                  v33 = (const GUID *)&v91;
LABEL_71:
                  LODWORD(v70) = *(_DWORD *)(a2 + 48);
                  sub_140052E64(v11, v17, v33, a2, v70, v71, v72, v73, v74, v75, v76);
                  goto LABEL_213;
                }
              }
              else
              {
                v11 = (unsigned int)(*(_DWORD *)(v47 + v17) - 65);
                if ( *(_DWORD *)(v47 + v17) == 65 )
                {
                  v11 = v47 + 56;
                  if ( v47 + 56 <= v48 )
                  {
                    v81 = 1;
                    if ( *(_BYTE *)(v47 + v17 + 10) )
                      v45 = (char *)(v47 + v17 + 24);
                    v39 = *(_BYTE *)(v47 + v17 + 8);
                    v40 = *(_BYTE **)(v47 + v17 + 16);
                    v41 = *(_BYTE *)(v47 + v17 + 9);
                  }
                }
                else if ( *(_DWORD *)(v47 + v17) == 66 )
                {
                  v11 = v47 + 40;
                  if ( v47 + 40 <= v48 )
                  {
                    if ( *(_DWORD *)(v47 + v17 + 12) )
                      v45 = (char *)(v47 + v17 + 32);
                    v40 = *(_BYTE **)(v47 + v17 + 24);
                    goto LABEL_119;
                  }
                }
              }
              if ( v81 )
                goto LABEL_120;
              LODWORD(v11) = v84;
            }
          }
          v11 = (unsigned int)(v11 + 1);
          ++v46;
          v84 = v11;
          if ( (unsigned int)v11 >= v87 )
            goto LABEL_120;
        }
      }
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_213;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_213;
        v38 = *(int **)(a2 + 56);
        if ( v38 )
          v9 = *v38;
        v14 = (const GUID *)&v91;
        goto LABEL_16;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_213;
      v15 = (const GUID *)&v91;
    }
    else
    {
      v10 = byte_140168DAA == 0;
      v89 = -1073741810;
      *(_DWORD *)(a2 + 48) = -1073741810;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v10 )
        goto LABEL_213;
      v92 = 0LL;
      IoGetActivityIdIrp(a2, &v92);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_213;
        v15 = (const GUID *)&v92;
        goto LABEL_211;
      }
      if ( *(_BYTE *)v12 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_213;
        v17 = *(_QWORD *)(v12 + 8);
        v55 = 0;
        v56 = 0LL;
        v79 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v60 = 0;
        if ( *(_BYTE *)(v17 + 2) == 40 )
        {
          v61 = 0LL;
          v82 = 0;
          if ( *(_DWORD *)(v17 + 20) )
            goto LABEL_213;
          v11 = 0LL;
          v85 = 0;
          v88 = *(_DWORD *)(v17 + 56);
          if ( !v88 )
            goto LABEL_185;
          v62 = (unsigned int *)(v17 + 120);
          while ( 1 )
          {
            v63 = *v62;
            if ( (unsigned int)v63 >= 0x80 )
            {
              v64 = *(unsigned int *)(v17 + 16);
              if ( (unsigned int)v63 < (unsigned int)v64 )
              {
                if ( *(_DWORD *)(v63 + v17) == 64 )
                {
                  v11 = v63 + 40;
                  if ( v63 + 40 <= v64 )
                  {
                    if ( *(_BYTE *)(v63 + v17 + 10) )
                      v61 = (char *)(v63 + v17 + 24);
                    v56 = *(_BYTE **)(v63 + v17 + 16);
LABEL_184:
                    v57 = *(_BYTE *)(v63 + v17 + 9);
                    v55 = *(_BYTE *)(v63 + v17 + 8);
LABEL_185:
                    if ( !v61 )
                      goto LABEL_213;
                    v65 = *v61;
                    v59 = 0;
LABEL_188:
                    LOBYTE(v11) = v65 - 8;
                    if ( (v11 & 0x5D) != 0 )
                      goto LABEL_213;
                    v66 = *(_BYTE *)(v17 + 3);
                    if ( v66 == 1 || !v56 || !v57 )
                      goto LABEL_207;
                    LOBYTE(v17) = 0;
                    v11 = (unsigned __int64)&v56[v57];
                    v67 = v56 + 8;
                    if ( (unsigned __int8)((*v56 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v67 <= v11 )
                      {
                        LOBYTE(v17) = 1;
                        v59 = v56[2];
                        v58 = v56[1] & 0xF;
                        v60 = v56[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v67 <= v11 )
                      {
                        v58 = v56[2] & 0xF;
                        v68 = v57;
                        if ( (unsigned int)(unsigned __int8)v56[7] + 8 <= v57 )
                          v68 = (unsigned __int8)v56[7] + 8;
                        v11 = (unsigned __int64)(v56 + 13);
                        v17 = (unsigned __int64)&v56[v68];
                        if ( (unsigned __int64)(v56 + 13) > v17 )
                          v79 = 0;
                        else
                          v79 = v56[12];
                        if ( (unsigned __int64)(v56 + 14) <= v17 )
                          v60 = *(_BYTE *)v11;
                        LOBYTE(v17) = 1;
                      }
                      v59 = v79;
                    }
                    if ( (_BYTE)v17 )
                    {
                      LOBYTE(v9) = v59;
                      v69 = v60;
                    }
                    else
                    {
LABEL_207:
                      v58 = 0;
                      v69 = 0;
                    }
                    v76 = a2;
                    v75 = v69;
                    v74 = v9;
                    v73 = v58;
                    LOBYTE(v72) = v55;
                    LOBYTE(v71) = v66;
                    v33 = (const GUID *)&v92;
                    goto LABEL_71;
                  }
                }
                else
                {
                  v11 = (unsigned int)(*(_DWORD *)(v63 + v17) - 65);
                  if ( *(_DWORD *)(v63 + v17) == 65 )
                  {
                    v11 = v63 + 56;
                    if ( v63 + 56 <= v64 )
                    {
                      v82 = 1;
                      if ( *(_BYTE *)(v63 + v17 + 10) )
                        v61 = (char *)(v63 + v17 + 24);
                      v55 = *(_BYTE *)(v63 + v17 + 8);
                      v56 = *(_BYTE **)(v63 + v17 + 16);
                      v57 = *(_BYTE *)(v63 + v17 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v63 + v17) == 66 )
                  {
                    v11 = v63 + 40;
                    if ( v63 + 40 <= v64 )
                    {
                      if ( *(_DWORD *)(v63 + v17 + 12) )
                        v61 = (char *)(v63 + v17 + 32);
                      v56 = *(_BYTE **)(v63 + v17 + 24);
                      goto LABEL_184;
                    }
                  }
                }
                if ( v82 )
                  goto LABEL_185;
                LODWORD(v11) = v85;
              }
            }
            v11 = (unsigned int)(v11 + 1);
            ++v62;
            v85 = v11;
            if ( (unsigned int)v11 >= v88 )
              goto LABEL_185;
          }
        }
        v65 = *(_BYTE *)(v17 + 72);
        v56 = *(_BYTE **)(v17 + 32);
        v57 = *(_BYTE *)(v17 + 11);
        v55 = *(_BYTE *)(v17 + 4);
        if ( *(_BYTE *)(v17 + 2) )
          goto LABEL_213;
        goto LABEL_188;
      }
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_213;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_213;
        v54 = *(int **)(a2 + 56);
        if ( v54 )
          v9 = *v54;
        v14 = (const GUID *)&v92;
LABEL_16:
        LODWORD(v71) = *(_DWORD *)(a2 + 48);
        LODWORD(v70) = v9;
        sub_140056AB0(v11, v12, v14, a2, v70, v71);
        goto LABEL_213;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_213;
      v15 = (const GUID *)&v92;
    }
LABEL_19:
    v16 = &stru_140149FE8;
LABEL_212:
    LODWORD(v70) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v11, v16, v15, a2, v70);
    goto LABEL_213;
  }
  v6 = *(void **)(v2 + 8);
  if ( v6 != &unk_14014C588 && RtlCompareMemory(v6, &unk_14014C588, 0x10uLL) != 16 )
    return sub_14017C99C(v7, a2);
  *(_BYTE *)(a2 + 141) = -84;
  v9 = 0;
  v89 = -1073741637;
  v10 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v10 )
    goto LABEL_213;
  v90 = 0LL;
  IoGetActivityIdIrp(a2, &v90);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_213;
    v15 = (const GUID *)&v90;
LABEL_211:
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_212;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_213;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_213;
      v13 = *(int **)(a2 + 56);
      if ( v13 )
        v9 = *v13;
      v14 = (const GUID *)&v90;
      goto LABEL_16;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_213;
    v15 = (const GUID *)&v90;
    goto LABEL_19;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_213;
  v17 = *(_QWORD *)(v12 + 8);
  v18 = 0;
  v19 = 0LL;
  v77 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) == 40 )
  {
    v24 = 0LL;
    v80 = 0;
    if ( *(_DWORD *)(v17 + 20) )
      goto LABEL_213;
    v11 = 0LL;
    v83 = 0;
    v86 = *(_DWORD *)(v17 + 56);
    if ( !v86 )
      goto LABEL_47;
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
LABEL_46:
              v20 = *(_BYTE *)(v26 + v17 + 9);
              v18 = *(_BYTE *)(v26 + v17 + 8);
LABEL_47:
              if ( v24 )
              {
                v28 = *v24;
                v22 = 0;
                goto LABEL_50;
              }
              goto LABEL_213;
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
                v80 = 1;
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
                goto LABEL_46;
              }
            }
          }
          if ( v80 )
            goto LABEL_47;
          LODWORD(v11) = v83;
        }
      }
      v11 = (unsigned int)(v11 + 1);
      ++v25;
      v83 = v11;
      if ( (unsigned int)v11 >= v86 )
        goto LABEL_47;
    }
  }
  v28 = *(_BYTE *)(v17 + 72);
  v19 = *(_BYTE **)(v17 + 32);
  v20 = *(_BYTE *)(v17 + 11);
  v18 = *(_BYTE *)(v17 + 4);
  if ( *(_BYTE *)(v17 + 2) )
    goto LABEL_213;
LABEL_50:
  LOBYTE(v11) = v28 - 8;
  if ( (v11 & 0x5D) == 0 )
  {
    v29 = *(_BYTE *)(v17 + 3);
    if ( v29 == 1 || !v19 || !v20 )
      goto LABEL_69;
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
          v77 = 0;
        else
          v77 = v19[12];
        if ( (unsigned __int64)(v19 + 14) <= v17 )
          v23 = *(_BYTE *)v11;
        LOBYTE(v17) = 1;
      }
      v22 = v77;
    }
    if ( (_BYTE)v17 )
    {
      LOBYTE(v9) = v22;
      v32 = v23;
    }
    else
    {
LABEL_69:
      v21 = 0;
      v32 = 0;
    }
    v76 = a2;
    v75 = v32;
    v74 = v9;
    v73 = v21;
    LOBYTE(v72) = v18;
    LOBYTE(v71) = v29;
    v33 = (const GUID *)&v90;
    goto LABEL_71;
  }
LABEL_213:
  IofCompleteRequest((PIRP)a2, 0);
  return v89;
}
