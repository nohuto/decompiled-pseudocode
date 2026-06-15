/*
 * XREFs of std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_a405cf70824d0724669728a8122b89b2___ @ 0x1800BEAE4
 * Callers:
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18006C738 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800BF148 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1_Flist_node_remove_op@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18007BC44 (--1_Flist_node_remove_op@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Micros.c)
 */

void __fastcall std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_a405cf70824d0724669728a8122b89b2___(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 **v2; // rdi
  bool v3; // si
  __int64 *v4; // rcx
  __int64 **v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v7 = &v6;
  v2 = a1;
  v5 = a1;
  v6 = 0LL;
  while ( v1 )
  {
    v8 = 0LL;
    v3 = (int)Microsoft::WRL::WeakRef::As<IInspectable>(v1 + 1, &v8) < 0 || !v8;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v8);
    if ( v3 )
    {
      v4 = *v2;
      v1 = (__int64 *)**v2;
      *v4 = 0LL;
      *v2 = v1;
      *v7 = (__int64)v4;
      v7 = v4;
    }
    else
    {
      v2 = (__int64 **)v1;
      v1 = (__int64 *)*v1;
    }
  }
  std::forward_list<Microsoft::WRL::WeakRef>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v5);
}
