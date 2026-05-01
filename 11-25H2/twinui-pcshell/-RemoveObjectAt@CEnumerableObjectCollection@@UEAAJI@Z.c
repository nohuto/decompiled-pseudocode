/*
 * XREFs of ?RemoveObjectAt@CEnumerableObjectCollection@@UEAAJI@Z @ 0x1802EA890
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall CEnumerableObjectCollection::RemoveObjectAt(CEnumerableObjectCollection *this, unsigned int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ebx

  v2 = a2;
  v4 = *((_QWORD *)this + 6);
  if ( v2 >= v4 )
  {
    return (unsigned int)-2147316575;
  }
  else
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
    if ( v2 != v4 - 1 )
      memmove_0(
        (void *)(*((_QWORD *)this + 5) + 8 * v2),
        (const void *)(*((_QWORD *)this + 5) + 8 * v2 + 8),
        8 * (v4 - v2) - 8);
    --*((_QWORD *)this + 6);
    v6 = 0;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
  }
  return v6;
}
