/*
 * XREFs of ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801EA4E4
 * Callers:
 *     ??0TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802B18F4 (--0TouchEdgeGestureProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@V?$tuple@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1801EA57C (--0-$producers_base@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1802A2A00 (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 *     ??$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUShellAnimationCoordinator@Animations@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x1802A2A9C (--$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::Create(
        _OWORD *a1)
{
  _OWORD *v2; // rbx
  _OWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v2 = operator new(0x20uLL);
  v4 = v2;
  *v2 = 0LL;
  v2[1] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,std::tuple<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>>::producers_base<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,std::tuple<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>>(v2 + 1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)v2 + 8, 1LL);
  *((_QWORD *)v2 + 3) = 0LL;
  *(_QWORD *)v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::`vftable';
  v4 = v2;
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::InitializeEdgyRelationshipManager((winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *)v2);
  winrt::impl::as<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,0>(
    a1,
    v2);
  winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v4);
  return a1;
}
