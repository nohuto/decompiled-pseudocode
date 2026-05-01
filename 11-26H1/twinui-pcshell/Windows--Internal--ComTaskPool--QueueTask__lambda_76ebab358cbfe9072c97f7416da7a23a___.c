/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___ @ 0x1800B08A0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1800B077C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a_____lambda_76ebab358cbfe9072c97f7416da7a23a___ @ 0x180302B1C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_76ebab358cbfe9072c97f7416da7a23a___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a_____lambda_76ebab358cbfe9072c97f7416da7a23a___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
