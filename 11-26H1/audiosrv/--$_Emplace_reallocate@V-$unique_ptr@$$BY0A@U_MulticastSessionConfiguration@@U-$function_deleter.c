/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@?$vector@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@AEAAPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV23@$$QEAV23@@Z @ 0x180106F00
 * Callers:
 *     ?GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180107B58 (-GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@PEAGU-.c)
 *     ?GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180107EB0 (-GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_MulticastSessionC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAPEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV12@0PEAV12@AEAV?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x180107034 (--$_Uninitialized_move@PEAV-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_fr.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@QEAA@XZ @ 0x180107238 (--1_Reallocation_guard@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_u.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@AEAAXQEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@_K1@Z @ 0x1801084C0 (-_Change_array@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free.c)
 */

char *__fastcall std::vector<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Emplace_reallocate<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rsi
  _QWORD *v16; // r8
  char *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  *a3 = 0LL;
  v16 = v13;
  v21 = a1;
  v17 = &v13[8 * v5];
  v22 = v3;
  *(_QWORD *)v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 8;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>> *,std::allocator<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
      v19,
      a2,
      v13);
    v18 = a1[1];
    v16 = v17 + 8;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>> *,std::allocator<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
    v19,
    v18,
    v16);
  std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Change_array(
    a1,
    v15,
    v9,
    v3,
    v21,
    0LL,
    v22,
    v23,
    v24);
  std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
