/*
 * XREFs of ??$_Emplace_reallocate@Uguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@$$QEAU23@@Z @ 0x1800E88C0
 * Callers:
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800EA9D0 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x1800D435C (--1_Reallocation_guard@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA.c)
 *     ?_Change_array@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@_K1@Z @ 0x1800D62FC (-_Change_array@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

char *__fastcall std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid>(const void **a1, _BYTE *a2, __int128 *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // r14
  __int64 v16; // rsi
  void *v17; // rcx
  _BYTE *v18; // r8
  _BYTE *v19; // rdx
  size_t v20; // r8
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD *v23; // [rsp+38h] [rbp-40h]
  _OWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v22[0] = a1;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v22[2] = v3;
  v16 = (__int64)v13;
  v23 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v15 + 16;
  if ( a2 == v18 )
  {
    v20 = v18 - v19;
  }
  else
  {
    memmove_0(v13, v19, a2 - (_BYTE *)*a1);
    v19 = a2;
    v20 = (_BYTE *)a1[1] - a2;
    v23 = (_OWORD *)v16;
    v17 = v15 + 16;
  }
  memmove_0(v17, v19, v20);
  v22[1] = 0LL;
  std::vector<winrt::guid>::_Change_array((__int64)a1, v16, v9, v3);
  std::vector<std::_Loop_vals_t>::_Reallocation_guard::~_Reallocation_guard((__int64)v22);
  return v15;
}
