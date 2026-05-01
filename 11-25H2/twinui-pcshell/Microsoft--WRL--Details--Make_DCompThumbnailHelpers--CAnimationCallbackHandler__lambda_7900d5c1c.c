/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723_____lambda_7900d5c1cfc51d603dc477285f88614e__&__lambda_44eacdbaa31ce0b6b52d99c4136aa723__&_IDCompBatchAnimationCallback___&_ @ 0x180491790
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___ @ 0x180491688 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f886.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x180491E7C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723_____lambda_7900d5c1cfc51d603dc477285f88614e_____lambda_44eacdbaa31ce0b6b52d99c4136aa723____IDCompBatchAnimationCallback_____(
        _QWORD *a1,
        void *a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  *a1 = 0LL;
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v12 = v7;
  if ( v7 )
  {
    v9 = *a4;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v7);
    *v8 = &off_18071D9B8;
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v8 + 3, (_QWORD *)a3);
    *(_BYTE *)(v10 + 16) = *(_BYTE *)(a3 + 16);
    v8[6] = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v8;
    v12 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v12);
  return a1;
}
