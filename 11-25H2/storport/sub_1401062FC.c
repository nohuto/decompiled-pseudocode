/*
 * XREFs of sub_1401062FC @ 0x1401062FC
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14017C99C @ 0x14017C99C (sub_14017C99C.c)
 *     sub_1401A9540 @ 0x1401A9540 (sub_1401A9540.c)
 */

__int64 __fastcall sub_1401062FC(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
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
  int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // eax
  int *v37; // rax
  char v38; // r15
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // si
  char v42; // r11
  char v43; // r12
  char *v44; // r11
  unsigned int *v45; // r13
  __int64 v46; // rax
  unsigned __int64 v47; // r14
  char v48; // cl
  char v49; // r8
  _BYTE *v50; // rax
  unsigned int v51; // eax
  char v52; // al
  int *v53; // rax
  char v54; // r15
  _BYTE *v55; // r9
  unsigned __int8 v56; // r10
  char v57; // si
  char v58; // r11
  char v59; // r12
  char *v60; // r11
  unsigned int *v61; // r13
  __int64 v62; // rax
  unsigned __int64 v63; // r14
  char v64; // cl
  char v65; // r8
  _BYTE *v66; // rax
  unsigned int v67; // eax
  char v68; // al
  __int64 v69; // [rsp+28h] [rbp-59h]
  __int64 v70; // [rsp+30h] [rbp-51h]
  __int64 v71; // [rsp+38h] [rbp-49h]
  char v72; // [rsp+40h] [rbp-41h]
  char v73; // [rsp+48h] [rbp-39h]
  char v74; // [rsp+50h] [rbp-31h]
  __int64 v75; // [rsp+58h] [rbp-29h]
  char v76; // [rsp+68h] [rbp-19h]
  char v77; // [rsp+68h] [rbp-19h]
  char v78; // [rsp+68h] [rbp-19h]
  char v79; // [rsp+69h] [rbp-18h]
  char v80; // [rsp+69h] [rbp-18h]
  char v81; // [rsp+69h] [rbp-18h]
  int v82; // [rsp+6Ch] [rbp-15h]
  int v83; // [rsp+6Ch] [rbp-15h]
  int v84; // [rsp+6Ch] [rbp-15h]
  __int64 v85; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v86; // [rsp+78h] [rbp-9h]
  __int128 v87; // [rsp+80h] [rbp-1h] BYREF
  __int128 v88; // [rsp+90h] [rbp+Fh] BYREF
  __int128 v89; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v85 = 0LL;
  v6 = *(void **)(v2 + 8);
  if ( v6 == &unk_14014AED8 || RtlCompareMemory(v6, &unk_14014AED8, 0x10uLL) == 16 )
  {
    v34 = *(_DWORD *)(a1 + 96);
    if ( v34 && (unsigned int)(v34 - 5) > 1 )
    {
      v35 = *(_QWORD *)(a1 + 16);
      LODWORD(v85) = 1699567182;
      v36 = sub_1401A9540(
              (*(_BYTE *)(v35 + 136) & 2) != 0 ? 20 : 17,
              a2,
              *(_QWORD *)(*(_QWORD *)(v35 + 128) + 8LL),
              (unsigned int)&v85,
              *(_QWORD *)(v35 + 592) + 24LL,
              0,
              (*(_BYTE *)(v35 + 136) & 2) != 0 ? 20 : 17);
      v10 = byte_140168DAA == 0;
      v86 = v36;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = v36;
      if ( v10 )
        goto LABEL_208;
      v88 = 0LL;
      IoGetActivityIdIrp(a2, &v88);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_208;
        v15 = (const GUID *)&v88;
        goto LABEL_206;
      }
      if ( *(_BYTE *)v12 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_208;
        v17 = *(_QWORD *)(v12 + 8);
        v38 = 0;
        v39 = 0LL;
        v77 = 0;
        v40 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        if ( *(_BYTE *)(v17 + 2) != 40 )
        {
          v48 = *(_BYTE *)(v17 + 72);
          v39 = *(_BYTE **)(v17 + 32);
          v40 = *(_BYTE *)(v17 + 11);
          v38 = *(_BYTE *)(v17 + 4);
          if ( *(_BYTE *)(v17 + 2) )
            goto LABEL_208;
          goto LABEL_118;
        }
        v44 = 0LL;
        v80 = 0;
        if ( *(_DWORD *)(v17 + 20) )
          goto LABEL_208;
        v11 = 0LL;
        v83 = 0;
        LODWORD(v85) = *(_DWORD *)(v17 + 56);
        if ( !(_DWORD)v85 )
          goto LABEL_115;
        v45 = (unsigned int *)(v17 + 120);
        while ( 1 )
        {
          v46 = *v45;
          if ( (unsigned int)v46 >= 0x80 )
          {
            v47 = *(unsigned int *)(v17 + 16);
            if ( (unsigned int)v46 < (unsigned int)v47 )
            {
              if ( *(_DWORD *)(v46 + v17) == 64 )
              {
                v11 = v46 + 40;
                if ( v46 + 40 <= v47 )
                {
                  if ( *(_BYTE *)(v46 + v17 + 10) )
                    v44 = (char *)(v46 + v17 + 24);
                  v39 = *(_BYTE **)(v46 + v17 + 16);
LABEL_114:
                  v40 = *(_BYTE *)(v46 + v17 + 9);
                  v38 = *(_BYTE *)(v46 + v17 + 8);
LABEL_115:
                  if ( !v44 )
                    goto LABEL_208;
                  v48 = *v44;
                  v42 = 0;
LABEL_118:
                  LOBYTE(v11) = v48 - 8;
                  if ( (v11 & 0x5D) != 0 )
                    goto LABEL_208;
                  v49 = *(_BYTE *)(v17 + 3);
                  if ( v49 == 1 || !v39 || !v40 )
                    goto LABEL_137;
                  LOBYTE(v17) = 0;
                  v11 = (unsigned __int64)&v39[v40];
                  v50 = v39 + 8;
                  if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v50 <= v11 )
                    {
                      LOBYTE(v17) = 1;
                      v42 = v39[2];
                      v41 = v39[1] & 0xF;
                      v43 = v39[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v50 <= v11 )
                    {
                      v41 = v39[2] & 0xF;
                      v51 = v40;
                      if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
                        v51 = (unsigned __int8)v39[7] + 8;
                      v11 = (unsigned __int64)(v39 + 13);
                      v17 = (unsigned __int64)&v39[v51];
                      if ( (unsigned __int64)(v39 + 13) > v17 )
                        v77 = 0;
                      else
                        v77 = v39[12];
                      if ( (unsigned __int64)(v39 + 14) <= v17 )
                        v43 = *(_BYTE *)v11;
                      LOBYTE(v17) = 1;
                    }
                    v42 = v77;
                  }
                  if ( (_BYTE)v17 )
                  {
                    LOBYTE(v3) = v42;
                    v52 = v43;
                  }
                  else
                  {
LABEL_137:
                    v41 = 0;
                    v52 = 0;
                  }
                  v75 = a2;
                  v74 = v52;
                  v73 = v3;
                  v72 = v41;
                  LOBYTE(v71) = v38;
                  LOBYTE(v70) = v49;
                  v33 = (const GUID *)&v88;
LABEL_71:
                  LODWORD(v69) = *(_DWORD *)(a2 + 48);
                  sub_140052E64(v11, v17, v33, a2, v69, v70, v71, v72, v73, v74, v75);
                  goto LABEL_208;
                }
              }
              else
              {
                v11 = (unsigned int)(*(_DWORD *)(v46 + v17) - 65);
                if ( *(_DWORD *)(v46 + v17) == 65 )
                {
                  v11 = v46 + 56;
                  if ( v46 + 56 <= v47 )
                  {
                    v80 = 1;
                    if ( *(_BYTE *)(v46 + v17 + 10) )
                      v44 = (char *)(v46 + v17 + 24);
                    v38 = *(_BYTE *)(v46 + v17 + 8);
                    v39 = *(_BYTE **)(v46 + v17 + 16);
                    v40 = *(_BYTE *)(v46 + v17 + 9);
                  }
                }
                else if ( *(_DWORD *)(v46 + v17) == 66 )
                {
                  v11 = v46 + 40;
                  if ( v46 + 40 <= v47 )
                  {
                    if ( *(_DWORD *)(v46 + v17 + 12) )
                      v44 = (char *)(v46 + v17 + 32);
                    v39 = *(_BYTE **)(v46 + v17 + 24);
                    goto LABEL_114;
                  }
                }
              }
              if ( v80 )
                goto LABEL_115;
              LODWORD(v11) = v83;
            }
          }
          v11 = (unsigned int)(v11 + 1);
          ++v45;
          v83 = v11;
          if ( (unsigned int)v11 >= (unsigned int)v85 )
            goto LABEL_115;
        }
      }
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_208;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_208;
        v37 = *(int **)(a2 + 56);
        if ( v37 )
          v3 = *v37;
        v14 = (const GUID *)&v88;
        goto LABEL_16;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_208;
      v15 = (const GUID *)&v88;
    }
    else
    {
      v10 = byte_140168DAA == 0;
      v86 = -1073741810;
      *(_DWORD *)(a2 + 48) = -1073741810;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v10 )
        goto LABEL_208;
      v89 = 0LL;
      IoGetActivityIdIrp(a2, &v89);
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v12 == 14 )
      {
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_208;
        v15 = (const GUID *)&v89;
        goto LABEL_206;
      }
      if ( *(_BYTE *)v12 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_208;
        v17 = *(_QWORD *)(v12 + 8);
        v54 = 0;
        v55 = 0LL;
        v78 = 0;
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        if ( *(_BYTE *)(v17 + 2) == 40 )
        {
          v60 = 0LL;
          v81 = 0;
          if ( *(_DWORD *)(v17 + 20) )
            goto LABEL_208;
          v11 = 0LL;
          v84 = 0;
          LODWORD(v85) = *(_DWORD *)(v17 + 56);
          if ( !(_DWORD)v85 )
            goto LABEL_180;
          v61 = (unsigned int *)(v17 + 120);
          while ( 1 )
          {
            v62 = *v61;
            if ( (unsigned int)v62 >= 0x80 )
            {
              v63 = *(unsigned int *)(v17 + 16);
              if ( (unsigned int)v62 < (unsigned int)v63 )
              {
                if ( *(_DWORD *)(v62 + v17) == 64 )
                {
                  v11 = v62 + 40;
                  if ( v62 + 40 <= v63 )
                  {
                    if ( *(_BYTE *)(v62 + v17 + 10) )
                      v60 = (char *)(v62 + v17 + 24);
                    v55 = *(_BYTE **)(v62 + v17 + 16);
LABEL_179:
                    v56 = *(_BYTE *)(v62 + v17 + 9);
                    v54 = *(_BYTE *)(v62 + v17 + 8);
LABEL_180:
                    if ( !v60 )
                      goto LABEL_208;
                    v64 = *v60;
                    v58 = 0;
LABEL_183:
                    LOBYTE(v11) = v64 - 8;
                    if ( (v11 & 0x5D) != 0 )
                      goto LABEL_208;
                    v65 = *(_BYTE *)(v17 + 3);
                    if ( v65 == 1 || !v55 || !v56 )
                      goto LABEL_202;
                    LOBYTE(v17) = 0;
                    v11 = (unsigned __int64)&v55[v56];
                    v66 = v55 + 8;
                    if ( (unsigned __int8)((*v55 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v66 <= v11 )
                      {
                        LOBYTE(v17) = 1;
                        v58 = v55[2];
                        v57 = v55[1] & 0xF;
                        v59 = v55[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v66 <= v11 )
                      {
                        v57 = v55[2] & 0xF;
                        v67 = v56;
                        if ( (unsigned int)(unsigned __int8)v55[7] + 8 <= v56 )
                          v67 = (unsigned __int8)v55[7] + 8;
                        v11 = (unsigned __int64)(v55 + 13);
                        v17 = (unsigned __int64)&v55[v67];
                        if ( (unsigned __int64)(v55 + 13) > v17 )
                          v78 = 0;
                        else
                          v78 = v55[12];
                        if ( (unsigned __int64)(v55 + 14) <= v17 )
                          v59 = *(_BYTE *)v11;
                        LOBYTE(v17) = 1;
                      }
                      v58 = v78;
                    }
                    if ( (_BYTE)v17 )
                    {
                      LOBYTE(v3) = v58;
                      v68 = v59;
                    }
                    else
                    {
LABEL_202:
                      v57 = 0;
                      v68 = 0;
                    }
                    v75 = a2;
                    v74 = v68;
                    v73 = v3;
                    v72 = v57;
                    LOBYTE(v71) = v54;
                    LOBYTE(v70) = v65;
                    v33 = (const GUID *)&v89;
                    goto LABEL_71;
                  }
                }
                else
                {
                  v11 = (unsigned int)(*(_DWORD *)(v62 + v17) - 65);
                  if ( *(_DWORD *)(v62 + v17) == 65 )
                  {
                    v11 = v62 + 56;
                    if ( v62 + 56 <= v63 )
                    {
                      v81 = 1;
                      if ( *(_BYTE *)(v62 + v17 + 10) )
                        v60 = (char *)(v62 + v17 + 24);
                      v54 = *(_BYTE *)(v62 + v17 + 8);
                      v55 = *(_BYTE **)(v62 + v17 + 16);
                      v56 = *(_BYTE *)(v62 + v17 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v62 + v17) == 66 )
                  {
                    v11 = v62 + 40;
                    if ( v62 + 40 <= v63 )
                    {
                      if ( *(_DWORD *)(v62 + v17 + 12) )
                        v60 = (char *)(v62 + v17 + 32);
                      v55 = *(_BYTE **)(v62 + v17 + 24);
                      goto LABEL_179;
                    }
                  }
                }
                if ( v81 )
                  goto LABEL_180;
                LODWORD(v11) = v84;
              }
            }
            v11 = (unsigned int)(v11 + 1);
            ++v61;
            v84 = v11;
            if ( (unsigned int)v11 >= (unsigned int)v85 )
              goto LABEL_180;
          }
        }
        v64 = *(_BYTE *)(v17 + 72);
        v55 = *(_BYTE **)(v17 + 32);
        v56 = *(_BYTE *)(v17 + 11);
        v54 = *(_BYTE *)(v17 + 4);
        if ( *(_BYTE *)(v17 + 2) )
          goto LABEL_208;
        goto LABEL_183;
      }
      if ( *(_BYTE *)v12 != 27 )
        goto LABEL_208;
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_208;
        v53 = *(int **)(a2 + 56);
        if ( v53 )
          v3 = *v53;
        v14 = (const GUID *)&v89;
LABEL_16:
        LODWORD(v70) = *(_DWORD *)(a2 + 48);
        LODWORD(v69) = v3;
        sub_140056AB0(v11, v12, v14, a2, v69, v70);
        goto LABEL_208;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_208;
      v15 = (const GUID *)&v89;
    }
LABEL_19:
    v16 = &stru_140149FE8;
LABEL_207:
    LODWORD(v69) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v11, v16, v15, a2, v69);
    goto LABEL_208;
  }
  v7 = *(void **)(v2 + 8);
  if ( v7 != &unk_14014C588 && RtlCompareMemory(v7, &unk_14014C588, 0x10uLL) != 16 )
    return sub_14017C99C(v8, a2);
  v10 = byte_140168DAA == 0;
  v86 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v10 )
    goto LABEL_208;
  v87 = 0LL;
  IoGetActivityIdIrp(a2, &v87);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_208;
    v15 = (const GUID *)&v87;
LABEL_206:
    v16 = &stru_140148B18;
    goto LABEL_207;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_208;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_208;
      v13 = *(int **)(a2 + 56);
      if ( v13 )
        v3 = *v13;
      v14 = (const GUID *)&v87;
      goto LABEL_16;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_208;
    v15 = (const GUID *)&v87;
    goto LABEL_19;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_208;
  v17 = *(_QWORD *)(v12 + 8);
  v18 = 0;
  v19 = 0LL;
  v76 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) == 40 )
  {
    v24 = 0LL;
    v79 = 0;
    if ( *(_DWORD *)(v17 + 20) )
      goto LABEL_208;
    v11 = 0LL;
    v82 = 0;
    LODWORD(v85) = *(_DWORD *)(v17 + 56);
    if ( !(_DWORD)v85 )
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
              goto LABEL_208;
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
                v79 = 1;
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
          if ( v79 )
            goto LABEL_47;
          LODWORD(v11) = v82;
        }
      }
      v11 = (unsigned int)(v11 + 1);
      ++v25;
      v82 = v11;
      if ( (unsigned int)v11 >= (unsigned int)v85 )
        goto LABEL_47;
    }
  }
  v28 = *(_BYTE *)(v17 + 72);
  v19 = *(_BYTE **)(v17 + 32);
  v20 = *(_BYTE *)(v17 + 11);
  v18 = *(_BYTE *)(v17 + 4);
  if ( *(_BYTE *)(v17 + 2) )
    goto LABEL_208;
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
          v76 = 0;
        else
          v76 = v19[12];
        if ( (unsigned __int64)(v19 + 14) <= v17 )
          v23 = *(_BYTE *)v11;
        LOBYTE(v17) = 1;
      }
      v22 = v76;
    }
    if ( (_BYTE)v17 )
    {
      LOBYTE(v3) = v22;
      v32 = v23;
    }
    else
    {
LABEL_69:
      v21 = 0;
      v32 = 0;
    }
    v75 = a2;
    v74 = v32;
    v73 = v3;
    v72 = v21;
    LOBYTE(v71) = v18;
    LOBYTE(v70) = v29;
    v33 = (const GUID *)&v87;
    goto LABEL_71;
  }
LABEL_208:
  IofCompleteRequest((PIRP)a2, 0);
  return v86;
}
