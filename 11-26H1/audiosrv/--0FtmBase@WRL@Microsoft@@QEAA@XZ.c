/*
 * XREFs of ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003DC30
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UISpatialAudioEncoderProperties2@@UISpatialAudioEncoderProperties@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003C360 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UISpatialAudioEncod.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioEncoderPropertiesFactory@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003D138 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioEncoderPropertiesFactory.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18003D198 (Create_SpatialAudioDeviceStateReader.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003D84C (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioPositionCalc @ 0x18003DA84 (Create_SpatialAudioPositionCalc.c)
 *     ??0SpatialAudioDevicePropertyWriter@@QEAA@XZ @ 0x18012F920 (--0SpatialAudioDevicePropertyWriter@@QEAA@XZ.c)
 *     ??0SpatialAudioMetadataDictionary@@QEAA@XZ @ 0x180130F9C (--0SpatialAudioMetadataDictionary@@QEAA@XZ.c)
 *     ??0CExclusiveModeListener@@QEAA@XZ @ 0x180140578 (--0CExclusiveModeListener@@QEAA@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_a11a470e7686d624c84238f12cb38e5c_@@$0?0PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplayWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVHolographicDisplay@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@234@@234@@Foundation@Windows@@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_a11a470e7686d624c84238f12cb38e5c_@@@Z @ 0x180150974 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHa.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_845333a8787d1c1be8cc0a92f929247d___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_845333a8787d1c1be8cc0a92f929247d___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___ @ 0x180154884 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180154884.c)
 *     ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x18015FCE4 (--0SpatialAudioDeviceStateWriter@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
Microsoft::WRL::FtmBase *__fastcall Microsoft::WRL::FtmBase::FtmBase(Microsoft::WRL::FtmBase *this)
{
  LPUNKNOWN v2; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  __int64 v4; // rcx
  LPUNKNOWN v5; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::FtmBase::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  ppunkMarshal = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppunkMarshal);
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v2 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      *((_QWORD *)this + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))QueryInterface)(
      v2,
      &GUID_00000003_0000_0000_c000_000000000046,
      (char *)this + 24);
  }
  v5 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v5->lpVtbl->Release)(v5);
  }
  return this;
}
