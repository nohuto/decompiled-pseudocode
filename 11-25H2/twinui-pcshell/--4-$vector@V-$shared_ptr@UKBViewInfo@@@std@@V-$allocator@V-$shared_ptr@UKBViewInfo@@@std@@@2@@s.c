/*
 * XREFs of ??4?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AB3C8
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180238480 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@_K@Z @ 0x1801AB6E4 (--$_Assign_counted_range@PEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
    std::vector<std::shared_ptr<KBViewInfo>>::_Assign_counted_range<std::shared_ptr<KBViewInfo> *>(
      a1,
      *a2,
      (__int64)(a2[1] - *a2) >> 4);
  return a1;
}
