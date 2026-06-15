/*
 * XREFs of ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180034C38
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180034DAC (-GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4.c)
 *     ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x1800351B4 (-IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayEleme.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall EffectPolicy::IsValidMicArrayForAEC(
        struct IPropertyStore **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct IPropertyStore *a3,
        struct _AEC_POLICY_RESULTS *a4)
{
  char v7; // si
  struct KSAUDIO_MIC_ARRAY_GEOMETRY *v8; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // r8d
  int ProposedConnectorFormatForProcessingMode; // eax
  bool v11; // r9
  void *v12; // rbx
  const unsigned __int16 *v13; // rdx
  int valid; // edi
  unsigned int *v16; // [rsp+28h] [rbp-31h]
  struct MicArrayElementErrorDetails **v17; // [rsp+30h] [rbp-29h]
  int v18; // [rsp+40h] [rbp-19h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-11h] BYREF
  struct _GUID v20; // [rsp+60h] [rbp+7h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp+17h] BYREF
  struct KSAUDIO_MIC_ARRAY_GEOMETRY *v22; // [rsp+80h] [rbp+27h]
  unsigned __int16 v23; // [rsp+D0h] [rbp+77h] BYREF

  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  v7 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))a3->lpVtbl->GetValue)(
         a3,
         &PKEY_Devices_MicrophoneArray_Geometry,
         pvar) < 0 )
    return 0;
  if ( LOWORD(pvar[0]) != 4113 )
    return 0;
  v8 = v22;
  if ( !v22 || LODWORD(pvar[1]) < 0x1E )
    return 0;
  pv[1] = 0LL;
  v9 = eHostProcessConnector;
  if ( a2 != eKeywordDetectorConnector )
    v9 = a2;
  *((_DWORD *)a4 + 7) = 0;
  v18 = 8;
  v23 = 0;
  pv[0] = 0LL;
  v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  ProposedConnectorFormatForProcessingMode = GetProposedConnectorFormatForProcessingMode(
                                               g_DeviceEnumerator,
                                               a1[9],
                                               v9,
                                               &v20,
                                               (struct tWAVEFORMATEX **)pv);
  v12 = pv[0];
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    v23 = *((_WORD *)pv[0] + 1);
    *((_DWORD *)a4 + 6) = v23;
  }
  v13 = &v23;
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    v13 = 0LL;
  valid = IsValidMicArrayGeometry(v8, v13, &v18, v11, (unsigned int *)a4 + 7, v16, v17);
  *((_DWORD *)a4 + 8) = v8->usNumberOfMicrophones;
  PropVariantClear(pvar);
  if ( valid >= 0 && !*((_DWORD *)a4 + 7) )
    v7 = 1;
  CoTaskMemFree(v12);
  CoTaskMemFree(0LL);
  return v7;
}
