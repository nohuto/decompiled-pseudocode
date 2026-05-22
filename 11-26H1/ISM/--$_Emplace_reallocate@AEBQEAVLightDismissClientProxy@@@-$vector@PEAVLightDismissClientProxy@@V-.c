/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x18016023C
 * Callers:
 *     ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x180160090 (-OnConnected@LightDismissClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@YAPEAPEAVLightDismissClientProxy@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVLightDismissClientProxy@@@0@@Z @ 0x180076188 (--$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAA@XZ @ 0x1800A97D0 (--1_Reallocation_guard@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEA.c)
 *     ?_Change_array@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAXQEAPEAVLightDismissClientProxy@@_K1@Z @ 0x180160430 (-_Change_array@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@.c)
 */

char *__fastcall std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 size_of; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  char *v15; // r8
  char *v16; // r14
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rcx
  void **v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-38h]
  char *v23; // [rsp+38h] [rbp-30h]
  _QWORD *v24; // [rsp+40h] [rbp-28h]

  v4 = (a2 - (__int64)LightDismissProcessor::s_clients) >> 3;
  v5 = 0x1FFFFFFFFFFFFFFFLL;
  v6 = (qword_180254000 - (__int64)LightDismissProcessor::s_clients) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v6 + 1;
  v9 = (qword_180254008 - (__int64)LightDismissProcessor::s_clients) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v5 = v10 + v9;
    if ( v10 + v9 < v8 )
      v5 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v5);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v13 = *a3;
  v14 = v12;
  v22 = v5;
  v15 = v12;
  v16 = &v12[8 * v4];
  *(_QWORD *)v16 = v13;
  v17 = qword_180254000;
  v18 = LightDismissProcessor::s_clients;
  v21 = &LightDismissProcessor::s_clients;
  v24 = v16 + 8;
  v23 = v16;
  if ( a2 != qword_180254000 )
  {
    std::_Uninitialized_move<LightDismissClientProxy * *>(LightDismissProcessor::s_clients, a2, v12);
    v17 = qword_180254000;
    v15 = v16 + 8;
    v18 = (void *)a2;
    v23 = v14;
  }
  std::_Uninitialized_move<LightDismissClientProxy * *>(v18, v17, v15);
  std::vector<LightDismissClientProxy *>::_Change_array(v19, v14, v8, v5, v21, 0LL, v22, v23, v24);
  std::vector<LampUpdateState>::_Reallocation_guard::~_Reallocation_guard((__int64)&v21);
  return v16;
}
