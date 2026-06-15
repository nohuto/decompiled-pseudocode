/*
 * XREFs of ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180019EA0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180012890 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016410 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18002973C (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180017E20 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180019AC0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x1800474D0 (memcpy_s.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800AF15C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x1800CEA8C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppAudioSessionId::CalculateStaticId(const GUID *this)
{
  const void *v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  __int64 v5; // rbx
  OLECHAR *v6; // rsi
  wchar_t *v7; // rax
  wchar_t *v8; // r12
  int v9; // r14d
  const wchar_t *v10; // rdi
  wchar_t *v11; // rsi
  wchar_t *i; // rax
  __int64 v13; // rax
  int v14; // r14d
  const wchar_t *v15; // rdi
  wchar_t *v16; // rsi
  wchar_t *k; // rax
  __int64 v18; // rax
  wchar_t *const *v19; // rcx
  unsigned int v20; // ebx
  __int64 v22; // r13
  int v23; // r12d
  int v24; // edx
  wchar_t *v25; // r14
  wchar_t *v26; // r15
  const wchar_t *j; // rdi
  wchar_t *v28; // rax
  wchar_t *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r13
  int v32; // r12d
  int v33; // edx
  wchar_t *v34; // r14
  wchar_t *v35; // r15
  const wchar_t *m; // rdi
  wchar_t *v37; // rax
  wchar_t *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r14d
  __int64 v44; // rcx
  int v45; // r14d
  __int64 v46; // rdi
  __int64 v47; // r14
  bool v48; // cc
  wchar_t *v49; // rdx
  _DWORD *v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r15
  __int64 v54; // rcx
  wchar_t *Str; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v56; // [rsp+28h] [rbp-E0h] BYREF
  const GUID *v57; // [rsp+30h] [rbp-D8h]
  OLECHAR *v58; // [rsp+38h] [rbp-D0h]
  ATL::CAtlException *v59; // [rsp+40h] [rbp-C8h] BYREF
  OLECHAR sz[64]; // [rsp+50h] [rbp-B8h] BYREF

  v57 = this;
  v2 = *(const void **)&this->Data1;
  v3 = (volatile signed __int32 *)(*(_QWORD *)&this->Data1 - 24LL);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
  try
  {
    if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
    {
      _InterlockedIncrement(v3 + 4);
    }
    else
    {
      v50 = v3 + 2;
      v51 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
      v3 = (volatile signed __int32 *)v51;
      if ( !v51 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
      *(_DWORD *)(v51 + 8) = *v50;
      memcpy_s((void *const)(v51 + 24), 2LL * (*v50 + 1), v2, 2LL * (*v50 + 1));
    }
    v5 = (__int64)(v3 + 6);
    v56 = v5;
    if ( !*(_DWORD *)this[2].Data4 )
    {
      CAudioIdentifier::EscapeIdentifierString(&v56);
      v5 = v56;
    }
    StringFromGUID2(this + 1, sz, 64);
    v6 = SysAllocString(sz);
    v58 = v6;
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    v7 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
    Str = v7;
    if ( (unsigned __int64)v6 < 0x10000 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &Str,
        (unsigned __int16)v6);
      v8 = Str;
LABEL_14:
      SysFreeString(v6);
      v9 = 0;
      v10 = v8;
      v11 = &v8[*((int *)v8 - 4)];
      if ( v8 < v11 )
      {
        do
        {
          for ( i = wcsstr(v10, L"%"); i; i = wcsstr(i + 1, L"%") )
          {
            ++v9;
            v10 = i + 1;
          }
          if ( v10 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v10[v13] );
          }
          else
          {
            LODWORD(v13) = 0;
          }
          v10 += (int)v13 + 1;
        }
        while ( v10 < v11 );
        if ( v9 > 0 )
        {
          v22 = *((int *)v8 - 4);
          v23 = v9 + v22;
          v24 = v9 + v22;
          if ( v9 + (int)v22 <= (int)v22 )
            v24 = v22;
          v25 = Str;
          if ( ((*((_DWORD *)Str - 3) - v24) | (1 - *((_DWORD *)Str - 2))) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v24);
            v25 = Str;
          }
          v26 = &v25[v22];
          for ( j = v25; j < v26; j += (int)v30 + 1 )
          {
            while ( 1 )
            {
              v28 = wcsstr(j, L"%");
              v29 = v28;
              if ( !v28 )
                break;
              v42 = v28 - v25;
              v43 = v22 - v42 - 1;
              j = v28 + 2;
              if ( 2LL * v43 )
              {
                if ( v28 == (wchar_t *)-4LL || v28 == (wchar_t *)-2LL )
                {
                  *(_DWORD *)_o__errno(v42) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(v28 + 2, v28 + 1, 2LL * v43);
              }
              *(_DWORD *)v29 = *(_DWORD *)L"%%";
              v29[v43 + 2] = 0;
              LODWORD(v22) = v22 + 1;
              v25 = Str;
            }
            if ( j )
            {
              v30 = -1LL;
              do
                ++v30;
              while ( j[v30] );
            }
            else
            {
              LODWORD(v30) = 0;
            }
          }
          if ( v23 < 0 || v23 > *((_DWORD *)v25 - 3) )
            ATL::AtlThrowImpl(-2147024809);
          *((_DWORD *)v25 - 4) = v23;
          v40 = v23;
          v8 = Str;
          Str[v40] = 0;
        }
      }
      v14 = 0;
      v15 = v8;
      v16 = &v8[*((int *)v8 - 4)];
      if ( v8 < v16 )
      {
        do
        {
          for ( k = wcsstr(v15, L"|"); k; k = wcsstr(k + 1, L"|") )
          {
            ++v14;
            v15 = k + 1;
          }
          if ( v15 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( v15[v18] );
          }
          else
          {
            LODWORD(v18) = 0;
          }
          v15 += (int)v18 + 1;
        }
        while ( v15 < v16 );
        if ( v14 > 0 )
        {
          v31 = *((int *)v8 - 4);
          v32 = v14 + v31;
          v33 = v14 + v31;
          if ( v14 + (int)v31 <= (int)v31 )
            v33 = v31;
          v34 = Str;
          if ( ((*((_DWORD *)Str - 3) - v33) | (1 - *((_DWORD *)Str - 2))) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v33);
            v34 = Str;
          }
          v35 = &v34[v31];
          for ( m = v34; m < v35; m += (int)v39 + 1 )
          {
            while ( 1 )
            {
              v37 = wcsstr(m, L"|");
              v38 = v37;
              if ( !v37 )
                break;
              v44 = v37 - v34;
              v45 = v31 - v44 - 1;
              m = v37 + 2;
              if ( 2LL * v45 )
              {
                if ( v37 == (wchar_t *)-4LL || v37 == (wchar_t *)-2LL )
                {
                  *(_DWORD *)_o__errno(v44) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(v37 + 2, v37 + 1, 2LL * v45);
              }
              *(_DWORD *)v38 = *(_DWORD *)L"%b";
              v38[v45 + 2] = 0;
              LODWORD(v31) = v31 + 1;
              v34 = Str;
            }
            if ( m )
            {
              v39 = -1LL;
              do
                ++v39;
              while ( m[v39] );
            }
            else
            {
              LODWORD(v39) = 0;
            }
          }
          if ( v32 < 0 || v32 > *((_DWORD *)v34 - 3) )
            ATL::AtlThrowImpl(-2147024809);
          *((_DWORD *)v34 - 4) = v32;
          v41 = v32;
          v8 = Str;
          Str[v41] = 0;
        }
      }
      v19 = (wchar_t *const *)&v57[2];
      if ( *(_DWORD *)v57[2].Data4 )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v19,
          L"#|%s",
          v8);
      else
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          v19,
          L"%s|%s",
          v5,
          v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v8 - 3) + 8LL))(*((_QWORD *)v8 - 3));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 - 24) + 8LL))(*(_QWORD *)(v5 - 24));
      return 0;
    }
    v46 = -1LL;
    do
      ++v46;
    while ( v6[v46] );
    if ( !(_DWORD)v46 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty(&Str);
      v8 = Str;
      goto LABEL_14;
    }
    v52 = *((unsigned int *)v7 - 4);
    v53 = v6 - v7;
    v54 = (*((_DWORD *)v7 - 3) - (_DWORD)v46) | (unsigned int)(1 - *((_DWORD *)v7 - 2));
    if ( (int)v54 < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Str, v46);
    v47 = 2LL * (int)v46;
    v48 = v53 <= v52;
    v8 = Str;
    if ( !v48 )
    {
      if ( !v47 )
        goto LABEL_11;
      if ( Str )
      {
        memcpy_0(Str, v6, 2LL * (int)v46);
        goto LABEL_11;
      }
      goto LABEL_90;
    }
    v49 = &Str[v53];
    if ( v47 )
    {
      if ( !Str || !v49 )
      {
LABEL_90:
        *(_DWORD *)_o__errno(v54) = 22;
        invalid_parameter_noinfo();
        goto LABEL_11;
      }
      memmove_0(Str, v49, 2LL * (int)v46);
    }
LABEL_11:
    if ( (int)v46 < 0 || (int)v46 > *((_DWORD *)v8 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v8 - 4) = v46;
    v8[(unsigned __int64)v47 / 2] = 0;
    goto LABEL_14;
  }
  catch ( ATL::CAtlException *v59 )
  {
    LODWORD(Str) = *(_DWORD *)v59;
    v20 = (unsigned int)Str;
    if ( (int)Str < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::CalculateStaticId", 0x14Bu, (int)Str);
  }
  return v20;
}
