/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1401046A0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B7DD8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x140105190 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z @ 0x14010679C (-GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x14010F604 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x14010F8A8 (-iHash@@YAIPEBGI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, __int64 a3)
{
  unsigned int v3; // r13d
  _DWORD *v4; // rax
  MAPPER *v5; // r12
  struct _FONTHASH *v6; // rax
  char *k; // r14
  unsigned __int16 *v9; // r10
  __int64 v10; // rax
  __int64 SessionState; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r15
  __int64 v14; // r10
  unsigned __int16 *v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 i; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  char v21; // bl
  unsigned __int16 *v22; // rax
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // edi
  char *v26; // r9
  unsigned __int16 v27; // r8
  unsigned __int16 *v28; // rdx
  unsigned int j; // eax
  struct _FONTHASH *v30; // rcx
  _WORD *v31; // r10
  char *v32; // r11
  unsigned int *v33; // r8
  __int16 v34; // r9
  _WORD *v35; // rdx
  unsigned int v36; // eax
  _DWORD *v37; // rcx
  struct _FONTHASH *v38; // r15
  char *n; // r9
  char *v40; // r9
  unsigned __int16 v41; // r8
  unsigned __int16 *v42; // rdx
  unsigned int mm; // eax
  __int64 i3; // r8
  char *v45; // r14
  int v46; // ebx
  __int64 *v47; // rsi
  unsigned __int16 *v48; // rcx
  __int64 v49; // r15
  int v50; // edx
  unsigned int v51; // eax
  int v52; // edx
  int v53; // eax
  unsigned int v54; // edx
  int v55; // eax
  unsigned __int16 *v56; // r15
  __int64 v57; // r12
  MAPPER *v58; // r11
  __int64 v59; // r10
  _DWORD *v60; // rcx
  int v61; // r9d
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // ecx
  unsigned int v66; // ebx
  unsigned __int16 *v67; // rdx
  unsigned __int16 *nn; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  struct _FONTMAPPERFAMILYFALLBACK *FontMapperFamilyFallback; // rax
  char *v72; // rsi
  char *i1; // r8
  _WORD *v74; // r11
  unsigned __int16 *v75; // rax
  unsigned __int16 *m; // rcx
  _WORD *ii; // rcx
  _WORD *i2; // rcx
  char *v79; // rbx
  char *jj; // r9
  _WORD *v81; // r11
  char v82; // al
  _WORD *kk; // rcx
  __int64 v84; // rbx
  _WORD *v85; // r11
  _WORD *i4; // rcx
  unsigned __int8 v87; // [rsp+20h] [rbp-A9h] BYREF
  char v88; // [rsp+21h] [rbp-A8h]
  char *v89; // [rsp+28h] [rbp-A1h]
  char v90; // [rsp+30h] [rbp-99h] BYREF
  char v91; // [rsp+31h] [rbp-98h]
  char v92; // [rsp+32h] [rbp-97h]
  struct _FONTHASH *v93; // [rsp+38h] [rbp-91h]
  int v94; // [rsp+40h] [rbp-89h]
  unsigned __int16 *v95; // [rsp+48h] [rbp-81h]
  MAPPER *v96; // [rsp+50h] [rbp-79h]
  int v97; // [rsp+58h] [rbp-71h]
  int v98; // [rsp+5Ch] [rbp-6Dh]
  int v99; // [rsp+60h] [rbp-69h]
  unsigned __int64 v100; // [rsp+68h] [rbp-61h] BYREF
  __int64 v101; // [rsp+70h] [rbp-59h]
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  __int128 v104; // [rsp+98h] [rbp-31h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-21h]
  _WORD v106[32]; // [rsp+B0h] [rbp-19h] BYREF

  v87 = 1;
  v3 = 0;
  v105 = 0LL;
  v4 = (_DWORD *)*((_QWORD *)this + 29);
  v99 = a3;
  v5 = this;
  v96 = this;
  v104 = 0LL;
  *v4 &= ~1u;
  v6 = *a2;
  v94 = 0;
  v97 = 0;
  v93 = v6;
  if ( !v6 )
    return 0LL;
  k = 0LL;
  v9 = (unsigned __int16 *)*((_QWORD *)this + 2);
  v98 = *((_DWORD *)v6 + 1);
  v89 = 0LL;
  v10 = *((_QWORD *)this + 1);
  v95 = v9;
  v105 = 0LL;
  v104 = 0uLL;
  v88 = *(_BYTE *)(v10 + 23);
  v91 = v88;
  v92 = v88;
  v90 = v88;
  SessionState = W32GetSessionState(this, a2, a3);
  v100 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = *(_QWORD *)(SessionState + 96);
  v15 = v95;
  v101 = v14;
  SourceString = 0LL;
  v16 = *(_QWORD *)(v14 + 19680);
  v17 = 196LL * *(unsigned int *)(v14 + 19696);
  DestinationString = 0LL;
  for ( i = v16 + v17; v15 < v95 + 31; ++v15 )
  {
    if ( !*v15 )
      break;
  }
  v19 = v15 - v95;
  if ( (_DWORD)v19 )
  {
    SourceString.Buffer = v95;
    SourceString.MaximumLength = 64;
    SourceString.Length = 2 * v19;
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = v106;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v14 = v101;
    v12 = 0LL;
  }
  v20 = (int)v19;
  v21 = v88;
  v106[v20] = 0;
  while ( v16 < i )
  {
    v22 = v106;
    do
    {
      v23 = *(unsigned __int16 *)((char *)v22 + v16 + 64 - (_QWORD)v106);
      v24 = (unsigned int)*v22 - v23;
      if ( (_DWORD)v24 )
        break;
      ++v22;
    }
    while ( v23 );
    if ( (_DWORD)v24 )
      goto LABEL_14;
    if ( v16 == *(_QWORD *)(v14 + 19680) )
    {
      if ( (GetAppCompatFlags2(1024LL, v24) & 0x400) != 0 )
      {
        v12 = v16;
        break;
      }
      v12 = v100;
      v14 = v101;
LABEL_14:
      v16 += 196LL;
    }
    else
    {
      if ( (*(_BYTE *)(v16 + 129) & 1) == 0 )
      {
        if ( v21 == *(_BYTE *)(v16 + 128) )
          v13 = v16;
        goto LABEL_14;
      }
      v12 = v16;
      v100 = v16;
      v16 += 196LL;
    }
  }
  v25 = 1;
  if ( v13 || (v13 = v12) != 0 )
  {
    if ( (*(_BYTE *)(v13 + 195) & 1) != 0 )
    {
      v26 = 0LL;
      if ( v95 )
      {
        v27 = *v95;
        v28 = v95;
        for ( j = 0; *v28; LOBYTE(v27) = *v28 )
        {
          ++v28;
          j = (unsigned __int8)v27 + 257 * j;
        }
        for ( k = (char *)*((_QWORD *)v93 + j % *((_DWORD *)v93 + 2) + 5); k; k = *(char **)k )
        {
          for ( m = v95; *m == *(unsigned __int16 *)((char *)m + k - (char *)v95 + 60); ++m )
          {
            if ( !*m )
            {
              if ( (*((_DWORD *)k + 8) & 2) == 0 )
                goto LABEL_25;
              v26 = k;
              break;
            }
          }
        }
        k = v26;
LABEL_25:
        v30 = v93;
      }
      else
      {
        v30 = v93;
      }
      *(_QWORD *)&v104 = k;
      v31 = (_WORD *)(v13 + 130);
      v32 = 0LL;
      v33 = (unsigned int *)((char *)v30 + 8);
      if ( v13 == -130LL )
      {
        v38 = v93;
        v89 = 0LL;
        *((_QWORD *)&v104 + 1) = 0LL;
      }
      else
      {
        v34 = *v31;
        v35 = (_WORD *)(v13 + 130);
        v36 = 0;
        v37 = (_DWORD *)((char *)v30 + 8);
        if ( *v31 )
        {
          do
          {
            ++v35;
            v36 = (unsigned __int8)v34 + 257 * v36;
            LOBYTE(v34) = *v35;
          }
          while ( *v35 );
          v38 = v93;
          v37 = (_DWORD *)((char *)v93 + 8);
        }
        else
        {
          v38 = v93;
        }
        for ( n = (char *)*((_QWORD *)v38 + v36 % *v37 + 5); ; n = *(char **)n )
        {
          v89 = n;
          if ( !n )
            break;
          for ( ii = v31; *ii == *(_WORD *)((char *)ii + n - (char *)v31 + 60); ++ii )
          {
            if ( !*ii )
            {
              if ( (*((_DWORD *)n + 8) & 2) == 0 )
                goto LABEL_33;
              v32 = n;
              break;
            }
          }
        }
        n = v32;
        v89 = v32;
LABEL_33:
        *((_QWORD *)&v104 + 1) = n;
      }
    }
    else
    {
      v79 = 0LL;
      if ( v13 == -130LL )
      {
        jj = 0LL;
        v89 = 0LL;
      }
      else
      {
        for ( jj = (char *)*((_QWORD *)v93 + iHash((const unsigned __int16 *)(v13 + 130), *((_DWORD *)v93 + 2)) + 5);
              ;
              jj = *(char **)jj )
        {
          v89 = jj;
          if ( !jj )
            break;
          for ( kk = v81; *kk == *(_WORD *)((char *)kk + jj - (char *)v81 + 60); ++kk )
          {
            if ( !*kk )
            {
              if ( (*((_DWORD *)jj + 8) & 2) == 0 )
                goto LABEL_127;
              v79 = jj;
              break;
            }
          }
        }
        jj = v79;
        v89 = v79;
      }
LABEL_127:
      v82 = *(_BYTE *)(v13 + 194);
      v38 = v93;
      *((_QWORD *)&v104 + 1) = jj;
      v91 = v82;
      v33 = (unsigned int *)((char *)v93 + 8);
    }
  }
  else
  {
    v40 = 0LL;
    if ( v95 )
    {
      v41 = *v95;
      v42 = v95;
      for ( mm = 0; *v42; LOBYTE(v41) = *v42 )
      {
        ++v42;
        mm = (unsigned __int8)v41 + 257 * mm;
      }
      v38 = v93;
      for ( k = (char *)*((_QWORD *)v93 + mm % *((_DWORD *)v93 + 2) + 5); k; k = *(char **)k )
      {
        for ( nn = v95; *nn == *(unsigned __int16 *)((char *)nn + k - (char *)v95 + 60); ++nn )
        {
          if ( !*nn )
          {
            if ( (*((_DWORD *)k + 8) & 2) == 0 )
              goto LABEL_41;
            v40 = k;
            break;
          }
        }
      }
      k = v40;
    }
    else
    {
      v38 = v93;
    }
LABEL_41:
    *(_QWORD *)&v104 = k;
    v33 = (unsigned int *)((char *)v38 + 8);
    if ( v99 )
    {
      if ( !k )
      {
        FontMapperFamilyFallback = GetFontMapperFamilyFallback(v95);
        v33 = (unsigned int *)((char *)v38 + 8);
        if ( FontMapperFamilyFallback )
        {
          v72 = 0LL;
          if ( FontMapperFamilyFallback == (struct _FONTMAPPERFAMILYFALLBACK *)-64LL )
          {
            v89 = 0LL;
            v33 = (unsigned int *)((char *)v38 + 8);
            *((_QWORD *)&v104 + 1) = 0LL;
            v97 = 1;
          }
          else
          {
            for ( i1 = (char *)*((_QWORD *)v38
                               + iHash((const unsigned __int16 *)FontMapperFamilyFallback + 32, *((_DWORD *)v38 + 2))
                               + 5); ; i1 = *(char **)i1 )
            {
              v89 = i1;
              if ( !i1 )
                break;
              for ( i2 = v74; *i2 == *(_WORD *)((char *)i2 + i1 - (char *)v74 + 60); ++i2 )
              {
                if ( !*i2 )
                {
                  if ( (*((_DWORD *)i1 + 8) & 2) == 0 )
                    goto LABEL_88;
                  v72 = i1;
                  break;
                }
              }
            }
            i1 = v72;
            v89 = v72;
LABEL_88:
            *((_QWORD *)&v104 + 1) = i1;
            v33 = (unsigned int *)((char *)v38 + 8);
            v97 = 1;
          }
        }
      }
    }
  }
  if ( *((_WORD *)v5 + 12) && v98 == 1 )
  {
    v84 = 0LL;
    if ( v5 == (MAPPER *)-24LL )
    {
      i3 = 0LL;
      v105 = 0LL;
    }
    else
    {
      for ( i3 = *((_QWORD *)v38 + iHash((const unsigned __int16 *)v5 + 12, *v33) + 5); i3; i3 = *(_QWORD *)i3 )
      {
        for ( i4 = v85; *i4 == *(_WORD *)((char *)i4 + i3 - (_QWORD)v85 + 60); ++i4 )
        {
          if ( !*i4 )
          {
            if ( (*(_DWORD *)(i3 + 32) & 2) == 0 )
              goto LABEL_143;
            v84 = i3;
            break;
          }
        }
      }
      i3 = v84;
LABEL_143:
      v105 = i3;
    }
  }
  else
  {
    i3 = 0LL;
  }
  if ( !k && !v89 && !i3 )
    return 0LL;
  v45 = &v90;
  v46 = 0;
  v47 = (__int64 *)&v104;
  v48 = 0LL;
  **((_DWORD **)v5 + 29) |= 1u;
  *((_DWORD *)v5 + 61) |= 0x40000000u;
  do
  {
    v49 = *v47;
    if ( *v47 )
    {
      v50 = *((_DWORD *)v5 + 61);
      *((_BYTE *)v5 + 276) = *v45;
      v51 = v50 & 0xFFBFFFFF;
      v95 = 0LL;
      v52 = v50 | 0x400000;
      if ( (*(_BYTE *)(v49 + 32) & 2) == 0 )
        v52 = v51;
      v53 = v52;
      v54 = v52 | 0x80000000;
      v55 = v53 & 0x7FFFFFFF;
      if ( v46 != 2 )
        v54 = v55;
      *((_DWORD *)v5 + 61) = v54;
      v56 = *(unsigned __int16 **)(v49 + 8);
      v57 = *v47;
      while ( v56 )
      {
        v100 = *((_QWORD *)v56 + 1);
        if ( (unsigned int)MAPPER::bNearMatch(v96, (struct PFEOBJ *)&v100, &v87, 0) )
        {
          v58 = v96;
          i3 = v87;
          v59 = *((_QWORD *)v56 + 1);
          v94 = v46;
          v60 = (_DWORD *)*((_QWORD *)v96 + 27);
          v61 = *((_DWORD *)v96 + 61);
          v62 = *((_DWORD *)v96 + 47);
          v95 = v56;
          *v60 = v62;
          **((_QWORD **)v58 + 28) = *((_QWORD *)v58 + 24);
          **((_DWORD **)v58 + 29) = **((_DWORD **)v58 + 29) & 0xFFFFFF | ((_DWORD)i3 << 24);
          *((_QWORD *)v58 + 25) = v59;
          if ( (v61 & 0x80u) != 0 )
          {
            *((_DWORD *)v58 + 61) |= 0x1000000u;
          }
          else
          {
            v63 = *(_DWORD *)(v59 + 80);
            *((_DWORD *)v58 + 61) &= ~0x1000000u;
            *((_DWORD *)v58 + 52) = v63;
          }
          v64 = *((_DWORD *)v58 + 46);
          if ( !v64 )
          {
            if ( !*(_DWORD *)(v57 + 28) || (PFEOBJ::flFontType((PFEOBJ *)&v100) & 1) != 0 )
            {
              v65 = v94;
              v66 = 1;
              v67 = v56;
              goto LABEL_69;
            }
            *((_DWORD *)v58 + 46) = 1;
            v64 = 1;
          }
          *((_DWORD *)v58 + 45) = v64;
        }
        v56 = *(unsigned __int16 **)v56;
      }
      v5 = v96;
      v48 = v95;
    }
    ++v46;
    ++v45;
    ++v47;
    v75 = v48;
  }
  while ( v46 < 3 );
  v65 = v94;
  v67 = v75;
  v66 = 0;
  if ( v75 )
  {
LABEL_69:
    if ( v65 == 1 )
    {
      if ( v97 )
        goto LABEL_71;
LABEL_81:
      v5 = v96;
      **((_DWORD **)v96 + 29) |= 2u;
    }
    else
    {
      if ( !v98 )
        goto LABEL_81;
LABEL_71:
      v5 = v96;
    }
    v69 = *(unsigned __int8 *)(*((_QWORD *)v5 + 29) + 3LL);
    if ( (_BYTE)v69 != 0xFF
      || (v67 = (unsigned __int16 *)*((_QWORD *)v67 + 1), *(_DWORD *)(*((_QWORD *)v67 + 4) + 40LL))
      || (*((_DWORD *)v67 + 3) & 1) != 0 )
    {
      if ( (_DWORD)v69 != 255 )
      {
        while ( v3 < 0x11 )
        {
          v70 = v3;
          if ( charsets[v70] == (_DWORD)v69 )
          {
            v25 = codepages[v70];
            goto LABEL_78;
          }
          ++v3;
        }
        goto LABEL_154;
      }
    }
    else
    {
LABEL_154:
      v25 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v69, v67, i3) + 96) + 20364LL) != 0 ? 0x4E4 : 0;
    }
LABEL_78:
    **((_DWORD **)v5 + 29) |= v25 << 8;
  }
  *((_DWORD *)v5 + 61) &= ~0x400000u;
  return v66;
}
