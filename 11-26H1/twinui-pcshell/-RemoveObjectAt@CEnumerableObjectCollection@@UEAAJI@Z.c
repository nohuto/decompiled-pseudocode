/*
 * XREFs of ?RemoveObjectAt@CEnumerableObjectCollection@@UEAAJI@Z @ 0x1802E46C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall CEnumerableObjectCollection::RemoveObjectAt(CEnumerableObjectCollection *this, unsigned int a2)
{
  unsigned __int64 v2; // r9
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v2 = *((_QWORD *)this + 6);
  if ( a2 >= v2 )
  {
    return (unsigned int)-2147316575;
  }
  else
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * a2);
    if ( a2 != v2 - 1 )
    {
      v5 = *((_QWORD *)this + 5) + 8LL * a2;
      memmove_0((void *)v5, (const void *)(v5 + 8), 8 * (v2 - a2) - 8);
    }
    --*((_QWORD *)this + 6);
    v6 = 0;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  }
  return v6;
}
