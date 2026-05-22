/*
 * XREFs of ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801B6688
 * Callers:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B5B98 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@UKeyEv.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B60C4 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rbx

  v5 = a2;
  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = 0LL;
    *v6 = a3;
    a3[1] = v6;
    do
    {
      v8 = (_QWORD *)*v5;
      std::_Deallocate<16>(v5, (struct std::nothrow_t *)0x30);
      ++v7;
      v5 = v8;
    }
    while ( v8 != a3 );
    *(_QWORD *)(a1 + 8) -= v7;
  }
  return a3;
}
