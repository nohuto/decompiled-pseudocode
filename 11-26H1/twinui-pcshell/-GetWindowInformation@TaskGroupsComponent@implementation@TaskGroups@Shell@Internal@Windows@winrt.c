/*
 * XREFs of ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180588578
 * Callers:
 *     ?GetWindowInformation@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180588520 (-GetWindowInformation@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801C6C44 (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@23@XZ @ 0x1805872B8 (--$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x180587618 (--$call@P6A-AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 *     ?DisplayRect@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1805882C0 (-DisplayRect@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroup.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
struct IUnknownVtbl **__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetWindowInformation(
        __int64 a1,
        struct IUnknownVtbl **a2,
        unsigned int a3)
{
  HWND v3; // rbx
  __int64 v6; // rsi
  int (__fastcall *v7)(__int64, HWND, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD); // rdi
  int v11; // eax
  int v12; // eax
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IUnknown v15; // [rsp+20h] [rbp-29h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v16)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+28h] [rbp-21h] BYREF
  _BYTE v17[24]; // [rsp+30h] [rbp-19h] BYREF
  int v18; // [rsp+48h] [rbp-1h] BYREF
  __int64 v19[2]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v20; // [rsp+60h] [rbp+17h] BYREF
  __int128 v21; // [rsp+70h] [rbp+27h] BYREF

  v3 = (HWND)a3;
  v16 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DC4F8;
  _InterlockedIncrement64(&qword_1808DC4F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>,
      &v15);
    _InterlockedDecrement64(&qword_1808DC4F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC4F8);
    v16 = _lambda_03a15210bdec9bc9667e9262e995253b_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)&v15,
      (void (__fastcall **)(__int64, __int64 *))&v16);
  }
  v19[0] = 0LL;
  v6 = *(_QWORD *)(a1 + 136);
  v7 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v19);
  if ( v7(v6, v3, v19) < 0 || IsIconic(v3) )
  {
    *(_OWORD *)v17 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      (__int64 **)&v15,
      (__int128 *)v17);
    *(_OWORD *)v17 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::DisplayRect(
      (__int64 **)&v15,
      (__int128 *)v17);
  }
  else
  {
    v20 = 0LL;
    *(_DWORD *)v17 = 0;
    *(_OWORD *)&v17[8] = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19[0] + 128LL))(v19[0], &v20);
    winrt::check_hresult(&v18, v8, (__int64)v17);
    *(float *)v17 = (float)(int)v20;
    *(float *)&v17[4] = (float)SDWORD1(v20);
    *(float *)&v17[8] = (float)(DWORD2(v20) - v20);
    *(float *)&v17[12] = (float)(HIDWORD(v20) - DWORD1(v20));
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      (__int64 **)&v15,
      (__int128 *)v17);
    v16 = 0LL;
    *(_DWORD *)v17 = 0;
    *(_OWORD *)&v17[8] = 0LL;
    v9 = v19[0];
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19[0] + 80LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v16);
    v11 = v10(v9, &v16);
    winrt::check_hresult(&v18, v11, (__int64)v17);
    v21 = 0LL;
    *(_DWORD *)v17 = 0;
    *(_OWORD *)&v17[8] = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v16 + 88LL))(v16, &v21);
    winrt::check_hresult(&v18, v12, (__int64)v17);
    *(float *)v17 = (float)(int)v21;
    *(float *)&v17[4] = (float)SDWORD1(v21);
    *(float *)&v17[8] = (float)(DWORD2(v21) - v21);
    *(float *)&v17[12] = (float)(HIDWORD(v21) - DWORD1(v21));
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::DisplayRect(
      (__int64 **)&v15,
      (__int128 *)v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  }
  lpVtbl = v15.lpVtbl;
  v15.lpVtbl = 0LL;
  *a2 = lpVtbl;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return a2;
}
