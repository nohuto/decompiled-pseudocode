/*
 * XREFs of ??R_lambda_4ab2971a6023620ffb3436ab497e7dad_@@QEBA@XZ @ 0x1800210B4
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180020FEC (-reset@-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 _lambda_4ab2971a6023620ffb3436ab497e7dad_::operator()()
{
  __int64 v0; // rdi
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h]

  try
  {
    v2 = Platform::Details::ResolveWeakReference();
    v0 = __abi_winrt_ptr_ctor(v2);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v2);
    result = v0;
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
