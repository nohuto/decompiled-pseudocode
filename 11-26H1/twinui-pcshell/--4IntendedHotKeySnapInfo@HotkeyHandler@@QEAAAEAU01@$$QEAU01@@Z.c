/*
 * XREFs of ??4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805AE70C
 * Callers:
 *     ?erase@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@@Z @ 0x1805B15F0 (-erase@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 * Callees:
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1804AEE94 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall HotkeyHandler::IntendedHotKeySnapInfo::operator=(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)a1, (char *)a2);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)(a1 + 48), (_QWORD *)(a2 + 48));
  return a1;
}
