/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x1801540D4
 * Callers:
 *     ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1800AE0A0 (-BeginAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180133888 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1801354A0 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x18013EA78 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Uninitialized_move@PEAKV?$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV?$allocator@K@0@@Z @ 0x1801544D0 (--$_Uninitialized_move@PEAKV-$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV-$allocator@K@0@@Z.c)
 */

char *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  _DWORD *v16; // r8
  char *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v22; // [rsp+38h] [rbp-40h]
  _DWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x3FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 2;
  v7 = (a1[1] - *a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64)v13;
  v21[0] = a1;
  v16 = v13;
  v21[2] = v3;
  v17 = &v13[4 * v5];
  *(_DWORD *)v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v23 = v17 + 4;
  v22 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<unsigned long *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 4;
    v19 = a2;
    v22 = (_DWORD *)v15;
  }
  std::_Uninitialized_move<unsigned long *>(v19, v18, v16);
  v21[1] = 0LL;
  std::vector<unsigned int>::_Change_array((__int64)a1, v15, v9, v3);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v17;
}
