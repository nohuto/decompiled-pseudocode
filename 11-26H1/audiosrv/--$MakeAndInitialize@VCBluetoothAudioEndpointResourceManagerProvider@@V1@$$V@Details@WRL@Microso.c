/*
 * XREFs of ??$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800F6BA8
 * Callers:
 *     ??$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x1800F6EC4 (--$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvide.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18006285C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@U.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBluetoothAudioEndpointResourceManagerProvider,CBluetoothAudioEndpointResourceManagerProvider,>(
        _QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  int v5; // ebx
  int pvData; // [rsp+60h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+10h] BYREF
  void *v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new[](0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v9 = v3;
  if ( v3 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>((__int64)v3);
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointResourceManagerProvider,IBluetoothResourceArbitrator>::`vftable'{for `IEndpointResourceManagerProvider'};
    v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointResourceManagerProvider,IBluetoothResourceArbitrator>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBluetoothResourceArbitrator>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v4 = &CBluetoothAudioEndpointResourceManagerProvider::`vftable'{for `IEndpointResourceManagerProvider'};
    v4[1] = &CBluetoothAudioEndpointResourceManagerProvider::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBluetoothResourceArbitrator>'};
    v4[3] = 0LL;
    std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(v4 + 4);
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4[8] = 0LL;
    *((_DWORD *)v4 + 18) = 0;
    v4[10] = v4;
    v9 = 0LL;
    v5 = 100;
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxBluetoothDevices",
            0x18u,
            0LL,
            &pvData,
            &pcbData) )
      v5 = pvData;
    *((_DWORD *)v4 + 18) = v5;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *a1 = v4;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v9);
  return v2;
}
