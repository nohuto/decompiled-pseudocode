/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x1802B4BA0
 * Callers:
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18013573C (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55_____lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x180577C94 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55___::CTaskWrapper__lambda_24ec9e02e088ddd9b3320f3956162b55_____lambda_24ec9e02e088ddd9b3320f3956162b55___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(2LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
