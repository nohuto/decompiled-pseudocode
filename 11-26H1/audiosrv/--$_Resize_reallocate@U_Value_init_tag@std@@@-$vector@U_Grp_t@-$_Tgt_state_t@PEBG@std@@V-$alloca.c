/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18013407C
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x180133BE0 (--$_Match@V-$allocator@V-$sub_match@PEBG@std@@@std@@@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@@std@@@std@@AEBA_K_K@Z @ 0x18007F41C (-_Calculate_growth@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISession.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x1800D435C (--1_Reallocation_guard@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA.c)
 *     ?_Change_array@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@_K1@Z @ 0x1800D62FC (-_Change_array@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x18013442C (--$_Uninitialized_value_construct_n@V-$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

void __fastcall std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  char *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  size_t v10; // r8
  const void *v11; // rdx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  v5 = std::vector<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::LockedListEntry>>::_Calculate_growth(
         a1,
         a2);
  size_of = std::_Get_size_of_n<16>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12[0] = a1;
  v12[2] = v5;
  v13 = &v7[16 * v4];
  v8 = v7;
  v9 = std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(v13, a2 - v4);
  v10 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v11 = *a1;
  v14 = v9;
  memmove_0(v8, v11, v10);
  v12[1] = 0LL;
  std::vector<winrt::guid>::_Change_array((__int64)a1, (__int64)v8, a2, v5);
  std::vector<std::_Loop_vals_t>::_Reallocation_guard::~_Reallocation_guard((__int64)v12);
}
