/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1801118D4
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180078130 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x180111860 (-FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x180113C5C (-SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SpdifSampleRateFlag@@YAKK@Z @ 0x18011418C (-SpdifSampleRateFlag@@YAKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAcceptableSPDIFTypeForDevice(
        struct IMMDevice *a1,
        const struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX **a3,
        int a4)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v8; // rdi
  int v9; // ebx
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  int v13; // r8d
  WORD wBitsPerSample; // cx
  int v15; // eax
  unsigned int v16; // r11d
  int v17; // r11d
  unsigned int v18; // esi
  GUID *v19; // rdx
  unsigned int v20; // r10d
  __int64 *v22; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v27; // [rsp+68h] [rbp-8h]
  struct KSDATAFORMAT_WAVEFORMATEX *v28; // [rsp+A0h] [rbp+30h] BYREF

  v8 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v23);
  if ( v9 < 0 )
    goto LABEL_35;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
         v23,
         &PKEY_Endpoint_SPDIFFormatSupport,
         pvar);
  if ( v9 < 0 )
    goto LABEL_35;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) < 0x1C )
    goto LABEL_4;
  v10 = v27;
  v11 = v27[2];
  v12 = 16LL * v11;
  if ( v12 > 0xFFFFFFFF || LODWORD(pvar[1]) != (_DWORD)v12 + 12 )
  {
    v9 = -2004287467;
    goto LABEL_35;
  }
  if ( (SpdifSampleRateFlag(a2->nSamplesPerSec) & *v10) == 0 )
    goto LABEL_4;
  wBitsPerSample = a2->wBitsPerSample;
  v15 = 8;
  switch ( wBitsPerSample )
  {
    case 8u:
      v15 = 1;
      break;
    case 0x10u:
      v15 = 2;
      break;
    case 0x18u:
      v15 = 4;
      break;
    default:
      if ( wBitsPerSample != 32 )
        v15 = v13;
      break;
  }
  if ( (v15 & v10[1]) == 0 )
    goto LABEL_4;
  v16 = v13;
  if ( !v11 )
    goto LABEL_4;
  while ( !(unsigned int)FormatHasSpecifiedSubtype(a2, (const struct _GUID *)&v10[4 * v16 + 3]) )
  {
    v16 = v17 + 1;
    if ( v16 >= v11 )
      goto LABEL_4;
  }
  v9 = CreateKSFormatFromWFXFormat(a2, &v28);
  if ( v9 < 0
    || (v22 = &v24,
        v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
               a1,
               &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
               23LL),
        v9 < 0) )
  {
    v8 = v28;
    goto LABEL_35;
  }
  v18 = 0;
  v8 = v28;
  if ( !g_cCompressedPassThruFormats )
  {
LABEL_4:
    v9 = -2004287480;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v19 = &g_rgCompressedPassThruFormats + v18;
    v8->DataFormat.SubFormat = *v19;
    if ( (unsigned int)SetFormatSubType(&v8->WaveFormatEx, v19) )
      break;
LABEL_29:
    if ( ++v18 >= v20 )
      goto LABEL_4;
  }
  LODWORD(v22) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v24 + 88LL))(
         v24,
         v8,
         v8->DataFormat.FormatSize,
         0LL,
         v22,
         &v25);
  if ( v9 )
  {
    v20 = g_cCompressedPassThruFormats;
    goto LABEL_29;
  }
  if ( a3 )
    v9 = CloneWaveFormat(&v8->WaveFormatEx, a3);
LABEL_35:
  PropVariantClear(pvar);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("GetAcceptableSPDIFTypeForDevice", 5212, v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
  return (unsigned int)v9;
}
