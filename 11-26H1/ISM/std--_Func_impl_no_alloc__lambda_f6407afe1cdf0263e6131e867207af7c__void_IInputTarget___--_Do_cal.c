/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call @ 0x1800F3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180011888 (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x18001B628 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??1?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x18001C3FC (--1-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD v5[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a2;
  if ( *(_DWORD *)(**(_QWORD **)(a1 + 8) + 352LL) )
  {
    PointerInputMediator::OnForwardedToGestureTargeting(**(const struct _MIT_INPUT_INTEROP_MESSAGE ***)(a1 + 16));
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(**(_QWORD **)(a1 + 16), 0LL);
  }
  else
  {
    std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v5);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, __int64, _DWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 24) + 8LL,
      **(_QWORD **)(a1 + 32),
      v5,
      v3,
      0);
    return std::unordered_map<unsigned long,enum ContextualProcessorDecision>::~unordered_map<unsigned long,enum ContextualProcessorDecision>(v5);
  }
}
