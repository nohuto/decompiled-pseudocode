/*
 * XREFs of ?CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180137A44
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180064200 (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800B01E0 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheStreamGroupFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificStreamGroupFormatKey; // ebx
  __int64 v9; // rdx
  struct tagPROPVARIANT v11; // [rsp+20h] [rbp-50h] BYREF
  struct _GUID v12; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v13; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  memset(&v11, 0, sizeof(v11));
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificStreamGroupFormatKey = -2004287480;
      v9 = 8050LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ProcessingModeSpecificStreamGroupFormatKey);
      return (unsigned int)ProcessingModeSpecificStreamGroupFormatKey;
    }
    v11.bstrblobVal.pData = (BYTE *)a4;
    v11.vt = 65;
    v11.lVal = a4->cbSize + 18;
  }
  memset(&v13, 0, sizeof(v13));
  v12 = *a3;
  ProcessingModeSpecificStreamGroupFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(
                                                 &v12,
                                                 a2 == eKeywordDetectorConnector,
                                                 &v13);
  if ( ProcessingModeSpecificStreamGroupFormatKey < 0 )
  {
    v9 = 8059LL;
    goto LABEL_4;
  }
  ProcessingModeSpecificStreamGroupFormatKey = CEndpointCharacteristics::SetPropertyStoreProperty(this, &v13, &v11);
  if ( ProcessingModeSpecificStreamGroupFormatKey < 0 )
  {
    v9 = 8061LL;
    goto LABEL_4;
  }
  return 0LL;
}
