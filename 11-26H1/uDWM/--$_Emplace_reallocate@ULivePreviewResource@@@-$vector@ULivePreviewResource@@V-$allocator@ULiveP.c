/*
 * XREFs of ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88
 * Callers:
 *     ??$emplace_back@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAAAEAULivePreviewResource@@$$QEAU2@@Z @ 0x1800B8F68 (--$emplace_back@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewR.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18008726C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@YAPEAULivePreviewResource@@QEAU1@0PEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8F00 (--$_Uninitialized_move@PEAULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@std@@Y.c)
 *     ??0LivePreviewResource@@QEAA@AEBU0@@Z @ 0x1800B8FB0 (--0LivePreviewResource@@QEAA@AEBU0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@QEAA@XZ @ 0x1800B9268 (--1_Reallocation_guard@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@.c)
 *     ?_Change_array@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAXQEAULivePreviewResource@@_K1@Z @ 0x1800B96A0 (-_Change_array@-$vector@ULivePreviewResource@@V-$allocator@ULivePreviewResource@@@std@@@std@@AEA.c)
 */

LivePreviewResource *__fastcall std::vector<LivePreviewResource>::_Emplace_reallocate<LivePreviewResource>(
        __int64 a1,
        struct LivePreviewResource *a2,
        const struct LivePreviewResource *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  LivePreviewResource *v12; // rax
  LivePreviewResource *v13; // r14
  LivePreviewResource *v14; // rdi
  struct LivePreviewResource *v15; // rdx
  struct LivePreviewResource *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-48h]
  LivePreviewResource *v20; // [rsp+38h] [rbp-40h]
  char *v21; // [rsp+40h] [rbp-38h]

  v6 = ((__int64)a2 - *(_QWORD *)a1) / 96;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5);
  if ( v7 == 0x2AAAAAAAAAAAAAALL )
    std::vector<CVisualProxy *>::_Xlength((const char *)a1);
  v8 = v7 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5);
  v10 = v9 >> 1;
  if ( v9 <= 0x2AAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x2AAAAAAAAAAAAAALL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x2AAAAAAAAAAAAAALL;
  }
  v12 = (LivePreviewResource *)std::_Allocate<16,std::_Default_allocate_traits>(96 * v11);
  v18 = a1;
  v13 = (LivePreviewResource *)((char *)v12 + 96 * v6);
  v19 = v11;
  v14 = v12;
  v21 = (char *)v13 + 96;
  LivePreviewResource::LivePreviewResource(v13, a3);
  v15 = *(struct LivePreviewResource **)(a1 + 8);
  v16 = *(struct LivePreviewResource **)a1;
  v20 = v13;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<LivePreviewResource *>(v16);
    v16 = a2;
    v20 = v14;
  }
  std::_Uninitialized_move<LivePreviewResource *>(v16);
  std::vector<LivePreviewResource>::_Change_array(a1, v14, v8, v11, v18, 0LL, v19, v20, v21);
  std::vector<LivePreviewResource>::_Reallocation_guard::~_Reallocation_guard(&v18);
  return v13;
}
