/*
 * XREFs of ?Release@?$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEAAKXZ @ 0x1805022C0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_final_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1803334F0 (-subtract_final_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Found.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<GamingFallbackWindow,IInspectable>::Release(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi

  v1 = (_QWORD *)(a1 + 8);
  v2 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_final_reference(a1 + 8);
  if ( !v2 )
  {
    v1[1] = 1LL;
    (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v2;
}
