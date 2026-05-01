/*
 * XREFs of ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z @ 0x1805AE444
 * Callers:
 *     ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AE27C (--$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySna.c)
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805AF000 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 * Callees:
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
    (_QWORD *)(a1 + 48),
    (_QWORD *)(a2 + 48));
  return v2;
}
