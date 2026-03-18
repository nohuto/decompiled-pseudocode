/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400C7CD0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x140105A8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z @ 0x1401C23E4 (-GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, __int64 a3)
{
  unsigned int v3; // r12d
  _DWORD *v4; // rax
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
  unsigned __int64 i; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  char v20; // bl
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // ebx
  char *v25; // r9
  unsigned __int16 v26; // r8
  unsigned __int16 *v27; // rdx
  unsigned int mm; // eax
  struct _FONTHASH *v29; // rsi
  char *n; // r15
  __int64 i3; // r8
  char *v32; // r14
  int v33; // esi
  __int128 *v34; // rdi
  unsigned __int16 *v35; // rcx
  __int64 v36; // r15
  int v37; // edx
  unsigned int v38; // eax
  int v39; // edx
  int v40; // eax
  unsigned int v41; // edx
  int v42; // eax
  unsigned __int16 *i5; // r15
  int v44; // r11d
  int v45; // r9d
  __int64 v46; // r10
  _QWORD *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  int v50; // eax
  unsigned int v51; // edi
  unsigned __int16 *v52; // rdx
  char *v53; // r9
  unsigned __int16 v54; // r8
  unsigned __int16 *v55; // rdx
  unsigned int j; // eax
  _WORD *v57; // r9
  char *v58; // r11
  _DWORD *v59; // r10
  __int16 v60; // r8
  _WORD *v61; // rdx
  unsigned int v62; // eax
  unsigned __int16 *nn; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _FONTMAPPERFAMILYFALLBACK *FontMapperFamilyFallback; // rax
  _WORD *v67; // r9
  char *v68; // r10
  __int16 v69; // r8
  _WORD *v70; // rdx
  unsigned int v71; // eax
  char *i1; // r8
  unsigned __int16 *m; // rax
  _WORD *ii; // rax
  _WORD *i2; // rax
  char *v76; // rdi
  char *jj; // r8
  _WORD *v78; // r11
  char v79; // al
  __int64 v80; // rdi
  _WORD *v81; // r11
  _WORD *kk; // rax
  _WORD *i4; // rax
  unsigned __int8 v84; // [rsp+20h] [rbp-99h] BYREF
  char v85; // [rsp+21h] [rbp-98h]
  char v86; // [rsp+24h] [rbp-95h] BYREF
  char v87; // [rsp+25h] [rbp-94h]
  char v88; // [rsp+26h] [rbp-93h]
  char *v89; // [rsp+28h] [rbp-91h]
  unsigned __int16 *v90; // [rsp+30h] [rbp-89h]
  struct _FONTHASH *v91; // [rsp+38h] [rbp-81h]
  int v92; // [rsp+40h] [rbp-79h]
  int v93; // [rsp+44h] [rbp-75h]
  int v94; // [rsp+48h] [rbp-71h]
  unsigned __int64 v95; // [rsp+50h] [rbp-69h] BYREF
  __int128 v96; // [rsp+58h] [rbp-61h] BYREF
  __int64 v97; // [rsp+68h] [rbp-51h]
  __int64 v98; // [rsp+70h] [rbp-49h]
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-31h] BYREF
  _WORD v101[32]; // [rsp+A0h] [rbp-19h] BYREF

  v84 = 1;
  v3 = 0;
  v97 = 0LL;
  v4 = (_DWORD *)*((_QWORD *)this + 29);
  LODWORD(v89) = a3;
  v96 = 0LL;
  v92 = 0;
  *v4 &= ~1u;
  v6 = *a2;
  v93 = 0;
  v91 = v6;
  if ( !v6 )
    return 0LL;
  k = 0LL;
  v9 = (unsigned __int16 *)*((_QWORD *)this + 2);
  v94 = *((_DWORD *)v6 + 1);
  v10 = *((_QWORD *)this + 1);
  v90 = v9;
  v97 = 0LL;
  v85 = *(_BYTE *)(v10 + 23);
  v87 = v85;
  v88 = v85;
  v86 = v85;
  v96 = 0uLL;
  SessionState = W32GetSessionState(this, a2, a3);
  v12 = 0LL;
  v95 = 0LL;
  v13 = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  v14 = *(_QWORD *)(SessionState + 96);
  v15 = v90;
  v98 = v14;
  DestinationString = 0LL;
  v16 = *(_QWORD *)(v14 + 19656);
  for ( i = v16 + 196LL * *(unsigned int *)(v14 + 19672); v15 < v90 + 31; ++v15 )
  {
    if ( !*v15 )
      break;
  }
  v18 = v15 - v90;
  if ( (_DWORD)v18 )
  {
    SourceString.Buffer = v90;
    SourceString.MaximumLength = 64;
    SourceString.Length = 2 * v18;
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = v101;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v14 = v98;
    v12 = 0LL;
  }
  v19 = (int)v18;
  v20 = v85;
  v101[v19] = 0;
  while ( v16 < i )
  {
    v21 = v101;
    do
    {
      v22 = *(unsigned __int16 *)((char *)v21 + v16 + 64 - (_QWORD)v101);
      v23 = *v21 - v22;
      if ( v23 )
        break;
      ++v21;
    }
    while ( v22 );
    if ( v23 )
      goto LABEL_14;
    if ( v16 == *(_QWORD *)(v14 + 19656) )
    {
      if ( (GetAppCompatFlags2(1024LL) & 0x400) != 0 )
      {
        v12 = v16;
        break;
      }
      v12 = v95;
      v14 = v98;
LABEL_14:
      v16 += 196LL;
    }
    else
    {
      if ( (*(_BYTE *)(v16 + 129) & 1) == 0 )
      {
        if ( v20 == *(_BYTE *)(v16 + 128) )
          v13 = v16;
        goto LABEL_14;
      }
      v12 = v16;
      v95 = v16;
      v16 += 196LL;
    }
  }
  v24 = 1;
  if ( v13 || (v13 = v12) != 0 )
  {
    if ( (*(_BYTE *)(v13 + 195) & 1) != 0 )
    {
      v53 = 0LL;
      if ( v90 )
      {
        v54 = *v90;
        v55 = v90;
        for ( j = 0; *v55; LOBYTE(v54) = *v55 )
        {
          ++v55;
          j = (unsigned __int8)v54 + 257 * j;
        }
        v29 = v91;
        for ( k = (char *)*((_QWORD *)v91 + j % *((_DWORD *)v91 + 2) + 5); k; k = *(char **)k )
        {
          for ( m = v90; *m == *(unsigned __int16 *)((char *)m + k - (char *)v90 + 60); ++m )
          {
            if ( !*m )
            {
              if ( (*((_DWORD *)k + 8) & 2) == 0 )
                goto LABEL_53;
              v53 = k;
              break;
            }
          }
        }
        k = v53;
      }
      else
      {
        v29 = v91;
      }
LABEL_53:
      *(_QWORD *)&v96 = k;
      v57 = (_WORD *)(v13 + 130);
      v58 = 0LL;
      v59 = (_DWORD *)((char *)v29 + 8);
      if ( v13 == -130LL )
      {
        n = 0LL;
        *((_QWORD *)&v96 + 1) = 0LL;
      }
      else
      {
        v60 = *v57;
        v61 = (_WORD *)(v13 + 130);
        v62 = 0;
        if ( *v57 )
        {
          do
          {
            ++v61;
            v62 = (unsigned __int8)v60 + 257 * v62;
            LOBYTE(v60) = *v61;
          }
          while ( *v61 );
          v59 = (_DWORD *)((char *)v29 + 8);
        }
        for ( n = (char *)*((_QWORD *)v29 + v62 % *v59 + 5); n; n = *(char **)n )
        {
          for ( ii = v57; *ii == *(_WORD *)((char *)ii + n - (char *)v57 + 60); ++ii )
          {
            if ( !*ii )
            {
              if ( (*((_DWORD *)n + 8) & 2) == 0 )
                goto LABEL_60;
              v58 = n;
              break;
            }
          }
        }
        n = v58;
LABEL_60:
        *((_QWORD *)&v96 + 1) = n;
      }
    }
    else
    {
      v29 = v91;
      v76 = 0LL;
      if ( v13 == -130LL )
      {
        jj = 0LL;
        v89 = 0LL;
      }
      else
      {
        for ( jj = (char *)*((_QWORD *)v91 + iHash((const unsigned __int16 *)(v13 + 130), *((_DWORD *)v91 + 2)) + 5);
              ;
              jj = *(char **)jj )
        {
          v89 = jj;
          if ( !jj )
            break;
          for ( kk = v78; *kk == *(_WORD *)((char *)kk + jj - (char *)v78 + 60); ++kk )
          {
            if ( !*kk )
            {
              if ( (*((_DWORD *)jj + 8) & 2) == 0 )
                goto LABEL_127;
              v76 = jj;
              break;
            }
          }
        }
        jj = v76;
        v89 = v76;
      }
LABEL_127:
      v79 = *(_BYTE *)(v13 + 194);
      n = v89;
      v87 = v79;
      *((_QWORD *)&v96 + 1) = jj;
    }
  }
  else
  {
    v25 = 0LL;
    if ( v90 )
    {
      v26 = *v90;
      v27 = v90;
      for ( mm = 0; *v27; LOBYTE(v26) = *v27 )
      {
        ++v27;
        mm = (unsigned __int8)v26 + 257 * mm;
      }
      v29 = v91;
      for ( k = (char *)*((_QWORD *)v91 + mm % *((_DWORD *)v91 + 2) + 5); k; k = *(char **)k )
      {
        for ( nn = v90; *nn == *(unsigned __int16 *)((char *)nn + k - (char *)v90 + 60); ++nn )
        {
          if ( !*nn )
          {
            if ( (*((_DWORD *)k + 8) & 2) == 0 )
              goto LABEL_25;
            v25 = k;
            break;
          }
        }
      }
      k = v25;
    }
    else
    {
      v29 = v91;
    }
LABEL_25:
    *(_QWORD *)&v96 = k;
    if ( (_DWORD)v89 && !k && (FontMapperFamilyFallback = GetFontMapperFamilyFallback(v90)) != 0LL )
    {
      v67 = (_WORD *)((char *)FontMapperFamilyFallback + 64);
      v68 = 0LL;
      if ( FontMapperFamilyFallback == (struct _FONTMAPPERFAMILYFALLBACK *)-64LL )
      {
        v89 = 0LL;
        *((_QWORD *)&v96 + 1) = 0LL;
        n = 0LL;
        v93 = 1;
      }
      else
      {
        v69 = *v67;
        v70 = (_WORD *)((char *)FontMapperFamilyFallback + 64);
        v71 = 0;
        if ( *v67 )
        {
          do
          {
            ++v70;
            v71 = (unsigned __int8)v69 + 257 * v71;
            LOBYTE(v69) = *v70;
          }
          while ( *v70 );
        }
        for ( i1 = (char *)*((_QWORD *)v29 + v71 % *((_DWORD *)v29 + 2) + 5); ; i1 = *(char **)i1 )
        {
          v89 = i1;
          if ( !i1 )
            break;
          for ( i2 = v67; *i2 == *(_WORD *)((char *)i2 + i1 - (char *)v67 + 60); ++i2 )
          {
            if ( !*i2 )
            {
              if ( (*((_DWORD *)i1 + 8) & 2) == 0 )
                goto LABEL_91;
              v68 = i1;
              break;
            }
          }
        }
        i1 = v68;
        v89 = v68;
LABEL_91:
        n = v89;
        *((_QWORD *)&v96 + 1) = i1;
        v93 = 1;
      }
    }
    else
    {
      n = 0LL;
    }
  }
  if ( *((_WORD *)this + 12) && v94 == 1 )
  {
    v80 = 0LL;
    if ( this == (MAPPER *)-24LL )
    {
      i3 = 0LL;
      v97 = 0LL;
    }
    else
    {
      for ( i3 = *((_QWORD *)v29 + iHash((const unsigned __int16 *)this + 12, *((_DWORD *)v29 + 2)) + 5);
            i3;
            i3 = *(_QWORD *)i3 )
      {
        for ( i4 = v81; *i4 == *(_WORD *)((char *)i4 + i3 - (_QWORD)v81 + 60); ++i4 )
        {
          if ( !*i4 )
          {
            if ( (*(_DWORD *)(i3 + 32) & 2) == 0 )
              goto LABEL_133;
            v80 = i3;
            break;
          }
        }
      }
      i3 = v80;
LABEL_133:
      v97 = i3;
    }
  }
  else
  {
    i3 = 0LL;
  }
  if ( !k && !n && !i3 )
    return 0LL;
  v32 = &v86;
  v33 = 0;
  v34 = &v96;
  v35 = 0LL;
  **((_DWORD **)this + 29) |= 1u;
  *((_DWORD *)this + 61) |= 0x40000000u;
  do
  {
    v36 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 )
    {
      v37 = *((_DWORD *)this + 61);
      *((_BYTE *)this + 276) = *v32;
      v38 = v37 & 0xFFBFFFFF;
      v90 = 0LL;
      v39 = v37 | 0x400000;
      if ( (*(_BYTE *)(v36 + 32) & 2) == 0 )
        v39 = v38;
      v40 = v39;
      v41 = v39 | 0x80000000;
      v42 = v40 & 0x7FFFFFFF;
      if ( v33 != 2 )
        v41 = v42;
      *((_DWORD *)this + 61) = v41;
      for ( i5 = *(unsigned __int16 **)(v36 + 8); i5; i5 = *(unsigned __int16 **)i5 )
      {
        v95 = *((_QWORD *)i5 + 1);
        if ( (unsigned int)MAPPER::bNearMatch(this, (struct PFEOBJ *)&v95, &v84, 0) )
        {
          v44 = v33;
          i3 = v84;
          v45 = *((_DWORD *)this + 61);
          v46 = *((_QWORD *)i5 + 1);
          **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
          v47 = (_QWORD *)*((_QWORD *)this + 28);
          v48 = *((_QWORD *)this + 24);
          v92 = v33;
          v90 = i5;
          *v47 = v48;
          **((_DWORD **)this + 29) = **((_DWORD **)this + 29) & 0xFFFFFF | ((_DWORD)i3 << 24);
          *((_QWORD *)this + 25) = v46;
          if ( (v45 & 0x80) != 0 )
          {
            *((_DWORD *)this + 61) |= 0x1000000u;
          }
          else
          {
            v49 = *(_DWORD *)(v46 + 80);
            *((_DWORD *)this + 61) &= ~0x1000000u;
            *((_DWORD *)this + 52) = v49;
          }
          v50 = *((_DWORD *)this + 46);
          if ( !v50 )
          {
            if ( !*(_DWORD *)(*(_QWORD *)v34 + 28LL) || (PFEOBJ::flFontType((PFEOBJ *)&v95) & 1) != 0 )
            {
              v51 = 1;
              v52 = i5;
              goto LABEL_69;
            }
            *((_DWORD *)this + 46) = 1;
            v50 = 1;
          }
          *((_DWORD *)this + 45) = v50;
        }
      }
      v35 = v90;
    }
    ++v33;
    ++v32;
    v34 = (__int128 *)((char *)v34 + 8);
  }
  while ( v33 < 3 );
  v44 = v92;
  v52 = v35;
  v51 = 0;
  if ( !v35 )
    goto LABEL_78;
LABEL_69:
  if ( v44 != 1 )
  {
    if ( v94 )
      goto LABEL_71;
LABEL_80:
    **((_DWORD **)this + 29) |= 2u;
    goto LABEL_71;
  }
  if ( !v93 )
    goto LABEL_80;
LABEL_71:
  v64 = *(unsigned __int8 *)(*((_QWORD *)this + 29) + 3LL);
  if ( (_BYTE)v64 == 0xFF )
  {
    v52 = (unsigned __int16 *)*((_QWORD *)v52 + 1);
    if ( !*(_DWORD *)(*((_QWORD *)v52 + 4) + 40LL) && (*((_DWORD *)v52 + 3) & 1) == 0 )
      goto LABEL_154;
  }
  if ( (_DWORD)v64 != 255 )
  {
    while ( v3 < 0x11 )
    {
      v65 = v3;
      if ( charsets[v65] == (_DWORD)v64 )
      {
        v24 = codepages[v65];
        goto LABEL_77;
      }
      ++v3;
    }
LABEL_154:
    v24 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v64, v52, i3) + 96) + 20340LL) != 0 ? 0x4E4 : 0;
  }
LABEL_77:
  **((_DWORD **)this + 29) |= v24 << 8;
LABEL_78:
  *((_DWORD *)this + 61) &= ~0x400000u;
  return v51;
}
