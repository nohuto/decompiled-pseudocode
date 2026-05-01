/*
 * XREFs of ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x18058A1EC
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x18058A038 (--$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@-$vector@UIntendedHotKeySnapIn.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x18058A000 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z @ 0x18058A308 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z.c)
 */

HotkeyHandler::IntendedHotKeySnapInfo *__fastcall std::_Uninitialized_move<HotkeyHandler::IntendedHotKeySnapInfo *>(
        __int64 a1,
        __int64 a2,
        HotkeyHandler::IntendedHotKeySnapInfo *a3)
{
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(a3, v4);
      a3 = (HotkeyHandler::IntendedHotKeySnapInfo *)((char *)a3 + 56);
      v4 = v5 + 56;
    }
    while ( v4 != v6 );
  }
  std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(a3, a3);
  return a3;
}
