/*
 * XREFs of ??1?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x18068BA6C
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18068A430 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switche.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 */

void __fastcall Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
        __int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbp
  __int64 *v4; // rsi

  if ( !*(_BYTE *)(a1 + 44) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
    {
      if ( *(_DWORD *)(a1 + 40) )
      {
        v3 = *(unsigned int *)(a1 + 40);
        v4 = *(__int64 **)(a1 + 48);
        do
        {
          __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*v4++);
          --v3;
        }
        while ( v3 );
      }
      CoTaskMemFree_0(v2);
    }
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 44) = 0;
}
