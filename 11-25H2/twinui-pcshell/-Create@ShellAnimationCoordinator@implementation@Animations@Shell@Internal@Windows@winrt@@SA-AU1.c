/*
 * XREFs of ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801D1B54
 * Callers:
 *     ??0TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802BA8BC (--0TouchEdgeGestureProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??0?$producers_base@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@V?$tuple@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1801D1BE4 (--0-$producers_base@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@.c)
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1802AA138 (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 *     ??$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUShellAnimationCoordinator@Animations@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x1802AA1D0 (--$as@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@U1implementation@23456.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::Create(
        _QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v2 = operator new(0x20uLL);
  v4 = v2;
  *(_OWORD *)v2 = 0LL;
  *((_OWORD *)v2 + 1) = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,std::tuple<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>>::producers_base<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,std::tuple<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>>(v2 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v2[1] = 1LL;
  v2[3] = 0LL;
  *v2 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::`vftable';
  v4 = v2;
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::InitializeEdgyRelationshipManager((winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *)v2);
  winrt::impl::as<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,0>(
    a1,
    v2);
  winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v4);
  return a1;
}
