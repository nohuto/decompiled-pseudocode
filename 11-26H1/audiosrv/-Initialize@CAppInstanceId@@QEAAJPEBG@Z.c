/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180028E0C
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180029710 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180029E14 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18002A090 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18002A27C (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, unsigned __int16 *a2)
{
  CAppInstanceId *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // r14
  wchar_t *v13; // rbx
  unsigned int v15; // edi
  int *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  wchar_t *v19; // [rsp+28h] [rbp-40h] BYREF
  wchar_t *String; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *EndPtr; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-20h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = this;
  v4 = 0;
  LODWORD(v26) = 0;
  EndPtr = 0LL;
  v18 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  String = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v5 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v19 = (wchar_t *)(v5 + 24);
    v15 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v18, a2);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v16 = (int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v25 = *v16;
    v15 = v25;
    v4 = 0;
    if ( v25 < 0 )
      goto LABEL_12;
    v3 = this;
  }
  v25 = 0;
  v6 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v18,
         &v26,
         v17,
         &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_15;
  v8 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v18,
         &v26,
         v7,
         &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_15;
  v10 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v18,
          v22,
          v9,
          &v25);
  LODWORD(v26) = 1;
  if ( (unsigned __int8)ATL::operator!=(v11, v10) || (v12 = 0, v25 != -1) )
    v12 = 1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v22);
  if ( v12 )
  {
LABEL_15:
    v15 = -2147467259;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 633, v15);
    v13 = String;
    goto LABEL_11;
  }
  if ( *((_DWORD *)v19 - 4) == 1 && *v19 == 35 )
    *((_DWORD *)v3 + 2) = 1;
  else
    v4 = wcstoul(v19, &EndPtr, 10);
  *(_DWORD *)v3 = v4;
  v13 = String;
  *((_DWORD *)v3 + 1) = wcstoul(String, &EndPtr, 10);
LABEL_11:
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v13 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  return v15;
}
