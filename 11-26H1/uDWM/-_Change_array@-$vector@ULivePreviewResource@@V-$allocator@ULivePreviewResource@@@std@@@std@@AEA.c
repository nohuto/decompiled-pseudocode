/*
 * XREFs of ?_Change_array@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAXQEAULivePreviewResource@@_K1@Z @ 0x1800B96A0
 * Callers:
 *     ??$_Emplace_reallocate@ULivePreviewResource@@@?$vector@ULivePreviewResource@@V?$allocator@ULivePreviewResource@@@std@@@std@@AEAAPEAULivePreviewResource@@QEAU2@$$QEAU2@@Z @ 0x1800B8D88 (--$_Emplace_reallocate@ULivePreviewResource@@@-$vector@ULivePreviewResource@@V-$allocator@ULiveP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8D50 (--$_Destroy_range@V-$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEA.c)
 */

__int64 __fastcall std::vector<LivePreviewResource>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LivePreviewResource *v6; // rcx
  __int64 result; // rax

  v6 = *(LivePreviewResource **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<LivePreviewResource>>(v6, *(LivePreviewResource **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, 32 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 96 * a3;
  result = a2 + 96 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
