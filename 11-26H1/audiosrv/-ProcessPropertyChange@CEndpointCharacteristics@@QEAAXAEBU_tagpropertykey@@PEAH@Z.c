/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180012004 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18010CCF8 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x180008768 (-MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E350 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180063CF0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x180091C54 (-IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z.c)
 *     _Init_thread_footer @ 0x1800B2850 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800B28B8 (_Init_thread_header.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x180138518 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x18013E1A8 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180143670 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        int *a3)
{
  int i; // r9d
  int v7; // r9d
  int updated; // eax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  unsigned int *v12; // r14
  int v13; // [rsp+20h] [rbp-79h]
  int v14; // [rsp+20h] [rbp-79h]
  struct tWAVEFORMATEX **v15; // [rsp+30h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v16; // [rsp+38h] [rbp-61h] BYREF
  char v17; // [rsp+40h] [rbp-59h]
  __int128 v18; // [rsp+50h] [rbp-49h] BYREF
  int v19; // [rsp+60h] [rbp-39h]
  __int128 v20; // [rsp+64h] [rbp-35h]
  int v21; // [rsp+74h] [rbp-25h]
  __int128 v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+88h] [rbp-11h]
  __int128 v24; // [rsp+8Ch] [rbp-Dh]
  int v25; // [rsp+9Ch] [rbp+3h]
  __int128 v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+B0h] [rbp+17h]
  __int128 v28; // [rsp+B4h] [rbp+1Bh]
  int v29; // [rsp+C4h] [rbp+2Bh]
  PROPERTYKEY v30; // [rsp+C8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  char v32; // [rsp+100h] [rbp+67h] BYREF
  struct tWAVEFORMATEX *v33; // [rsp+108h] [rbp+6Fh] BYREF

  *a3 = 0;
  v18 = xmmword_1801D57A4;
  v19 = dword_1801D57B4;
  v20 = xmmword_1801D57B8;
  v21 = dword_1801D57C8;
  v22 = xmmword_1801D57CC;
  v23 = dword_1801D57DC;
  v24 = xmmword_1801D57F4;
  v25 = dword_1801D5804;
  v26 = xmmword_1801D5808;
  v27 = dword_1801D5818;
  v28 = xmmword_1801D581C;
  v29 = dword_1801D582C;
  v30 = PKEY_AudioEndpoint_Disable_SysFx;
  for ( i = 0; (unsigned __int64)i < 7; i = v7 + 1 )
  {
    if ( (unsigned int)operator==(a2, (char *)&v18 + 20 * i) )
    {
      updated = EffectPack::UpdateAPOEnableStatus(*((EffectPack **)this + 48));
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D73,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)updated,
          v13);
      break;
    }
  }
  if ( a2->pid == 5 )
  {
    v9 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1;
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data1 )
      v9 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_AudioEndpoint_Disable_SysFx.fmtid.Data4;
    if ( !v9 )
      CEndpointCharacteristics::DisconnectStreamsOnEndpoint(this);
  }
  if ( !*((_DWORD *)this + 59)
    && CSpatialProperties::IsPropertyChangeRelevant((CEndpointCharacteristics *)((char *)this + 448), a2) )
  {
    v33 = 0LL;
    v15 = &v33;
    v16 = 0LL;
    v17 = 1;
    EffectPack::GetDeviceFormat(*((CEndpointCharacteristics ***)this + 48), 0LL, 0LL, 0, &v16);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v15);
    v32 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
            g_policyConfigInternal,
            &v32);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D85,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10,
        v14);
    CSpatialProperties::ProcessPropertyChange(
      (LPCRITICAL_SECTION)((char *)this + 448),
      *((struct EffectPack **)this + 48),
      a2,
      (struct SpatialAudioRelatedGlobalSettings *)&v32,
      v33,
      a3);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v33,
      0LL);
  }
  if ( dword_1801D7D98 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801D7D98);
    if ( dword_1801D7D98 == -1 )
    {
      xmmword_1801D78D0 = (__int128)PKEY_SpatialAudio_Signaling_Key.fmtid;
      dword_1801D78E0 = 2;
      dword_1801D78E4 = 8;
      xmmword_1801D78E8 = (__int128)PKEY_SpatialAudio_Signaling_Key.fmtid;
      dword_1801D78F8 = 2;
      dword_1801D78FC = 4;
      *(PROPERTYKEY *)byte_1801D7900 = PKEY_AudioEngine_DeviceFormat;
      dword_1801D7914 = 2;
      xmmword_1801D7918 = PKEY_Endpoint_AllowOffloading;
      dword_1801D7928 = 25;
      dword_1801D792C = 16;
      Init_thread_footer(&dword_1801D7D98);
    }
  }
  v11 = 0;
  v12 = (unsigned int *)&dword_1801D78E4;
  do
  {
    if ( (unsigned int)operator==(a2, (char *)&xmmword_1801D78D0 + 24 * (int)v11) )
      EffectPack::MarkSystemEffectsForResolution(*((_QWORD *)this + 48), *v12);
    ++v11;
    v12 += 6;
  }
  while ( v11 < 4 );
}
