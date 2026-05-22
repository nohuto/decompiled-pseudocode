/*
 * XREFs of ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801AB49C
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801AA630 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801AB10C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

_QWORD *__fastcall std::vector<enum _Button>::erase(__int64 a1, _QWORD *a2, void *a3, void *a4)
{
  _QWORD *result; // rax

  if ( a3 != a4 )
    *(_QWORD *)(a1 + 8) = std::_Copy_memmove<enum _Button *,enum _Button *>(a4, *(_QWORD *)(a1 + 8), a3);
  result = a2;
  *a2 = a3;
  return result;
}
