/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180028A28
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180026D90 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180029710 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180029E14 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18002A090 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A340 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18007BBAC (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  bool v18; // di
  int *v20; // rbx
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-58h] BYREF
  int v23; // [rsp+28h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v25; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v26; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *String; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v28; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-20h] BYREF
  ATL::CAtlException *v30; // [rsp+60h] [rbp-18h] BYREF
  ATL::CAtlException *v31; // [rsp+68h] [rbp-10h] BYREF

  v23 = 0;
  v24 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v28 = (unsigned __int16 *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  String = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v26 = (wchar_t *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  v7 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
  try
  {
    v25 = (wchar_t *)(v7 + 24);
    v8 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v24, a2);
  }
  catch ( ATL::CAtlException *v30 )
  {
    v20 = (int *)v30;
    if ( *(_DWORD *)v30 == -1073741571 )
      _o__resetstkoflw();
    v22 = *v20;
    v8 = v22;
    if ( v22 < 0 )
      goto LABEL_11;
  }
  v22 = 0;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v24,
         &v23,
         v21,
         &v22);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v28, v9);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  if ( v22 == -1 )
    goto LABEL_10;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v24,
          &v23,
          v10,
          &v22);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v11);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  if ( v22 == -1 )
    goto LABEL_10;
  v13 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v24,
          &v23,
          v12,
          &v22);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v26, v13);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  if ( v22 == -1 )
    goto LABEL_10;
  v15 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v24,
          &v23,
          v14,
          &v22);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v25, v15);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  if ( v22 == -1 )
    goto LABEL_10;
  v17 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v24,
          v29,
          v16,
          &v22);
  v18 = 1;
  v23 = 1;
  if ( !(unsigned __int8)ATL::operator!=(v17) )
    v18 = v22 != -1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v29);
  if ( v18 )
  {
LABEL_10:
    v8 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v28);
      CAudioIdentifier::UnescapeIdentifierString(&String);
      CAudioIdentifier::UnescapeIdentifierString(&v26);
      CAudioIdentifier::UnescapeIdentifierString(&v25);
    }
    catch ( ATL::CAtlException *v31 )
    {
      v22 = *(_DWORD *)v31;
      v8 = v22;
    }
    if ( v8 >= 0 )
    {
      v8 = CAudioSessionInstanceId::Initialize(a3, a1, v28);
      if ( v8 >= 0 )
      {
        *a4 = wcstoul(String, 0LL, 10);
        *a5 = wcstoul(v26, 0LL, 10);
        *a6 = wcstoul(v25, 0LL, 10) != 0;
        goto LABEL_12;
      }
    }
  }
LABEL_11:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 553, v8);
LABEL_12:
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  return (unsigned int)v8;
}
