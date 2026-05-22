/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AD8B8
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADF60 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AE078 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1800992EC (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801ADAF8 (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801ADCB0 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x1801ADDF0 (--1_Reallocation_guard@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1801AF224 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
Edge *__fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(__int64 *a1, __int64 a2, const struct Edge *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  Edge *v13; // rdi
  Edge *v14; // r14
  __int64 v15; // rdx
  Edge *v16; // r8
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  Edge *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 7;
  v8 = 0x1FFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 7;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<128>(v8);
  v13 = (Edge *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = (Edge *)((char *)v13 + (v6 & 0xFFFFFFFFFFFFFF80uLL));
  v19[0] = a1;
  v19[1] = v13;
  v20 = v8;
  v22 = (char *)v14 + 128;
  Edge::Edge(v14, a3);
  v21 = v14;
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<Edge *>(v17, a2, v13);
    v21 = v13;
    v16 = (Edge *)((char *)v14 + 128);
    v15 = a1[1];
    v17 = a2;
  }
  std::_Uninitialized_move<Edge *>(v17, v15, v16);
  std::vector<Edge>::_Change_array(a1, v13, v9, v8, v19[0], 0LL, v20, v21, v22);
  std::vector<Edge>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
