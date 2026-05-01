/*
 * XREFs of ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x180093894
 * Callers:
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x180093630 (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ??1?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1802CDE98 (--1-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@Wind.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1800FEC64 (--$_Destroy_range@V-$allocator@U-$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU-$pai.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
