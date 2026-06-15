/*
 * XREFs of ??$Make@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@12@XZ @ 0x1800F6A0C
 * Callers:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F618C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E360 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIToken@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C133C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIToken@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make<TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token,>(
        _QWORD *a1)
{
  _OWORD *v2; // rbx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IToken>(v2);
    *(_QWORD *)v2 = &TokenManager<CAudioPumpDspResourceTracker>::Token::`vftable';
    *((_QWORD *)v2 + 1) = &TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::`vftable'{for `IToken'};
    *((_QWORD *)v2 + 2) = &TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    *((_QWORD *)v2 + 5) = 0LL;
    std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD *)v2 + 6);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v2;
    v4 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v4);
  return a1;
}
