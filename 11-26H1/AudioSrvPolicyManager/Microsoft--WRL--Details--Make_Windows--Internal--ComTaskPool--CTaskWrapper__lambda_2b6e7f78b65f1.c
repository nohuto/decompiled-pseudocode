/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180036B58
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180036CD8 (Windows--Internal--ComTaskPool--QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18002DAA4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____ @ 0x180037784 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b6e.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800399D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___(
        _QWORD *a1,
        _OWORD *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx
  LPVOID v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v7 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>((__int64)v4);
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[1] = *a2;
    *(_QWORD *)v5 = off_180053470;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____(&v7);
  return a1;
}
