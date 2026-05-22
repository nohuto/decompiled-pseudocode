/*
 * XREFs of ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801491DC
 * Callers:
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180149700 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180069BE8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x18014933C (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x180149434 (--0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z.c)
 *     ??1_Reallocation_guard@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@QEAA@XZ @ 0x1801495DC (--1_Reallocation_guard@-$vector@UGestureClient@GestureHandler@@V-$allocator@UGestureClient@Gestu.c)
 *     ?_Change_array@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAXQEAUGestureClient@GestureHandler@@_K1@Z @ 0x18014A018 (-_Change_array@-$vector@UGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHandle.c)
 */

char *__fastcall std::vector<GestureHandler::GestureClient>::_Emplace_reallocate<GestureHandler::GestureClient>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  char *v21; // [rsp+40h] [rbp-38h]

  v4 = 0x666666666666666LL;
  v7 = (a2 - *a1) / 40;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x666666666666666LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<40>(v4);
  v19[0] = a1;
  v19[2] = v4;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[40 * v7];
  v21 = v14 + 40;
  GestureHandler::GestureClient::GestureClient(v14, a3);
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  v20 = v14;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<GestureHandler::GestureClient *>(v17, a2, v13);
    v15 = a1[1];
    v16 = v14 + 40;
    v17 = a2;
    v20 = v13;
  }
  std::_Uninitialized_move<GestureHandler::GestureClient *>(v17, v15, v16);
  v19[1] = 0LL;
  std::vector<GestureHandler::GestureClient>::_Change_array(a1, v13, v9, v4);
  std::vector<GestureHandler::GestureClient>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
