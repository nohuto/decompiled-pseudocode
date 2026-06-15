/*
 * XREFs of ?push_front@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800AB440
 * Callers:
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18006C738 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?RegisterForAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800AB3D0 (-RegisterForAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJAEA.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800BF148 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::forward_list<Microsoft::WRL::WeakRef>::push_front(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax

  v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  v5 = *a2;
  v4[1] = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  result = *a1;
  *v4 = *a1;
  *a1 = (__int64)v4;
  return result;
}
