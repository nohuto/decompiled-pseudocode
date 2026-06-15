/*
 * XREFs of ??$MakeAndInitialize@VAudioModeEffectsWatcher@@UIAudioModeEffectsWatcher@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioModeEffectsWatcher@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAU_GUID@@@Z @ 0x18006C9F8
 * Callers:
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18006C738 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 * Callees:
 *     ?RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@@Z @ 0x18003FC38 (-RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_G.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpo.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioModeEffectsWatcher@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800C00B0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioModeEffect.c)
 *     ??0AudioModeEffectsWatcher@@QEAA@XZ @ 0x1800C02C8 (--0AudioModeEffectsWatcher@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioModeEffectsWatcher,IAudioModeEffectsWatcher,EndpointCharacteristicsDescriptor * &,_GUID &>(
        _QWORD *a1,
        struct EndpointCharacteristicsDescriptor **a2,
        struct _GUID *a3)
{
  AudioModeEffectsWatcher *v6; // rax
  AudioModeEffectsWatcher *v8; // rbx
  int v9; // edi
  struct _GUID v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  AudioModeEffectsWatcher *v12; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (AudioModeEffectsWatcher *)operator new[](0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v8 = AudioModeEffectsWatcher::AudioModeEffectsWatcher(v6);
  v12 = v8;
  v11 = 0LL;
  v10 = *a3;
  v9 = AudioModeEffectsWatcher::RuntimeClassInitialize(v8, *a2, &v10);
  if ( v9 >= 0 )
    v9 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>>(
           v8,
           &GUID_cf7140b3_9165_4973_a232_739191a0735a,
           a1);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioRenderEndpointChangeDelegator>::Release((__int64)v8);
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
  return (unsigned int)v9;
}
