/*
 * XREFs of ??$emplace_back@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UKBViewInfo@@@1@AEAV21@@Z @ 0x1804663D0
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180062930 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x18018FC5C (--$_Emplace_reallocate@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::emplace_back<std::shared_ptr<KBViewInfo> &>(
        char **a1,
        _QWORD *a2)
{
  char *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo> &>(a1, v3, a2);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v3, a2);
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = v5 + 16;
  return (_QWORD *)v5;
}
