/*
 * XREFs of Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9__&_ @ 0x18052757C
 * Callers:
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x180527464 (CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1804CF518 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Mi.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052A1D0 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9____(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v7 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(v4);
    *v5 = &off_180752250;
    v5[2] = *a2;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef();
    v5[3] = 0LL;
    v5[4] = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v7);
  return a1;
}
