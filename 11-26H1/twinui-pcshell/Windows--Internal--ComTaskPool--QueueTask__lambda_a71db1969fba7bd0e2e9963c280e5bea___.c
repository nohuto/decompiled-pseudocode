/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a71db1969fba7bd0e2e9963c280e5bea___ @ 0x18033CD34
 * Callers:
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x180236268 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____ @ 0x180322560 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_a71db1969fba7bd0e2e9963c280e5bea___()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ebx
  void *v6; // [rsp+30h] [rbp-18h] BYREF

  v0 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v1 = v0;
  v6 = v0;
  v2 = 0LL;
  if ( v0 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v0);
    *v1 = &off_1807326F0;
    v6 = 0LL;
    v2 = v1;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____(&v6);
  CurrentThreadId = GetCurrentThreadId();
  v4 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  return v4;
}
