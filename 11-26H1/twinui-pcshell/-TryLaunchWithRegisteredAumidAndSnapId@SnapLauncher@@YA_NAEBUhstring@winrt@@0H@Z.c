/*
 * XREFs of ?TryLaunchWithRegisteredAumidAndSnapId@SnapLauncher@@YA_NAEBUhstring@winrt@@0H@Z @ 0x1805C304C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805BA650 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$as@UIServiceProvider@@@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?A_PXZ @ 0x1805C2C9C (--$as@UIServiceProvider@@@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-A_PXZ.c)
 *     ??$create_and_initialize@VSnapWindowProvider@SnapLauncher@@AEAH@impl@winrt@@YAPEAVSnapWindowProvider@SnapLauncher@@AEAH@Z @ 0x1805C2D0C (--$create_and_initialize@VSnapWindowProvider@SnapLauncher@@AEAH@impl@winrt@@YAPEAVSnapWindowProv.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall SnapLauncher::TryLaunchWithRegisteredAumidAndSnapId(
        SnapLauncher *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  const WCHAR *v4; // rax
  _QWORD *v5; // rbx
  bool v7; // di
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp-31h] BYREF
  __int64 v10[2]; // [rsp+48h] [rbp-29h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+58h] [rbp-19h] BYREF
  int v12; // [rsp+E8h] [rbp+77h] BYREF
  IUnknown *punk; // [rsp+F0h] [rbp+7Fh] BYREF

  v12 = (int)a3;
  punk = 0LL;
  v4 = winrt::hstring::c_str(this);
  if ( SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0,
         v4,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&punk) < 0 )
  {
LABEL_5:
    if ( punk )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&punk);
    return 0;
  }
  v5 = winrt::impl::create_and_initialize<SnapLauncher::SnapWindowProvider,int &>(&v12);
  v9 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))v5;
  ppidl = 0LL;
  if ( SHGetIDListFromObject(punk, &ppidl) < 0 )
  {
    if ( v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v9);
    goto LABEL_5;
  }
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.fMask = 134217996;
  pExecInfo.nShow = 1;
  pExecInfo.lpIDList = ppidl;
  pExecInfo.lpParameters = winrt::hstring::c_str(a2);
  pExecInfo.hInstApp = (HINSTANCE)*winrt::com_ptr<IObjectWithSite>::as<IServiceProvider>(&v9, v10);
  if ( v10[0] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v10);
  v7 = ShellExecuteExW(&pExecInfo);
  CoTaskMemFree(ppidl);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v9);
  if ( punk )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&punk);
  return v7;
}
