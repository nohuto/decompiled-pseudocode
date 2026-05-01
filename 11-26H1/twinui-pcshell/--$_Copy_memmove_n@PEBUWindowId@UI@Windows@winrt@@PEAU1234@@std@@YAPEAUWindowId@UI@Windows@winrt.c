/*
 * XREFs of ??$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1805A5BBC
 * Callers:
 *     ??$_Assign_counted_range@PEA_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z @ 0x1805A59D8 (--$_Assign_counted_range@PEA_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z.c)
 *     ??$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUWindowId@UI@Windows@winrt@@_K@Z @ 0x180664F0C (--$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-.c)
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@PEAI@Z @ 0x180665860 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vecto.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UWindowId@UI@Windows@winrt@@@2@@Z @ 0x180665918 (-GetMany@-$vector_view_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Wi.c)
 * Callees:
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<winrt::Windows::UI::WindowId const *,winrt::Windows::UI::WindowId *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = 8 * a2;
  memmove_0(a3, Src, 8 * a2);
  return (__int64)a3 + v4;
}
