/*
 * XREFs of ??4?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801CF0B8
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801D0CC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801D1980 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801CDB10 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$sha.c)
 */

__int64 __fastcall std::list<std::shared_ptr<HotKeyInfo>>::operator=(__int64 a1, _QWORD ***a2)
{
  if ( (_QWORD ***)a1 != a2 )
    std::list<std::shared_ptr<HotKeyInfo>>::_Assign_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
      a1,
      **a2,
      *a2);
  return a1;
}
