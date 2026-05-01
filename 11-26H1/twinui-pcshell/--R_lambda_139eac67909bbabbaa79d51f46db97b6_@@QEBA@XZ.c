/*
 * XREFs of ??R_lambda_139eac67909bbabbaa79d51f46db97b6_@@QEBA@XZ @ 0x18009F174
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18009CF38 (-reset@-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@W.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _lambda_139eac67909bbabbaa79d51f46db97b6_::operator()(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h]

  v3 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVSnapAssistViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__,
         *a1 + 8LL);
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return v1;
}
