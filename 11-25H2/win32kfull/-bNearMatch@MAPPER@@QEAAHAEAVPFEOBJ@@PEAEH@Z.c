/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x140105190
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1401046A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x140104FC0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x140312F1C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x140106730 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x140106768 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x140106858 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x140106A4C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x140106A74 (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1401072CC (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1401ACDEC (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     memcmp @ 0x1403424E0 (memcmp.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  struct PFE *v4; // rax
  int v5; // r12d
  int v6; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r15
  struct PFE *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 SessionState; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // eax
  char v24; // cl
  __int64 v25; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 v29; // di
  __int64 v30; // rsi
  unsigned __int8 *v31; // rax
  unsigned __int8 v32; // bp
  unsigned __int8 *v33; // rdx
  __int64 v34; // rcx
  bool v35; // zf
  int v36; // edx
  struct PFE *v37; // r15
  const wchar_t *v38; // rsi
  const wchar_t *v39; // rdi
  __int64 v40; // rax
  const wchar_t *v41; // rdi
  BOOL v42; // eax
  const wchar_t *v43; // rdi
  int v44; // edx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  int v51; // r9d
  int v52; // r8d
  int v53; // ecx
  char v54; // cl
  int v55; // ecx
  unsigned int v56; // eax
  __int64 v57; // r8
  int v58; // ecx
  int v59; // r9d
  __int64 v60; // rax
  char *v61; // r9
  _DWORD *v62; // rax
  int v63; // r8d
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int8 *v67; // rax
  unsigned __int8 v68; // bp
  unsigned __int8 *v69; // rdx
  int v70; // ecx
  unsigned int v71; // eax
  _QWORD *j; // rsi
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int8 *v77; // rax
  int v78; // edx
  int v79; // eax
  unsigned int v80; // edx
  __int64 v81; // rcx
  int v82; // r8d
  int *v83; // r9
  int v84; // r10d
  unsigned int v85; // edx
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  unsigned int v89; // ecx
  _BYTE *v90; // rdx
  struct _LIST_ENTRY *i; // rsi
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  int v100; // edi
  __int64 v101; // r8
  int v102; // edx
  int v103; // eax
  int v104; // ecx
  int v105; // edi
  int v106; // ecx
  int v107; // ecx
  unsigned int v108; // r9d
  unsigned int v109; // r8d
  unsigned int v110; // ecx
  int v111; // r8d
  unsigned int v112; // ecx
  int v113; // r11d
  unsigned int v114; // eax
  int v115; // ecx
  unsigned int v116; // esi
  int v117; // eax
  int v118; // r8d
  int v119; // eax
  int v120; // r10d
  int v121; // r9d
  unsigned int v122; // eax
  unsigned int v123; // eax
  int v124; // r8d
  int v125; // r9d
  unsigned int v126; // ecx
  int v127; // esi
  int v128; // eax
  int v129; // r10d
  int v130; // eax
  int v131; // ecx
  int v132; // ecx
  unsigned int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rax
  int v136; // r9d
  int v137; // r8d
  _DWORD *v138; // rcx
  int v139; // edi
  int v140; // r9d
  __int64 v141; // r8
  __int64 v142; // rdx
  __int64 v143; // rdx
  int v144; // r8d
  unsigned int v145; // ecx
  struct PFE *v146; // [rsp+60h] [rbp+8h]
  wchar_t *Str2; // [rsp+68h] [rbp+10h]

  v4 = *a2;
  v5 = 0;
  *((_DWORD *)this + 61) &= 0xFFFFB7FF;
  v6 = a4;
  v146 = v4;
  Str2 = 0LL;
  v12 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  if ( *a2 == *(struct PFE **)(v12 + 19712) )
    *((_DWORD *)this + 61) |= 0x4000u;
  *((_QWORD *)this + 31) = *((_QWORD *)*a2 + 4);
  v13 = *a2;
  if ( (*((_DWORD *)*a2 + 3) & 2) != 0 )
    goto LABEL_28;
  v14 = *(_QWORD *)v13;
  if ( *(_QWORD *)(v14 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13, v10, v11) + 96) + 20408LL) )
  {
    v17 = *(_QWORD *)(v14 + 152);
    if ( !v17 )
      goto LABEL_28;
    while ( ((*(_DWORD *)(v17 + 8) & 4) == 0 || *(_DWORD *)(v17 + 12) != (unsigned int)PsGetCurrentThreadId())
         && *(_DWORD *)(v17 + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v17 = *(_QWORD *)(v17 + 16);
      if ( !v17 )
        goto LABEL_28;
    }
  }
  v18 = *((unsigned int *)*a2 + 3);
  if ( (v18 & 0x20) != 0 )
    goto LABEL_28;
  SessionState = W32GetSessionState(v18, v15, v16);
  v20 = *(_QWORD *)*a2;
  if ( *(_QWORD *)(v20 + 136) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20408LL) )
  {
    v25 = *(_QWORD *)(v20 + 152);
    if ( v25 )
    {
      do
      {
        if ( (*(_DWORD *)(v25 + 8) & 4) != 0 && *(_DWORD *)(v25 + 12) == (unsigned int)PsGetCurrentThreadId() )
          break;
        if ( *(_DWORD *)(v25 + 12) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          break;
        v25 = *(_QWORD *)(v25 + 16);
      }
      while ( v25 );
      if ( v25 && (*(_DWORD *)(v25 + 8) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
        goto LABEL_28;
    }
  }
  v21 = (unsigned int *)((char *)this + 184);
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( *((int *)this + 61) < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0 )
    goto LABEL_137;
  if ( *(_BYTE *)(*(_QWORD *)this + 86LL) )
  {
    if ( !*((_QWORD *)v146 + 9) )
    {
LABEL_137:
      *v21 = -2;
      return 0LL;
    }
    v21 = (unsigned int *)((char *)this + 184);
  }
  v22 = *(unsigned __int8 *)(*((_QWORD *)this + 31) + 45LL);
  v23 = 0;
  v24 = *(_BYTE *)(*((_QWORD *)this + 1) + 27LL) & 3;
  if ( v24 )
  {
    LOBYTE(v22) = v22 & 2;
    if ( v24 == 1 )
    {
      LOBYTE(v22) = -(char)v22;
      v23 = (_BYTE)v22 != 0 ? 0x3A98 : 0;
    }
    else if ( !(_BYTE)v22 )
    {
      v23 = 350;
    }
LABEL_33:
    if ( !v23 )
      goto LABEL_34;
    goto LABEL_15;
  }
  if ( (v22 & 1) == 0 )
    goto LABEL_33;
  v23 = 1;
  v21 = (unsigned int *)((char *)this + 184);
LABEL_15:
  *v21 = v23;
  if ( v23 >= *((_DWORD *)this + 45)
    && (v23 != *((_DWORD *)this + 45)
     || (*((_DWORD *)this + 61) & 0x1000080) != 0
     || *((_DWORD *)v146 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_34:
  v27 = *(unsigned __int8 *)(*((_QWORD *)this + 31) + 45LL);
  LOBYTE(v27) = v27 & 0x70;
  v28 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 27LL);
  LOBYTE(v28) = v28 & 0x70;
  if ( (_BYTE)v28 )
    goto LABEL_41;
  if ( *((_BYTE *)this + 276) == 2 )
  {
    v28 = (unsigned __int8)v27;
LABEL_41:
    if ( ((unsigned __int8)v28 & 0xF0u) >= 0x60 )
      goto LABEL_43;
    goto LABEL_42;
  }
  if ( !(_BYTE)v27 )
    goto LABEL_41;
  v28 = 32LL;
  if ( (*((_DWORD *)this + 61) & 0x800000) != 0 )
    v28 = 16LL;
LABEL_42:
  Str2 = *(wchar_t **)(v12 + 8 * ((unsigned __int64)(unsigned __int8)v28 >> 4) + 19744);
LABEL_43:
  if ( (_BYTE)v28 == (_BYTE)v27 )
    goto LABEL_44;
  v63 = 0;
  if ( !(_BYTE)v27 )
  {
    v22 = 8000LL;
    goto LABEL_106;
  }
  if ( (unsigned __int8)v28 > 0x30u )
  {
    if ( (unsigned __int8)v27 > 0x30u )
      goto LABEL_105;
LABEL_174:
    v63 = 50;
    goto LABEL_105;
  }
  if ( (unsigned __int8)v27 > 0x30u )
    goto LABEL_174;
LABEL_105:
  v22 = (unsigned int)(v63 + 9000);
LABEL_106:
  v28 = (unsigned int)(v22 + *((_DWORD *)this + 46));
  *((_DWORD *)this + 46) = v28;
  if ( (unsigned int)v28 >= *((_DWORD *)this + 45)
    && ((_DWORD)v28 != *((_DWORD *)this + 45)
     || (*((_DWORD *)this + 61) & 0x1000080) != 0
     || *((_DWORD *)v146 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_44:
  v29 = *((_BYTE *)this + 276);
  if ( v29 != 1 && (*((_DWORD *)this + 61) & 0x8000000) == 0 )
  {
    v65 = *((_QWORD *)*a2 + 4);
    v66 = *(int *)(v65 + 40);
    if ( (_DWORD)v66 )
    {
      if ( v29 == 0xFE )
      {
        v29 = -2;
      }
      else
      {
        v67 = (unsigned __int8 *)(v65 + v66);
        v68 = *v67;
        v69 = v67 + 16;
        while ( v67 < v69 )
        {
          if ( *v67 == v29 )
            goto LABEL_126;
          if ( *v67 == 1 )
            break;
          ++v67;
        }
        if ( *((_QWORD *)*a2 + 15) )
        {
          for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2)->Flink; ; i = i->Flink )
          {
            v93 = *((_QWORD *)*a2 + 15);
            v94 = v93 ? v93 + 16 : *(_QWORD *)(W32GetSessionState(0LL, v90, v92) + 96) + 14136LL;
            if ( i == (struct _LIST_ENTRY *)v94 )
              break;
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v97 = (char *)Flink + Blink_low;
              v90 = v97 + 16;
              while ( v97 < v90 )
              {
                if ( *v97 == v29 )
                  goto LABEL_126;
                if ( *v97 == 1 )
                  break;
                ++v97;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v29 )
            {
              goto LABEL_126;
            }
          }
        }
        v29 = v68;
LABEL_126:
        v6 = a4;
      }
    }
    else
    {
      v29 = *(_BYTE *)(v65 + 44);
    }
    *a3 = v29;
    if ( *((_BYTE *)this + 276) != v29 )
    {
      v70 = *((_DWORD *)this + 61);
      if ( (v70 & 0x4000000) == 0 )
        goto LABEL_28;
      v71 = *((_DWORD *)this + 46) + 65000;
      *((_DWORD *)this + 46) = v71;
      if ( v71 >= *((_DWORD *)this + 45) )
      {
        if ( v71 != *((_DWORD *)this + 45) )
          return 0LL;
        if ( (v70 & 0x1000080) != 0 )
          return 0LL;
        v37 = v146;
        if ( *((_DWORD *)v146 + 20) >= *((_DWORD *)this + 52) )
          return 0LL;
        goto LABEL_61;
      }
    }
LABEL_60:
    v37 = v146;
    goto LABEL_61;
  }
  v30 = *((_QWORD *)*a2 + 4);
  if ( *(_DWORD *)(v30 + 40) )
  {
    if ( v29 == 1 )
      v29 = *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v28, v27, v22) + 96) + 19736LL);
    if ( v29 == 0xFE )
    {
      v29 = -2;
    }
    else
    {
      v31 = (unsigned __int8 *)(v30 + *(int *)(v30 + 40));
      v32 = *v31;
      v33 = v31 + 16;
      while ( v31 < v33 )
      {
        if ( *v31 == v29 )
          goto LABEL_56;
        if ( *v31 == 1 )
          break;
        ++v31;
      }
      v34 = *((_QWORD *)*a2 + 15);
      if ( v34 )
      {
        for ( j = *(_QWORD **)(v34 + 16); ; j = (_QWORD *)*j )
        {
          v73 = *((_QWORD *)*a2 + 15);
          v74 = v73 ? v73 + 16 : *(_QWORD *)(W32GetSessionState(0LL, v33, v22) + 96) + 14136LL;
          if ( j == (_QWORD *)v74 )
            break;
          v75 = *(_QWORD *)(j[4] + 32LL);
          v76 = *(int *)(v75 + 40);
          if ( (_DWORD)v76 )
          {
            v77 = (unsigned __int8 *)(v75 + v76);
            v33 = v77 + 16;
            while ( v77 < v33 )
            {
              if ( *v77 == v29 )
                goto LABEL_56;
              if ( *v77 == 1 )
                break;
              ++v77;
            }
          }
          else if ( *(_BYTE *)(v75 + 44) == v29 )
          {
            goto LABEL_56;
          }
        }
      }
      v29 = v32;
LABEL_56:
      v6 = a4;
    }
  }
  else
  {
    v29 = *(_BYTE *)(v30 + 44);
  }
  v35 = *((_BYTE *)this + 276) == 1;
  *a3 = v29;
  if ( !v35 )
    goto LABEL_60;
  v36 = *((_DWORD *)this + 61);
  if ( (v36 & 0x8000000) != 0 )
    goto LABEL_60;
  if ( *(_BYTE *)(v12 + 19736) == v29 )
    goto LABEL_60;
  v64 = *((_DWORD *)this + 46) + 2;
  *((_DWORD *)this + 46) = v64;
  if ( v64 < *((_DWORD *)this + 45) )
    goto LABEL_60;
  if ( v64 != *((_DWORD *)this + 45) )
    return 0LL;
  if ( (v36 & 0x1000080) != 0 )
    return 0LL;
  v37 = v146;
  if ( *((_DWORD *)v146 + 20) >= *((_DWORD *)this + 52) )
    return 0LL;
LABEL_61:
  if ( v6 )
  {
    v38 = (const wchar_t *)*((_QWORD *)this + 2);
    v39 = (const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL));
    if ( _wcsicmp(v38, v39) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x8000000) == 0 )
        goto LABEL_73;
      v40 = -1LL;
      do
        v35 = v39[++v40] == 0;
      while ( !v35 );
      v41 = &v39[v40];
      v42 = 0;
      v43 = v41 + 1;
      do
      {
        if ( !*v43 )
          break;
        v44 = _wcsicmp(v38, v43);
        v45 = -1LL;
        do
          v35 = v43[++v45] == 0;
        while ( !v35 );
        v43 += v45 + 1;
        v42 = v44 == 0;
      }
      while ( v44 );
      if ( v42 )
      {
        ++*((_DWORD *)this + 46);
      }
      else
      {
LABEL_73:
        if ( Str2 && !_wcsicmp((const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)), Str2) )
          *((_DWORD *)this + 46) += 9000;
        else
          *((_DWORD *)this + 46) += 10000;
      }
    }
    v46 = *((_DWORD *)this + 46);
    if ( v46 >= *((_DWORD *)this + 45)
      && (v46 != *((_DWORD *)this + 45)
       || (*((_DWORD *)this + 61) & 0x1000080) != 0
       || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  v47 = *((_QWORD *)this + 31);
  v48 = *((_DWORD *)this + 61);
  v49 = *(int *)(v47 + 8);
  if ( (v48 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v49 + v47) != 64 )
      goto LABEL_28;
  }
  else if ( *(_WORD *)(v49 + v47) == 64 )
  {
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v47 + 48) & 0x3000010) == 0 )
  {
    if ( (v48 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_28;
    v81 = *((_QWORD *)this + 31);
    if ( (*((_DWORD *)this + 61) & 2) != 0 )
      v82 = *(__int16 *)(v81 + 56);
    else
      v82 = *(__int16 *)(v81 + 60) + *(__int16 *)(v81 + 62);
    v83 = (int *)((char *)this + 164);
    v84 = *((_DWORD *)this + 41);
    if ( v82 < v84
      && (*(_DWORD *)(v81 + 48) & 0x100000) != 0
      && (*((_DWORD *)this + 61) & 0x8000) == 0
      && v84 > 7 * v82 / 4 )
    {
      v86 = v84 + v82 / 4;
      if ( !v82 || v86 == 0x80000000 && v82 == -1 )
        return 0LL;
      v83 = (int *)((char *)this + 164);
      v85 = 0;
      v87 = v86 / v82;
      if ( (unsigned int)(v86 / v82) > 8 )
        v87 = 8;
      *((_DWORD *)this + 49) = v87;
      if ( v87 > 1 )
      {
        if ( (*((_DWORD *)this + 61) & 0x800) == 0 && v87 + 2 >= v82 )
          return 0LL;
        v82 *= v87;
        v85 = (20 * v87) | (5 * (v87 - 1));
      }
    }
    else
    {
      *((_DWORD *)this + 49) = 1;
      v85 = 0;
    }
    v88 = *v83;
    if ( *v83 < v82 )
    {
      v111 = v82 - v88;
      if ( (*((_DWORD *)this + 61) & 0x1080) == 0x1080 )
      {
        if ( v111 > 1 )
          v85 += 150 * (v111 + 20);
      }
      else
      {
        v85 += 150 * (v111 + 4);
      }
    }
    else
    {
      v85 += 150 * (v88 - v82);
    }
    if ( v85 )
    {
      v89 = v85 + *((_DWORD *)this + 46);
      *((_DWORD *)this + 46) = v89;
      if ( v89 >= *((_DWORD *)this + 45)
        && (v89 != *((_DWORD *)this + 45)
         || (*((_DWORD *)this + 61) & 0x1000080) != 0
         || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
      if ( v85 >= 0x2710 && (*((_DWORD *)this + 61) & 0x4800) == 0 )
        return 0LL;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)this + 71LL) )
  {
    if ( IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 248)) == 6 && (*((_DWORD *)this + 61) & 0x4000) == 0 )
    {
      v135 = *((_QWORD *)this + 31);
      v136 = *(_DWORD *)(v134 + 52);
      v137 = *(_DWORD *)(v135 + 128);
      v138 = (_DWORD *)(v135 + 132);
      if ( (v136 != v137 || *(_DWORD *)(v134 + 56) != *v138) && *v138 * v136 != *(_DWORD *)(v134 + 56) * v137 )
        goto LABEL_28;
    }
  }
  v50 = *(unsigned __int16 *)(*((_QWORD *)this + 31) + 52LL);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 20LL) )
  {
    if ( (v50 & 1) == 0 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 248)) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v106 = 1;
      }
      else
      {
        v106 = 4;
      }
      v50 = (unsigned int)(*((_DWORD *)this + 46) + v106);
      *((_DWORD *)this + 46) = v50;
      if ( (unsigned int)v50 >= *((_DWORD *)this + 45)
        && ((_DWORD)v50 != *((_DWORD *)this + 45)
         || (*((_DWORD *)this + 61) & 0x1000080) != 0
         || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  else if ( (v50 & 1) != 0 )
  {
    v123 = *((_DWORD *)this + 46) + 4;
    *((_DWORD *)this + 46) = v123;
    if ( v123 >= *((_DWORD *)this + 45)
      && (v123 != *((_DWORD *)this + 45)
       || (*((_DWORD *)this + 61) & 0x1000080) != 0
       || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  v51 = *((_DWORD *)this + 61);
  v52 = *(unsigned __int16 *)(*((_QWORD *)this + 31) + 46LL) - *((_DWORD *)this + 43);
  if ( (v51 & 0x200000) != 0 )
  {
    v79 = *((_DWORD *)this + 43) - *(unsigned __int16 *)(*((_QWORD *)this + 31) + 46LL);
    if ( v52 > 0 )
      v79 = *(unsigned __int16 *)(*((_QWORD *)this + 31) + 46LL) - *((_DWORD *)this + 43);
    v80 = *((_DWORD *)this + 46) + ((19 * v79) >> 7);
    *((_DWORD *)this + 46) = v80;
    if ( v80 >= *((_DWORD *)this + 45)
      && (v80 != *((_DWORD *)this + 45) || (v51 & 0x1000080) != 0 || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  else if ( v52 )
  {
    if ( v52 < 0 )
    {
      v52 = *((_DWORD *)this + 43) - *(unsigned __int16 *)(*((_QWORD *)this + 31) + 46LL);
      if ( v52 > 150 )
      {
        if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 248)) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v52 -= 120;
        }
      }
    }
    v98 = *((_DWORD *)this + 46) + ((73 * v52) >> 8);
    *((_DWORD *)this + 46) = v98;
    if ( v98 >= *((_DWORD *)this + 45)
      && (v98 != *((_DWORD *)this + 45) || (v51 & 0x1000080) != 0 || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  if ( (v51 & 0x80u) == 0 )
  {
    v53 = *(_DWORD *)(*((_QWORD *)this + 31) + 48LL);
    if ( (v53 & 1) == 0
      && (v53 & 2) != 0
      && ((v51 & 0x10000) != 0
       || *(_BYTE *)(*(_QWORD *)this + 70LL)
       || ((v51 & 0x100) == 0 || *(_DWORD *)(*(_QWORD *)this + 52LL) != *(_DWORD *)(*(_QWORD *)this + 56LL))
       && (v53 & 0x40000000) == 0) )
    {
      goto LABEL_28;
    }
    v50 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 24LL);
    if ( (_BYTE)v50 == 7 )
    {
      if ( IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 248)) != 8 )
        goto LABEL_28;
    }
    else
    {
      if ( (_BYTE)v50 != 10 )
        goto LABEL_88;
      if ( *(int *)(*((_QWORD *)this + 31) + 48LL) >= 0 )
        goto LABEL_28;
    }
LABEL_89:
    if ( !*(_DWORD *)(*((_QWORD *)Gre::Base::Globals((Gre::Base *)v50) + 221) + 1573012LL)
      || (v54 = *(_BYTE *)(*((_QWORD *)this + 1) + 24LL), ((v54 - 5) & 0xFA) == 0) && v54 != 9 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)this + 69LL) )
        goto LABEL_93;
    }
    goto LABEL_91;
  }
LABEL_88:
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 24LL) != 9 )
    goto LABEL_89;
LABEL_91:
  v55 = *((_DWORD *)this + 61);
  if ( (v55 & 0x80u) != 0
    || (v78 = *(_DWORD *)(*((_QWORD *)this + 31) + 48LL), (v78 & 1) == 0)
    && ((v78 & 2) != 0 || (v78 & 4) != 0 || (v78 & 8) == 0) )
  {
    v56 = *((_DWORD *)this + 46) + 2;
    *((_DWORD *)this + 46) = v56;
    if ( v56 >= *((_DWORD *)this + 45)
      && (v56 != *((_DWORD *)this + 45) || (v55 & 0x1000080) != 0 || *((_DWORD *)v37 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
LABEL_93:
  v57 = *((_QWORD *)this + 31);
  if ( (*(_DWORD *)(v57 + 48) & 0x2000010) != 0 )
    goto LABEL_94;
  v99 = *((_QWORD *)this + 1);
  v100 = *(__int16 *)(v57 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v99 + 4) )
  {
    if ( (*((_DWORD *)this + 61) & 0x8000) != 0 || (*(_DWORD *)(v57 + 48) & 0x100000) == 0 )
      goto LABEL_94;
    v112 = *(_DWORD *)(*(_QWORD *)this + 52LL);
    if ( !v112 )
      return 0LL;
    v113 = *(_DWORD *)(v57 + 128);
    v114 = 100 * *(_DWORD *)(*(_QWORD *)this + 56LL) / v112;
    v115 = *(_DWORD *)(v57 + 132);
    v116 = v114;
    v117 = 100 * v113;
    if ( !v115 || v117 == 0x80000000 && v115 == -1 )
      return 0LL;
    v118 = *((_DWORD *)this + 49);
    v119 = v117 / v115;
    v120 = v119;
    if ( !v118 || v119 == 0x80000000 && v118 == -1 )
      return 0LL;
    v121 = 0;
    v122 = v119 / v118;
    if ( v113 == v115 && *(_DWORD *)(*(_QWORD *)this + 52LL) == *(_DWORD *)(*(_QWORD *)this + 56LL) )
    {
      v121 = 1;
      if ( v118 == 1 )
        goto LABEL_94;
    }
    else
    {
      if ( v116 <= (3 * v122) >> 1 )
        goto LABEL_310;
      if ( !v122 )
        goto LABEL_28;
      v118 = v116 / v122;
    }
    if ( (unsigned int)v118 > 5 )
      v118 = 5;
    *((_DWORD *)this + 48) = v118;
    v5 = 20 * v118;
LABEL_310:
    if ( !v121 || *((_DWORD *)this + 48) != *((_DWORD *)this + 49) )
    {
      v126 = *((_DWORD *)this + 49);
      if ( !v126 )
        goto LABEL_28;
      v127 = v116 - *((_DWORD *)this + 48) * v120 / v126;
      v128 = -v127;
      if ( v127 > 0 )
        v128 = v127;
      v5 += 30 * v128;
    }
    if ( v5 )
      goto LABEL_228;
    goto LABEL_94;
  }
  if ( (*((_DWORD *)this + 61) & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_28;
  v101 = *((_QWORD *)this + 31);
  v102 = *(_DWORD *)(v101 + 48);
  if ( (*((_DWORD *)this + 61) & 0x8000) == 0 && (v102 & 0x100000) != 0 && (v131 = *((_DWORD *)this + 42), v131 > v100) )
  {
    v132 = v131 - (v100 + 1) / 2;
    if ( !v100 || v132 == 0x80000000 && v100 == -1 )
      return 0LL;
    v133 = v132 / v100 + 1;
    if ( v133 > 5 )
      v133 = 5;
    *((_DWORD *)this + 48) = v133;
  }
  else if ( (v102 & 0x1000000) != 0 )
  {
    v139 = *((_DWORD *)this + 41) * v100;
    v140 = *(__int16 *)(v101 + 60) + *(__int16 *)(v101 + 62);
    if ( !v140 || v139 == 0x80000000 && v140 == -1 )
      return 0LL;
    v100 = v139 / v140;
  }
  v103 = *((_DWORD *)this + 48);
  if ( v103 > 1 )
  {
    v100 *= v103;
    v5 = (v103 - 1) | (20 * v103);
  }
  v104 = *((_DWORD *)this + 42) - v100;
  v105 = v100 - *((_DWORD *)this + 42);
  if ( v104 >= 0 )
    v105 = v104;
  v5 += 50 * v105;
  if ( v5 )
  {
LABEL_228:
    *((_DWORD *)this + 46) += v5;
    if ( (unsigned int)MAPPER::bNoMatch(this, v37) )
      return 0LL;
  }
LABEL_94:
  v58 = *((_DWORD *)this + 48);
  if ( v58 <= 1 && *((int *)this + 49) <= 1 )
    goto LABEL_96;
  v124 = *((_DWORD *)this + 49);
  v125 = *((_DWORD *)this + 46) + 50;
  *((_DWORD *)this + 46) = v125;
  if ( v58 <= v124 )
  {
    if ( v58 >= v124 )
      goto LABEL_299;
    if ( v58 )
    {
      v129 = 100 * v124;
      if ( v58 == 1 )
        goto LABEL_325;
      v130 = (v129 + v58 / 2) / v58;
      goto LABEL_324;
    }
LABEL_28:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  if ( !v124 )
    goto LABEL_28;
  v129 = 100 * v58;
  if ( v124 != 1 )
  {
    v130 = (v129 + v124 / 2) / v124;
LABEL_324:
    v129 = v130;
  }
LABEL_325:
  *((_DWORD *)this + 46) = v125 + 4 * v129;
LABEL_299:
  if ( (unsigned int)MAPPER::bNoMatch(this, v37) )
    return 0LL;
LABEL_96:
  if ( (*(_DWORD *)(*((_QWORD *)this + 31) + 48LL) & 0x10) == 0 )
  {
    v107 = *((_DWORD *)this + 61);
    if ( (v107 & 0x41000) != 0x41000 )
    {
      if ( (v107 & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
        goto LABEL_28;
      v108 = *((_DWORD *)this + 44);
      v109 = v108 - *((_DWORD *)*a2 + 17);
      if ( v109 )
      {
        if ( (*((_DWORD *)this + 61) & 0x480) != 0x480 )
          goto LABEL_261;
        if ( v109 > v108 )
          v109 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
        v109 %= 0x384u;
        if ( v109 )
        {
LABEL_261:
          if ( (*(_DWORD *)(*((_QWORD *)this + 31) + 48LL) & 0x200000) == 0 )
            goto LABEL_28;
          v110 = -v109;
          if ( v109 <= v108 )
            v110 = v109;
          if ( v110 != 900 * (v110 / 0x384) )
            goto LABEL_28;
        }
      }
    }
  }
  v59 = *((_DWORD *)this + 61);
  if ( (v59 & 0x400000) != 0 )
  {
    ++*((_DWORD *)this + 46);
    if ( (unsigned int)MAPPER::bNoMatch(this, v37) )
      return 0LL;
  }
  if ( v59 < 0 )
  {
    v61 = (char *)this + 100;
    v62 = (_DWORD *)((char *)this + 96);
  }
  else
  {
    v60 = *((_QWORD *)this + 1);
    v61 = (char *)(v60 + 356);
    v62 = (_DWORD *)(v60 + 352);
  }
  if ( *v62 )
  {
    v141 = *((_QWORD *)this + 31);
    if ( *(_DWORD *)(v141 + 4) < 0x10u )
      goto LABEL_28;
    v142 = *(int *)(v141 + 204);
    if ( !(_DWORD)v142 )
      goto LABEL_28;
    v143 = v141 + v142;
    if ( !v143 )
      goto LABEL_28;
    v144 = *(_DWORD *)(v143 + 4);
    if ( v144 && *v62 == v144 && *((_DWORD *)this + 46) <= 0x88B8u )
      *((_QWORD *)this + 35) = v37;
    v145 = *(_DWORD *)(v143 + 4);
    if ( *v62 != v145 || memcmp(v61, (const void *)(v143 + 8), 4LL * v145) )
      goto LABEL_28;
  }
  return 1LL;
}
