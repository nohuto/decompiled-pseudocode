/*
 * XREFs of ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@UEAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x1806A9530
 * Callers:
 *     ?GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@WBA@EAA?AURect@Foundation@Windows@winrt@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@45@@Z @ 0x1806A96A0 (-GetScreenCoordinatesForItem@XamlSnapAssistViewHost@@WBA@EAA-AURect@Foundation@Windows@winrt@@AE.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?Window@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805B52A4 (-Window@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorer.c)
 *     ??$to_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x1806A88CC (--$to_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItem@Multi.c)
 *     ?GetItemLocationForAnimation@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVRect@Foundation@Windows@@PE$AAUISwitchItem@Multitasking@4Internal@8@@Z @ 0x1806A94F4 (-GetItemLocationForAnimation@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall XamlSnapAssistViewHost::GetScreenCoordinatesForItem(
        __int64 a1,
        float *a2,
        __int64 (__fastcall ****a3)(_QWORD, __int64, __int64 *))
{
  float *v4; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  HWND v9; // rax
  float y; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  const char *v13; // r9
  float v15; // [rsp+20h] [rbp-68h] BYREF
  float v16; // [rsp+24h] [rbp-64h]
  float v17; // [rsp+28h] [rbp-60h]
  float v18; // [rsp+2Ch] [rbp-5Ch]
  float *v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  struct tagPOINT Points; // [rsp+48h] [rbp-40h] BYREF
  int v23; // [rsp+50h] [rbp-38h]
  int v24; // [rsp+54h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a2;
  v19 = a2;
  *(_OWORD *)a2 = 0LL;
  try
  {
    v6 = __abi_winrt_cast_to(
           0,
           *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 152),
           (__int64)&_uuidof__AVSnapAssist_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v7 = __abi_winrt_ptr_ctor(v6);
    v20 = v7;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
    v8 = to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(a3);
    v21 = v8;
    WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistPublicNonVirtuals::GetItemLocationForAnimation(
      v7,
      (__int64)&v15,
      v8);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
    Points.x = (int)v15;
    Points.y = (int)v16;
    v23 = (int)(float)(v15 + v17);
    v24 = (int)(float)(v16 + v18);
    v9 = (HWND)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::Window((__int64 *)(a1 + 160));
    MapWindowPoints(v9, 0LL, &Points, 2u);
    y = (float)Points.y;
    v11 = (float)(v23 - Points.x);
    v12 = (float)(v24 - Points.y);
    *v4 = (float)Points.x;
    v4[1] = y;
    v4[2] = v11;
    v4[3] = v12;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1B7,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      v13);
    return v19;
  }
  return v4;
}
