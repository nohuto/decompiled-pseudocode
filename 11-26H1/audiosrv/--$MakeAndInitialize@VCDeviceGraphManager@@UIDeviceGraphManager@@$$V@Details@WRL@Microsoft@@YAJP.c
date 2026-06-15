/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x1800F87E8
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800FE5A0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001E374 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpo.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800F8748 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphMana.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager,>(void *a1)
{
  void *v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // edi
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  g_DeviceGraphManager = 0LL;
  v1 = operator new[](0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = (__int64)v1;
  v5 = v1;
  if ( v1 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>((__int64)v1);
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphManager>::`vftable';
    *(_QWORD *)(v2 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphManager>::`vftable'{for `IDeviceGraphManager'};
    *(_QWORD *)(v2 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v2 = &CDeviceGraphManager::`vftable';
    *(_QWORD *)(v2 + 8) = &CDeviceGraphManager::`vftable'{for `IDeviceGraphManager'};
    *(_QWORD *)(v2 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 40), 0, 0);
    v5 = 0LL;
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>>(
           v2,
           &GUID_91ceb15a_f502_402a_a6f1_99b102f2adab,
           &g_DeviceGraphManager);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioRenderEndpointChangeDelegator>::Release(v2);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v5);
  return v3;
}
