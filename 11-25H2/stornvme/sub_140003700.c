/*
 * XREFs of sub_140003700 @ 0x140003700
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_140004670 @ 0x140004670 (sub_140004670.c)
 *     sub_14002079C @ 0x14002079C (sub_14002079C.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140003700(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, bool *a5)
{
  char v6; // dl
  __int64 v7; // r11
  __int64 v8; // rdi
  int *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d
  int v13; // eax
  int v14; // ecx
  char v15; // si
  __int64 v16; // r13
  bool v17; // zf
  unsigned __int8 *v18; // r10
  unsigned int v19; // eax
  unsigned int *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  unsigned int v25; // r8d
  unsigned int i; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int *v29; // rcx
  __int64 v30; // r9
  unsigned __int16 v31; // r15
  int v32; // ecx
  unsigned int v33; // r14d
  bool v34; // cl
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rax
  __int16 v38; // ax
  int v39; // esi
  _DWORD *v40; // r15
  unsigned __int8 v41; // r14
  unsigned __int8 *v42; // r9
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned int v46; // r8d
  unsigned int v47; // r8d
  unsigned __int8 v48; // al
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // r9d
  unsigned int v52; // ecx
  unsigned __int16 v53; // dx
  _BYTE *v55; // r12
  unsigned __int8 v56; // r11
  char v57; // r10
  __int64 v58; // r15
  unsigned int v59; // eax
  unsigned int *v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned int v64; // r14d
  unsigned int v65; // edi
  _BYTE *v66; // r12
  unsigned __int8 v67; // r11
  char v68; // r10
  __int64 v69; // rdi
  unsigned int v70; // eax
  unsigned int *v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // r14d
  unsigned int v76; // esi
  unsigned int v77; // eax
  int v78; // ecx
  int v79; // ecx
  int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // edi
  __int64 v83; // rcx
  unsigned int v84; // edi
  __int64 v85; // r8
  unsigned int v86; // edx
  int v87; // eax
  unsigned int v88; // esi
  unsigned int v89; // esi
  bool v90; // [rsp+30h] [rbp-61h]
  unsigned int v91; // [rsp+38h] [rbp-59h]
  __int64 v92; // [rsp+38h] [rbp-59h]
  unsigned __int16 v93; // [rsp+40h] [rbp-51h]
  unsigned int v96; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v97; // [rsp+5Ch] [rbp-35h]
  int v98; // [rsp+60h] [rbp-31h]
  unsigned int v99; // [rsp+64h] [rbp-2Dh]
  bool *v100; // [rsp+68h] [rbp-29h]
  __int64 *v101; // [rsp+70h] [rbp-21h]
  __int128 v102; // [rsp+78h] [rbp-19h] BYREF
  __int128 v103; // [rsp+88h] [rbp-9h] BYREF
  __int64 v104; // [rsp+98h] [rbp+7h]

  v6 = *(_BYTE *)(a2 + 2);
  v7 = a1;
  v98 = a4;
  v100 = a5;
  if ( v6 == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v6 == 40 )
  {
    v9 = (int *)(a2 + 60);
    v10 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 7);
    v9 = (int *)(a2 + 16);
  }
  v91 = v10;
  v101 = (__int64 *)(v7 + 8 * (v10 + 209));
  v11 = *v101;
  v12 = *(_DWORD *)(*v101 + 52);
  v99 = v12;
  if ( !v12 || !*(_QWORD *)(v11 + 56) )
  {
    sub_140002330(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  v93 = *(_WORD *)(v11 + 92);
  if ( v6 == 40 )
    v13 = *(_DWORD *)(a2 + 24);
  else
    v13 = *(_DWORD *)(a2 + 12);
  if ( (v13 & 0xC0) == 0 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    LOWORD(v103) = 0;
    v55 = 0LL;
    v56 = 0;
    v102 = 0LL;
    v57 = 0;
    LOBYTE(v102) = -16;
    BYTE7(v102) = 10;
    BYTE2(v102) = 5;
    v58 = 0LL;
    WORD6(v102) = 36;
    if ( v6 != 40 )
    {
      if ( v6 )
        return 3238002694LL;
      v58 = *(_QWORD *)(a2 + 32);
      v55 = (_BYTE *)(a2 + 4);
      v56 = *(_BYTE *)(a2 + 11);
LABEL_89:
      if ( v55 )
        *v55 = 2;
      if ( !v58 || !v56 )
        return 3238002694LL;
      v64 = v56 <= 0x12u ? v56 : 18;
      v65 = v56;
      sub_140032980(v58, &v102, v64);
      *(_BYTE *)(a2 + 3) |= 0x80u;
      if ( v65 <= v64 )
        return 3238002694LL;
      v82 = v65 - v64;
      v83 = v64 + v58;
      if ( (v82 & 3) == 0 )
      {
        v84 = v82 >> 2;
        if ( v84 )
          sub_140032C80(v83, 0LL, 4LL * v84);
        return 3238002694LL;
      }
      if ( !v82 )
        return 3238002694LL;
      v85 = v82;
LABEL_192:
      sub_140032C80(v83, 0LL, v85);
      return 3238002694LL;
    }
    if ( *(_DWORD *)(a2 + 20) )
      return 3238002694LL;
    v59 = *(_DWORD *)(a2 + 56);
    if ( !v59 )
      return 3238002694LL;
    v60 = (unsigned int *)(a2 + 120);
    v61 = v59;
    while ( 1 )
    {
      v62 = *v60;
      if ( (unsigned int)v62 < 0x80 || (unsigned int)v62 > *(_DWORD *)(a2 + 16) )
        goto LABEL_87;
      v63 = a2 + v62;
      if ( *(_DWORD *)(a2 + v62) == 64 || *(_DWORD *)(a2 + v62) == 65 )
        break;
      if ( *(_DWORD *)(a2 + v62) == 66 )
      {
        v58 = *(_QWORD *)(v63 + 24);
LABEL_159:
        v56 = *(_BYTE *)(v63 + 9);
        v55 = (_BYTE *)(v63 + 8);
        v57 = 1;
      }
LABEL_87:
      ++v60;
      if ( !--v61 )
      {
        if ( !v57 )
          return 3238002694LL;
        goto LABEL_89;
      }
    }
    v58 = *(_QWORD *)(v63 + 16);
    goto LABEL_159;
  }
  v14 = *v9;
  if ( v14 && ((v12 - 1) & v14) == 0 )
  {
    *(_BYTE *)(v8 + 4225) = *(_BYTE *)(v8 + 4225) & 0xFC | 2;
    v15 = *(_BYTE *)(a2 + 2);
    if ( v15 == 40 )
      v16 = *(_QWORD *)(a2 + 104);
    else
      v16 = *(_QWORD *)(a2 + 56);
    if ( (v16 & 0xFFF) != 0 )
      v16 = v16 - (v16 & 0xFFF) + 4096;
    v96 = 0;
    v17 = (*(_BYTE *)(v16 + 4225) & 1) == 0;
    v97 = 0;
    v90 = 0;
    if ( !v17 )
      goto LABEL_114;
    LODWORD(v103) = 0;
    v18 = 0LL;
    v102 = 0LL;
    if ( v15 == 40 )
    {
      if ( !*(_DWORD *)(a2 + 20) )
      {
        v19 = *(_DWORD *)(a2 + 56);
        if ( v19 )
        {
          v20 = (unsigned int *)(a2 + 120);
          v21 = v19;
          while ( 1 )
          {
            v22 = *v20;
            if ( (unsigned int)v22 < 0x80 || (unsigned int)v22 > *(_DWORD *)(a2 + 16) )
              goto LABEL_28;
            v23 = a2 + v22;
            if ( *(_DWORD *)(a2 + v22) == 64 )
            {
              if ( *(_BYTE *)(v23 + 10) )
                goto LABEL_167;
            }
            else
            {
              if ( *(_DWORD *)(a2 + v22) != 65 )
              {
                if ( *(_DWORD *)(a2 + v22) == 66 && *(_DWORD *)(v23 + 12) )
                  v18 = (unsigned __int8 *)(v23 + 32);
                goto LABEL_28;
              }
              if ( *(_BYTE *)(v23 + 10) )
LABEL_167:
                v18 = (unsigned __int8 *)(v23 + 24);
            }
LABEL_28:
            ++v20;
            if ( !--v21 )
              goto LABEL_29;
          }
        }
      }
    }
    else if ( !v15 && *(_BYTE *)(a2 + 10) )
    {
      v18 = (unsigned __int8 *)(a2 + 72);
LABEL_29:
      if ( v18 )
      {
        v24 = *v18;
        if ( v24 == 138 || (v78 = v24 - 40) == 0 || (v79 = v78 - 2) == 0 || v79 == 94 )
        {
          if ( v15 == 40 )
          {
            v25 = *(_DWORD *)(a2 + 56);
            if ( v25 )
            {
              for ( i = 0; i < v25; ++i )
              {
                v27 = *(unsigned int *)(a2 + 4LL * i + 120);
                if ( (unsigned int)v27 >= 0x80 && (unsigned int)v27 < *(_DWORD *)(a2 + 16) )
                {
                  v28 = a2 + v27;
                  if ( *(_DWORD *)(a2 + v27) == 128 )
                    goto LABEL_40;
                }
              }
            }
          }
          v29 = (unsigned int *)(a2 + 16);
          v28 = 0LL;
          if ( v15 == 40 )
LABEL_40:
            v29 = (unsigned int *)(a2 + 60);
          if ( v29 )
            v97 = *v29;
          if ( v28 )
            v90 = (*(_BYTE *)(v28 + 8) & 2) != 0;
        }
      }
    }
    *(_QWORD *)&v102 = 0x1400000002LL;
    StorPortExtendedFunction(15LL, v7, a2, &v102);
    v31 = WORD4(v102);
    if ( (_WORD)v103 == 0xFFFF && BYTE2(v103) == 0xFF )
      StorPortExtendedFunction(17LL, a1, &v103, v30);
    StorPortExtendedFunction(56LL, a1, &v103, &v96);
    v32 = *(_BYTE *)(a2 + 2) == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
    v33 = v96;
    v7 = a1;
    v34 = (v32 & 0x4000) != 0;
    if ( (*(_BYTE *)(v16 + 4225) & 1) != 0 )
    {
LABEL_114:
      v38 = *(_WORD *)(v7 + 384);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 20) )
      {
        v37 = *(_QWORD *)(a1 + 936);
      }
      else
      {
        v35 = *(unsigned __int16 *)(a1 + 234);
        if ( v96 >= v35 )
          v33 = v96 % v35;
        v36 = *(_QWORD *)(a1 + 264);
        if ( v34 )
        {
          if ( !*(_QWORD *)(v36 + 72LL * v33 + 64) )
          {
            sub_14002079C(a1, v33, v31);
            v7 = a1;
          }
          v37 = *(_QWORD *)(*(_QWORD *)(v7 + 264) + 72LL * v33 + 64);
        }
        else
        {
          if ( !*(_QWORD *)(v36 + 72LL * v33 + 56) )
          {
            sub_140004670(a1, v33, v31, 0LL);
            v7 = a1;
          }
          v37 = *(_QWORD *)(*(_QWORD *)(v7 + 264) + 72LL * v33 + 56);
        }
        if ( *(_BYTE *)(v7 + 3752) && v97 )
        {
          v80 = *(_DWORD *)(v7 + 3764);
          if ( (v80 & 0x80u) == 0 && (v97 > *(_DWORD *)(v7 + 3760) || v90) )
          {
            LOWORD(v86) = *(_WORD *)(v7 + 334) + v33 % (unsigned __int16)(*(_WORD *)(v7 + 332) - *(_WORD *)(v7 + 334));
          }
          else
          {
            if ( (v80 & 0x40) != 0 )
            {
              v38 = *(_WORD *)(208LL * (v33 % *(unsigned __int16 *)(v7 + 332)) + *(_QWORD *)(v7 + 936) + 48);
              goto LABEL_59;
            }
            v86 = v33 % *(unsigned __int16 *)(v7 + 334);
          }
          v38 = *(_WORD *)(208LL * (unsigned __int16)v86 + *(_QWORD *)(v7 + 936) + 48);
          goto LABEL_59;
        }
      }
      v38 = *(_WORD *)(v37 + 48);
    }
LABEL_59:
    *(_WORD *)(v16 + 4212) = v38;
    if ( v91 < *(_DWORD *)(v7 + 224) && *v101 )
      v39 = *(_DWORD *)(*v101 + 16);
    else
      v39 = 0;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v40 = (_DWORD *)(a2 + 60);
      v41 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    }
    else
    {
      v41 = *(_BYTE *)(a2 + 7);
      v40 = (_DWORD *)(a2 + 16);
    }
    v42 = a3;
    v43 = *a3;
    if ( v43 == 136 || (v44 = v43 - 40) == 0 )
    {
      *(_BYTE *)(v8 + 4096) = 2;
    }
    else
    {
      v45 = v44 - 2;
      if ( !v45 || v45 == 96 )
      {
        *(_BYTE *)(v8 + 4096) = 1;
        if ( (*(_BYTE *)(v7 + 3728) & 3) == 3 && *(_BYTE *)(v7 + 3729) == v41 && *(_WORD *)(v7 + 3732) )
        {
          v104 = 0LL;
          v102 = 0LL;
          LOWORD(v102) = 1;
          v103 = 0LL;
          v87 = StorPortExtendedFunction(28LL, v7, a2, &v102);
          v7 = a1;
          if ( !v87
            && (WORD4(v102) & 0x100) != 0
            && (unsigned int)(HIDWORD(v102) - 1) <= 0xFFFE
            && HIDWORD(v102) <= *(unsigned __int16 *)(a1 + 3732) )
          {
            v42 = a3;
            if ( WORD6(v102) )
            {
              v77 = *(_DWORD *)(v8 + 4144) & 0xFF1FFFFF;
              *(_WORD *)(v8 + 4150) = WORD6(v102);
              *(_DWORD *)(v8 + 4144) = v77 | 0x100000;
            }
          }
          else
          {
            v42 = a3;
          }
        }
      }
    }
    *(_DWORD *)(v8 + 4096) &= 0xFFFFFCFF;
    *(_DWORD *)(v8 + 4100) = v39;
    *(_QWORD *)(v8 + 4112) = 0LL;
    v46 = *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v41 + 1672) + 52LL);
    v47 = (v46 + *v40 - 1) / v46;
    if ( v98 == 16 )
    {
      HIBYTE(v92) = v42[2];
      BYTE3(v92) = v42[6];
      BYTE6(v92) = v42[3];
      BYTE2(v92) = v42[7];
      BYTE5(v92) = v42[4];
      BYTE1(v92) = v42[8];
      v48 = v42[9];
      BYTE4(v92) = v42[5];
    }
    else
    {
      BYTE3(v92) = v42[2];
      BYTE2(v92) = v42[3];
      BYTE1(v92) = v42[4];
      v48 = v42[5];
      HIDWORD(v92) = 0;
    }
    LOBYTE(v92) = v48;
    *(_QWORD *)(v8 + 4136) = v92;
    *(_WORD *)(v8 + 4144) = v47 - 1;
    v49 = *(_DWORD *)(v8 + 4144) & 0xC3FFFFFF;
    *(_DWORD *)(v8 + 4144) = v49;
    v50 = v42[1];
    v51 = v99;
    *(_BYTE *)(v8 + 4148) = 0;
    *(_QWORD *)(v8 + 4152) = 0LL;
    *(_DWORD *)(v8 + 4144) = (v49 & 0x3FFFFFFF ^ ((v50 & 0xFFFFFFF8) << 27)) & 0x7FFFFFFF;
    v52 = *(_DWORD *)(v7 + 52);
    if ( v52 < v51 || v52 % v51 )
    {
      v53 = v93;
      if ( !v93 )
      {
        if ( v100 )
          *v100 = 0;
        return 0LL;
      }
    }
    else
    {
      v53 = v93;
    }
    if ( v53 )
      v81 = v53;
    else
      v81 = v52 / v51;
    if ( v100 )
      *v100 = (__int64)(*(unsigned int *)(v8 + 4136) | ((unsigned __int64)*(unsigned int *)(v8 + 4140) << 32)) / v81 != (__int64)((*(unsigned int *)(v8 + 4136) | ((unsigned __int64)*(unsigned int *)(v8 + 4140) << 32)) - 1 + (unsigned int)(unsigned __int16)*(_DWORD *)(v8 + 4144) + 1) / v81;
    return 0LL;
  }
  *(_BYTE *)(a2 + 3) = 6;
  LOWORD(v103) = 0;
  v66 = 0LL;
  v67 = 0;
  v102 = 0LL;
  v68 = 0;
  LOBYTE(v102) = -16;
  BYTE7(v102) = 10;
  BYTE2(v102) = 5;
  v69 = 0LL;
  WORD6(v102) = 36;
  if ( v6 == 40 )
  {
    if ( *(_DWORD *)(a2 + 20) )
      return 3238002694LL;
    v70 = *(_DWORD *)(a2 + 56);
    if ( !v70 )
      return 3238002694LL;
    v71 = (unsigned int *)(a2 + 120);
    v72 = v70;
    while ( 1 )
    {
      v73 = *v71;
      if ( (unsigned int)v73 < 0x80 || (unsigned int)v73 > *(_DWORD *)(a2 + 16) )
        goto LABEL_104;
      v74 = a2 + v73;
      if ( *(_DWORD *)(a2 + v73) == 64 || *(_DWORD *)(a2 + v73) == 65 )
        break;
      if ( *(_DWORD *)(a2 + v73) == 66 )
      {
        v69 = *(_QWORD *)(v74 + 24);
LABEL_184:
        v67 = *(_BYTE *)(v74 + 9);
        v66 = (_BYTE *)(v74 + 8);
        v68 = 1;
      }
LABEL_104:
      ++v71;
      if ( !--v72 )
      {
        if ( v68 )
          goto LABEL_106;
        return 3238002694LL;
      }
    }
    v69 = *(_QWORD *)(v74 + 16);
    goto LABEL_184;
  }
  if ( !v6 )
  {
    v69 = *(_QWORD *)(a2 + 32);
    v66 = (_BYTE *)(a2 + 4);
    v67 = *(_BYTE *)(a2 + 11);
LABEL_106:
    if ( v66 )
      *v66 = 2;
    if ( v69 && v67 )
    {
      v75 = v67 <= 0x12u ? v67 : 18;
      v76 = v67;
      sub_140032980(v69, &v102, v75);
      *(_BYTE *)(a2 + 3) |= 0x80u;
      if ( v76 > v75 )
      {
        v88 = v76 - v75;
        v83 = v75 + v69;
        if ( (v88 & 3) == 0 )
        {
          v89 = v88 >> 2;
          if ( v89 )
            sub_140032C80(v83, 0LL, 4LL * v89);
          return 3238002694LL;
        }
        if ( !v88 )
          return 3238002694LL;
        v85 = v88;
        goto LABEL_192;
      }
    }
  }
  return 3238002694LL;
}
