/*
 * XREFs of ??0?$atomic@W4GestureOperationState@@@std@@QEAA@W4GestureOperationState@@@Z @ 0x18007D6A8
 * Callers:
 *     ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x18007D690 (--0atomic_ref_count@impl@winrt@@QEAA@I@Z.c)
 *     ??0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V?$function@$$A6AXPEAVGestureHandler@@W4GestureCompletedReason@@@Z@std@@@Z @ 0x180149498 (--0GestureHandler@@QEAA@W4GestureProcessorType@@PEBGPEAUISystemInputRouterHitTest@@V-$function@$.c)
 * Callees:
 *     ??0?$_Atomic_integral_facade@K@std@@QEAA@AEBK@Z @ 0x180099544 (--0-$_Atomic_integral_facade@K@std@@QEAA@AEBK@Z.c)
 */

__int64 __fastcall std::atomic<enum GestureOperationState>::atomic<enum GestureOperationState>(__int64 a1)
{
  __int64 v1; // rcx
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 1;
  std::_Atomic_integral_facade<unsigned long>::_Atomic_integral_facade<unsigned long>(a1, v3);
  return v1;
}
