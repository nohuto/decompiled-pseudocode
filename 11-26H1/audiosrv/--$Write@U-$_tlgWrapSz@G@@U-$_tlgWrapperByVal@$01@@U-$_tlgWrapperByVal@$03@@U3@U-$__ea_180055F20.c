/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180055F20
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E2C44 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E32D0 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10)
{
  __int64 v11; // rcx
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-89h]
  _DWORD v17[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v18; // [rsp+40h] [rbp-79h]
  unsigned __int16 *v19; // [rsp+50h] [rbp-69h] BYREF
  int v20; // [rsp+58h] [rbp-61h]
  int v21; // [rsp+5Ch] [rbp-5Dh]
  unsigned __int8 *v22; // [rsp+60h] [rbp-59h]
  int v23; // [rsp+68h] [rbp-51h]
  int v24; // [rsp+6Ch] [rbp-4Dh]
  const wchar_t *v25; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+78h] [rbp-41h]
  int v27; // [rsp+7Ch] [rbp-3Dh]
  __int64 v28; // [rsp+80h] [rbp-39h]
  __int64 v29; // [rsp+88h] [rbp-31h]
  __int64 v30; // [rsp+90h] [rbp-29h]
  __int64 v31; // [rsp+98h] [rbp-21h]
  __int64 v32; // [rsp+A0h] [rbp-19h]
  __int64 v33; // [rsp+A8h] [rbp-11h]
  __int64 v34; // [rsp+B0h] [rbp-9h]
  __int64 v35; // [rsp+B8h] [rbp-1h]
  __int64 v36; // [rsp+C0h] [rbp+7h]
  __int64 v37; // [rsp+C8h] [rbp+Fh]

  v36 = a10;
  v37 = 4LL;
  v35 = 16LL;
  v33 = 4LL;
  v11 = *a9;
  v32 = a8;
  v30 = a7;
  v28 = a6;
  v34 = v11;
  v31 = 4LL;
  v29 = 2LL;
  v12 = *a5;
  if ( *a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &LocaleName;
    v14 = 2;
  }
  v26 = v14;
  v17[0] = *a2 << 24;
  v17[1] = *(unsigned __int16 *)(a2 + 1);
  v18 = *(_QWORD *)(a2 + 3);
  v19 = *(unsigned __int16 **)(a1 + 8);
  v25 = v12;
  v27 = 0;
  v20 = *v19;
  v23 = *(unsigned __int16 *)(a2 + 11);
  v22 = a2 + 11;
  v21 = 2;
  v24 = 1;
  LODWORD(v16) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v17, 0LL, 0LL, 8, &v19, v16);
}
