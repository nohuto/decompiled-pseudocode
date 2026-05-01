/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18068C6A0
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18068C7F0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180108940 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18029C0FC (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029C13C (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18068C5A0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18068E494 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18068E8FC (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18068EBF0 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z @ 0x18068FFCC (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180693F98 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  enum _TABLETMODESTATE *v7; // rdx
  TabletModeHelpers *v8; // rcx
  enum _TABLETMODESTATE *v9; // rdx
  TabletModeHelpers *v10; // rcx
  __int64 v11; // rcx
  char IsTabletMode; // bp
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  XamlSwitcherTelemetry *v21; // rcx

  v5 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(a3);
  v6 = 3;
  if ( v5 != 1501 && v5 != 1502 )
  {
    if ( v5 == 1505 || v5 == 1506 )
    {
LABEL_13:
      XamlAllUpViewController::HandlePinningCommand(a1, a2, v5);
      goto LABEL_15;
    }
    if ( v5 != 1507 )
    {
      if ( v5 == 1508 )
      {
        _CloseSwitchItem__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
          a1,
          a2);
        IsTabletMode = TabletModeHelpers::IsTabletMode(v10, v9);
        goto LABEL_12;
      }
      if ( v5 != 1509 && v5 != 1510 )
      {
        if ( v5 != 1515 )
        {
          XamlAllUpViewController::HandleMoveToCommand(a1, a2, v5);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
    }
  }
  XamlAllUpViewController::HandleSnappingCommands(a1, a2, v5);
LABEL_15:
  IsTabletMode = TabletModeHelpers::IsTabletMode(v8, v7);
  v13 = v5 - 1501;
  if ( !v13 )
  {
    v6 = 4;
    goto LABEL_30;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v6 = 5;
    goto LABEL_30;
  }
  v15 = v14 - 3;
  if ( !v15 )
  {
    v6 = 7;
    goto LABEL_30;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v6 = 8;
    goto LABEL_30;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v6 = 6;
    goto LABEL_30;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
LABEL_12:
    v6 = 1;
    goto LABEL_30;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 != 1 )
      v6 = 9;
  }
  else
  {
    v6 = 2;
  }
LABEL_30:
  if ( XamlSwitcherTelemetry::IsEnabled(v11) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v20,
      (void (__cdecl *)())_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(v21, v6, IsTabletMode);
  }
  return __abi_winrt_ptr_assign((_QWORD *)(a1 + 208), 0LL);
}
