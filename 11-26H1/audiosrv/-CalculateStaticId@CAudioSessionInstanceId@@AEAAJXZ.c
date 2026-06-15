/*
 * XREFs of ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180016D50
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180012890 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016410 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180017E20 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x180018600 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800278C4 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800279F4 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18005C964 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CAudioSessionInstanceId::CalculateStaticId(CAudioSessionInstanceId *this)
{
  wchar_t *v2; // r13
  int v3; // r14d
  int v4; // esi
  wchar_t *v5; // r15
  wchar_t *v6; // rbx
  wchar_t *v7; // rdi
  wchar_t *i; // rax
  __int64 v9; // rax
  int v10; // esi
  const wchar_t *v11; // rbx
  wchar_t *v12; // rdi
  wchar_t *k; // rax
  __int64 v14; // rax
  int v15; // esi
  wchar_t *v16; // r14
  wchar_t *v17; // rbx
  wchar_t *v18; // rdi
  wchar_t *n; // rax
  __int64 v20; // rax
  int v21; // esi
  const wchar_t *v22; // rbx
  wchar_t *v23; // rdi
  wchar_t *jj; // rax
  __int64 v25; // rax
  int v26; // esi
  const wchar_t *v27; // rbx
  wchar_t *v28; // rdi
  wchar_t *mm; // rax
  __int64 v30; // rax
  int v31; // esi
  const wchar_t *v32; // rbx
  wchar_t *v33; // rdi
  wchar_t *i1; // rax
  __int64 v35; // rax
  wchar_t *v36; // rdi
  wchar_t *v37; // rsi
  __int64 v39; // r12
  int v40; // r14d
  __int64 v41; // rdx
  wchar_t *v42; // rsi
  const wchar_t *j; // rbx
  wchar_t *v44; // rax
  __int64 v45; // rcx
  wchar_t *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r12
  int v49; // r15d
  __int64 v50; // rdx
  wchar_t *v51; // rsi
  wchar_t *v52; // r14
  const wchar_t *m; // rbx
  wchar_t *v54; // rax
  __int64 v55; // rcx
  wchar_t *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r12
  int v59; // r15d
  __int64 v60; // rdx
  wchar_t *v61; // r14
  wchar_t *v62; // rsi
  wchar_t *ii; // rbx
  wchar_t *v64; // rax
  __int64 v65; // rcx
  wchar_t *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r12
  int v69; // r15d
  __int64 v70; // rdx
  wchar_t *v71; // r14
  wchar_t *v72; // rsi
  wchar_t *kk; // rbx
  wchar_t *v74; // rax
  __int64 v75; // rcx
  wchar_t *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r12
  int v79; // r15d
  __int64 v80; // rdx
  wchar_t *v81; // r14
  const wchar_t *nn; // rbx
  wchar_t *v83; // rax
  __int64 v84; // rcx
  wchar_t *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // r12
  int v88; // r15d
  __int64 v89; // rdx
  wchar_t *v90; // r14
  const wchar_t *i2; // rbx
  wchar_t *v92; // rax
  __int64 v93; // rcx
  wchar_t *v94; // rdi
  __int64 v95; // rax
  wchar_t *v96; // r14
  int v97; // r15d
  int v98; // ecx
  int v99; // esi
  int v100; // ecx
  int v101; // esi
  int v102; // ecx
  int v103; // esi
  int v104; // ecx
  int v105; // esi
  int v106; // ecx
  int v107; // esi
  int v108; // ecx
  wchar_t *v109[9]; // [rsp+30h] [rbp-48h] BYREF
  int v111; // [rsp+88h] [rbp+10h]
  wchar_t *v112; // [rsp+90h] [rbp+18h] BYREF
  wchar_t *Str; // [rsp+98h] [rbp+20h] BYREF

  Str = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v112 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v2 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v109[0] = v2;
  v3 = CAudioEndpointId::ToString(this, &Str);
  if ( v3 < 0 )
    goto LABEL_48;
  v3 = CAppAudioSessionId::ToString((char *)this + 8, &v112);
  if ( v3 < 0 )
    goto LABEL_48;
  v3 = CAppInstanceId::ToString((char *)this + 56, v109);
  v111 = v3;
  if ( v3 < 0 )
  {
    v2 = v109[0];
LABEL_48:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::CalculateStaticId", 0x403u, v3);
    v37 = Str;
    v36 = v112;
    goto LABEL_49;
  }
  v4 = 0;
  v5 = Str;
  v6 = Str;
  v7 = &Str[*((int *)Str - 4)];
  if ( Str < v7 )
  {
    do
    {
      for ( i = wcsstr(v6, L"%"); i; i = wcsstr(i + 1, L"%") )
      {
        ++v4;
        v6 = i + 1;
      }
      if ( v6 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v6[v9] );
      }
      else
      {
        LODWORD(v9) = 0;
      }
      v6 += (int)v9 + 1;
    }
    while ( v6 < v7 );
    if ( v4 > 0 )
    {
      v39 = *((int *)v5 - 4);
      v40 = v39 + v4;
      v41 = (unsigned int)(v39 + v4);
      if ( (int)v39 + v4 <= (int)v39 )
        v41 = (unsigned int)v39;
      if ( (int)((*((_DWORD *)v5 - 3) - v41) | (1 - *((_DWORD *)v5 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v41);
        v5 = Str;
      }
      v42 = &v5[v39];
      for ( j = v5; j < v42; j += (int)v47 + 1 )
      {
        while ( 1 )
        {
          v44 = wcsstr(j, L"%");
          v46 = v44;
          if ( !v44 )
            break;
          v97 = v39 - (v44 - v5) - 1;
          j = v44 + 2;
          if ( 2LL * v97 )
          {
            if ( v44 == (wchar_t *)-4LL || v44 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v45) = 22;
              invalid_parameter_noinfo();
              v98 = 22;
            }
            else
            {
              memmove_0(v44 + 2, v44 + 1, 2LL * v97);
              v98 = 0;
            }
          }
          else
          {
            v98 = 0;
          }
          ATL::AtlCrtErrorCheck(v98);
          *(_DWORD *)v46 = *(_DWORD *)L"%%";
          ATL::AtlCrtErrorCheck(0);
          v46[v97 + 2] = 0;
          LODWORD(v39) = v39 + 1;
          v5 = Str;
        }
        if ( j )
        {
          v47 = -1LL;
          do
            ++v47;
          while ( j[v47] );
        }
        else
        {
          LODWORD(v47) = 0;
        }
      }
      if ( v40 < 0 || v40 > *((_DWORD *)v5 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v5 - 4) = v40;
      v5[v40] = 0;
    }
  }
  v10 = 0;
  v11 = v5;
  v12 = &v5[*((int *)v5 - 4)];
  if ( v5 < v12 )
  {
    do
    {
      for ( k = wcsstr(v11, L"|"); k; k = wcsstr(k + 1, L"|") )
      {
        ++v10;
        v11 = k + 1;
      }
      if ( v11 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v11[v14] );
      }
      else
      {
        LODWORD(v14) = 0;
      }
      v11 += (int)v14 + 1;
    }
    while ( v11 < v12 );
    if ( v10 > 0 )
    {
      v48 = *((int *)v5 - 4);
      v49 = v48 + v10;
      v50 = (unsigned int)(v48 + v10);
      if ( (int)v48 + v10 <= (int)v48 )
        v50 = (unsigned int)v48;
      v51 = Str;
      if ( (int)((*((_DWORD *)Str - 3) - v50) | (1 - *((_DWORD *)Str - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Str, v50);
        v51 = Str;
      }
      v52 = &v51[v48];
      for ( m = v51; m < v52; m += (int)v57 + 1 )
      {
        while ( 1 )
        {
          v54 = wcsstr(m, L"|");
          v56 = v54;
          if ( !v54 )
            break;
          v99 = v48 - (v54 - v51) - 1;
          m = v54 + 2;
          if ( 2LL * v99 )
          {
            if ( v54 == (wchar_t *)-4LL || v54 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v55) = 22;
              invalid_parameter_noinfo();
              v100 = 22;
            }
            else
            {
              memmove_0(v54 + 2, v54 + 1, 2LL * v99);
              v100 = 0;
            }
          }
          else
          {
            v100 = 0;
          }
          ATL::AtlCrtErrorCheck(v100);
          *(_DWORD *)v56 = *(_DWORD *)L"%b";
          ATL::AtlCrtErrorCheck(0);
          v56[v99 + 2] = 0;
          LODWORD(v48) = v48 + 1;
          v51 = Str;
        }
        if ( m )
        {
          v57 = -1LL;
          do
            ++v57;
          while ( m[v57] );
        }
        else
        {
          LODWORD(v57) = 0;
        }
      }
      if ( v49 < 0 || v49 > *((_DWORD *)v51 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v51 - 4) = v49;
      v51[v49] = 0;
    }
  }
  v15 = 0;
  v16 = v112;
  v17 = v112;
  v18 = &v112[*((int *)v112 - 4)];
  if ( v112 < v18 )
  {
    do
    {
      for ( n = wcsstr(v17, L"%"); n; n = wcsstr(n + 1, L"%") )
      {
        ++v15;
        v17 = n + 1;
      }
      if ( v17 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( v17[v20] );
      }
      else
      {
        LODWORD(v20) = 0;
      }
      v17 += (int)v20 + 1;
    }
    while ( v17 < v18 );
    if ( v15 > 0 )
    {
      v58 = *((int *)v16 - 4);
      v59 = v58 + v15;
      v60 = (unsigned int)(v58 + v15);
      if ( (int)v58 + v15 <= (int)v58 )
        v60 = (unsigned int)v58;
      if ( (int)((*((_DWORD *)v16 - 3) - v60) | (1 - *((_DWORD *)v16 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v112, v60);
        v16 = v112;
      }
      v61 = &v16[v58];
      v62 = v112;
      for ( ii = v112; ii < v61; ii += (int)v67 + 1 )
      {
        while ( 1 )
        {
          v64 = wcsstr(ii, L"%");
          v66 = v64;
          if ( !v64 )
            break;
          v101 = v58 - (v64 - v62) - 1;
          ii = v64 + 2;
          if ( 2LL * v101 )
          {
            if ( v64 == (wchar_t *)-4LL || v64 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v65) = 22;
              invalid_parameter_noinfo();
              v102 = 22;
            }
            else
            {
              memmove_0(v64 + 2, v64 + 1, 2LL * v101);
              v102 = 0;
            }
          }
          else
          {
            v102 = 0;
          }
          ATL::AtlCrtErrorCheck(v102);
          *(_DWORD *)v66 = *(_DWORD *)L"%%";
          ATL::AtlCrtErrorCheck(0);
          v66[v101 + 2] = 0;
          LODWORD(v58) = v58 + 1;
          v62 = v112;
        }
        if ( ii )
        {
          v67 = -1LL;
          do
            ++v67;
          while ( ii[v67] );
        }
        else
        {
          LODWORD(v67) = 0;
        }
      }
      if ( v59 < 0 || (v16 = v112, v59 > *((_DWORD *)v112 - 3)) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v112 - 4) = v59;
      v16[v59] = 0;
    }
  }
  v21 = 0;
  v22 = v16;
  v23 = &v16[*((int *)v16 - 4)];
  if ( v16 < v23 )
  {
    do
    {
      for ( jj = wcsstr(v22, L"|"); jj; jj = wcsstr(jj + 1, L"|") )
      {
        ++v21;
        v22 = jj + 1;
      }
      if ( v22 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( v22[v25] );
      }
      else
      {
        LODWORD(v25) = 0;
      }
      v22 += (int)v25 + 1;
    }
    while ( v22 < v23 );
    if ( v21 > 0 )
    {
      v68 = *((int *)v16 - 4);
      v69 = v68 + v21;
      v70 = (unsigned int)(v68 + v21);
      if ( (int)v68 + v21 <= (int)v68 )
        v70 = (unsigned int)v68;
      if ( (int)((*((_DWORD *)v16 - 3) - v70) | (1 - *((_DWORD *)v16 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v112, v70);
        v16 = v112;
      }
      v71 = &v16[v68];
      v72 = v112;
      for ( kk = v112; kk < v71; kk += (int)v77 + 1 )
      {
        while ( 1 )
        {
          v74 = wcsstr(kk, L"|");
          v76 = v74;
          if ( !v74 )
            break;
          v103 = v68 - (v74 - v72) - 1;
          kk = v74 + 2;
          if ( 2LL * v103 )
          {
            if ( v74 == (wchar_t *)-4LL || v74 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v75) = 22;
              invalid_parameter_noinfo();
              v104 = 22;
            }
            else
            {
              memmove_0(v74 + 2, v74 + 1, 2LL * v103);
              v104 = 0;
            }
          }
          else
          {
            v104 = 0;
          }
          ATL::AtlCrtErrorCheck(v104);
          *(_DWORD *)v76 = *(_DWORD *)L"%b";
          ATL::AtlCrtErrorCheck(0);
          v76[v103 + 2] = 0;
          LODWORD(v68) = v68 + 1;
          v72 = v112;
        }
        if ( kk )
        {
          v77 = -1LL;
          do
            ++v77;
          while ( kk[v77] );
        }
        else
        {
          LODWORD(v77) = 0;
        }
      }
      if ( v69 < 0 || (v96 = v112, v69 > *((_DWORD *)v112 - 3)) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v112 - 4) = v69;
      v96[v69] = 0;
    }
  }
  v26 = 0;
  v2 = v109[0];
  v27 = v109[0];
  v28 = &v109[0][*((int *)v109[0] - 4)];
  if ( v109[0] < v28 )
  {
    do
    {
      for ( mm = wcsstr(v27, L"%"); mm; mm = wcsstr(mm + 1, L"%") )
      {
        ++v26;
        v27 = mm + 1;
      }
      if ( v27 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( v27[v30] );
      }
      else
      {
        LODWORD(v30) = 0;
      }
      v27 += (int)v30 + 1;
    }
    while ( v27 < v28 );
    if ( v26 > 0 )
    {
      v78 = *((int *)v2 - 4);
      v79 = v78 + v26;
      v80 = (unsigned int)(v78 + v26);
      if ( (int)v78 + v26 <= (int)v78 )
        v80 = (unsigned int)v78;
      if ( (int)((*((_DWORD *)v2 - 3) - v80) | (1 - *((_DWORD *)v2 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v109, v80);
        v2 = v109[0];
      }
      v81 = &v2[v78];
      for ( nn = v2; nn < v81; nn += (int)v86 + 1 )
      {
        while ( 1 )
        {
          v83 = wcsstr(nn, L"%");
          v85 = v83;
          if ( !v83 )
            break;
          v105 = v78 - (v83 - v2) - 1;
          nn = v83 + 2;
          if ( 2LL * v105 )
          {
            if ( v83 == (wchar_t *)-4LL || v83 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v84) = 22;
              invalid_parameter_noinfo();
              v106 = 22;
            }
            else
            {
              memmove_0(v83 + 2, v83 + 1, 2LL * v105);
              v106 = 0;
            }
          }
          else
          {
            v106 = 0;
          }
          ATL::AtlCrtErrorCheck(v106);
          *(_DWORD *)v85 = *(_DWORD *)L"%%";
          ATL::AtlCrtErrorCheck(0);
          v85[v105 + 2] = 0;
          LODWORD(v78) = v78 + 1;
        }
        if ( nn )
        {
          v86 = -1LL;
          do
            ++v86;
          while ( nn[v86] );
        }
        else
        {
          LODWORD(v86) = 0;
        }
      }
      if ( v79 < 0 || v79 > *((_DWORD *)v2 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v2 - 4) = v79;
      v2[v79] = 0;
    }
  }
  v31 = 0;
  v32 = v2;
  v33 = &v2[*((int *)v2 - 4)];
  if ( v2 < v33 )
  {
    do
    {
      for ( i1 = wcsstr(v32, L"|"); i1; i1 = wcsstr(i1 + 1, L"|") )
      {
        ++v31;
        v32 = i1 + 1;
      }
      if ( v32 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v32[v35] );
      }
      else
      {
        LODWORD(v35) = 0;
      }
      v32 += (int)v35 + 1;
    }
    while ( v32 < v33 );
    if ( v31 > 0 )
    {
      v87 = *((int *)v2 - 4);
      v88 = v87 + v31;
      v89 = (unsigned int)(v87 + v31);
      if ( (int)v87 + v31 <= (int)v87 )
        v89 = (unsigned int)v87;
      if ( (int)((*((_DWORD *)v2 - 3) - v89) | (1 - *((_DWORD *)v2 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v109, v89);
        v2 = v109[0];
      }
      v90 = &v2[v87];
      for ( i2 = v2; i2 < v90; i2 += (int)v95 + 1 )
      {
        while ( 1 )
        {
          v92 = wcsstr(i2, L"|");
          v94 = v92;
          if ( !v92 )
            break;
          v107 = v87 - (v92 - v2) - 1;
          i2 = v92 + 2;
          if ( 2LL * v107 )
          {
            if ( v92 == (wchar_t *)-4LL || v92 == (wchar_t *)-2LL )
            {
              *(_DWORD *)_o__errno(v93) = 22;
              invalid_parameter_noinfo();
              v108 = 22;
            }
            else
            {
              memmove_0(v92 + 2, v92 + 1, 2LL * v107);
              v108 = 0;
            }
          }
          else
          {
            v108 = 0;
          }
          ATL::AtlCrtErrorCheck(v108);
          *(_DWORD *)v94 = *(_DWORD *)L"%b";
          ATL::AtlCrtErrorCheck(0);
          v94[v107 + 2] = 0;
          LODWORD(v87) = v87 + 1;
        }
        if ( i2 )
        {
          v95 = -1LL;
          do
            ++v95;
          while ( i2[v95] );
        }
        else
        {
          LODWORD(v95) = 0;
        }
      }
      if ( v88 < 0 || v88 > *((_DWORD *)v2 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v2 - 4) = v88;
      v2[v88] = 0;
    }
  }
  v36 = v112;
  v37 = Str;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
    (char *)this + 72,
    L"%s|%s|%s",
    Str,
    v112,
    v2);
  v3 = v111;
LABEL_49:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v36 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v36 - 3) + 8LL))(*((_QWORD *)v36 - 3));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v37 - 3) + 8LL))(*((_QWORD *)v37 - 3));
  return (unsigned int)v3;
}
