/*
 * XREFs of ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@_NPEBUtWAVEFORMATEX@@@Z @ 0x18004B468
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800B01E0 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        char a4,
        BYTE *a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  struct tagPROPVARIANT v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  memset(&v17, 0, sizeof(v17));
  if ( a2 == eOffloadConnector )
    return 0LL;
  if ( !a5 )
  {
LABEL_7:
    v19 = 0LL;
    v12 = 0;
    v20 = 0;
    v18 = (__int128)*a3;
    while ( 1 )
    {
      if ( v12 >= 0xA )
      {
        v9 = -2147023728;
        v10 = 8124LL;
        goto LABEL_5;
      }
      v13 = &qword_18018B030[2 * v12];
      v14 = *v13 - v18;
      if ( *v13 == (_QWORD)v18 )
        v14 = v13[1] - *((_QWORD *)&v18 + 1);
      if ( !v14 )
        break;
      ++v12;
    }
    v15 = 602;
    v19 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
    if ( a2 != eKeywordDetectorConnector )
      v15 = 2;
    v16 = *((_QWORD *)this + 9);
    v20 = v12 + v15;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, struct tagPROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
           v16,
           &v19,
           &v17);
    if ( v9 < 0 )
    {
      v10 = 8126LL;
      goto LABEL_5;
    }
    if ( a4 )
    {
      v9 = CEndpointCharacteristics::SetPropertyStoreProperty(this, &PKEY_AudioEngine_MixFormat, &v17);
      if ( v9 < 0 )
      {
        v10 = 8131LL;
        goto LABEL_5;
      }
    }
    return 0LL;
  }
  if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)a5) )
  {
    v17.bstrblobVal.pData = a5;
    v17.vt = 65;
    v17.lVal = *((unsigned __int16 *)a5 + 8) + 18;
    goto LABEL_7;
  }
  v9 = -2004287480;
  v10 = 8115LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
