/*
 * XREFs of ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1800FEBB4
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18010FC7C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ??1?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180241E94 (--1-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEAA@XZ.c)
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x18029AEA8 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800FEC2C (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<Windows::Internal::String>::_Tidy(__int64 a1)
{
  Windows::Internal::String *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdx
  const struct std::nothrow_t *v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(Windows::Internal::String **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Windows::Internal::String>>(v2);
    v3 = *(void **)a1;
    v4 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v7 = *(void **)a1;
    v5 = (const struct std::nothrow_t *)(v4 & 0xFFFFFFFFFFFFFFF8uLL);
    v6 = (unsigned __int64)v5;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v5 = (const struct std::nothrow_t *)v6;
      v3 = v7;
    }
    operator delete(v3, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
