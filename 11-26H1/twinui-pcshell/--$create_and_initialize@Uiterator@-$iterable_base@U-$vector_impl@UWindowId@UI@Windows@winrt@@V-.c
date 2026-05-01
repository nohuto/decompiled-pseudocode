/*
 * XREFs of ??$create_and_initialize@Uiterator@?$iterable_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@PEAU?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@3@@impl@winrt@@YAPEAUiterator@?$iterable_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@1@$$QEAPEAU?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@01@@Z @ 0x1806650A8
 * Callers:
 *     ?First@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180665620 (-First@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@winrt.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@Uiterator@?$iterable_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@V?$tuple@U?$IIterator@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180665394 (--0-$producers_base@Uiterator@-$iterable_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vect.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::iterator,winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base> *>(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r8
  _QWORD *v6; // r9

  operator new(0x38uLL);
  v2 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)(*(_QWORD *)a1 + 40LL));
  *(_DWORD *)(v3 + 24) = v2;
  winrt::impl::producers_base<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::iterator,std::tuple<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::UI::WindowId>>>::producers_base<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::iterator,std::tuple<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::UI::WindowId>>>(v3 + 16);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v4 + 8, 1LL);
  *v6 = &winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::iterator::`vftable';
  v6[4] = 0LL;
  v6[5] = *(_QWORD *)(v5 + 48);
  v6[6] = *(_QWORD *)(v5 + 56);
  if ( v5 )
  {
    v6[4] = v5;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v5);
  }
  *v6 = &winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId,winrt::impl::collection_version>::iterator::`vftable';
  return v6;
}
