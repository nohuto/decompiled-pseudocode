/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18002973C
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800180B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180019EA0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180029E14 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18002A090 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18002A1F0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18002A27C (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A340 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180055740 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180078804 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=2
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, unsigned __int16 *a2)
{
  int v3; // r13d
  _WORD *v4; // rbx
  __int64 v5; // rsi
  _DWORD *v6; // rax
  __int64 v7; // r8
  _WORD *v8; // rdi
  __int64 v9; // r14
  CAppAudioSessionId *v10; // r12
  const wchar_t **v11; // rax
  const wchar_t *v12; // r9
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r12
  char *v18; // rdx
  __int64 v19; // r8
  volatile signed __int32 *v20; // r14
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // r13d
  __int64 v25; // rcx
  char v26; // r14
  _QWORD *v27; // rdx
  int v28; // r14d
  __int64 v30; // r12
  _WORD *v31; // rdx
  _WORD *v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  const OLECHAR *v35; // rcx
  __int64 v36; // r14
  unsigned int v37; // r14d
  ATL::CAtlException *v38; // rbx
  unsigned __int64 v39; // [rsp+20h] [rbp-1C8h] BYREF
  _WORD *v40; // [rsp+28h] [rbp-1C0h] BYREF
  _WORD *v41; // [rsp+30h] [rbp-1B8h] BYREF
  int v42; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 v43; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-1A0h] BYREF
  const wchar_t *v45; // [rsp+50h] [rbp-198h]
  void *Src; // [rsp+58h] [rbp-190h]
  CAppAudioSessionId *v47; // [rsp+60h] [rbp-188h]
  CAppAudioSessionId *v48; // [rsp+68h] [rbp-180h]
  unsigned __int64 v49; // [rsp+70h] [rbp-178h]
  LPCLSID pclsid; // [rsp+78h] [rbp-170h]
  ATL::CAtlException *v51; // [rsp+90h] [rbp-158h] BYREF
  LPCOLESTR lpsz; // [rsp+A0h] [rbp-148h] BYREF
  _BYTE v53[264]; // [rsp+A8h] [rbp-140h] BYREF

  Src = a2;
  v47 = this;
  v48 = this;
  v3 = 0;
  v42 = 0;
  v4 = (_WORD *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v40 = v4;
  v5 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v43 = v5;
  v6 = (_DWORD *)((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  v8 = v6 + 6;
  v41 = v6 + 6;
  if ( !a2 )
    goto LABEL_5;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  if ( !(_DWORD)v9 )
  {
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::Empty(&v41);
    v8 = v41;
    goto LABEL_10;
  }
  LODWORD(v39) = v6[2];
  v33 = a2 - v8;
  v45 = (const wchar_t *)v33;
  v34 = (v6[3] - (_DWORD)v9) | (unsigned int)(1 - v6[4]);
  if ( (int)v34 < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v41, v9);
    v8 = v41;
    v33 = (unsigned __int64)v45;
  }
  v30 = 2LL * (int)v9;
  if ( v33 > (unsigned int)v39 )
  {
    if ( !v30 )
      goto LABEL_7;
    if ( v8 )
    {
      memcpy_0(v8, Src, 2LL * (int)v9);
      goto LABEL_7;
    }
LABEL_6:
    *(_DWORD *)_o__errno(v34) = 22;
    invalid_parameter_noinfo();
    goto LABEL_7;
  }
  v31 = &v8[v33];
  if ( v30 )
  {
    if ( !v8 || !v31 )
      goto LABEL_6;
    memmove_0(v8, v31, 2LL * (int)v9);
  }
LABEL_7:
  if ( (int)v9 < 0 || (int)v9 > *((_DWORD *)v8 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)v8 - 4) = v9;
  v8[(unsigned __int64)v30 / 2] = 0;
LABEL_10:
  v10 = v47;
  pclsid = (LPCLSID)((char *)v47 + 16);
  *((GUID *)v47 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  LODWORD(v39) = 0;
  if ( *((int *)v8 - 4) < 0 )
    ATL::AtlThrowImpl(-2147024809);
  if ( *v8 == 124 )
  {
    v12 = &LocaleName;
    v45 = &LocaleName;
  }
  else
  {
    v11 = (const wchar_t **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                              &v41,
                              &v44,
                              v7,
                              &v39);
    v3 = 1;
    v42 = 1;
    v12 = *v11;
    v45 = v12;
    if ( !v12 )
    {
LABEL_23:
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v40);
      v4 = v40;
      goto LABEL_28;
    }
  }
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  if ( !(_DWORD)v13 )
    goto LABEL_23;
  LODWORD(Src) = *((_DWORD *)v4 - 4);
  v14 = v12 - v4;
  v49 = v14;
  v15 = *((_DWORD *)v4 - 3) - v13;
  v16 = v15 | (unsigned int)(1 - *((_DWORD *)v4 - 2));
  if ( (v15 | (1 - *((_DWORD *)v4 - 2))) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v40, v13);
    v4 = v40;
    v14 = v49;
    v12 = v45;
  }
  v17 = 2LL * (int)v13;
  if ( v14 > (unsigned int)Src )
  {
    if ( !v17 )
      goto LABEL_25;
    if ( v4 )
    {
      memcpy_0(v4, v12, 2LL * (int)v13);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v32 = &v4[v14];
  if ( v17 )
  {
    if ( !v4 || !v32 )
    {
LABEL_24:
      *(_DWORD *)_o__errno(v16) = 22;
      invalid_parameter_noinfo();
      goto LABEL_25;
    }
    memmove_0(v4, v32, 2LL * (int)v13);
  }
LABEL_25:
  if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v4 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)v4 - 4) = v13;
  v4[(unsigned __int64)v17 / 2] = 0;
  v10 = v47;
LABEL_28:
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v44);
  }
  if ( (_DWORD)v39 == -1 )
    goto LABEL_77;
  v18 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v41,
                    &v44,
                    v7,
                    &v39);
  v20 = (volatile signed __int32 *)(v5 - 24);
  if ( v18 - 24 != (char *)(v5 - 24) )
  {
    if ( *((int *)v20 + 4) >= 0 && *((_QWORD *)v18 - 3) == *(_QWORD *)v20 )
    {
      v21 = ATL::CSimpleStringT<unsigned short,0>::CloneData();
      if ( _InterlockedExchangeAdd(v20 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v20 + 8LL))(*(_QWORD *)v20, v20);
      v5 = v21 + 24;
      v43 = v5;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v43, v18, *((_DWORD *)v18 - 4));
      v5 = v43;
    }
  }
  v22 = (_QWORD *)(v44 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
  if ( (_DWORD)v39 == -1 )
    goto LABEL_77;
  v23 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v41,
          &v44,
          v19,
          &v39);
  v24 = v3 | 2;
  v42 = v24;
  if ( (unsigned __int8)ATL::operator!=(v25, v23) || (v26 = 0, (_DWORD)v39 != -1) )
    v26 = 1;
  if ( (v24 & 2) != 0 )
  {
    v27 = (_QWORD *)(v44 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 8LL))(*v27);
  }
  if ( v26 )
  {
LABEL_77:
    v28 = -2147467259;
    goto LABEL_54;
  }
  if ( *((_DWORD *)v4 - 4) == 1 && *v4 == 35 )
  {
    *((_DWORD *)v10 + 10) = 1;
  }
  else
  {
    CAudioIdentifier::UnescapeIdentifierString(&v40);
    v4 = v40;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v43);
  }
  catch ( ATL::CAtlException *v51 )
  {
    v38 = v51;
    if ( *(_DWORD *)v51 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v39) = *(_DWORD *)v38;
    v28 = v39;
    if ( (v39 & 0x80000000) == 0LL )
    {
      v4 = v40;
      v8 = v41;
      v10 = v48;
      goto LABEL_81;
    }
    v4 = v40;
    v5 = v43;
    v8 = v41;
LABEL_54:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 459, v28);
    goto LABEL_56;
  }
LABEL_81:
  lpsz = (LPCOLESTR)v53;
  v5 = v43;
  if ( v43 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *(_WORD *)(v43 + 2 * v36) );
    v37 = v36 + 1;
    ATL::AtlConvAllocMemory<unsigned short>(&lpsz, v37, v53);
    ATL::Checked::memcpy_s((ATL::Checked *)lpsz, (void *)(2LL * (int)v37), v5, (const void *)(2LL * (int)v37), v39);
    v35 = lpsz;
  }
  else
  {
    v35 = 0LL;
    lpsz = 0LL;
  }
  v28 = CLSIDFromString(v35, pclsid);
  if ( lpsz != (LPCOLESTR)v53 )
    free((void *)lpsz);
  if ( v28 < 0 )
    goto LABEL_54;
  ATL::CSimpleStringT<unsigned short,0>::operator=(v10, &v40);
  v28 = CAppAudioSessionId::CalculateStaticId((const GUID *)v10);
  if ( v28 < 0 )
    goto LABEL_54;
LABEL_56:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v8 - 3) + 8LL))(*((_QWORD *)v8 - 3));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 - 24) + 8LL))(*(_QWORD *)(v5 - 24));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v4 - 3) + 8LL))(*((_QWORD *)v4 - 3));
  return (unsigned int)v28;
}
