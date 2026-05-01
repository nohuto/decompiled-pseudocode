/*
 * XREFs of _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x180600D14
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::InternalResumeRT @ 0x1806028F0 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34_ea_1806028F0.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ABCDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800B3780 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180169E08 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x1801FDAD8 (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1802A23F8 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180600358 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180600358.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator()(__int64 *a1, __int64 a2)
{
  HWND v4; // r14
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int16 *v7; // rax
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64, void **); // rdi
  void **v10; // rax
  int v11; // eax
  const WCHAR *lpFile; // rcx
  IShellItem *psiParent; // [rsp+30h] [rbp-D0h] BYREF
  void *ppv; // [rsp+38h] [rbp-C8h] BYREF
  void *v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v17[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v18[48]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v19[34]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v20; // [rsp+220h] [rbp+120h]
  unsigned __int16 v21[264]; // [rsp+260h] [rbp+160h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)(a1 + 1));
  v19[0] = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  if ( *v20 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v17,
      (struct wil::details::IFailureCallback *)v19,
      (const struct wil::details::StoredCallContextInfo *)(v20 + 10));
  }
  else
  {
    memset(v17, 0, sizeof(v17));
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v18,
      0LL,
      0LL,
      0);
  }
  v4 = (HWND)SHCreateWorkerWindowW(DefWindowProcW, -3LL, 0LL, 0LL, 0LL, 0LL);
  v15[0] = 0LL;
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.hwnd = v4;
  pExecInfo.fMask = 256;
  v6 = *a1;
  if ( *a1 )
  {
    psiParent = 0LL;
    if ( (*(int (__fastcall **)(__int64, IShellItem **))(*(_QWORD *)v6 + 40LL))(v6, &psiParent) >= 0 )
    {
      pExecInfo.hIcon = psiParent;
      pExecInfo.fMask |= 0x200000u;
    }
  }
  if ( (*(_DWORD *)(a2 + 104) & 0x100) != 0
    && SHRegGetStringEx(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\PowerShell\\3",
         L"ConsoleHostShortcutTarget",
         2u,
         v21,
         0x104u) >= 0 )
  {
    v7 = v21;
LABEL_21:
    pExecInfo.lpFile = v7;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a2 + 104) & 0x800) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 104) & 4) != 0 )
      v7 = *(unsigned __int16 **)(a2 + 56);
    else
      v7 = *(unsigned __int16 **)(a2 + 32);
    goto LABEL_21;
  }
  pExecInfo.lpFile = L"wt.exe";
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    1u,
    v5);
  psiParent = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
  if ( SHGetKnownFolderItem(
         &FOLDERID_LocalAppData,
         KF_FLAG_DEFAULT,
         0LL,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&psiParent) >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    if ( SHCreateItemFromRelativeName(
           psiParent,
           L"Microsoft\\WindowsApps\\wt.exe",
           0LL,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           &ppv) >= 0 )
    {
      v8 = ppv;
      v9 = *(__int64 (__fastcall **)(void *, __int64, void **))(*(_QWORD *)ppv + 40LL);
      v10 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(v15);
      v11 = v9(v8, 2147844096LL, v10);
      lpFile = pExecInfo.lpFile;
      if ( v11 >= 0 )
        lpFile = (const WCHAR *)v15[0];
      pExecInfo.lpFile = lpFile;
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&psiParent);
LABEL_22:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    1u,
    v5);
  pExecInfo.lpVerb = *(LPCWSTR *)(a2 + 80);
  pExecInfo.nShow = 10;
  ShellExecuteExW(&pExecInfo);
  if ( v4 )
    DestroyWindow(v4);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v15);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand(v19);
}
