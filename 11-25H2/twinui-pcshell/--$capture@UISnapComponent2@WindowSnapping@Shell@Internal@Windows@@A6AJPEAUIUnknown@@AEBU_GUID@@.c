/*
 * XREFs of ??$capture@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU7@@winrt@@YA?AU?$com_ptr@UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180594760
 * Callers:
 *     _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::operator() @ 0x180595970 (_lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_--operator().c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x180596440 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_180596440.c)
 *     winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x180596F60 (winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation_ea_180596F60.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *winrt::capture<Windows::Internal::Shell::WindowSnapping::ISnapComponent2,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64, GUID *, void *, __int64 *),
        __int64 *a3,
        ...)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v9 = 0LL;
  v7 = 0;
  v4 = *a3;
  v8 = 0LL;
  v5 = a2(
         v4,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &winrt::impl::guid_v<Windows::Internal::Shell::WindowSnapping::ISnapComponent2>,
         &v9);
  winrt::check_hresult((int *)va, v5, (__int64)&v7);
  *a1 = v9;
  return a1;
}
