/*
 * XREFs of ?AnimateDismissView@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180297180
 * Callers:
 *     ?AnimateDismissView@XamlSnapAssistViewHost@@WBA@EAAJXZ @ 0x1806A90D0 (-AnimateDismissView@XamlSnapAssistViewHost@@WBA@EAAJXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___ @ 0x1802972AC (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHan_ea_1802972AC.c)
 *     ?PrepareDismissAnimation@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180297388 (-PrepareDismissAnimation@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Composable.c)
 *     ?DismissAnimated@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x1802973B0 (-DismissAnimated@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlSnapAssistViewHost::AnimateDismissView(
        XamlSnapAssistViewHost *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rbx
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // rbx
  int v10; // eax
  void *v11; // rsi
  __int64 v12; // rsi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 WeakReference; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+20h]

  try
  {
    if ( !*((_BYTE *)this + 168) )
    {
      v5 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 19);
      v6 = 0LL;
      v15 = 0LL;
      if ( v5 )
      {
        v7 = (**v5)(
               v5,
               &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
               &v15);
        __abi_ThrowIfFailed(v7);
        v6 = v15;
      }
      WeakReference = v6;
      WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::PrepareDismissAnimation(v6);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
      v8 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 19);
      v9 = 0LL;
      v15 = 0LL;
      if ( v8 )
      {
        v10 = (**v8)(
                v8,
                &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
                &v15);
        __abi_ThrowIfFailed(v10);
        v9 = v15;
      }
      v17 = v9;
      v11 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v18 = (__int64)v11;
      WeakReference = Platform::Details::GetWeakReference(*((_QWORD *)this + 13));
      v12 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_874ff214a0b646fdadc64ee948f17e8a___(
              v11,
              &WeakReference);
      v18 = v12;
      WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::DismissAnimated(
        v9,
        v12);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v12);
      __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
      *((_BYTE *)this + 168) = 1;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A6,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
