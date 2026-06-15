/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005A170
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x180132AE4 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001E374 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@.c)
 *     ??$?0_K@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@H$0?0@gsl@@QEAA@PEAH_K@Z @ 0x180059FD0 (--$-0_K@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@H$0-0@gsl@@QEAA@PEAH_K@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x1800AD2FC (--0CSpatialProperties@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800B2510 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IEndpointCharacteristics>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IEndpointCharacteristics>::`vftable'{for `IEndpointCharacteristics'};
  *((_QWORD *)this + 2) = &CEndpointCharacteristics::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 1) = &CEndpointCharacteristics::`vftable'{for `IEndpointCharacteristics'};
  *((_QWORD *)this + 2) = &CEndpointCharacteristics::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    (CEndpointCharacteristics *)((char *)this + 120),
    (__int64)this + 96);
  `eh vector constructor iterator'(
    (char *)this + 136,
    0x10uLL,
    5uLL,
    (void (*)(void *))CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll);
  gsl::span<int,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
    (CEndpointCharacteristics *)((char *)this + 216),
    (__int64)this + 136);
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 8, 0, 0);
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *(GUID *)((char *)this + 424) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 55) = 1LL;
  CSpatialProperties::CSpatialProperties((CEndpointCharacteristics *)((char *)this + 448));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 0x2000), 0, 0);
  *((_DWORD *)this + 2058) = 0;
  *((_BYTE *)this + 8236) = 1;
  *((_QWORD *)this + 1030) = 0LL;
  *((_DWORD *)this + 2062) = 0;
  *(GUID *)((char *)this + 8252) = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)((char *)this + 8268) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 1036) = 0LL;
  *(_WORD *)((char *)this + 8297) = 0;
  return this;
}
