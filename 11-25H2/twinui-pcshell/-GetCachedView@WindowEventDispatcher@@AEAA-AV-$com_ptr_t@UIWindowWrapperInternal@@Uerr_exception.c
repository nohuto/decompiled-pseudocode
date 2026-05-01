/*
 * XREFs of ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18040E018
 * Callers:
 *     _lambda_c58ff99a55602bd66418327c438cfc37_::operator() @ 0x1804089E4 (_lambda_c58ff99a55602bd66418327c438cfc37_--operator().c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180409880 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040E0A0 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@U_ea_18040E0A0.c)
 *     ?GetViewFromHwnd@WindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z @ 0x18040F110 (-GetViewFromHwnd@WindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1804101B0 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18041391C (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180413BE8 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x180413F00 (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 *     ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804150F0 (-WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Interna.c)
 * Callees:
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1803542F8 (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::GetCachedView(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi

  *a2 = 0LL;
  v5 = *(__int64 **)(a1 + 368);
  v6 = *(__int64 **)(a1 + 376);
  while ( v5 != v6 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v5 + 288LL))(*v5) == a3 )
    {
      wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a2, v5);
      return a2;
    }
    ++v5;
  }
  return a2;
}
