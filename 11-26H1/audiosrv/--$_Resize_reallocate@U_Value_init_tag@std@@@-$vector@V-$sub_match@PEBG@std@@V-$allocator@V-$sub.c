/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18013425C
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180133EE8 (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$sub_match@PEBG@std@@V-$allocator@V-$sub_match@PEBG.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800AF194 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800C0384 (--1_Reallocation_guard@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@.c)
 *     ?_Change_array@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAXQEAV?$sub_match@PEBG@2@_K1@Z @ 0x18013EAE0 (-_Change_array@-$vector@V-$sub_match@PEBG@std@@V-$allocator@V-$sub_match@PEBG@std@@@2@@std@@AEAA.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

void __fastcall std::vector<std::sub_match<unsigned short const *>>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 size_of; // rax
  char *v9; // r15
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  size_t v12; // r8
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-28h]
  char *v15; // [rsp+38h] [rbp-20h]
  char *v16; // [rsp+40h] [rbp-18h]

  v2 = 0xAAAAAAAAAAAAAAALL;
  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v5 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 24LL;
  v6 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL;
  v7 = v6 >> 1;
  if ( v6 <= 0xAAAAAAAAAAAAAAALL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<24>(v2);
  v13 = a1;
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = v2;
  v10 = &v9[24 * v5];
  v15 = v10;
  v11 = a2 - v5;
  if ( a2 != v5 )
  {
    do
    {
      *(_OWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      v10 += 24;
      --v11;
    }
    while ( v11 );
  }
  v12 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v16 = v10;
  memmove_0(v9, *(const void **)a1, v12);
  std::vector<std::sub_match<unsigned short const *>>::_Change_array(a1, v9, a2, v2, v13, 0LL, v14, v15, v16);
  std::vector<AudioEffectInternal>::_Reallocation_guard::~_Reallocation_guard((__int64)&v13);
}
