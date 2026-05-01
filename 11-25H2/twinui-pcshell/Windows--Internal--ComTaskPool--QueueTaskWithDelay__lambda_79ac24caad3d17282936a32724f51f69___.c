/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___ @ 0x1803FEFD8
 * Callers:
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x180402CD0 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx
  void *v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v11 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
    *((_DWORD *)v6 + 4) = *a4;
    *v6 = &off_1807131D0;
    v11 = 0LL;
    v7 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v11);
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v9;
}
