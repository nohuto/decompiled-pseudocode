/*
 * XREFs of Create_SpatialAudioDevicePropertyReader @ 0x18003D84C
 * Callers:
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18000DEB4 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003D7C0 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJAEBU_GUID@@PEBG@Z @ 0x1801316D0 (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJAEBU_GUID@@PEBG@Z.c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18013A148 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x180142FE0 (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003DC30 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003DD00 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioDevicePropertyReader(
        unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        __int64 a4)
{
  char *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  int v10; // edi
  __int64 v11; // rcx
  unsigned __int8 *v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v15; // [rsp+48h] [rbp-8h] BYREF
  char *v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  if ( !a3 )
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_8;
    LODWORD(v16) = -2147024809;
    LODWORD(v17) = 181;
    v13 = (unsigned __int8 *)&unk_1801A970E;
    goto LABEL_13;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
  v14 = 0LL;
  v7 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v7;
  v16 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
LABEL_16:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v16);
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_8;
    LODWORD(v16) = v10;
    LODWORD(v17) = 186;
    v13 = (unsigned __int8 *)&unk_1801A96DC;
LABEL_13:
    v15 = "Create_SpatialAudioDevicePropertyReader";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      v13,
      (__int64)a3,
      a4,
      &v15,
      (__int64)&v17,
      (__int64)&v16);
    goto LABEL_8;
  }
  v9 = v7 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 8));
  *(_DWORD *)(v8 + 44) = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_QWORD *)(v8 + 56) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v8 + 64), 0, 0);
  *(_QWORD *)(v8 + 400) = 0LL;
  *(_QWORD *)(v8 + 408) = 0LL;
  *(_QWORD *)(v8 + 416) = 0LL;
  *(_DWORD *)(v8 + 424) = 0;
  *(_QWORD *)(v8 + 504) = 0LL;
  *(_DWORD *)(v8 + 512) = 0;
  v17 = v8;
  v16 = 0LL;
  v10 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize((SpatialAudioDevicePropertyReader *)v8, a1, a2);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v17);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v10 = (**v14)(v14, &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d, a3);
  if ( v10 < 0 )
    *a3 = 0LL;
LABEL_8:
  v11 = (__int64)v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v10;
}
