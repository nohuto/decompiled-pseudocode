/*
 * XREFs of ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1390
 * Callers:
 *     ?ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A3670 (-ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?DismissAnimated@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x1801B6B08 (-DismissAnimated@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@.c)
 *     ?PrepareDismissAnimation@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXXZ @ 0x1802AC380 (-PrepareDismissAnimation@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Composab.c)
 *     wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x1802BEB84 (wil--details--ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___--_ScopeExitFn__lambda_85c2.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804AEF10 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_d0a1935d0729a9f12d8e79c8432e6d28___ @ 0x18069F980 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_18069F980.c)
 *     ??0?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTaskViewHost@@@Z @ 0x18069FDA8 (--0-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTask.c)
 *     ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1806A0778 (--1-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlGamingTaskViewHost::DismissViewAnimated(XamlGamingTaskViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  _QWORD *v3; // r9
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rsi
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rsi
  volatile int *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  LPCRITICAL_SECTION v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile int *v17; // [rsp+60h] [rbp+8h] BYREF
  volatile int *v18; // [rsp+68h] [rbp+10h] BYREF
  void *v19; // [rsp+70h] [rbp+18h]
  __int64 (__fastcall ***v20)(_QWORD, void *, __int64 *); // [rsp+78h] [rbp+20h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v14 = v2;
  try
  {
    v15 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    if ( *((_BYTE *)this + 112) )
    {
      wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
        &v18,
        (volatile int *)this);
      v19 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
        &v17,
        v18);
      v4 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_d0a1935d0729a9f12d8e79c8432e6d28___(
             v3,
             &v17);
      v19 = v4;
      v5 = __abi_winrt_ptr_ctor((__int64)v4);
      v19 = (void *)v5;
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v4);
      v6 = __abi_winrt_ptr_ctor(v5);
      v12 = __abi_winrt_ptr_ctor(v6);
      v13 = 1;
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
      v7 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_to(
                                                                  0,
                                                                  *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                                  + 25),
                                                                  (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
      v20 = v7;
      _PrepareDismissAnimation__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXXZ(v7);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
      v8 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_to(
                                                                  0,
                                                                  *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                                  + 25),
                                                                  (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
      v20 = v8;
      _DismissAnimated__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXPE_AAVAnimationCompletedEventHandler_2345__Z(
        v8,
        v5);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v8);
      *((_BYTE *)this + 864) = 1;
      v13 = 0;
      wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___((__int64)&v12);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
      wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
        (__int64 *)&v18,
        v9);
    }
    else
    {
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)this);
    }
    CThreadUseDetector::~CThreadUseDetector(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x131,
                     (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
                     v10);
    return (unsigned int)v17;
  }
  return result;
}
