/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800F02B8
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800F1B60 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800F04A0 (--$_Uninitialized_move@PEAV-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F0CFC (--1_Reallocation_guard@-$vector@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@2@_K1@Z @ 0x1800F58C8 (-_Change_array@-$vector@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@std@@@s.c)
 */

char *__fastcall std::vector<std::unique_ptr<_TopologyInfo>>::_Emplace_reallocate<std::unique_ptr<_TopologyInfo>>(
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
    std::_Uninitialized_move<std::unique_ptr<_TopologyInfo> *,std::allocator<std::unique_ptr<_TopologyInfo>>>(
      v19,
      a2,
      v13);
    v18 = a1[1];
    v16 = v17 + 8;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<std::unique_ptr<_TopologyInfo> *,std::allocator<std::unique_ptr<_TopologyInfo>>>(
    v19,
    v18,
    v16);
  std::vector<std::unique_ptr<_TopologyInfo>>::_Change_array(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<std::unique_ptr<_TopologyInfo>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
