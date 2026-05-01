/*
 * XREFs of ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1804FD810
 * Callers:
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1804FE5CC (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804D02AC (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TabletModeViewManager::IsLauncherOrSwitcherVisibleOnThisMonitor(
        TabletModeViewManager *this,
        __int64 a2,
        __int64 a3,
        bool *a4)
{
  char v4; // bl
  __int64 *v5; // rdi
  bool v6; // zf
  IUnknown **v7; // r14
  HRESULT Service; // eax
  int IsLauncherVisibleOnMonitor; // eax
  __int64 *v11; // rdi
  HRESULT v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (__int64 *)((char *)this + 168);
  v6 = *((_QWORD *)this + 21) == 0LL;
  v7 = (IUnknown **)((char *)this + 16);
  LOBYTE(v17) = 0;
  if ( v6 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
    Service = IUnknown_QueryService(
                *v7,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v5);
    if ( Service < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D8,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Service);
  }
  if ( !*v5 )
    goto LABEL_8;
  IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                 *v7,
                                 (struct IUnknown *)*v5,
                                 (struct IImmersiveLauncher *)&v17,
                                 a4);
  if ( IsLauncherVisibleOnMonitor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2DD,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
  v4 = v17;
  if ( !(_BYTE)v17 )
  {
LABEL_8:
    v11 = (__int64 *)((char *)this + 176);
    if ( !*((_QWORD *)this + 22) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
      v12 = IUnknown_QueryService(
              *v7,
              (const GUID *const)&SID_MultitaskingViewVisibilityService,
              &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
              (void **)this + 22);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2E4,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v12);
    }
    v13 = *v11;
    if ( *v11 )
    {
      v17 = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v13 + 24LL))(v13, 11LL, &v17);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2EB,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
          (const char *)(unsigned int)v14);
      return v17 != 0;
    }
  }
  return v4;
}
