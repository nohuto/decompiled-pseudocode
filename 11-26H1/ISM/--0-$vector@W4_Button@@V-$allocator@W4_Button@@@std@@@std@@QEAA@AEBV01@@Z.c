/*
 * XREFs of ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AA110
 * Callers:
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A9FC8 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801AA940 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801AACF0 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x180180EAC (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ @ 0x1801AA33C (--1-$_Tidy_guard@V-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ.c)
 */

void **__fastcall std::vector<enum _Button>::vector<enum _Button>(void **a1, void **a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v4);
    v5 = *a2;
    v6 = (__int64)a2[1];
    v7 = (char *)*a1;
    std::_Copy_memmove<enum _Button *,enum _Button *>(v5, v6, *a1);
    v9 = 0LL;
    a1[1] = &v7[4 * ((v6 - (__int64)v5) >> 2)];
    std::_Tidy_guard<std::vector<enum _Button>>::~_Tidy_guard<std::vector<enum _Button>>(&v9);
  }
  return a1;
}
