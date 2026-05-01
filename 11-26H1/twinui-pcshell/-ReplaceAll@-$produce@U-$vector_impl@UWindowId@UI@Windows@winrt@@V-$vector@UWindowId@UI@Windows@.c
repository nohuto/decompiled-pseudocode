/*
 * XREFs of ?ReplaceAll@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@@Z @ 0x180665EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUWindowId@UI@Windows@winrt@@_K@Z @ 0x180664F0C (--$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        char *a3)
{
  __int64 v3; // r10
  __int64 v4; // rax

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
  v4 = *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30);
  if ( v4 != *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38) )
    *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38) = v4;
  std::vector<winrt::Windows::UI::WindowId>::_Assign_counted_range<winrt::Windows::UI::WindowId const *>(
    (void **)((v3 & -(__int64)(v3 != -40)) + 48),
    a3,
    a2);
  return 0LL;
}
