/*
 * XREFs of ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801AA1C8
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801AB10C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x180180EAC (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ @ 0x1801AA33C (--1-$_Tidy_guard@V-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ.c)
 */

void **__fastcall std::vector<enum _Button>::vector<enum _Button>(void **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  char *v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(void **)a2;
  v6 = v3 - *(_QWORD *)a2;
  *a1 = 0LL;
  v7 = v6 >> 2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 )
  {
    if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v7);
    v8 = (char *)*a1;
    std::_Copy_memmove<enum _Button *,enum _Button *>(v5, v3, *a1);
    v10 = 0LL;
    a1[1] = &v8[4 * v7];
    std::_Tidy_guard<std::vector<enum _Button>>::~_Tidy_guard<std::vector<enum _Button>>(&v10);
  }
  return a1;
}
