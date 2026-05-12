/*
 * XREFs of sub_140110708 @ 0x140110708
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A9114 @ 0x1400A9114 (sub_1400A9114.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140110708(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  int v6; // ebx
  bool v7; // zf
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
  const GUID *v31; // r8
  int *v32; // rax
  char v33; // r12
  _BYTE *v34; // r9
  unsigned __int8 v35; // r10
  char v36; // si
  char v37; // r11
  char v38; // r13
  char *v39; // r11
  unsigned int v40; // r15d
  unsigned __int64 v41; // r14
  __int64 v42; // r8
  int v43; // ecx
  char v44; // cl
  char v45; // r8
  _BYTE *v46; // rax
  unsigned int v47; // eax
  char v48; // al
  __int64 v50; // rax
  const GUID *v51; // r14
  ULONG v52; // ebx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  PWSTR Buffer; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  ULONG *v61; // rax
  const EVENT_DESCRIPTOR *v62; // rdx
  unsigned __int64 v63; // rdx
  char v64; // r12
  _BYTE *v65; // r9
  unsigned __int8 v66; // r10
  char v67; // r11
  char v68; // si
  char v69; // r13
  char *v70; // rsi
  unsigned int v71; // r15d
  unsigned __int64 v72; // r14
  __int64 v73; // r8
  int v74; // ecx
  char v75; // cl
  char v76; // r8
  _BYTE *v77; // rax
  unsigned int v78; // eax
  char v79; // al
  int v80; // ebx
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  int *v83; // rax
  const EVENT_DESCRIPTOR *v84; // rdx
  unsigned __int64 v85; // rdx
  char v86; // r12
  _BYTE *v87; // r9
  unsigned __int8 v88; // r10
  char v89; // si
  char v90; // r11
  char v91; // r13
  char *v92; // r11
  unsigned int v93; // r15d
  unsigned __int64 v94; // r14
  __int64 v95; // r8
  int v96; // ecx
  char v97; // cl
  char v98; // r8
  _BYTE *v99; // rax
  unsigned int v100; // eax
  char v101; // al
  int v102; // [rsp+20h] [rbp-100h]
  ULONG v103[2]; // [rsp+20h] [rbp-100h]
  int v104; // [rsp+20h] [rbp-100h]
  char v105; // [rsp+28h] [rbp-F8h]
  __int64 v106; // [rsp+28h] [rbp-F8h]
  char v107; // [rsp+30h] [rbp-F0h]
  __int64 v108; // [rsp+30h] [rbp-F0h]
  char v109; // [rsp+38h] [rbp-E8h]
  __int64 v110; // [rsp+38h] [rbp-E8h]
  char v111; // [rsp+40h] [rbp-E0h]
  char v112; // [rsp+48h] [rbp-D8h]
  __int64 v113; // [rsp+50h] [rbp-D0h]
  char v114; // [rsp+A0h] [rbp-80h]
  char v115; // [rsp+A0h] [rbp-80h]
  char v116; // [rsp+A0h] [rbp-80h]
  char v117; // [rsp+A0h] [rbp-80h]
  char v118; // [rsp+A1h] [rbp-7Fh]
  char v119; // [rsp+A1h] [rbp-7Fh]
  char v120; // [rsp+A1h] [rbp-7Fh]
  char v121; // [rsp+A1h] [rbp-7Fh]
  unsigned int v122; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v123; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v124; // [rsp+ACh] [rbp-74h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+B0h] [rbp-70h] BYREF
  GUID v126; // [rsp+C0h] [rbp-60h] BYREF
  __int128 v127; // [rsp+D0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+E0h] [rbp-40h] BYREF
  __int128 *v129; // [rsp+100h] [rbp-20h]
  __int64 v130; // [rsp+108h] [rbp-18h]
  __int64 v131; // [rsp+110h] [rbp-10h]
  __int64 v132; // [rsp+118h] [rbp-8h]
  const GUID *v133; // [rsp+120h] [rbp+0h]
  __int64 v134; // [rsp+128h] [rbp+8h]
  unsigned int *v135; // [rsp+130h] [rbp+10h]
  __int64 v136; // [rsp+138h] [rbp+18h]
  unsigned int *v137; // [rsp+140h] [rbp+20h]
  __int64 v138; // [rsp+148h] [rbp+28h]
  unsigned int *v139; // [rsp+150h] [rbp+30h]
  __int64 v140; // [rsp+158h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 16);
  GuidString = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x28u )
  {
    v6 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v124 = -1073741820;
    *(_DWORD *)(a2 + 48) = -1073741820;
    if ( v7 )
      goto LABEL_134;
    v127 = 0LL;
    IoGetActivityIdIrp(a2, &v127);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 != 14 )
    {
      if ( *(_BYTE *)v9 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_134;
        v14 = *(_QWORD *)(v9 + 8);
        v15 = 0;
        v16 = 0LL;
        v114 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        if ( *(_BYTE *)(v14 + 2) == 40 )
        {
          v21 = 0LL;
          v118 = 0;
          if ( *(_DWORD *)(v14 + 20) )
            goto LABEL_134;
          v22 = 0;
          v122 = *(_DWORD *)(v14 + 56);
          if ( !v122 )
            goto LABEL_41;
          while ( 1 )
          {
            v8 = *(unsigned int *)(v14 + 4LL * v22 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v23 = *(unsigned int *)(v14 + 16);
              if ( (unsigned int)v8 < (unsigned int)v23 )
              {
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
                        goto LABEL_40;
                      }
                    }
                  }
                  else
                  {
                    v8 = v24 + 56;
                    if ( v24 + 56 <= v23 )
                    {
                      v118 = 1;
                      if ( *(_BYTE *)(v24 + v14 + 10) )
                        v21 = (char *)(v24 + v14 + 24);
                      v15 = *(_BYTE *)(v24 + v14 + 8);
                      v16 = *(_BYTE **)(v24 + v14 + 16);
                      v17 = *(_BYTE *)(v24 + v14 + 9);
                    }
                  }
                }
                else
                {
                  v8 = v24 + 40;
                  if ( v24 + 40 <= v23 )
                  {
                    if ( *(_BYTE *)(v24 + v14 + 10) )
                      v21 = (char *)(v24 + v14 + 24);
                    v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_40:
                    v17 = *(_BYTE *)(v24 + v14 + 9);
                    v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_41:
                    if ( v21 )
                    {
                      v26 = *v21;
                      v19 = 0;
                      goto LABEL_44;
                    }
                    goto LABEL_134;
                  }
                }
                if ( v118 )
                  goto LABEL_41;
              }
            }
            if ( ++v22 >= v122 )
              goto LABEL_41;
          }
        }
        v26 = *(_BYTE *)(v14 + 72);
        v16 = *(_BYTE **)(v14 + 32);
        v17 = *(_BYTE *)(v14 + 11);
        v15 = *(_BYTE *)(v14 + 4);
        if ( *(_BYTE *)(v14 + 2) )
          goto LABEL_134;
LABEL_44:
        LOBYTE(v8) = v26 - 8;
        if ( (v8 & 0x5D) == 0 )
        {
          v27 = *(_BYTE *)(v14 + 3);
          if ( v27 == 1 || !v16 || !v17 )
            goto LABEL_63;
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
                v114 = 0;
              else
                v114 = v16[12];
              if ( (unsigned __int64)(v16 + 14) <= v14 )
                v20 = *(_BYTE *)v8;
              LOBYTE(v14) = 1;
            }
            v19 = v114;
          }
          if ( (_BYTE)v14 )
          {
            LOBYTE(v6) = v19;
            v30 = v20;
          }
          else
          {
LABEL_63:
            v18 = 0;
            v30 = 0;
          }
          v113 = a2;
          v112 = v30;
          v111 = v6;
          v109 = v18;
          v107 = v15;
          v105 = v27;
          v31 = (const GUID *)&v127;
          goto LABEL_65;
        }
LABEL_134:
        IofCompleteRequest((PIRP)a2, 0);
        return v124;
      }
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_134;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_134;
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v6 = *v10;
        v11 = (const GUID *)&v127;
        goto LABEL_12;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_134;
      v12 = (const GUID *)&v127;
LABEL_15:
      v13 = &stru_140149FE8;
      v102 = *(_DWORD *)(a2 + 48);
LABEL_133:
      sub_140052F3C(v8, v13, v12, a2, v102);
      goto LABEL_134;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_134;
    v12 = (const GUID *)&v127;
    v102 = *(_DWORD *)(a2 + 48);
    goto LABEL_132;
  }
  if ( *(_DWORD *)(v2 + 8) < 0x28u )
  {
    v6 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    v124 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    if ( v7 )
      goto LABEL_134;
    v126 = 0LL;
    IoGetActivityIdIrp(a2, &v126);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 != 14 )
    {
      if ( *(_BYTE *)v9 == 15 )
      {
        if ( byte_1401694F1 >= 0 )
          goto LABEL_134;
        v14 = *(_QWORD *)(v9 + 8);
        v33 = 0;
        v34 = 0LL;
        v115 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        if ( *(_BYTE *)(v14 + 2) != 40 )
        {
          v44 = *(_BYTE *)(v14 + 72);
          v34 = *(_BYTE **)(v14 + 32);
          v35 = *(_BYTE *)(v14 + 11);
          v33 = *(_BYTE *)(v14 + 4);
          if ( *(_BYTE *)(v14 + 2) )
            goto LABEL_134;
          goto LABEL_109;
        }
        v39 = 0LL;
        v119 = 0;
        if ( *(_DWORD *)(v14 + 20) )
          goto LABEL_134;
        v40 = 0;
        v122 = *(_DWORD *)(v14 + 56);
        if ( !v122 )
          goto LABEL_106;
        while ( 1 )
        {
          v8 = *(unsigned int *)(v14 + 4LL * v40 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v41 = *(unsigned int *)(v14 + 16);
            if ( (unsigned int)v8 < (unsigned int)v41 )
            {
              v42 = (unsigned int)v8;
              v43 = *(_DWORD *)(v8 + v14) - 64;
              if ( v43 )
              {
                v8 = (unsigned int)(v43 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v42 + 40;
                    if ( v42 + 40 <= v41 )
                    {
                      if ( *(_DWORD *)(v42 + v14 + 12) )
                        v39 = (char *)(v42 + v14 + 32);
                      v34 = *(_BYTE **)(v42 + v14 + 24);
                      goto LABEL_105;
                    }
                  }
                }
                else
                {
                  v8 = v42 + 56;
                  if ( v42 + 56 <= v41 )
                  {
                    v119 = 1;
                    if ( *(_BYTE *)(v42 + v14 + 10) )
                      v39 = (char *)(v42 + v14 + 24);
                    v33 = *(_BYTE *)(v42 + v14 + 8);
                    v34 = *(_BYTE **)(v42 + v14 + 16);
                    v35 = *(_BYTE *)(v42 + v14 + 9);
                  }
                }
              }
              else
              {
                v8 = v42 + 40;
                if ( v42 + 40 <= v41 )
                {
                  if ( *(_BYTE *)(v42 + v14 + 10) )
                    v39 = (char *)(v42 + v14 + 24);
                  v34 = *(_BYTE **)(v42 + v14 + 16);
LABEL_105:
                  v35 = *(_BYTE *)(v42 + v14 + 9);
                  v33 = *(_BYTE *)(v42 + v14 + 8);
LABEL_106:
                  if ( !v39 )
                    goto LABEL_134;
                  v44 = *v39;
                  v37 = 0;
LABEL_109:
                  LOBYTE(v8) = v44 - 8;
                  if ( (v8 & 0x5D) != 0 )
                    goto LABEL_134;
                  v45 = *(_BYTE *)(v14 + 3);
                  if ( v45 == 1 || !v34 || !v35 )
                    goto LABEL_128;
                  LOBYTE(v14) = 0;
                  v8 = (unsigned __int64)&v34[v35];
                  v46 = v34 + 8;
                  if ( (unsigned __int8)((*v34 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v46 <= v8 )
                    {
                      LOBYTE(v14) = 1;
                      v37 = v34[2];
                      v36 = v34[1] & 0xF;
                      v38 = v34[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v46 <= v8 )
                    {
                      v36 = v34[2] & 0xF;
                      v47 = v35;
                      if ( (unsigned int)(unsigned __int8)v34[7] + 8 <= v35 )
                        v47 = (unsigned __int8)v34[7] + 8;
                      v8 = (unsigned __int64)(v34 + 13);
                      v14 = (unsigned __int64)&v34[v47];
                      if ( (unsigned __int64)(v34 + 13) > v14 )
                        v115 = 0;
                      else
                        v115 = v34[12];
                      if ( (unsigned __int64)(v34 + 14) <= v14 )
                        v38 = *(_BYTE *)v8;
                      LOBYTE(v14) = 1;
                    }
                    v37 = v115;
                  }
                  if ( (_BYTE)v14 )
                  {
                    LOBYTE(v6) = v37;
                    v48 = v38;
                  }
                  else
                  {
LABEL_128:
                    v36 = 0;
                    v48 = 0;
                  }
                  v113 = a2;
                  v112 = v48;
                  v111 = v6;
                  v109 = v36;
                  v107 = v33;
                  v105 = v45;
                  v31 = &v126;
LABEL_65:
                  sub_140052E64(v8, v14, v31, a2, *(_DWORD *)(a2 + 48), v105, v107, v109, v111, v112, v113);
                  goto LABEL_134;
                }
              }
              if ( v119 )
                goto LABEL_106;
            }
          }
          if ( ++v40 >= v122 )
            goto LABEL_106;
        }
      }
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_134;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_134;
        v32 = *(int **)(a2 + 56);
        if ( v32 )
          v6 = *v32;
        v11 = &v126;
LABEL_12:
        sub_140056AB0(v8, v9, v11, a2, v6, *(_DWORD *)(a2 + 48));
        goto LABEL_134;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_134;
      v12 = &v126;
      goto LABEL_15;
    }
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_134;
    v8 = *(unsigned int *)(a2 + 48);
    v12 = &v126;
    v102 = *(_DWORD *)(a2 + 48);
LABEL_132:
    v13 = &stru_140148B18;
    goto LABEL_133;
  }
  v50 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)v50 != 40 || *(_DWORD *)(v50 + 4) != 40 )
  {
    v80 = 0;
    *(_BYTE *)(a2 + 141) = -84;
    v7 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v7 )
      goto LABEL_271;
    v126 = 0LL;
    IoGetActivityIdIrp(a2, &v126);
    v82 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v82 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_271;
        v81 = *(unsigned int *)(a2 + 48);
        v84 = &stru_140148B18;
        v104 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_271;
        v85 = *(_QWORD *)(v82 + 8);
        v86 = 0;
        v87 = 0LL;
        v117 = 0;
        v88 = 0;
        v89 = 0;
        v90 = 0;
        v91 = 0;
        if ( *(_BYTE *)(v85 + 2) != 40 )
        {
          v97 = *(_BYTE *)(v85 + 72);
          v87 = *(_BYTE **)(v85 + 32);
          v88 = *(_BYTE *)(v85 + 11);
          v86 = *(_BYTE *)(v85 + 4);
          if ( !*(_BYTE *)(v85 + 2) )
            goto LABEL_247;
          goto LABEL_271;
        }
        v92 = 0LL;
        v121 = 0;
        if ( *(_DWORD *)(v85 + 20) )
          goto LABEL_271;
        v93 = 0;
        v123 = *(_DWORD *)(v85 + 56);
        if ( !v123 )
          goto LABEL_244;
        while ( 1 )
        {
          v81 = *(unsigned int *)(v85 + 4LL * v93 + 120);
          if ( (unsigned int)v81 >= 0x80 )
          {
            v94 = *(unsigned int *)(v85 + 16);
            if ( (unsigned int)v81 < (unsigned int)v94 )
            {
              v95 = (unsigned int)v81;
              v96 = *(_DWORD *)(v85 + v81) - 64;
              if ( v96 )
              {
                v81 = (unsigned int)(v96 - 1);
                if ( (_DWORD)v81 )
                {
                  if ( (_DWORD)v81 == 1 )
                  {
                    v81 = v95 + 40;
                    if ( v95 + 40 <= v94 )
                    {
                      if ( *(_DWORD *)(v85 + v95 + 12) )
                        v92 = (char *)(v95 + v85 + 32);
                      v87 = *(_BYTE **)(v85 + v95 + 24);
                      goto LABEL_243;
                    }
                  }
                }
                else
                {
                  v81 = v95 + 56;
                  if ( v95 + 56 <= v94 )
                  {
                    v121 = 1;
                    if ( *(_BYTE *)(v85 + v95 + 10) )
                      v92 = (char *)(v95 + v85 + 24);
                    v86 = *(_BYTE *)(v85 + v95 + 8);
                    v87 = *(_BYTE **)(v85 + v95 + 16);
                    v88 = *(_BYTE *)(v85 + v95 + 9);
                  }
                }
              }
              else
              {
                v81 = v95 + 40;
                if ( v95 + 40 <= v94 )
                {
                  if ( *(_BYTE *)(v85 + v95 + 10) )
                    v92 = (char *)(v95 + v85 + 24);
                  v87 = *(_BYTE **)(v85 + v95 + 16);
LABEL_243:
                  v88 = *(_BYTE *)(v85 + v95 + 9);
                  v86 = *(_BYTE *)(v85 + v95 + 8);
LABEL_244:
                  if ( v92 )
                  {
                    v97 = *v92;
                    v90 = 0;
LABEL_247:
                    LOBYTE(v81) = v97 - 8;
                    if ( (v81 & 0x5D) == 0 )
                    {
                      v98 = *(_BYTE *)(v85 + 3);
                      if ( v98 == 1 || !v87 || !v88 )
                        goto LABEL_266;
                      LOBYTE(v85) = 0;
                      v81 = (unsigned __int64)&v87[v88];
                      v99 = v87 + 8;
                      if ( (unsigned __int8)((*v87 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v99 <= v81 )
                        {
                          LOBYTE(v85) = 1;
                          v90 = v87[2];
                          v89 = v87[1] & 0xF;
                          v91 = v87[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v99 <= v81 )
                        {
                          v89 = v87[2] & 0xF;
                          v100 = v88;
                          if ( (unsigned int)(unsigned __int8)v87[7] + 8 <= v88 )
                            v100 = (unsigned __int8)v87[7] + 8;
                          v81 = (unsigned __int64)(v87 + 13);
                          v85 = (unsigned __int64)&v87[v100];
                          if ( (unsigned __int64)(v87 + 13) > v85 )
                            v117 = 0;
                          else
                            v117 = v87[12];
                          if ( (unsigned __int64)(v87 + 14) <= v85 )
                            v91 = *(_BYTE *)v81;
                          LOBYTE(v85) = 1;
                        }
                        v90 = v117;
                      }
                      if ( (_BYTE)v85 )
                      {
                        LOBYTE(v80) = v90;
                        v101 = v91;
                      }
                      else
                      {
LABEL_266:
                        v89 = 0;
                        v101 = 0;
                      }
                      sub_140052E64(v81, v85, &v126, a2, *(_DWORD *)(a2 + 48), v98, v86, v89, v80, v101, a2);
                    }
                  }
                  goto LABEL_271;
                }
              }
              if ( v121 )
                goto LABEL_244;
            }
          }
          if ( ++v93 >= v123 )
            goto LABEL_244;
        }
      case 0x1B:
        if ( *(_BYTE *)(v82 + 1) == 7 && !*(_DWORD *)(v82 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v83 = *(int **)(a2 + 56);
            if ( v83 )
              v80 = *v83;
            sub_140056AB0(v81, v82, &v126, a2, v80, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_271;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_271:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225485LL;
        }
        v84 = &stru_140149FE8;
        v104 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_271;
    }
    sub_140052F3C(v81, v84, &v126, a2, v104);
    goto LABEL_271;
  }
  v51 = (const GUID *)(a1 + 160);
  v52 = 0;
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(v50 + 8);
  *(_OWORD *)(v50 + 24) = *(_OWORD *)(*(_QWORD *)(v3 + 128) + 1032LL);
  *(_QWORD *)(a2 + 56) = 40LL;
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v50 + 24, 0x400000000000LL) )
  {
    *(_QWORD *)&v127 = 0x1000000LL;
    v129 = &v127;
    v122 = *(_DWORD *)(a1 + 56);
    v135 = &v122;
    v56 = *(_QWORD *)(v55 + 128);
    v130 = 8LL;
    v131 = v53;
    v132 = 16LL;
    v133 = v51;
    v134 = 16LL;
    v136 = 4LL;
    v57 = *(unsigned int *)(v56 + 56);
    v137 = &v124;
    v123 = *(unsigned __int16 *)(v55 + 4);
    v139 = &v123;
    v124 = v57;
    v138 = 4LL;
    v140 = 4LL;
    sub_140037A5C(v57, (unsigned __int8 *)dword_14015AF54, v54, v55, 8u, &v128);
  }
  RtlStringFromGUID(v51, &GuidString);
  Buffer = (PWSTR)&dword_140149108;
  if ( GuidString.Buffer )
    Buffer = GuidString.Buffer;
  sub_1400A9114(a1, 1, 4, (__int64)L"NVMe namespace identification", Buffer, 0, (void *)&dword_140149108, 0);
  RtlFreeUnicodeString(&GuidString);
  v7 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v7 )
    goto LABEL_206;
  v126 = 0LL;
  IoGetActivityIdIrp(a2, &v126);
  v60 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v60 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_206;
    v62 = &stru_140148B18;
    goto LABEL_205;
  }
  if ( *(_BYTE *)v60 != 15 )
  {
    if ( *(_BYTE *)v60 != 27 )
      goto LABEL_206;
    if ( *(_BYTE *)(v60 + 1) == 7 && !*(_DWORD *)(v60 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v61 = *(ULONG **)(a2 + 56);
        if ( v61 )
          v52 = *v61;
        LODWORD(v106) = *(_DWORD *)(a2 + 48);
        v103[0] = v52;
        sub_140056AB0(v59, v60, &v126, a2, *(_QWORD *)v103, v106);
      }
      goto LABEL_206;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_206;
    v62 = &stru_140149FE8;
LABEL_205:
    v103[0] = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v59, v62, &v126, a2, *(_QWORD *)v103);
    goto LABEL_206;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_206;
  v63 = *(_QWORD *)(v60 + 8);
  v64 = 0;
  v65 = 0LL;
  v116 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  if ( *(_BYTE *)(v63 + 2) != 40 )
  {
    v75 = *(_BYTE *)(v63 + 72);
    v65 = *(_BYTE **)(v63 + 32);
    v66 = *(_BYTE *)(v63 + 11);
    v64 = *(_BYTE *)(v63 + 4);
    if ( !*(_BYTE *)(v63 + 2) )
      goto LABEL_182;
    goto LABEL_206;
  }
  v70 = 0LL;
  v120 = 0;
  if ( *(_DWORD *)(v63 + 20) )
    goto LABEL_206;
  v71 = 0;
  v123 = *(_DWORD *)(v63 + 56);
  if ( !v123 )
    goto LABEL_179;
  while ( 1 )
  {
    v59 = *(unsigned int *)(v63 + 4LL * v71 + 120);
    if ( (unsigned int)v59 >= 0x80 )
    {
      v72 = *(unsigned int *)(v63 + 16);
      if ( (unsigned int)v59 < (unsigned int)v72 )
        break;
    }
LABEL_173:
    if ( ++v71 >= v123 )
      goto LABEL_179;
  }
  v73 = (unsigned int)v59;
  v74 = *(_DWORD *)(v63 + v59) - 64;
  if ( v74 )
  {
    v59 = (unsigned int)(v74 - 1);
    if ( (_DWORD)v59 )
    {
      if ( (_DWORD)v59 == 1 )
      {
        v59 = v73 + 40;
        if ( v73 + 40 <= v72 )
        {
          if ( *(_DWORD *)(v63 + v73 + 12) )
            v70 = (char *)(v73 + v63 + 32);
          v65 = *(_BYTE **)(v63 + v73 + 24);
          goto LABEL_178;
        }
      }
    }
    else
    {
      v59 = v73 + 56;
      if ( v73 + 56 <= v72 )
      {
        v120 = 1;
        if ( *(_BYTE *)(v63 + v73 + 10) )
          v70 = (char *)(v73 + v63 + 24);
        v64 = *(_BYTE *)(v63 + v73 + 8);
        v65 = *(_BYTE **)(v63 + v73 + 16);
        v66 = *(_BYTE *)(v63 + v73 + 9);
      }
    }
    goto LABEL_172;
  }
  v59 = v73 + 40;
  if ( v73 + 40 > v72 )
  {
LABEL_172:
    if ( v120 )
      goto LABEL_179;
    goto LABEL_173;
  }
  if ( *(_BYTE *)(v63 + v73 + 10) )
    v70 = (char *)(v73 + v63 + 24);
  v65 = *(_BYTE **)(v63 + v73 + 16);
LABEL_178:
  v66 = *(_BYTE *)(v63 + v73 + 9);
  v64 = *(_BYTE *)(v63 + v73 + 8);
LABEL_179:
  if ( v70 )
  {
    v75 = *v70;
    v68 = 0;
LABEL_182:
    LOBYTE(v59) = v75 - 8;
    if ( (v59 & 0x5D) == 0 )
    {
      v76 = *(_BYTE *)(v63 + 3);
      if ( v76 == 1 || !v65 || !v66 )
        goto LABEL_201;
      LOBYTE(v63) = 0;
      v59 = (unsigned __int64)&v65[v66];
      v77 = v65 + 8;
      if ( (unsigned __int8)((*v65 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v77 <= v59 )
        {
          LOBYTE(v63) = 1;
          v68 = v65[2];
          v67 = v65[1] & 0xF;
          v69 = v65[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v77 <= v59 )
        {
          v67 = v65[2] & 0xF;
          v78 = v66;
          if ( (unsigned int)(unsigned __int8)v65[7] + 8 <= v66 )
            v78 = (unsigned __int8)v65[7] + 8;
          v59 = (unsigned __int64)(v65 + 13);
          v63 = (unsigned __int64)&v65[v78];
          if ( (unsigned __int64)(v65 + 13) > v63 )
            v116 = 0;
          else
            v116 = v65[12];
          if ( (unsigned __int64)(v65 + 14) <= v63 )
            v69 = *(_BYTE *)v59;
          LOBYTE(v63) = 1;
        }
        v68 = v116;
      }
      if ( (_BYTE)v63 )
      {
        LOBYTE(v52) = v68;
        v79 = v69;
      }
      else
      {
LABEL_201:
        v67 = 0;
        v79 = 0;
      }
      LOBYTE(v110) = v67;
      LOBYTE(v108) = v64;
      LOBYTE(v106) = v76;
      v103[0] = *(_DWORD *)(a2 + 48);
      sub_140052E64(v59, v63, &v126, a2, *(_QWORD *)v103, v106, v108, v110, v52, v79, a2);
    }
  }
LABEL_206:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
