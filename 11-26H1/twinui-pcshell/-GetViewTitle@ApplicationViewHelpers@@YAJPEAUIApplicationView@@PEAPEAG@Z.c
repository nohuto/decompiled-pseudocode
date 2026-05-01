/*
 * XREFs of ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744
 * Callers:
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180188EA0 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x1804BD994 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18053BC40 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z @ 0x18053BDB0 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180541BF0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x180549DA0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x1805B0564 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     ?RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z @ 0x1805B0750 (-RaiseUiaNotificationForWindowArrangement@HotkeyHandler@@AEAAXPEAUHWND__@@I@Z.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BEF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1806B53E8 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x1801F1088 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewTitle(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  __int64 (__fastcall **v3)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int (__fastcall *v6)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rcx
  unsigned __int16 *v16; // rdx
  char *v17; // rax
  unsigned __int16 v18; // r8
  __int64 (__fastcall **v19)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v20)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, struct IImmersiveApplication **); // rdi
  int NormalDisplayNameWithTitleSafe; // eax
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v27; // rdx
  int v28[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct IImmersiveApplication *v29; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pString[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v3 = *this;
  v30 = 0LL;
  v6 = (int (__fastcall *)(ApplicationViewHelpers *, GUID *, __int64 *))*v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  if ( v6((ApplicationViewHelpers *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v30) < 0 )
  {
    v19 = *this;
    *(_QWORD *)v28 = 0LL;
    v20 = *v19;
    v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v28);
    v22 = v20((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v21);
    v8 = v22;
    if ( v22 >= 0 )
    {
      v24 = *(_QWORD *)v28;
      v29 = 0LL;
      v25 = *(__int64 (__fastcall **)(__int64, struct IImmersiveApplication **))(**(_QWORD **)v28 + 24LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
      NormalDisplayNameWithTitleSafe = v25(v24, &v29);
      v8 = NormalDisplayNameWithTitleSafe;
      if ( NormalDisplayNameWithTitleSafe < 0 )
      {
        v23 = 39LL;
      }
      else
      {
        NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(v29, v27, a2);
        v8 = NormalDisplayNameWithTitleSafe;
        if ( NormalDisplayNameWithTitleSafe >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
LABEL_23:
          v8 = 0;
          goto LABEL_9;
        }
        v23 = 41LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)NormalDisplayNameWithTitleSafe);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)v22);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
    goto LABEL_9;
  }
  hWnd = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v30 + 24LL))(v30, &hWnd);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 23LL;
  }
  else
  {
    InternalGetWindowText(hWnd, pString, 260);
    v9 = -1LL;
    do
      ++v9;
    while ( pString[v9] );
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 && (*(_QWORD *)v28 = 0LL, is_mul_ok(v10, 2uLL)) )
    {
      v14 = (unsigned __int16 *)CoTaskMemAlloc(2 * v10);
      v15 = v14;
      if ( v14 )
      {
        *v14 = 0;
        if ( v9 != -1LL )
        {
          if ( v10 <= 0x7FFFFFFF && v9 <= 0x7FFFFFFE )
          {
            v16 = v14;
            v17 = (char *)((char *)pString - (char *)v14);
            do
            {
              if ( !v9 )
                break;
              v18 = *(_WORD *)&v17[(_QWORD)v16];
              if ( !v18 )
                break;
              *v16 = v18;
              --v9;
              ++v16;
              --v10;
            }
            while ( v10 );
            v14 = v16 - 1;
            if ( v10 )
              v14 = v16;
          }
          *v14 = 0;
        }
        *a2 = v15;
        goto LABEL_23;
      }
      v8 = -2147024882;
    }
    else
    {
      v8 = -2147024362;
    }
    v11 = v8;
    v12 = 29LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
    (const char *)v11);
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  return v8;
}
