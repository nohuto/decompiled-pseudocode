/*
 * XREFs of ?erase@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@@Z @ 0x1805B15F0
 * Callers:
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805AF000 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 * Callees:
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AE62C (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ??4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x1805AE70C (--4IntendedHotKeySnapInfo@HotkeyHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 56; i != v3; i += 56LL )
    HotkeyHandler::IntendedHotKeySnapInfo::operator=(i - 56, i);
  HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)(*(_QWORD *)(a1 + 8) - 56LL));
  *(_QWORD *)(a1 + 8) -= 56LL;
  result = a2;
  *a2 = a3;
  return result;
}
