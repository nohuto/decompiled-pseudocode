/*
 * XREFs of ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x180052BDC
 * Callers:
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180052AD4 (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequire.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076710 (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCo.c)
 *     ?_Change_array@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXQEAUContextualProcessorEntry@ContextualProcessorManager@@_K1@Z @ 0x1800797A0 (-_Change_array@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCont.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAA@XZ @ 0x1801A6FD8 (--1_Reallocation_guard@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocat.c)
 */

unsigned __int64 __fastcall std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Emplace_reallocate<ContextualProcessorManager::ContextualProcessorEntry>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]
  unsigned __int64 v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(a1);
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20 = a1;
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v21 = v3;
  v15 = v13;
  *(_QWORD *)v14 = 0LL;
  v23 = v14 + 16;
  if ( v14 != a3 )
  {
    *(_QWORD *)v14 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  v16 = v13;
  *(_DWORD *)(v14 + 8) = *(_DWORD *)(a3 + 8);
  v17 = a1[1];
  v18 = *a1;
  v22 = v14;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(v18, a2, v13);
    v17 = a1[1];
    v16 = v14 + 16;
    v18 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<ContextualProcessorManager::ContextualProcessorEntry *>(v18, v17, v16);
  std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Change_array(
    a1,
    v15,
    v9,
    v3,
    v20,
    0LL,
    v21,
    v22,
    v23);
  std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
