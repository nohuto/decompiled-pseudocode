/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5b0bef6b766aaa2d78b530340aaca2e3___ @ 0x1802E3278
 * Callers:
 *     _lambda_b685170db6cf3b2ad8ed143403a26c19_::operator() @ 0x1802E4608 (_lambda_b685170db6cf3b2ad8ed143403a26c19_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3___::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3_____lambda_5b0bef6b766aaa2d78b530340aaca2e3___ @ 0x1802E21A4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5b0bef6b766aaa2d78b530340aaca2e3___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3___::CTaskWrapper__lambda_5b0bef6b766aaa2d78b530340aaca2e3_____lambda_5b0bef6b766aaa2d78b530340aaca2e3___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
