/*
 * XREFs of ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180564300
 * Callers:
 *     ?GetWindowInformation@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x1805642B0 (-GetWindowInformation@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801D036C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@23@XZ @ 0x180563088 (--$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActiv.c)
 *     ??$call@P6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805633D4 (--$call@P6A-AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@AEBUIActivatio.c)
 *     ?DisplayRect@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180564050 (-DisplayRect@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroup.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
struct IUnknownVtbl **__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetWindowInformation(
        __int64 a1,
        struct IUnknownVtbl **a2,
        unsigned int a3)
{
  HWND v3; // rbx
  HWND v6; // r14
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, HWND, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IUnknown v16; // [rsp+20h] [rbp-49h] BYREF
  __int64 v17; // [rsp+28h] [rbp-41h] BYREF
  __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  __int128 v19; // [rsp+38h] [rbp-31h] BYREF
  int v20; // [rsp+48h] [rbp-21h] BYREF
  __int128 v21; // [rsp+50h] [rbp-19h]
  __int128 v22; // [rsp+60h] [rbp-9h] BYREF
  int v23; // [rsp+74h] [rbp+Bh] BYREF
  int v24; // [rsp+78h] [rbp+Fh] BYREF
  int v25; // [rsp+7Ch] [rbp+13h] BYREF
  __int64 *v26; // [rsp+80h] [rbp+17h]
  __int128 v27; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v28; // [rsp+98h] [rbp+2Fh] BYREF

  v3 = (HWND)a3;
  v26 = &qword_18089BE18;
  _InterlockedIncrement64(&qword_18089BE18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>,
      &v16);
    _InterlockedDecrement64(&qword_18089BE18);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BE18);
    *(_QWORD *)&v27 = _lambda_03a15210bdec9bc9667e9262e995253b_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)&v16,
      (void (__fastcall **)(__int64, __int64 *))&v27);
  }
  v6 = v3;
  v17 = 0LL;
  v7 = *(_QWORD *)(a1 + 136);
  v8 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v7 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v17);
  if ( v8(v7, v6, &v17) < 0 || IsIconic(v6) )
  {
    v19 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      (__int64 **)&v16,
      &v19);
    v19 = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::DisplayRect(
      (__int64 **)&v16,
      &v19);
  }
  else
  {
    v27 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 128LL))(v17, &v27);
    winrt::check_hresult(&v23, v9, (__int64)&v20);
    *(float *)&v22 = (float)(int)v27;
    *((float *)&v22 + 1) = (float)SDWORD1(v27);
    *((float *)&v22 + 2) = (float)(DWORD2(v27) - v27);
    *((float *)&v22 + 3) = (float)(HIDWORD(v27) - DWORD1(v27));
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      (__int64 **)&v16,
      &v22);
    v18 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v10 = v17;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 80LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v18);
    v12 = v11(v10, &v18);
    winrt::check_hresult(&v24, v12, (__int64)&v20);
    v28 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 88LL))(v18, &v28);
    winrt::check_hresult(&v25, v13, (__int64)&v20);
    *(float *)&v19 = (float)(int)v28;
    *((float *)&v19 + 1) = (float)SDWORD1(v28);
    *((float *)&v19 + 2) = (float)(DWORD2(v28) - v28);
    *((float *)&v19 + 3) = (float)(HIDWORD(v28) - DWORD1(v28));
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::DisplayRect(
      (__int64 **)&v16,
      &v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  }
  lpVtbl = v16.lpVtbl;
  v16.lpVtbl = 0LL;
  *a2 = lpVtbl;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  return a2;
}
