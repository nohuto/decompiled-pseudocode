/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_____lambda_ed8ffcce05179564df35e7d067b53c30__&__lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb__&_IDCompBatchAnimationCallback___&_ @ 0x1805462F4
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x1805460AC (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_ed.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____ @ 0x180322560 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5e.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A2C9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_____lambda_ed8ffcce05179564df35e7d067b53c30_____lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb____IDCompBatchAnimationCallback_____(
        _QWORD *a1,
        _OWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v8;
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v8);
    *v9 = &off_180753F80;
    *((_OWORD *)v9 + 1) = *a2;
    v9[4] = *(_QWORD *)a3;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v9 + 4);
    *((_DWORD *)v9 + 10) = *(_DWORD *)(a3 + 8);
    v9[6] = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9 + 6);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v9;
    v12 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____(&v12);
  return a1;
}
