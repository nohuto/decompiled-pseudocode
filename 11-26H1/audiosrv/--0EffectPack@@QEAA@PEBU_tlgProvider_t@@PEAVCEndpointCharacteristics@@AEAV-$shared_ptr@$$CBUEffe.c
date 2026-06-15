/*
 * XREFs of ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180058540
 * Callers:
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800583D4 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 * Callees:
 *     ??0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180058818 (--0SystemEffectDescriptor@@QEAA@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ??$?0_K@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@H$0?0@gsl@@QEAA@PEAH_K@Z @ 0x180059FD0 (--$-0_K@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@H$0-0@gsl@@QEAA@PEAH_K@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800B2510 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EffectPack::EffectPack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8

  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)a1, eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 96), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 192), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 288), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 384), eConnectorCount);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 480), eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 576), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 672), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 768), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 864), eConnectorCount);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 960), eHostProcessConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1056), eOffloadConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1152), eLoopbackConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1248), eKeywordDetectorConnector);
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 1344), eConnectorCount);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1440,
    a1);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1456,
    a1 + 480);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1472,
    a1 + 960);
  *(_OWORD *)(a1 + 1488) = 0LL;
  *(_QWORD *)(a1 + 1504) = 0LL;
  `eh vector constructor iterator'(
    (void *)(a1 + 1512),
    8uLL,
    5uLL,
    (void (*)(void *))std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>,
    std::forward_list<std::pair<_GUID,bool>>::~forward_list<std::pair<_GUID,bool>>);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1552,
    a1 + 1512);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1 + 1568, a4, v8);
  *(_QWORD *)(a1 + 1584) = a3;
  *(_BYTE *)(a1 + 1592) = 0;
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1616,
    a1 + 1596);
  `eh vector constructor iterator'(
    (void *)(a1 + 1632),
    0x10uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1712,
    a1 + 1632);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1752,
    a1 + 1728);
  `eh vector constructor iterator'(
    (void *)(a1 + 1768),
    0x18uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeMap::CAudioSignalProcessingModeMap,
    (void (*)(void *))CAudioSignalProcessingModeMap::~CAudioSignalProcessingModeMap);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1888,
    a1 + 1768);
  `eh vector constructor iterator'(
    (void *)(a1 + 1904),
    0x10uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    a1 + 1984,
    a1 + 1904);
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  SystemEffectDescriptor::SystemEffectDescriptor((SystemEffectDescriptor *)(a1 + 2016), eHostProcessConnector);
  *(_DWORD *)(a1 + 2112) = 100;
  *(_QWORD *)(a1 + 2120) = a2;
  *(_BYTE *)(a1 + 2128) = 0;
  return a1;
}
