/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x18051D6A0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x18051D748 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____ @ 0x180325C08 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5e.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e______lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v5[2] = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v5 + 2);
    v5[3] = a2[1];
    *v5 = &off_180729BE0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v5;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____(&v7);
  return a1;
}
