/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x18052CD90
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18020C980 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70_____lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x18052C578 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___--.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-28h] BYREF
  void *v11; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0;
  if ( CoGetApartmentType((APTTYPE *)&v12, (APTTYPEQUALIFIER *)&v10) < 0 || !v12 || v12 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v13 = 0;
  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70_____lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___(
           v6,
           (__int64)&v13,
           a3);
    v11 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v11);
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v13;
  return (unsigned int)v8;
}
