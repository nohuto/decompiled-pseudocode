/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18008FF88
 * Callers:
 *     ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x180134468 (--$copy@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VEffectPack@@@std@@@st.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VEffectPack@@@1@AEAV21@@Z @ 0x1801346F8 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VEffectPack@@@2@_K1@Z @ 0x18007D028 (-_Change_array@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@YAPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18007D0A4 (--$_Uninitialized_move@PEAV-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPac.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x18007F41C (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISession.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA@XZ @ 0x1801032C0 (--1_Reallocation_guard@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEff.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> const &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  char *v13; // rdx
  _QWORD *v14; // r8
  char *v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-40h]
  _QWORD *v19; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v17[0] = a1;
  v17[2] = v9;
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  v19 = v12 + 2;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v18 = v12;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::shared_ptr<EffectPack> *,std::allocator<std::shared_ptr<EffectPack>>>(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
    v18 = v11;
  }
  std::_Uninitialized_move<std::shared_ptr<EffectPack> *,std::allocator<std::shared_ptr<EffectPack>>>(v15, v13, v14);
  v17[1] = 0LL;
  std::vector<std::shared_ptr<EffectPack>>::_Change_array((__int64)a1, (__int64)v11, v8, v9);
  std::vector<std::shared_ptr<EffectPack>>::_Reallocation_guard::~_Reallocation_guard(v17);
  return v12;
}
