/*
 * XREFs of ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBVCExpressionValue@@@Z @ 0x18010C490
 * Callers:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCExpressionValue@@_K0@Z @ 0x18010C534 (-reserve_region@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vlibe.c)
 *     ?erase@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCExpressionValue@@@2@V?$basic_iterator@$$CBVCExpressionValue@@@2@0@Z @ 0x1802147F8 (-erase@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expan.c)
 */

void __fastcall detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
        __int64 *a1,
        unsigned __int64 a2,
        const struct CExpressionValue *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  CExpressionValue *i; // rdi
  __int64 v10; // r8
  const char *v11; // r9
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = *a1;
  v7 = 0x8E38E38E38E38E39uLL * ((a1[1] - v5) >> 3);
  if ( a2 <= v7 )
  {
    v12 = a1[1];
    v13 = v5 + 72 * a2;
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::erase(
      a1,
      &v14,
      &v13,
      &v12);
  }
  else
  {
    v8 = a2 - v7;
    for ( i = (CExpressionValue *)detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::reserve_region(
                                    a1,
                                    v7,
                                    v8); v8; --v8 )
    {
      *((_DWORD *)i + 16) = 0;
      CExpressionValue::CopyFrom(i, a3, v10, v11);
      i = (CExpressionValue *)((char *)i + 72);
    }
  }
}
