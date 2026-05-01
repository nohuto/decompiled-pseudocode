/*
 * XREFs of ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800FEC2C
 * Callers:
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1800FEBB4 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18010FC7C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x1802393C4 (-_Change_array@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x18029D75C (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x1803190C8 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 *     _std::vector_Windows::Internal::String_std::allocator_Windows::Internal::String___::_Emplace_reallocate_Windows::Internal::String__::_1_::catch$0 @ 0x1806BA34A (_std--vector_Windows--Internal--String_std--allocator_Windows--Internal--String___--_Emplace_rea.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
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
