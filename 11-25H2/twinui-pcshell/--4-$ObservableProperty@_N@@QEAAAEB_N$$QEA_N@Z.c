/*
 * XREFs of ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804A0A58
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804A0B60 (-CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804A121C (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1804CB500 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 *     ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804CB7A0 (-ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableIt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObservableProperty<bool>::operator=(__int64 a1, _BYTE *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  *(_BYTE *)a1 = *a2;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = &v3[*(_QWORD *)(a1 + 16)];
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
    ++v3;
  }
  return a1;
}
