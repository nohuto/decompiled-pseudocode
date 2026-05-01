/*
 * XREFs of ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800F09A4
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18004E77C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1800F07C4 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x18022B194 (-_Change_array@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1802C043C (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180310728 (--1_Reallocation_guard@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x180315368 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Windows::Internal::String>>(
        Windows::Internal::String *this,
        Windows::Internal::String *a2)
{
  Windows::Internal::String *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Windows::Internal::String::~String(v3);
      v3 = (Windows::Internal::String *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
}
