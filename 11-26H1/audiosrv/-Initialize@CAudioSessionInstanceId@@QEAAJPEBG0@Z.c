/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1801053BC
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180028A28 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180016D50 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180017BC0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180028E0C (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18002973C (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180029E14 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18002A090 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A340 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180042A10 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180044870 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18007BBAC (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  CAudioSessionInstanceId *v4; // rdi
  int v5; // ebx
  const void **v6; // rdx
  __int64 v7; // r8
  const void **v8; // rdx
  __int64 v9; // r8
  unsigned __int16 **v10; // rax
  bool v11; // si
  __int64 v12; // rdx
  int *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v21; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v22; // [rsp+50h] [rbp-28h] BYREF
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v4 = this;
  LODWORD(v16) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v18);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  try
  {
    v5 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v17, a3);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v14 = (int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v25 = *v14;
    v5 = v25;
    if ( v25 < 0 )
      goto LABEL_16;
    v4 = this;
  }
  v25 = 0;
  v6 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v17,
                        &v16,
                        v15,
                        &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v19, v6);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v16);
  if ( v25 == -1 )
    goto LABEL_5;
  v8 = (const void **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                        &v17,
                        &v16,
                        v7,
                        &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=((__int64 *)&v18, v8);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v16);
  if ( v25 == -1 )
    goto LABEL_5;
  v10 = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                               &v17,
                               &v20,
                               v9,
                               &v25);
  v11 = 1;
  LODWORD(v16) = 1;
  if ( !ATL::operator!=(v10, v12) )
    v11 = v25 != -1;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  if ( v11 )
  {
LABEL_5:
    v5 = -2147467259;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 867, v5);
    goto LABEL_17;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString((const void **)&v19);
    CAudioIdentifier::UnescapeIdentifierString((const void **)&v18);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v25 = *(_DWORD *)v22;
    v4 = this;
    v5 = v25;
  }
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CAudioEndpointId::Initialize(v4, a2);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), v19);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), v18);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v5 < 0 )
    goto LABEL_16;
LABEL_17:
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v18);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  return (unsigned int)v5;
}
