/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Do_call @ 0x1800F3C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x18001B628 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x18001C3FC (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Do_call(
        __int64 a1)
{
  _QWORD v3[9]; // [rsp+30h] [rbp-48h] BYREF

  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v3);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    **(_QWORD **)(a1 + 16),
    v3,
    **(_QWORD **)(a1 + 24),
    0);
  return std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v3);
}
