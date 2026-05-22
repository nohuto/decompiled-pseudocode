/*
 * XREFs of ??$_Assign_counted_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@_K@Z @ 0x1801A98B8
 * Callers:
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AA484 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800981C0 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x180180EAC (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_memmove_n@PEAU?$pair@G_N@std@@PEAU12@@std@@YAPEAU?$pair@G_N@0@PEAU10@_K0@Z @ 0x18018186C (--$_Copy_memmove_n@PEAU-$pair@G_N@std@@PEAU12@@std@@YAPEAU-$pair@G_N@0@PEAU10@_K0@Z.c)
 */

char *__fastcall std::vector<enum _Button>::_Assign_counted_range<enum _Button *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  char *v9; // rcx
  char *result; // rax
  unsigned __int64 v11; // rbp

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2 )
  {
    v11 = ((_BYTE *)a1[1] - v3) >> 2;
    if ( a3 > v11 )
    {
      std::_Copy_memmove_n<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *>(
        a2,
        ((_BYTE *)a1[1] - v3) >> 2,
        *a1);
      v3 = (char *)a1[1];
      v9 = &a2[4 * v11];
      v4 -= v11;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, a3);
    if ( v3 )
    {
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)(4 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(a1, v7);
    v3 = (char *)*a1;
  }
  v9 = a2;
LABEL_8:
  std::_Copy_memmove_n<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *>(v9, v4, v3);
  result = &v3[4 * v4];
  a1[1] = result;
  return result;
}
