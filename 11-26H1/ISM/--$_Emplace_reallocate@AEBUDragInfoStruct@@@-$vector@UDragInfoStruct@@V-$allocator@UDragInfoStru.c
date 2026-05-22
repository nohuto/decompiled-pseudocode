/*
 * XREFs of ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x18014C19C
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18002F834 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@YAPEAUDragInfoStruct@@QEAU1@0PEAU1@AEAV?$allocator@UDragInfoStruct@@@0@@Z @ 0x18014CE34 (--$_Uninitialized_move@PEAUDragInfoStruct@@V-$allocator@UDragInfoStruct@@@std@@@std@@YAPEAUDragI.c)
 *     ??1_Reallocation_guard@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@QEAA@XZ @ 0x18014DB08 (--1_Reallocation_guard@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStruct@@@std@@@std@@QEAA@.c)
 *     ?_Change_array@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAXQEAUDragInfoStruct@@_K1@Z @ 0x180151804 (-_Change_array@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStruct@@@std@@@std@@AEAAXQEAUDrag.c)
 */

char *__fastcall std::vector<DragInfoStruct>::_Emplace_reallocate<DragInfoStruct const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // r14
  char *v16; // rsi
  _OWORD *v17; // r8
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  char *v24; // [rsp+38h] [rbp-40h]
  _OWORD *v25; // [rsp+40h] [rbp-38h]

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v22 = a1;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFE0uLL];
  v23 = v3;
  v16 = v13;
  v24 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = a3[1];
  v25 = v15 + 32;
  *((_OWORD *)v15 + 1) = v18;
  v19 = a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<DragInfoStruct *>(v20, a2, v13);
    v19 = a1[1];
    v17 = v15 + 32;
    v20 = a2;
    v24 = v16;
  }
  std::_Uninitialized_move<DragInfoStruct *>(v20, v19, v17);
  std::vector<DragInfoStruct>::_Change_array(a1, v16, v9, v3, v22, 0LL, v23, v24, v25);
  std::vector<DragInfoStruct>::_Reallocation_guard::~_Reallocation_guard(&v22);
  return v15;
}
