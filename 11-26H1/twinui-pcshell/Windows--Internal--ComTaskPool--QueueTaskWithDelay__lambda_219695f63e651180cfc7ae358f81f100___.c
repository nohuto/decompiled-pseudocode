/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___ @ 0x180386F7C
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1801A9C80 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___::CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100_____lambda_219695f63e651180cfc7ae358f81f100___ @ 0x1803865FC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  void *v5; // rax
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___::CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100_____lambda_219695f63e651180cfc7ae358f81f100___(
           (__int64)v5,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
