/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___ @ 0x1804E05EC
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___ @ 0x1804E09D4 (CreationThreadDispatcher--RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___::CTaskWrapper__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7_____lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___ @ 0x1804DFF90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___::CTaskWrapper__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7_____lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, a2, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
