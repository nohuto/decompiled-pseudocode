/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5a946cfacaeb0e3185d961cd96352272___ @ 0x180459504
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272_____lambda_5a946cfacaeb0e3185d961cd96352272___ @ 0x1804572F4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5a946cfacaeb0e3185d961cd96352272___(
        __int64 a1,
        __int64 a2,
        void *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v5 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272_____lambda_5a946cfacaeb0e3185d961cd96352272___(
           v5,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
