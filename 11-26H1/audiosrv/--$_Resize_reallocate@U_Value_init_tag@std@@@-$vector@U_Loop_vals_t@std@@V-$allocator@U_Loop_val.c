/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18013415C
 * Callers:
 *     ??0?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@51@@Z @ 0x180134D48 (--0-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV-$regex_traits@G@1@PEAV_Root_n.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x1800D435C (--1_Reallocation_guard@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA.c)
 *     ?_Change_array@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@_K1@Z @ 0x1800D62FC (-_Change_array@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x18013442C (--$_Uninitialized_value_construct_n@V-$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

void __fastcall std::vector<std::_Loop_vals_t>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 size_of; // rax
  char *v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  size_t v13; // r8
  const void *v14; // rdx
  _QWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v15[0] = a1;
  v15[2] = v2;
  v16 = &v10[16 * v7];
  v11 = v10;
  v12 = std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(v16, a2 - v7);
  v13 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v14 = *a1;
  v17 = v12;
  memmove_0(v11, v14, v13);
  v15[1] = 0LL;
  std::vector<winrt::guid>::_Change_array((__int64)a1, (__int64)v11, a2, v2);
  std::vector<std::_Loop_vals_t>::_Reallocation_guard::~_Reallocation_guard((__int64)v15);
}
