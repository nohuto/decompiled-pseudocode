/*
 * XREFs of ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D8C0
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000DA5C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     AudioServerGetDevicePeriod @ 0x18002B820 (AudioServerGetDevicePeriod.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E350 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005E8E4 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180063028 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800AC4DC (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall EffectPack::GetConnectorFormatForProcessingMode(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // [rsp+20h] [rbp-60h]
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v15 = 0LL;
  v16 = 0;
  *(struct _GUID *)&pvar.vt = *a3;
  v8 = 0;
  while ( qword_18018B030[2 * v8] != *(_QWORD *)&pvar.vt || qword_18018B030[2 * v8 + 1] != pvar.hVal.QuadPart )
  {
    if ( ++v8 >= 0xA )
      goto LABEL_16;
  }
  v15 = (struct _GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_ConnectorFormat;
  v9 = 602;
  if ( a2 != eKeywordDetectorConnector )
    v9 = 2;
  v16 = v8 + v9;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, struct _GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this[198] + 9) + 40LL))(
         *((_QWORD *)this[198] + 9),
         &v15,
         &pvar) < 0
    || pvar.vt != 65
    || !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
LABEL_16:
    *(struct _GUID *)&pvar.vt = *a3;
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
      (EffectPack *)this,
      &v15,
      a2,
      (struct _GUID *)&pvar);
    result = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(this[198], a2, &v15, a4);
    if ( result < 0 )
      return EffectPack::GetDeviceFormat((EffectPack *)this, 0, 0, a2, a4);
    return result;
  }
  v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
  v11 = v10;
  if ( v10 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A0D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10,
      v13);
  PropVariantClear((PROPVARIANT *)&pvar);
  return v11;
}
