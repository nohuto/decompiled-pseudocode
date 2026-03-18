/*
 * XREFs of BuildExpandAAInfo @ 0x1401412F0
 * Callers:
 *     <none>
 * Callees:
 *     RaisePower @ 0x14013FBB0 (RaisePower.c)
 *     DivFD6 @ 0x14013FFE8 (DivFD6.c)
 *     BuildRepData @ 0x140141BF4 (BuildRepData.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        __int16 a2,
        int *a3,
        int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // r13d
  signed int v13; // r8d
  int v14; // r11d
  int v15; // ebx
  int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned int v22; // r14d
  unsigned int v23; // r12d
  unsigned int v25; // esi
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  char *v29; // rax
  _DWORD *v30; // rbx
  _QWORD *v31; // r15
  _OWORD *v32; // rsi
  char *v33; // rcx
  __int16 v34; // cx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int *v41; // rdx
  int *v42; // rcx
  _DWORD *v43; // r12
  _DWORD *v44; // r13
  unsigned int v45; // r11d
  __int64 v46; // r9
  __int64 v47; // r10
  unsigned int *v48; // rdx
  int v49; // esi
  int *v50; // r14
  int *v51; // r12
  __int64 v52; // rax
  int v53; // r9d
  int v54; // r8d
  int v55; // r14d
  int v56; // eax
  unsigned int v57; // edx
  int v58; // ecx
  int v59; // r12d
  unsigned int v60; // eax
  unsigned int v61; // r10d
  __int64 v62; // r11
  __int64 v63; // r14
  int *v64; // rdi
  unsigned int v65; // r8d
  unsigned int v66; // eax
  __int64 v67; // r11
  unsigned int v68; // ecx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r14
  int v72; // edi
  signed int v73; // ecx
  __int64 v74; // rax
  int v75; // r11d
  int v76; // edi
  unsigned int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  unsigned int v82; // eax
  unsigned __int64 v83; // rcx
  int v84; // ecx
  __int64 *v85; // rcx
  int v86; // eax
  int v87; // ecx
  int v88; // r8d
  __int64 v89; // rax
  int v90; // edi
  int *v91; // r15
  int v92; // eax
  __int64 v93; // r8
  __int64 v94; // r8
  _QWORD *v95; // rcx
  __int64 v96; // rax
  __int64 i; // rdx
  int v98; // eax
  unsigned int v99; // [rsp+20h] [rbp-B9h]
  int v101; // [rsp+24h] [rbp-B5h]
  unsigned int v102; // [rsp+28h] [rbp-B1h]
  int v103; // [rsp+2Ch] [rbp-ADh]
  int v104; // [rsp+30h] [rbp-A9h]
  int v105; // [rsp+34h] [rbp-A5h]
  __int16 v106; // [rsp+38h] [rbp-A1h]
  int v107; // [rsp+3Ch] [rbp-9Dh]
  int v108; // [rsp+40h] [rbp-99h]
  __int64 v110; // [rsp+50h] [rbp-89h]
  __int64 v111; // [rsp+50h] [rbp-89h]
  int v112; // [rsp+58h] [rbp-81h]
  int v113; // [rsp+5Ch] [rbp-7Dh]
  unsigned int v114; // [rsp+60h] [rbp-79h]
  int v115; // [rsp+64h] [rbp-75h]
  int v116; // [rsp+68h] [rbp-71h]
  int v117; // [rsp+6Ch] [rbp-6Dh]
  _QWORD *v118; // [rsp+70h] [rbp-69h]
  int v119; // [rsp+70h] [rbp-69h]
  __int64 v120; // [rsp+78h] [rbp-61h]
  unsigned int *v121; // [rsp+80h] [rbp-59h]
  _QWORD *v122; // [rsp+88h] [rbp-51h]
  __int64 v123; // [rsp+90h] [rbp-49h]
  _DWORD *v125; // [rsp+A0h] [rbp-39h]
  int *v126; // [rsp+B8h] [rbp-21h]
  __int64 v127; // [rsp+C0h] [rbp-19h]
  __int64 v128; // [rsp+C8h] [rbp-11h]
  int v129; // [rsp+150h] [rbp+77h]

  v10 = *a3;
  v11 = *a4;
  v12 = *a4 - *a3;
  v13 = a7 - a6;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v102 = v10;
  v129 = a7 - a6;
  if ( (int)v12 <= 0 )
    return 0LL;
  v14 = *a8;
  v15 = *a9;
  v16 = 0;
  if ( v10 >= 0 )
    v16 = v10;
  v112 = *a8;
  v103 = v16;
  if ( v11 > a5 )
    v11 = a5;
  v104 = -1;
  v105 = v11;
  v113 = *a9;
  v108 = 0;
  if ( v14 >= v15 || (int)v12 >= v13 )
    return 0LL;
  if ( (a2 & 0x4A80) != 0 )
  {
    v17 = v11 - v16;
    v18 = v11 - v16 + 3;
    if ( v18 < v17 )
      return 0LL;
    v19 = 2LL * v18;
    if ( v19 > 0xFFFFFFFF || (int)v19 + 8 < (unsigned int)v19 )
      return 0LL;
    v20 = (v19 + 8) & 0xFFFFFFF8;
  }
  else
  {
    v20 = 0;
  }
  if ( (a2 & 0x4200) != 0 )
  {
    v21 = 0;
    v99 = 0;
    v22 = 0;
    v23 = 0;
  }
  else
  {
    v77 = v12 + v13 - 1;
    if ( v77 < v13 )
      return 0LL;
    v78 = 2LL * (v77 / v12);
    if ( v78 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v78 )
      return 0LL;
    v79 = 4LL * (unsigned int)(v78 - 1);
    v99 = v78 - 1;
    v80 = (unsigned int)(v78 - 1);
    if ( v79 > 0xFFFFFFFF )
      return 0LL;
    if ( (int)v79 + 8 < (unsigned int)v79 )
      return 0LL;
    v23 = (v79 + 8) & 0xFFFFFFF8;
    v81 = 8 * v80;
    if ( v81 > 0xFFFFFFFF )
      return 0LL;
    if ( (int)v81 + 8 < (unsigned int)v81 )
      return 0LL;
    v82 = (v81 + 8) & 0xFFFFFFF8;
    v21 = v23 + v82;
    if ( v23 + v82 < v82 )
      return 0LL;
    v83 = 8LL * (unsigned int)(v15 - v14);
    if ( v83 > 0xFFFFFFFF || (int)v83 + 8 < (unsigned int)v83 )
      return 0LL;
    v22 = (v83 + 8) & 0xFFFFFFF8;
  }
  if ( a10 + 8 < a10 )
    return 0LL;
  v25 = (a10 + 8) & 0xFFFFFFF8;
  v26 = v22 + v20;
  if ( v22 + v20 < v20 )
    return 0LL;
  v27 = v25 + v26;
  if ( v25 + v26 < v26 )
    return 0LL;
  v28 = v27 + v21;
  if ( v27 + v21 < v27 || v28 + 240 < v28 )
    return 0LL;
  v29 = (char *)EngAllocMem(1u, v28 + 240, 0x34355448u);
  v125 = v29;
  v30 = v29;
  if ( !v29 )
    return v30;
  v31 = v29 + 240;
  v118 = v29 + 240;
  if ( v25 )
  {
    *((_QWORD *)v29 + 4) = v31;
    v31 = (_QWORD *)((char *)v31 + v25);
    v118 = v31;
  }
  if ( v20 )
  {
    v32 = v29 + 48;
    *((_DWORD *)v29 + 13) = v129;
    *((_DWORD *)v29 + 17) = v105;
    *((_DWORD *)v29 + 16) = v103;
    *((_DWORD *)v29 + 18) = v112;
    v33 = (char *)v31 + 2 * (v105 - v103);
    *((_QWORD *)v29 + 11) = v31;
    v31 = (_QWORD *)((char *)v31 + v20);
    *((_DWORD *)v29 + 19) = v113;
    *((_QWORD *)v29 + 12) = v33;
    v118 = v31;
    *((_DWORD *)v29 + 12) = v12;
    if ( !(unsigned int)BuildRepData(v29 + 48, v102, (unsigned int)a6) )
      goto LABEL_67;
    v34 = a2;
    v35 = *((_OWORD *)v30 + 4);
    *((_OWORD *)v30 + 7) = *v32;
    v36 = *((_OWORD *)v30 + 5);
    *((_OWORD *)v30 + 8) = v35;
    v37 = *((_OWORD *)v30 + 6);
    *((_OWORD *)v30 + 9) = v36;
    *((_OWORD *)v30 + 10) = v37;
    v38 = *((_OWORD *)v30 + 8);
    *((_OWORD *)v30 + 11) = *((_OWORD *)v30 + 7);
    v39 = *((_OWORD *)v30 + 9);
    *((_OWORD *)v30 + 12) = v38;
    v40 = *((_OWORD *)v30 + 10);
    *((_OWORD *)v30 + 13) = v39;
    *((_OWORD *)v30 + 14) = v40;
    if ( (a2 & 0x4000) != 0 )
    {
      v30[16] -= *((unsigned __int8 *)v30 + 80);
      v30[17] += *((unsigned __int8 *)v30 + 81);
    }
  }
  else
  {
    v34 = a2;
  }
  if ( !v22 )
  {
    v41 = a3;
    v42 = a4;
    v43 = a8;
    v44 = a9;
    *a3 = v30[16];
    *a4 = v30[17] - 1;
    *a8 = v30[18];
    *a9 = v30[19] - 1;
    goto LABEL_31;
  }
  v45 = v99;
  v46 = 1000000LL;
  v47 = v99;
  v48 = (unsigned int *)((char *)v31 + v22);
  *((_QWORD *)v30 + 5) = v31;
  v122 = (_QWORD *)((char *)v48 + v23);
  v49 = 4;
  v128 = 0LL;
  v121 = v48;
  v110 = 1000000LL;
  v50 = (int *)&v48[(unsigned __int64)v99 >> 1];
  *v50 = 1000000;
  v51 = v50;
  if ( (v34 & 0x200) == 0 )
  {
    v90 = v129 - v12;
    if ( (int)(v129 - v12) <= 0 )
    {
LABEL_119:
      v94 = 0LL;
      if ( v45 )
      {
        v95 = v122;
        do
        {
          v96 = *v48++;
          v94 += v96;
          *v95++ = v94;
          --v47;
        }
        while ( v47 );
      }
      goto LABEL_36;
    }
    v91 = (int *)v48;
    while ( 1 )
    {
      if ( --v50 < v91 )
      {
LABEL_118:
        v30 = v125;
        v31 = v118;
        v47 = v99;
        v48 = v121;
        v45 = v99;
        goto LABEL_119;
      }
      v92 = DivFD6(v90, v129);
      if ( v92 >= 500000 )
      {
        if ( v92 <= 500000 )
          goto LABEL_117;
        v93 = 1LL;
      }
      else
      {
        v93 = 0LL;
      }
      v92 = RaisePower(v92, 1414214LL, v93);
LABEL_117:
      ++v51;
      v90 -= v12;
      *v51 = v92;
      *v50 = v92;
      v46 = v110 + 2LL * v92;
      v110 = v46;
      if ( v90 <= 0 )
        goto LABEL_118;
    }
  }
  *((_WORD *)v30 + 4) |= 4u;
LABEL_36:
  v52 = v46 * (int)v12;
  v53 = v129;
  v54 = 0;
  v55 = 0;
  v127 = v52;
  v56 = v129;
  v107 = 0;
  v101 = 0;
  v57 = v129 + v12 * (v45 >> 1);
  if ( !v129 )
  {
    v72 = v103;
    v75 = -1;
    goto LABEL_66;
  }
  v58 = v102;
  v59 = (v45 >> 1) - v129;
  while ( 2 )
  {
    v120 = 0LL;
    v119 = v56 - 1;
    ++v59;
    v111 = 0LL;
    v60 = v57 - v12;
    v123 = 0LL;
    v106 = 0;
    v61 = v45;
    v62 = 0LL;
    v63 = 0LL;
    v64 = (int *)v121;
    v65 = v57;
    if ( v12 >= v57 )
      v60 += v53;
    v114 = v60;
    v66 = v99;
    if ( !v99 )
    {
LABEL_136:
      v72 = v103;
      goto LABEL_54;
    }
    while ( 2 )
    {
      v67 = 0LL;
      while ( 1 )
      {
        v68 = v61--;
        v69 = *v64++;
        v126 = v64;
        if ( v65 < v12 )
          break;
        v76 = v65 / v12;
        if ( v65 / v12 > v68 )
          v76 = v68;
        if ( v66 - v61 != 1 )
          v67 = v122[v66 - v61 - 2];
        v53 = v129;
        v63 += v12 * (v122[v76 - 2 + v66 - v61] - v67);
        v65 -= v12 * v76;
        v61 += 1 - v76;
        v67 = 0LL;
        v64 = &v126[v76 - 1];
LABEL_75:
        if ( !v61 )
        {
          v58 = v102;
          v62 = v120;
          goto LABEL_136;
        }
        v66 = v99;
      }
      if ( v59 >= 0 && v61 < v59 )
      {
        v63 += v12 * v69;
        v65 -= v12;
        goto LABEL_75;
      }
      if ( v65 )
        v63 += v69 * v65;
      v70 = v123;
      v62 = v111;
      v123 = v63;
      v71 = v12 - v65;
      v111 = v70;
      v120 = v62;
      v65 += v53 - v12;
      v63 = v69 * v71;
      if ( v61 )
      {
        v66 = v99;
        continue;
      }
      break;
    }
    v72 = v103;
    v73 = v102 + 1;
    if ( (int)(v102 + 1) >= v103 && v73 < v105 )
    {
      ++v108;
      v73 = v102 + 2;
      v106 = 0x8000;
      if ( (int)(v102 + 2) < v103 || v73 >= v105 )
        v106 = -16384;
    }
    v58 = v73 - 1;
    v102 = v58;
LABEL_54:
    if ( v58 < v72 || v58 >= v105 || a6 < v112 || a6 >= v113 )
    {
      v75 = v104;
      if ( v104 == -1 )
        goto LABEL_64;
    }
    else
    {
      HIWORD(v128) = (v63 << 13) / v127;
      WORD2(v128) = ((v63 << 13) % v127 + (v123 << 13)) / v127;
      if ( v111 )
      {
        ++v101;
        WORD1(v128) = (((v63 << 13) % v127 + (v123 << 13)) % v127 + (v111 << 13)) / v127;
        if ( v62 )
        {
          ++v107;
          v74 = ((((v63 << 13) % v127 + (v123 << 13)) % v127 + (v111 << 13)) % v127 + (v62 << 13)) / v127;
          goto LABEL_61;
        }
      }
      else
      {
        WORD1(v128) = 0;
      }
      LOWORD(v74) = 0;
LABEL_61:
      v75 = v104;
      LOWORD(v128) = v106 | v74;
      *v31++ = v128;
      if ( v104 == -1 )
      {
        v75 = v58;
        v104 = v58;
        v116 = a6;
      }
      v115 = v58;
      v117 = a6;
LABEL_64:
      v56 = v119;
      v57 = v114;
      ++a6;
      if ( v119 )
      {
        v45 = v99;
        continue;
      }
    }
    break;
  }
  v30 = v125;
  v54 = v107;
  v55 = v101;
LABEL_66:
  if ( v75 == -1 )
  {
LABEL_67:
    EngFreeMem(v30);
    return 0LL;
  }
  v84 = v115 + 1;
  if ( v115 + 1 >= v105 || v84 < v72 )
    v84 = v115;
  v43 = a8;
  v44 = a9;
  *a3 = v75;
  *a4 = v84;
  *a8 = v116;
  *a9 = v117;
  v85 = (__int64 *)*((_QWORD *)v30 + 5);
  v30[4] = v31 - v85;
  v30[5] = v108;
  if ( v55 )
    v86 = (v54 != 0) + 3;
  else
    v86 = 2;
  v30[6] = v86;
  v128 = *v85;
  if ( (v128 & 0x8000u) == 0LL )
  {
    v98 = v75 + 1;
    v75 = v98;
    if ( v98 < v72 || v98 >= v105 )
      *((_WORD *)v30 + 4) |= 2u;
  }
  else
  {
    v49 = 3;
  }
  v87 = v75 - 1;
  v88 = 0;
  for ( i = 0LL; i < (unsigned int)v49; ++i )
  {
    if ( (*((_WORD *)&v128 + i) & 0x3FFF) != 0 )
      break;
    ++v88;
  }
  v41 = a3;
  if ( v49 > v88 )
  {
    v89 = (unsigned int)(v49 - v88);
    do
    {
      if ( v87 < v72 || v87 >= v105 )
      {
        *((_WORD *)v30 + 6) += 16;
      }
      else
      {
        *a3 = v87;
        ++*((_WORD *)v30 + 6);
      }
      --v87;
      --v89;
    }
    while ( v89 );
  }
  if ( *((_WORD *)v30 + 6) && v87 >= v72 && v87 < v105 )
  {
    *a3 = v87;
    *((_WORD *)v30 + 4) |= 1u;
  }
  v42 = a4;
LABEL_31:
  *v30 = *v42 - *v41 + 1;
  v30[1] = *v44 - *v43 + 1;
  return v30;
}
