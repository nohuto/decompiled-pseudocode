/*
 * XREFs of ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x180133F9C
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013F5B0 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180133888 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x180134398 (--$_Uninitialized_fill_n@V-$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV-$allocator@I@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1801354A0 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 *     ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x18013EA3C (-_Calculate_growth@-$vector@IV-$allocator@I@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x18013EA78 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Resize_reallocate<unsigned int>(
        const void **a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 size_of; // rax
  char *v9; // rdi
  __int64 v10; // rax
  size_t v11; // r8
  const void *v12; // rdx
  _QWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF
  char *v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v7 = std::vector<unsigned int>::_Calculate_growth();
  size_of = std::_Get_size_of_n<4>(v7);
  v14[0] = a1;
  v14[2] = v7;
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v15 = &v9[4 * v6];
  v10 = std::_Uninitialized_fill_n<std::allocator<unsigned int>>(v15, a2 - v6, a3);
  v11 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v12 = *a1;
  v16 = v10;
  memmove_0(v9, v12, v11);
  v14[1] = 0LL;
  std::vector<unsigned int>::_Change_array(a1, v9, a2, v7);
  return std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(v14);
}
