/*
 * XREFs of sub_14019CB58 @ 0x14019CB58
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140036A1C @ 0x140036A1C (sub_140036A1C.c)
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008ED30 @ 0x14008ED30 (sub_14008ED30.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14019CB58(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const GUID *v11; // r8
  const GUID *v12; // r8
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r12
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r13
  char *v21; // r11
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  wchar_t *v31; // rsi
  int *v32; // rax
  unsigned __int64 v33; // rdx
  char v34; // r12
  _BYTE *v35; // r9
  unsigned __int8 v36; // r10
  char v37; // si
  char v38; // r11
  char v39; // r13
  char *v40; // r11
  unsigned int v41; // r15d
  unsigned __int64 v42; // r14
  __int64 v43; // r8
  int v44; // ecx
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  char v49; // al
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  const EVENT_DESCRIPTOR *v59; // rdx
  unsigned __int64 v60; // rdx
  char v61; // r12
  _BYTE *v62; // r9
  unsigned __int8 v63; // r10
  char v64; // si
  char v65; // r11
  unsigned __int8 v66; // r13
  char *v67; // r11
  unsigned int v68; // r15d
  __int64 v69; // rcx
  unsigned __int64 v70; // r14
  __int64 v71; // r8
  int v72; // ecx
  int v73; // ecx
  char v74; // cl
  char v75; // r8
  _BYTE *v76; // rcx
  _BYTE *v77; // rax
  unsigned int v78; // eax
  char v79; // al
  __int64 v80; // rcx
  __int64 v82; // [rsp+20h] [rbp-E0h]
  __int64 v83; // [rsp+28h] [rbp-D8h]
  __int64 v84; // [rsp+30h] [rbp-D0h]
  char v85; // [rsp+60h] [rbp-A0h]
  char v86; // [rsp+60h] [rbp-A0h]
  char v87; // [rsp+60h] [rbp-A0h]
  char v88; // [rsp+61h] [rbp-9Fh]
  char v89; // [rsp+61h] [rbp-9Fh]
  char v90; // [rsp+61h] [rbp-9Fh]
  unsigned int v91; // [rsp+64h] [rbp-9Ch]
  unsigned int v92; // [rsp+64h] [rbp-9Ch]
  unsigned int v93; // [rsp+64h] [rbp-9Ch]
  GUID v94; // [rsp+68h] [rbp-98h] BYREF
  GUID v95; // [rsp+78h] [rbp-88h] BYREF
  GUID v96; // [rsp+88h] [rbp-78h] BYREF
  __int128 v97; // [rsp+98h] [rbp-68h] BYREF
  int v98; // [rsp+A8h] [rbp-58h]
  _OWORD v99[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-30h]
  _BYTE Dst[128]; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v4 <= 1 )
  {
    v5 = 0;
    v31 = (wchar_t *)sub_1400143E0(256LL, 512LL, 1414619474LL, *(_QWORD *)(a1 + 8));
    if ( v31 )
    {
      v50 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        v52 = *(_QWORD *)(v50 + 592);
        v6 = (*(_BYTE *)(v50 + 136) & 2) == 0;
        v97 = *(_OWORD *)(v52 + 4);
        v98 = *(_DWORD *)(v52 + 20);
        if ( v6 )
        {
          sub_140036A1C((__int64)&v97, 21);
          sub_14003BCD4(
            v31,
            256LL,
            L"NVM Subsystem SN: %hs, PCI bus %d, device %d, function %d",
            &v97,
            (unsigned __int8)*(_DWORD *)(*(_QWORD *)(v54 + 128) + 568LL),
            **(unsigned __int16 **)(*(_QWORD *)(v54 + 128) + 576LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v54 + 128) + 576LL) + 2LL));
        }
        else
        {
          sub_140036A1C((__int64)&v97, 21);
          sub_14008ED30(a1, v53, (__int64)Dst);
          sub_14003BCD4(
            v31,
            256LL,
            L"NVM Subsystem SN: %hs, NSID: %hs, CtrlID: %04d",
            &v97,
            Dst,
            *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 4LL));
        }
      }
      else
      {
        v51 = *(_QWORD *)(v50 + 592);
        v99[0] = *(_OWORD *)(v51 + 24);
        v99[1] = *(_OWORD *)(v51 + 40);
        v100 = *(_QWORD *)(v51 + 56);
        sub_140036A1C((__int64)v99, 41);
        sub_14003BCD4(v31, 256LL, L"%hs", v99);
      }
      v6 = byte_140168DAA == 0;
      *(_QWORD *)(a2 + 56) = v31;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v6 )
        goto LABEL_205;
      v96 = 0LL;
      IoGetActivityIdIrp(a2, &v96);
      v56 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v56 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_205;
          v59 = &stru_140148B18;
          break;
        case 0xF:
          if ( (byte_1401694F1 & 0x80) == 0 )
            goto LABEL_205;
          v60 = *(_QWORD *)(v56 + 8);
          v61 = 0;
          v62 = 0LL;
          v87 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          if ( *(_BYTE *)(v60 + 2) != 40 )
          {
            v74 = *(_BYTE *)(v60 + 72);
            v62 = *(_BYTE **)(v60 + 32);
            v63 = *(_BYTE *)(v60 + 11);
            v61 = *(_BYTE *)(v60 + 4);
            if ( !*(_BYTE *)(v60 + 2) )
              goto LABEL_181;
            goto LABEL_205;
          }
          v67 = 0LL;
          v90 = 0;
          if ( *(_DWORD *)(v60 + 20) )
            goto LABEL_205;
          v68 = 0;
          v93 = *(_DWORD *)(v60 + 56);
          if ( !v93 )
            goto LABEL_178;
          while ( 1 )
          {
            v69 = *(unsigned int *)(v60 + 4LL * v68 + 120);
            if ( (unsigned int)v69 >= 0x80 )
            {
              v70 = *(unsigned int *)(v60 + 16);
              if ( (unsigned int)v69 < (unsigned int)v70 )
              {
                v71 = (unsigned int)v69;
                v72 = *(_DWORD *)(v60 + v69) - 64;
                if ( v72 )
                {
                  v73 = v72 - 1;
                  if ( v73 )
                  {
                    if ( v73 == 1 && v71 + 40 <= v70 )
                    {
                      if ( *(_DWORD *)(v60 + v71 + 12) )
                        v67 = (char *)(v71 + v60 + 32);
                      v62 = *(_BYTE **)(v60 + v71 + 24);
                      goto LABEL_177;
                    }
                  }
                  else if ( v71 + 56 <= v70 )
                  {
                    v90 = 1;
                    if ( *(_BYTE *)(v60 + v71 + 10) )
                      v67 = (char *)(v71 + v60 + 24);
                    v61 = *(_BYTE *)(v60 + v71 + 8);
                    v62 = *(_BYTE **)(v60 + v71 + 16);
                    v63 = *(_BYTE *)(v60 + v71 + 9);
                  }
                }
                else if ( v71 + 40 <= v70 )
                {
                  if ( *(_BYTE *)(v60 + v71 + 10) )
                    v67 = (char *)(v71 + v60 + 24);
                  v62 = *(_BYTE **)(v60 + v71 + 16);
LABEL_177:
                  v63 = *(_BYTE *)(v60 + v71 + 9);
                  v61 = *(_BYTE *)(v60 + v71 + 8);
LABEL_178:
                  if ( v67 )
                  {
                    v74 = *v67;
                    v65 = 0;
LABEL_181:
                    if ( ((v74 - 8) & 0x5D) == 0 )
                    {
                      v75 = *(_BYTE *)(v60 + 3);
                      if ( v75 == 1 || !v62 || !v63 )
                        goto LABEL_200;
                      LOBYTE(v60) = 0;
                      v76 = &v62[v63];
                      v77 = v62 + 8;
                      if ( (unsigned __int8)((*v62 & 0x7F) - 114) <= 1u )
                      {
                        if ( v77 <= v76 )
                        {
                          LOBYTE(v60) = 1;
                          v65 = v62[2];
                          v64 = v62[1] & 0xF;
                          v66 = v62[3];
                        }
                      }
                      else
                      {
                        if ( v77 <= v76 )
                        {
                          v64 = v62[2] & 0xF;
                          v78 = v63;
                          if ( (unsigned int)(unsigned __int8)v62[7] + 8 <= v63 )
                            v78 = (unsigned __int8)v62[7] + 8;
                          v60 = (unsigned __int64)&v62[v78];
                          if ( (unsigned __int64)(v62 + 13) > v60 )
                            v87 = 0;
                          else
                            v87 = v62[12];
                          if ( (unsigned __int64)(v62 + 14) <= v60 )
                            v66 = v62[13];
                          LOBYTE(v60) = 1;
                        }
                        v65 = v87;
                      }
                      if ( (_BYTE)v60 )
                      {
                        v79 = v65;
                        v80 = v66;
                      }
                      else
                      {
LABEL_200:
                        v64 = 0;
                        v79 = 0;
                        v80 = 0LL;
                      }
                      LOBYTE(v84) = v61;
                      LOBYTE(v83) = v75;
                      LODWORD(v82) = *(_DWORD *)(a2 + 48);
                      sub_140052E64(v80, v60, &v96, a2, v82, v83, v84, v64, v79, v80, a2);
                    }
                  }
                  goto LABEL_205;
                }
                if ( v90 )
                  goto LABEL_178;
              }
            }
            if ( ++v68 >= v93 )
              goto LABEL_178;
          }
        case 0x1B:
          if ( *(_BYTE *)(v56 + 1) == 7 && !*(_DWORD *)(v56 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v57 = *(unsigned int **)(a2 + 56);
              if ( v57 )
                v58 = *v57;
              else
                v58 = 0LL;
              LODWORD(v83) = *(_DWORD *)(a2 + 48);
              LODWORD(v82) = v58;
              sub_140056AB0(v58, v56, &v96, a2, v82, v83);
            }
            goto LABEL_205;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
          {
LABEL_205:
            v7 = 0;
            goto LABEL_206;
          }
          v59 = &stru_140149FE8;
          break;
        default:
          goto LABEL_205;
      }
      LODWORD(v82) = *(_DWORD *)(a2 + 48);
      sub_140052F3C(v55, v59, &v96, a2, v82);
      goto LABEL_205;
    }
    v6 = byte_140168DAA == 0;
    v7 = -1073741801;
    *(_DWORD *)(a2 + 48) = -1073741801;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v6 )
      goto LABEL_206;
    v95 = 0LL;
    IoGetActivityIdIrp(a2, &v95);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 != 14 )
    {
      if ( *(_BYTE *)v9 == 15 )
      {
        if ( (byte_1401694F1 & 0x80) == 0 )
          goto LABEL_206;
        v33 = *(_QWORD *)(v9 + 8);
        v34 = 0;
        v35 = 0LL;
        v86 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        if ( *(_BYTE *)(v33 + 2) == 40 )
        {
          v40 = 0LL;
          v89 = 0;
          if ( *(_DWORD *)(v33 + 20) )
            goto LABEL_132;
          v41 = 0;
          v92 = *(_DWORD *)(v33 + 56);
          if ( !v92 )
            goto LABEL_108;
          while ( 1 )
          {
            v8 = *(unsigned int *)(v33 + 4LL * v41 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v42 = *(unsigned int *)(v33 + 16);
              if ( (unsigned int)v8 < (unsigned int)v42 )
              {
                v43 = (unsigned int)v8;
                v44 = *(_DWORD *)(v33 + v8) - 64;
                if ( v44 )
                {
                  v8 = (unsigned int)(v44 - 1);
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = v43 + 40;
                      if ( v43 + 40 <= v42 )
                      {
                        if ( *(_DWORD *)(v33 + v43 + 12) )
                          v40 = (char *)(v43 + v33 + 32);
                        v35 = *(_BYTE **)(v33 + v43 + 24);
                        goto LABEL_107;
                      }
                    }
                  }
                  else
                  {
                    v8 = v43 + 56;
                    if ( v43 + 56 <= v42 )
                    {
                      v89 = 1;
                      if ( *(_BYTE *)(v33 + v43 + 10) )
                        v40 = (char *)(v43 + v33 + 24);
                      v34 = *(_BYTE *)(v33 + v43 + 8);
                      v35 = *(_BYTE **)(v33 + v43 + 16);
                      v36 = *(_BYTE *)(v33 + v43 + 9);
                    }
                  }
                }
                else
                {
                  v8 = v43 + 40;
                  if ( v43 + 40 <= v42 )
                  {
                    if ( *(_BYTE *)(v33 + v43 + 10) )
                      v40 = (char *)(v43 + v33 + 24);
                    v35 = *(_BYTE **)(v33 + v43 + 16);
LABEL_107:
                    v36 = *(_BYTE *)(v33 + v43 + 9);
                    v34 = *(_BYTE *)(v33 + v43 + 8);
LABEL_108:
                    if ( v40 )
                    {
                      v45 = *v40;
                      v38 = 0;
LABEL_111:
                      LOBYTE(v8) = v45 - 8;
                      if ( (v8 & 0x5D) == 0 )
                      {
                        v46 = *(_BYTE *)(v33 + 3);
                        if ( v46 == 1 || !v35 || !v36 )
                          goto LABEL_130;
                        LOBYTE(v33) = 0;
                        v8 = (unsigned __int64)&v35[v36];
                        v47 = v35 + 8;
                        if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v47 <= v8 )
                          {
                            LOBYTE(v33) = 1;
                            v38 = v35[2];
                            v37 = v35[1] & 0xF;
                            v39 = v35[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v47 <= v8 )
                          {
                            v37 = v35[2] & 0xF;
                            v48 = v36;
                            if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
                              v48 = (unsigned __int8)v35[7] + 8;
                            v8 = (unsigned __int64)(v35 + 13);
                            v33 = (unsigned __int64)&v35[v48];
                            if ( (unsigned __int64)(v35 + 13) > v33 )
                              v86 = 0;
                            else
                              v86 = v35[12];
                            if ( (unsigned __int64)(v35 + 14) <= v33 )
                              v39 = *(_BYTE *)v8;
                            LOBYTE(v33) = 1;
                          }
                          v38 = v86;
                        }
                        if ( (_BYTE)v33 )
                        {
                          LOBYTE(v5) = v38;
                          v49 = v39;
                        }
                        else
                        {
LABEL_130:
                          v37 = 0;
                          v49 = 0;
                        }
                        sub_140052E64(v8, v33, &v95, a2, *(_DWORD *)(a2 + 48), v46, v34, v37, v5, v49, a2);
                      }
                    }
LABEL_132:
                    v7 = -1073741801;
                    goto LABEL_206;
                  }
                }
                if ( v89 )
                  goto LABEL_108;
              }
            }
            if ( ++v41 >= v92 )
              goto LABEL_108;
          }
        }
        v45 = *(_BYTE *)(v33 + 72);
        v35 = *(_BYTE **)(v33 + 32);
        v36 = *(_BYTE *)(v33 + 11);
        v34 = *(_BYTE *)(v33 + 4);
        if ( !*(_BYTE *)(v33 + 2) )
          goto LABEL_111;
        goto LABEL_132;
      }
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_206;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_206;
        v32 = *(int **)(a2 + 56);
        if ( v32 )
          v5 = *v32;
        v11 = &v95;
        goto LABEL_12;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_206;
      v12 = &v95;
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_206;
    v12 = &v95;
LABEL_69:
    v13 = &stru_140148B18;
    goto LABEL_16;
  }
  v5 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v6 = byte_140168DAA == 0;
  v7 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v6 )
    goto LABEL_206;
  v94 = 0LL;
  IoGetActivityIdIrp(a2, &v94);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_206;
    v12 = &v94;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_206;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_206;
      v10 = *(int **)(a2 + 56);
      if ( v10 )
        v5 = *v10;
      v11 = &v94;
LABEL_12:
      sub_140056AB0(v8, v9, v11, a2, v5, *(_DWORD *)(a2 + 48));
      goto LABEL_206;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_206;
    v12 = &v94;
LABEL_15:
    v13 = &stru_140149FE8;
LABEL_16:
    sub_140052F3C(v8, v13, v12, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_206;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_206;
  v14 = *(_QWORD *)(v9 + 8);
  v15 = 0;
  v16 = 0LL;
  v85 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_45;
    goto LABEL_66;
  }
  v21 = 0LL;
  v88 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_66;
  v22 = 0;
  v91 = *(_DWORD *)(v14 + 56);
  if ( !v91 )
    goto LABEL_42;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v14 + 4LL * v22 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v23 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v8 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    if ( ++v22 >= v91 )
      goto LABEL_42;
  }
  v24 = (unsigned int)v8;
  v25 = *(_DWORD *)(v8 + v14) - 64;
  if ( v25 )
  {
    v8 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v14 + 12) )
            v21 = (char *)(v24 + v14 + 32);
          v16 = *(_BYTE **)(v24 + v14 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v8 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v88 = 1;
        if ( *(_BYTE *)(v24 + v14 + 10) )
          v21 = (char *)(v24 + v14 + 24);
        v15 = *(_BYTE *)(v24 + v14 + 8);
        v16 = *(_BYTE **)(v24 + v14 + 16);
        v17 = *(_BYTE *)(v24 + v14 + 9);
      }
    }
    goto LABEL_35;
  }
  v8 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_35:
    if ( v88 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v24 + v14 + 10) )
    v21 = (char *)(v24 + v14 + 24);
  v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_41:
  v17 = *(_BYTE *)(v24 + v14 + 9);
  v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_42:
  if ( v21 )
  {
    v26 = *v21;
    v19 = 0;
LABEL_45:
    LOBYTE(v8) = v26 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v14 + 3);
      if ( v27 == 1 || !v16 || !v17 )
        goto LABEL_64;
      LOBYTE(v14) = 0;
      v8 = (unsigned __int64)&v16[v17];
      v28 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v8 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v8 )
        {
          v18 = v16[2] & 0xF;
          v29 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v29 = (unsigned __int8)v16[7] + 8;
          v8 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v29];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v85 = 0;
          else
            v85 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v8;
          LOBYTE(v14) = 1;
        }
        v19 = v85;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v5) = v19;
        v30 = v20;
      }
      else
      {
LABEL_64:
        v18 = 0;
        v30 = 0;
      }
      sub_140052E64(v8, v14, &v94, a2, *(_DWORD *)(a2 + 48), v27, v15, v18, v5, v30, a2);
    }
  }
LABEL_66:
  v7 = -1073741637;
LABEL_206:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
