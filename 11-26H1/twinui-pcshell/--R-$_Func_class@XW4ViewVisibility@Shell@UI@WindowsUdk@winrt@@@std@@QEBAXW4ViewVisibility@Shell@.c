/*
 * XREFs of ??R?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802BF7A8
 * Callers:
 *     ?MultitaskingViewShown@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801F9030 (-MultitaskingViewShown@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?MultitaskingViewDismissed@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180211440 (-MultitaskingViewDismissed@TaskViewViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@.c)
 *     ?MultitaskingViewDismissed@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18021CFB0 (-MultitaskingViewDismissed@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING.c)
 *     ?MultitaskingViewShown@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802243E0 (-MultitaskingViewShown@VirtualDestopSwitcherViewChangeNotificationProxy@@UEAAJW4MULTITASKING_VIE.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x1805967D0 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     _lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const_&_ @ 0x1805970D8 (_lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_--operator()_winrt--Windows--Foundation--IInspectable_c.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::operator()(
        __int64 a1,
        int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 16LL))(v2, &v4);
}
