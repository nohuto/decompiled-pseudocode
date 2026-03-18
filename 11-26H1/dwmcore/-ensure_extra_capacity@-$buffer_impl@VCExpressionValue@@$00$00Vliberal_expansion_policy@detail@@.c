/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18010C69C
 * Callers:
 *     ?reserve_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCExpressionValue@@_K0@Z @ 0x18010C534 (-reserve_region@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vlibe.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$destruct_range@VCExpressionValue@@@detail@@YAXPEAVCExpressionValue@@0@Z @ 0x1801B433C (--$destruct_range@VCExpressionValue@@@detail@@YAXPEAVCExpressionValue@@0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x1802881D0 (--$uninitialized_move@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEA.c)
 */

void __fastcall detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CExpressionValue **a1,
        unsigned __int64 a2)
{
  CExpressionValue *v2; // rsi
  CExpressionValue *v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  CExpressionValue *v7; // rbx
  CExpressionValue *v8; // r8
  CExpressionValue *v9; // rdx
  CExpressionValue *v10; // rcx
  CExpressionValue *v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  void *v16; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1[1];
  v4 = a1[2];
  if ( 0x8E38E38E38E38E39uLL * ((v4 - v2) >> 3) < a2 )
  {
    v5 = 0x8E38E38E38E38E39uLL * ((v2 - *a1) >> 3);
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x18010C71DLL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0x8E38E38E38E38E39uLL * ((v4 - *a1) >> 3)),
           0x8E38E38E38E38E39uLL * ((v4 - *a1) >> 3),
           v5 + a2);
    v7 = (CExpressionValue *)operator new[](saturated_mul(v6, 0x48uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v12, (__int64)v7, v5);
    v8 = a1[1];
    v9 = *a1;
    v14 = v12;
    v15 = v13;
    std::uninitialized_move<std::move_iterator<CExpressionValue *>,stdext::checked_array_iterator<CExpressionValue *>>(
      &v12,
      v9,
      v8,
      &v14);
    detail::destruct_range<CExpressionValue>(*a1);
    v10 = *a1;
    *a1 = v7;
    v16 = 0LL;
    if ( v10 == (CExpressionValue *)(a1 + 3) )
      v10 = 0LL;
    operator delete(v10);
    v11 = *a1;
    a1[1] = (CExpressionValue *)((char *)*a1 + 72 * v5);
    a1[2] = (CExpressionValue *)((char *)v11 + 72 * v6);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v16);
  }
}
