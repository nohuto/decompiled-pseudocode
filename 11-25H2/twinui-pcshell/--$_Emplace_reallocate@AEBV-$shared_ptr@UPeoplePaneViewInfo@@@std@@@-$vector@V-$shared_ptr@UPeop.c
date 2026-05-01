/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1801CC5AC
 * Callers:
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x180400460 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180029B90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x180078DE0 (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UGameMruItem@@@2@_K1@Z @ 0x1801C4764 (-_Change_array@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruIte.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x18021E830 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  size_t size_of; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  char *v14; // rdx
  _QWORD *v15; // r8
  char *v16; // rcx
  _QWORD *result; // rax
  void *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp+8h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = v11;
  v13 = (_QWORD *)((char *)v11 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  try
  {
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v13, a3);
    v19 = (__int64)v13;
    v14 = (char *)a1[1];
    v15 = v12;
    v16 = (char *)*a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        v16,
        a2,
        v12);
      v19 = (__int64)v12;
      v15 = v13 + 2;
      v14 = (char *)a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
      v16,
      v14,
      v15);
    std::vector<std::shared_ptr<GameMruItem>>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v19, (__int64)(v13 + 2));
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
