/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___ @ 0x1804657A4
 * Callers:
 *     ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x18046F868 (-RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3_____lambda_8564353b7dc6971d7da83ff0ca7e4bd3___ @ 0x180463B38 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        __int64 a6)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  a5 = v7;
  v8 = 0LL;
  if ( v7 )
  {
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3_____lambda_8564353b7dc6971d7da83ff0ca7e4bd3___(
           (__int64)v7,
           a6);
    a5 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&a5);
  v9 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
