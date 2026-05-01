/*
 * XREFs of ?_Change_array@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXQEAUIntendedHotKeySnapInfo@HotkeyHandler@@_K1@Z @ 0x1805B13A0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x1805AE0EC (--$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@-$vector@UIntendedHotKeySnapIn.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AE0B4 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 */

__int64 __fastcall std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  HotkeyHandler::IntendedHotKeySnapInfo *v6; // rcx
  __int64 result; // rax

  v6 = *(HotkeyHandler::IntendedHotKeySnapInfo **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(
      v6,
      *(HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
