/*
 * XREFs of ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067A8B0
 * Callers:
 *     ?ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067C860 (-ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801AAFC0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?DismissAnimated@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x1801BE458 (-DismissAnimated@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@.c)
 *     ?PrepareDismissAnimation@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXXZ @ 0x1802B5140 (-PrepareDismissAnimation@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Composab.c)
 *     wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___ @ 0x1802C7B8C (wil--details--ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___--_ScopeExitFn__lambda_85c2.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18049DBE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_382bf80ec225943cc46d0801556c31b2___ @ 0x180678E70 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_180678E70.c)
 *     ??0?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTaskViewHost@@@Z @ 0x18067928C (--0-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVXamlGamingTask.c)
 *     ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180679C20 (--1-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlGamingTaskViewHost::DismissViewAnimated(XamlGamingTaskViewHost *this)
{
  _QWORD *v2; // r9
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, void *, __int64 *); // rbx
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rbx
  volatile int *v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]
  signed __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  volatile int *v14; // [rsp+70h] [rbp+28h] BYREF
  volatile int *v15; // [rsp+78h] [rbp+30h] BYREF
  void *v16; // [rsp+80h] [rbp+38h]
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+88h] [rbp+40h]

  v12 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  if ( *((_BYTE *)this + 112) )
  {
    wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
      &v15,
      (volatile int *)this);
    v16 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
      &v14,
      v15);
    v3 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_382bf80ec225943cc46d0801556c31b2___(
           v2,
           &v14);
    v16 = v3;
    v4 = __abi_winrt_ptr_ctor((__int64)v3);
    v16 = (void *)v4;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v3);
    v5 = __abi_winrt_ptr_ctor(v4);
    v10 = __abi_winrt_ptr_ctor(v5);
    v11 = 1;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
    v6 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_to(
                                                                0,
                                                                *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                                + 25),
                                                                (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v17 = v6;
    _PrepareDismissAnimation__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXXZ(v6);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v6);
    v7 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_to(
                                                                0,
                                                                *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                                + 25),
                                                                (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v17 = v7;
    _DismissAnimated__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXPE_AAVAnimationCompletedEventHandler_2345__Z(
      v7,
      v4);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
    v11 = 0;
    wil::details::ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___::_ScopeExitFn__lambda_85c2999b5b2db8f0992a2defe3530b0e___((__int64)&v10);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
    wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(
      (__int64 *)&v15,
      v8);
  }
  else
  {
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)this);
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  return 0LL;
}
