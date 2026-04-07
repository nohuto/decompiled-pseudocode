/*
 * XREFs of ??1_Reallocation_guard@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1800DA720
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800D9974 (--$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@-$vector@UIInspectable@Founda.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x18008C9C4 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 */

void __fastcall std::vector<winrt::Windows::Foundation::IInspectable>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
      *(__int64 **)(a1 + 24),
      *(__int64 **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
  }
}
