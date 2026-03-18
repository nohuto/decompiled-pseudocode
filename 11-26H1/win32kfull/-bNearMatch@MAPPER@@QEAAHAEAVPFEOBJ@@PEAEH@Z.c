/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400C7CD0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1400C85B0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1403369CC (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bEmbedOk@PFEOBJ@@QEAAHXZ @ 0x1400CA1B0 (-bEmbedOk@PFEOBJ@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1400CA238 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1400CA26C (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1400CA590 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1400CA7D0 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1400CA9D4 (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1400CAA8C (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, __int64 **a2, unsigned __int8 *a3, int a4)
{
  __int64 *v4; // rdi
  int v5; // r12d
  int v6; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  char v20; // cl
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 v24; // di
  __int64 v25; // rsi
  unsigned __int8 *v26; // rcx
  unsigned __int8 v27; // bp
  unsigned __int8 *v28; // rdx
  __int64 v29; // rcx
  bool v30; // zf
  int v31; // edx
  struct PFE *v32; // r15
  const wchar_t *v33; // rsi
  const wchar_t *v34; // rdi
  BOOL v35; // edx
  __int64 v36; // rax
  const wchar_t *v37; // rdi
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  int v46; // r8d
  int v47; // r9d
  int v48; // edx
  __int64 v49; // rsi
  int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int8 *v54; // rcx
  unsigned __int8 v55; // bp
  unsigned __int8 *v56; // rdx
  __int64 v57; // rcx
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // eax
  _QWORD *j; // rsi
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int8 *v66; // rcx
  char v67; // cl
  int v68; // ecx
  unsigned int v69; // eax
  __int64 v70; // r8
  int v71; // ecx
  int v72; // r9d
  __int64 v73; // rax
  char *v74; // r9
  _DWORD *v75; // rcx
  int v76; // eax
  unsigned int v77; // edx
  char v78; // cl
  unsigned int v79; // edx
  int v80; // edx
  _QWORD *i; // rsi
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned __int8 *v86; // rcx
  __int64 v87; // rcx
  int v88; // r8d
  int v89; // r9d
  unsigned int v90; // edx
  int v91; // eax
  int v92; // r9d
  int v93; // eax
  unsigned int v94; // ecx
  unsigned int v95; // edx
  int v96; // ecx
  int v97; // r8d
  int v98; // eax
  unsigned int v99; // eax
  __int64 v100; // rax
  int v101; // edi
  unsigned int v102; // ecx
  int v103; // r10d
  unsigned int v104; // eax
  int v105; // ecx
  unsigned int v106; // esi
  int v107; // eax
  int v108; // r8d
  int v109; // eax
  int v110; // r9d
  int v111; // r11d
  unsigned int v112; // eax
  int v113; // ecx
  unsigned int v114; // r9d
  unsigned int v115; // r8d
  unsigned int v116; // ecx
  __int64 v117; // r8
  int v118; // edx
  int v119; // eax
  int v120; // ecx
  int v121; // edi
  int v122; // r12d
  int v123; // r8d
  int v124; // r9d
  __int64 v125; // rdx
  __int64 v126; // rax
  int v127; // r8d
  int v128; // ecx
  _DWORD *v129; // r9
  int v130; // r10d
  int v131; // eax
  int v132; // edi
  int v133; // r8d
  unsigned int v134; // ecx
  int v135; // esi
  int v136; // eax
  int v137; // ecx
  int v138; // ecx
  unsigned int v139; // eax
  __int64 v140; // r8
  __int64 v141; // rax
  __int64 v142; // r10
  int v143; // eax
  unsigned int v144; // edx
  struct PFE *v145; // [rsp+60h] [rbp+8h]
  wchar_t *Str2; // [rsp+68h] [rbp+10h]

  v4 = *a2;
  v5 = 0;
  *((_DWORD *)this + 61) &= 0xFFFFB7FF;
  v6 = a4;
  v145 = (struct PFE *)v4;
  Str2 = 0LL;
  v12 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  if ( *a2 == *(__int64 **)(v12 + 19688) )
    *((_DWORD *)this + 61) |= 0x4000u;
  *((_QWORD *)this + 31) = (*a2)[4];
  v13 = *a2;
  if ( (*((_DWORD *)*a2 + 3) & 2) != 0 )
    goto LABEL_71;
  v14 = *v13;
  if ( *(_QWORD *)(v14 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13, v10, v11) + 96) + 20384LL) )
  {
    v49 = *(_QWORD *)(v14 + 152);
    if ( !v49 )
      goto LABEL_71;
    while ( ((*(_DWORD *)(v49 + 8) & 4) == 0 || *(_DWORD *)(v49 + 12) != (unsigned int)PsGetCurrentThreadId())
         && *(_DWORD *)(v49 + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v49 = *(_QWORD *)(v49 + 16);
      if ( !v49 )
        goto LABEL_71;
    }
  }
  v17 = *((unsigned int *)*a2 + 3);
  if ( (v17 & 0x20) != 0
    || *(_QWORD *)(**a2 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v17, v15, v16) + 96) + 20384LL)
    && (unsigned int)PFEOBJ::bEmbedOk((PFEOBJ *)a2)
    && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
  {
    goto LABEL_71;
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( *((int *)this + 61) < 0 && (*(_DWORD *)((*a2)[4] + 48) & 0x4000) == 0 )
    goto LABEL_71;
  if ( *(_BYTE *)(*(_QWORD *)this + 86LL) && !v4[9] )
    goto LABEL_71;
  v18 = *((_QWORD *)this + 1);
  v19 = *((_QWORD *)this + 31);
  v20 = *(_BYTE *)(v19 + 45);
  v21 = *(_BYTE *)(v18 + 27) & 3;
  if ( v21 )
  {
    v78 = v20 & 2;
    if ( v21 == 1 )
    {
      v79 = v78 != 0 ? 0x3A98 : 0;
      if ( !v78 )
        goto LABEL_11;
    }
    else
    {
      if ( v78 )
        goto LABEL_11;
      v79 = 350;
    }
  }
  else
  {
    if ( (v20 & 1) == 0 )
      goto LABEL_11;
    v79 = 1;
  }
  *((_DWORD *)this + 46) = v79;
  if ( v79 >= *((_DWORD *)this + 45)
    && (v79 != *((_DWORD *)this + 45)
     || (*((_DWORD *)this + 61) & 0x1000080) != 0
     || *((_DWORD *)v4 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_11:
  v22 = *(unsigned __int8 *)(v19 + 45);
  v23 = *(unsigned __int8 *)(v18 + 27);
  LOBYTE(v22) = v22 & 0x70;
  LOBYTE(v23) = v23 & 0x70;
  if ( (_BYTE)v23 )
    goto LABEL_18;
  if ( *((_BYTE *)this + 276) == 2 )
  {
    v23 = (unsigned __int8)v22;
LABEL_18:
    if ( ((unsigned __int8)v23 & 0xF0u) >= 0x60 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( !(_BYTE)v22 )
    goto LABEL_18;
  v23 = 32LL;
  if ( (*((_DWORD *)this + 61) & 0x800000) != 0 )
    v23 = 16LL;
LABEL_19:
  Str2 = *(wchar_t **)(v12 + 8 * ((unsigned __int64)(unsigned __int8)v23 >> 4) + 19720);
LABEL_20:
  if ( (_BYTE)v23 == (_BYTE)v22 )
    goto LABEL_21;
  v51 = 0;
  if ( !(_BYTE)v22 )
  {
    v19 = 8000LL;
    goto LABEL_77;
  }
  if ( (unsigned __int8)v23 > 0x30u )
  {
    if ( (unsigned __int8)v22 > 0x30u )
      goto LABEL_76;
LABEL_166:
    v51 = 50;
    goto LABEL_76;
  }
  if ( (unsigned __int8)v22 > 0x30u )
    goto LABEL_166;
LABEL_76:
  v19 = (unsigned int)(v51 + 9000);
LABEL_77:
  v23 = (unsigned int)(v19 + *((_DWORD *)this + 46));
  *((_DWORD *)this + 46) = v23;
  if ( (unsigned int)v23 >= *((_DWORD *)this + 45)
    && ((_DWORD)v23 != *((_DWORD *)this + 45)
     || (*((_DWORD *)this + 61) & 0x1000080) != 0
     || *((_DWORD *)v4 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_21:
  v24 = *((_BYTE *)this + 276);
  if ( v24 != 1 && (*((_DWORD *)this + 61) & 0x8000000) == 0 )
  {
    v52 = (*a2)[4];
    v53 = *(int *)(v52 + 40);
    if ( (_DWORD)v53 )
    {
      if ( v24 == 0xFE )
      {
        v24 = -2;
      }
      else
      {
        v54 = (unsigned __int8 *)(v53 + v52);
        v55 = *v54;
        v56 = v54 + 16;
        while ( v54 < v56 )
        {
          if ( *v54 == v24 )
            goto LABEL_94;
          if ( *v54 == 1 )
            break;
          ++v54;
        }
        v57 = (*a2)[15];
        if ( v57 )
        {
          for ( i = *(_QWORD **)(v57 + 16); ; i = (_QWORD *)*i )
          {
            v82 = (*a2)[15];
            v83 = v82 ? v82 + 16 : *(_QWORD *)(W32GetSessionState(0LL, v56, v19) + 96) + 14128LL;
            if ( i == (_QWORD *)v83 )
              break;
            v84 = *(_QWORD *)(i[4] + 32LL);
            v85 = *(int *)(v84 + 40);
            if ( (_DWORD)v85 )
            {
              v86 = (unsigned __int8 *)(v85 + v84);
              v56 = v86 + 16;
              while ( v86 < v56 )
              {
                if ( *v86 == v24 )
                  goto LABEL_94;
                if ( *v86 == 1 )
                  break;
                ++v86;
              }
            }
            else if ( *(_BYTE *)(v84 + 44) == v24 )
            {
              goto LABEL_94;
            }
          }
        }
        v24 = v55;
LABEL_94:
        v6 = a4;
      }
    }
    else
    {
      v24 = *(_BYTE *)(v52 + 44);
    }
    *a3 = v24;
    if ( *((_BYTE *)this + 276) != v24 )
    {
      v58 = *((_DWORD *)this + 61);
      if ( (v58 & 0x4000000) == 0 )
        goto LABEL_71;
      v59 = *((_DWORD *)this + 46) + 65000;
      *((_DWORD *)this + 46) = v59;
      if ( v59 >= *((_DWORD *)this + 45) )
      {
        if ( v59 != *((_DWORD *)this + 45) )
          return 0LL;
        if ( (v58 & 0x1000080) != 0 )
          return 0LL;
        v32 = v145;
        if ( *((_DWORD *)v145 + 20) >= *((_DWORD *)this + 52) )
          return 0LL;
        goto LABEL_38;
      }
    }
LABEL_37:
    v32 = v145;
    goto LABEL_38;
  }
  v25 = (*a2)[4];
  if ( *(_DWORD *)(v25 + 40) )
  {
    if ( v24 == 1 )
      v24 = *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v23, v22, v19) + 96) + 19712LL);
    if ( v24 == 0xFE )
    {
      v24 = -2;
    }
    else
    {
      v26 = (unsigned __int8 *)(v25 + *(int *)(v25 + 40));
      v27 = *v26;
      v28 = v26 + 16;
      while ( v26 < v28 )
      {
        if ( *v26 == v24 )
          goto LABEL_33;
        if ( *v26 == 1 )
          break;
        ++v26;
      }
      v29 = (*a2)[15];
      if ( v29 )
      {
        for ( j = *(_QWORD **)(v29 + 16); ; j = (_QWORD *)*j )
        {
          v62 = (*a2)[15];
          v63 = v62 ? v62 + 16 : *(_QWORD *)(W32GetSessionState(0LL, v28, v19) + 96) + 14128LL;
          if ( j == (_QWORD *)v63 )
            break;
          v64 = *(_QWORD *)(j[4] + 32LL);
          v65 = *(int *)(v64 + 40);
          if ( (_DWORD)v65 )
          {
            v66 = (unsigned __int8 *)(v65 + v64);
            v28 = v66 + 16;
            while ( v66 < v28 )
            {
              if ( *v66 == v24 )
                goto LABEL_33;
              if ( *v66 == 1 )
                break;
              ++v66;
            }
          }
          else if ( *(_BYTE *)(v64 + 44) == v24 )
          {
            goto LABEL_33;
          }
        }
      }
      v24 = v27;
LABEL_33:
      v6 = a4;
    }
  }
  else
  {
    v24 = *(_BYTE *)(v25 + 44);
  }
  v30 = *((_BYTE *)this + 276) == 1;
  *a3 = v24;
  if ( !v30 )
    goto LABEL_37;
  v31 = *((_DWORD *)this + 61);
  if ( (v31 & 0x8000000) != 0 )
    goto LABEL_37;
  if ( *(_BYTE *)(v12 + 19712) == v24 )
    goto LABEL_37;
  v60 = *((_DWORD *)this + 46) + 2;
  *((_DWORD *)this + 46) = v60;
  if ( v60 < *((_DWORD *)this + 45) )
    goto LABEL_37;
  if ( v60 != *((_DWORD *)this + 45) )
    return 0LL;
  if ( (v31 & 0x1000080) != 0 )
    return 0LL;
  v32 = v145;
  if ( *((_DWORD *)v145 + 20) >= *((_DWORD *)this + 52) )
    return 0LL;
LABEL_38:
  if ( v6 )
  {
    v33 = (const wchar_t *)*((_QWORD *)this + 2);
    v34 = (const wchar_t *)((*a2)[4] + *(int *)((*a2)[4] + 8));
    if ( _wcsicmp(v33, v34) )
    {
      v35 = 0;
      if ( (*(_DWORD *)((*a2)[4] + 48) & 0x8000000) == 0 )
        goto LABEL_50;
      v36 = -1LL;
      do
        v30 = v34[++v36] == 0;
      while ( !v30 );
      v37 = &v34[v36 + 1];
      do
      {
        if ( !*v37 )
          break;
        v38 = _wcsicmp(v33, v37);
        v39 = -1LL;
        v35 = v38 == 0;
        do
          v30 = v37[++v39] == 0;
        while ( !v30 );
        v37 += v39 + 1;
      }
      while ( v38 );
      if ( v35 )
      {
        ++*((_DWORD *)this + 46);
      }
      else
      {
LABEL_50:
        if ( Str2 && !_wcsicmp((const wchar_t *)((*a2)[4] + *(int *)((*a2)[4] + 8)), Str2) )
          *((_DWORD *)this + 46) += 9000;
        else
          *((_DWORD *)this + 46) += 10000;
      }
    }
    v40 = *((_DWORD *)this + 45);
    if ( *((_DWORD *)this + 46) >= v40
      && (*((_DWORD *)this + 46) != v40
       || (*((_DWORD *)this + 61) & 0x1000080) != 0
       || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  v41 = *((_QWORD *)this + 31);
  v42 = *((_DWORD *)this + 61);
  v43 = *(int *)(v41 + 8);
  if ( (v42 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v43 + v41) != 64 )
      goto LABEL_71;
  }
  else if ( *(_WORD *)(v43 + v41) == 64 )
  {
    goto LABEL_71;
  }
  if ( (*(_DWORD *)(v41 + 48) & 0x3000010) == 0 )
  {
    if ( (v42 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_71;
    v87 = *((_QWORD *)this + 31);
    if ( (*((_DWORD *)this + 61) & 2) != 0 )
      v88 = *(__int16 *)(v87 + 56);
    else
      v88 = *(__int16 *)(v87 + 60) + *(__int16 *)(v87 + 62);
    v89 = *((_DWORD *)this + 41);
    if ( v88 < v89
      && (*(_DWORD *)(v87 + 48) & 0x100000) != 0
      && (*((_DWORD *)this + 61) & 0x8000) == 0
      && v89 > 7 * v88 / 4 )
    {
      v91 = v89 + v88 / 4;
      if ( !v88 || v91 == 0x80000000 && v88 == -1 )
        return 0LL;
      v90 = 0;
      v92 = v91 / v88;
      if ( (unsigned int)(v91 / v88) > 8 )
        v92 = 8;
      *((_DWORD *)this + 49) = v92;
      if ( v92 > 1 )
      {
        if ( (*((_DWORD *)this + 61) & 0x800) == 0 && v92 + 2 >= v88 )
          return 0LL;
        v88 *= v92;
        v90 = (20 * v92) | (5 * (v92 - 1));
      }
    }
    else
    {
      *((_DWORD *)this + 49) = 1;
      v90 = 0;
    }
    v93 = *((_DWORD *)this + 41);
    if ( v93 < v88 )
    {
      v97 = v88 - v93;
      if ( (*((_DWORD *)this + 61) & 0x1080) == 0x1080 )
      {
        if ( v97 <= 1 )
          goto LABEL_201;
        v98 = v97 + 20;
      }
      else
      {
        v98 = v97 + 4;
      }
      v90 += 150 * v98;
    }
    else
    {
      v90 += 150 * (v93 - v88);
    }
LABEL_201:
    if ( v90 )
    {
      v94 = v90 + *((_DWORD *)this + 46);
      *((_DWORD *)this + 46) = v94;
      if ( v94 >= *((_DWORD *)this + 45)
        && (v94 != *((_DWORD *)this + 45)
         || (*((_DWORD *)this + 61) & 0x1000080) != 0
         || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
      if ( v90 >= 0x2710 && (*((_DWORD *)this + 61) & 0x4800) == 0 )
        return 0LL;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)this + 71LL) )
  {
    if ( IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 248)) == 6 && (*((_DWORD *)this + 61) & 0x4000) == 0 )
    {
      v126 = *((_QWORD *)this + 31);
      v127 = *(_DWORD *)(v125 + 52);
      v128 = *(_DWORD *)(v126 + 128);
      v129 = (_DWORD *)(v126 + 132);
      if ( (v127 != v128 || *(_DWORD *)(v125 + 56) != *v129) && *v129 * v127 != *(_DWORD *)(v125 + 56) * v128 )
        goto LABEL_71;
    }
  }
  v44 = *((_QWORD *)this + 31);
  v45 = *(unsigned __int16 *)(v44 + 52);
  LOWORD(v45) = *(_WORD *)(v44 + 52) & 1;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 20LL) )
  {
    if ( !(_WORD)v45 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 248)) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v96 = 1;
      }
      else
      {
        v96 = 4;
      }
      v45 = (unsigned int)(*((_DWORD *)this + 46) + v96);
      *((_DWORD *)this + 46) = v45;
      if ( (unsigned int)v45 >= *((_DWORD *)this + 45)
        && ((_DWORD)v45 != *((_DWORD *)this + 45)
         || (*((_DWORD *)this + 61) & 0x1000080) != 0
         || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  else if ( (_WORD)v45 )
  {
    v99 = *((_DWORD *)this + 46) + 4;
    *((_DWORD *)this + 46) = v99;
    if ( v99 >= *((_DWORD *)this + 45)
      && (v99 != *((_DWORD *)this + 45)
       || (*((_DWORD *)this + 61) & 0x1000080) != 0
       || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  v46 = *(unsigned __int16 *)(v44 + 46) - *((_DWORD *)this + 43);
  v47 = *((_DWORD *)this + 61);
  if ( (v47 & 0x200000) != 0 )
  {
    v76 = -v46;
    if ( v46 > 0 )
      v76 = v46;
    v77 = *((_DWORD *)this + 46) + ((19 * v76) >> 7);
    *((_DWORD *)this + 46) = v77;
    if ( v77 >= *((_DWORD *)this + 45)
      && (v77 != *((_DWORD *)this + 45) || (v47 & 0x1000080) != 0 || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  else if ( v46 )
  {
    if ( v46 < 0 )
    {
      v46 = -v46;
      if ( v46 > 150 )
      {
        if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 248)) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v46 -= 120;
        }
      }
    }
    v95 = *((_DWORD *)this + 46) + ((73 * v46) >> 8);
    *((_DWORD *)this + 46) = v95;
    if ( v95 >= *((_DWORD *)this + 45)
      && (v95 != *((_DWORD *)this + 45) || (v47 & 0x1000080) != 0 || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  if ( (v47 & 0x80u) == 0 )
  {
    v48 = *(_DWORD *)(*((_QWORD *)this + 31) + 48LL);
    if ( (v48 & 1) == 0
      && (v48 & 2) != 0
      && ((v47 & 0x10000) != 0
       || *(_BYTE *)(*(_QWORD *)this + 70LL)
       || ((v47 & 0x100) == 0 || *(_DWORD *)(*(_QWORD *)this + 52LL) != *(_DWORD *)(*(_QWORD *)this + 56LL))
       && (v48 & 0x40000000) == 0) )
    {
      goto LABEL_71;
    }
    v45 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 24LL);
    if ( (_BYTE)v45 == 7 )
    {
      if ( (v48 & 1) == 0 && ((v48 & 2) != 0 || (v48 & 4) != 0 || (v48 & 8) == 0) )
        goto LABEL_71;
      goto LABEL_125;
    }
    if ( (_BYTE)v45 == 10 )
    {
      if ( v48 >= 0 )
        goto LABEL_71;
LABEL_125:
      if ( !*(_DWORD *)(*((_QWORD *)Gre::Base::Globals((Gre::Base *)v45) + 232) + 1573012LL)
        || (v67 = *(_BYTE *)(*((_QWORD *)this + 1) + 24LL), v67 == 6)
        || v67 == 5
        || v67 == 10 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)this + 69LL) )
          goto LABEL_131;
      }
      goto LABEL_129;
    }
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 24LL) != 9 )
    goto LABEL_125;
LABEL_129:
  v68 = *((_DWORD *)this + 61);
  if ( (v68 & 0x80u) != 0
    || (v80 = *(_DWORD *)(*((_QWORD *)this + 31) + 48LL), (v80 & 1) == 0)
    && ((v80 & 2) != 0 || (v80 & 4) != 0 || (v80 & 8) == 0) )
  {
    v69 = *((_DWORD *)this + 46) + 2;
    *((_DWORD *)this + 46) = v69;
    if ( v69 >= *((_DWORD *)this + 45)
      && (v69 != *((_DWORD *)this + 45) || (v68 & 0x1000080) != 0 || *((_DWORD *)v32 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
LABEL_131:
  v70 = *((_QWORD *)this + 31);
  if ( (*(_DWORD *)(v70 + 48) & 0x2000010) != 0 )
    goto LABEL_132;
  v100 = *((_QWORD *)this + 1);
  v101 = *(__int16 *)(v70 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v100 + 4) )
  {
    if ( (*((_DWORD *)this + 61) & 0x8000) != 0 || (*(_DWORD *)(v70 + 48) & 0x100000) == 0 )
      goto LABEL_132;
    v102 = *(_DWORD *)(*(_QWORD *)this + 52LL);
    if ( !v102 )
      return 0LL;
    v103 = *(_DWORD *)(v70 + 128);
    v104 = 100 * *(_DWORD *)(*(_QWORD *)this + 56LL) / v102;
    v105 = *(_DWORD *)(v70 + 132);
    v106 = v104;
    v107 = 100 * v103;
    if ( !v105 || v107 == 0x80000000 && v105 == -1 )
      return 0LL;
    v108 = *((_DWORD *)this + 49);
    v109 = v107 / v105;
    v110 = v109;
    if ( !v108 || v109 == 0x80000000 && v108 == -1 )
      return 0LL;
    v111 = 0;
    v112 = v109 / v108;
    if ( v103 == v105 && *(_DWORD *)(*(_QWORD *)this + 52LL) == *(_DWORD *)(*(_QWORD *)this + 56LL) )
    {
      v111 = 1;
      if ( v108 == 1 )
        goto LABEL_132;
    }
    else
    {
      if ( v106 <= (3 * v112) >> 1 )
        goto LABEL_327;
      if ( !v112 )
        goto LABEL_71;
      v108 = v106 / v112;
    }
    if ( (unsigned int)v108 > 5 )
      v108 = 5;
    *((_DWORD *)this + 48) = v108;
    v5 = 20 * v108;
    if ( v111 && v108 == *((_DWORD *)this + 49) )
    {
LABEL_302:
      if ( v5 )
      {
        *((_DWORD *)this + 46) += v5;
        if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
          return 0LL;
      }
      goto LABEL_132;
    }
LABEL_327:
    v134 = *((_DWORD *)this + 49);
    if ( !v134 )
      goto LABEL_71;
    v135 = v106 - *((_DWORD *)this + 48) * v110 / v134;
    v136 = -v135;
    if ( v135 > 0 )
      v136 = v135;
    v5 += 30 * v136;
    goto LABEL_302;
  }
  if ( (*((_DWORD *)this + 61) & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_71;
  v117 = *((_QWORD *)this + 31);
  v118 = *(_DWORD *)(v117 + 48);
  if ( (*((_DWORD *)this + 61) & 0x8000) == 0 && (v118 & 0x100000) != 0 && (v137 = *((_DWORD *)this + 42), v137 > v101) )
  {
    v138 = v137 - (v101 + 1) / 2;
    if ( !v101 || v138 == 0x80000000 && v101 == -1 )
      return 0LL;
    v139 = v138 / v101 + 1;
    if ( v139 > 5 )
      v139 = 5;
    *((_DWORD *)this + 48) = v139;
  }
  else if ( (v118 & 0x1000000) != 0 )
  {
    v132 = *((_DWORD *)this + 41) * v101;
    v133 = *(__int16 *)(v117 + 62) + *(__int16 *)(v117 + 60);
    if ( !v133 || v132 == 0x80000000 && v133 == -1 )
      return 0LL;
    v101 = v132 / v133;
  }
  v119 = *((_DWORD *)this + 48);
  if ( v119 > 1 )
  {
    v101 *= v119;
    v5 = (v119 - 1) | (20 * v119);
  }
  v120 = *((_DWORD *)this + 42) - v101;
  v121 = v101 - *((_DWORD *)this + 42);
  if ( v120 >= 0 )
    v121 = v120;
  v122 = 50 * v121 + v5;
  if ( v122 )
  {
    *((_DWORD *)this + 46) += v122;
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
LABEL_132:
  v71 = *((_DWORD *)this + 48);
  if ( v71 <= 1 && *((int *)this + 49) <= 1 )
    goto LABEL_134;
  v123 = *((_DWORD *)this + 49);
  v124 = *((_DWORD *)this + 46) + 50;
  *((_DWORD *)this + 46) = v124;
  if ( v71 <= v123 )
  {
    if ( v71 >= v123 )
      goto LABEL_308;
    if ( v71 )
    {
      v130 = 100 * v123;
      if ( v71 == 1 )
        goto LABEL_323;
      v131 = (v130 + v71 / 2) / v71;
      goto LABEL_322;
    }
LABEL_71:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  if ( !v123 )
    goto LABEL_71;
  v130 = 100 * v71;
  if ( v123 != 1 )
  {
    v131 = (v130 + v123 / 2) / v123;
LABEL_322:
    v130 = v131;
  }
LABEL_323:
  *((_DWORD *)this + 46) = v124 + 4 * v130;
LABEL_308:
  if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
    return 0LL;
LABEL_134:
  if ( (*(_DWORD *)(*((_QWORD *)this + 31) + 48LL) & 0x10) == 0 )
  {
    v113 = *((_DWORD *)this + 61);
    if ( (v113 & 0x41000) != 0x41000 )
    {
      if ( (v113 & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
        goto LABEL_71;
      v114 = *((_DWORD *)this + 44);
      v115 = v114 - *((_DWORD *)*a2 + 17);
      if ( v115 )
      {
        if ( (*((_DWORD *)this + 61) & 0x480) != 0x480 )
          goto LABEL_277;
        if ( v115 > v114 )
          v115 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
        v115 %= 0x384u;
        if ( v115 )
        {
LABEL_277:
          if ( (*(_DWORD *)(*((_QWORD *)this + 31) + 48LL) & 0x200000) == 0 )
            goto LABEL_71;
          v116 = -v115;
          if ( v115 <= v114 )
            v116 = v115;
          if ( v116 != 900 * (v116 / 0x384) )
            goto LABEL_71;
        }
      }
    }
  }
  v72 = *((_DWORD *)this + 61);
  if ( (v72 & 0x400000) != 0 )
  {
    ++*((_DWORD *)this + 46);
    if ( (unsigned int)MAPPER::bNoMatch(this, v32) )
      return 0LL;
  }
  if ( v72 < 0 )
  {
    v74 = (char *)this + 100;
    v75 = (_DWORD *)((char *)this + 96);
  }
  else
  {
    v73 = *((_QWORD *)this + 1);
    v74 = (char *)(v73 + 356);
    v75 = (_DWORD *)(v73 + 352);
  }
  if ( *v75 )
  {
    v140 = *((_QWORD *)this + 31);
    if ( *(_DWORD *)(v140 + 4) < 0x10u )
      goto LABEL_71;
    v141 = *(int *)(v140 + 204);
    if ( !(_DWORD)v141 )
      goto LABEL_71;
    v142 = v140 + v141;
    if ( !(v140 + v141) )
      goto LABEL_71;
    v143 = *(_DWORD *)(v142 + 4);
    if ( v143 && *v75 == v143 && *((_DWORD *)this + 46) <= 0x88B8u )
      *((_QWORD *)this + 35) = v32;
    v144 = *(_DWORD *)(v142 + 4);
    if ( *v75 != v144 || memcmp(v74, (const void *)(v142 + 8), 4LL * v144) )
      goto LABEL_71;
  }
  return 1LL;
}
