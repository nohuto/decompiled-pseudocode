/*
 * XREFs of ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0_N1@Z @ 0x1805B356C
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        ...)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+48h] [rbp-20h] BYREF
  __int128 v10; // [rsp+50h] [rbp-18h]
  _QWORD *v11; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v11 = a2;
  v4 = *a1;
  v11 = 0LL;
  v9 = 0;
  v6 = *a3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _BYTE, _QWORD **))(*(_QWORD *)v4 + 152LL))(
         v4,
         v6,
         *a4,
         0LL,
         0,
         &v11);
  winrt::check_hresult((int *)va, v7, (__int64)&v9);
  *a2 = v11;
  return a2;
}
