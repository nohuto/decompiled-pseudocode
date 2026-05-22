/*
 * XREFs of ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180017420
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800132CC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180015E20 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001AC90 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18001C510 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(128LL);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = (*(_QWORD *)(a1 + 40) - v5) >> 3;
  if ( v6 )
    std::_Deallocate<16>(v5, 8 * v6);
  *(_QWORD *)(a1 + 24) = v4;
  v7 = v4 + 16;
  *(_QWORD *)(a1 + 32) = v4 + 16;
  *(_QWORD *)(a1 + 40) = v4 + 16;
  do
    *v4++ = v3;
  while ( v4 != v7 );
  return a1;
}
