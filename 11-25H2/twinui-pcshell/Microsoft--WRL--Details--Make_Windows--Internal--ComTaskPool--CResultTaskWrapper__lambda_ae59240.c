/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae59240ce1fbde7f19f80952588c71e9____long_&__lambda_ae59240ce1fbde7f19f80952588c71e9___ @ 0x18041B078
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ae59240ce1fbde7f19f80952588c71e9___ @ 0x18041C8E8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ae59240ce1fbde7f19f80952588c71e9.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae59240ce1fbde7f19f80952588c71e9____long____lambda_ae59240ce1fbde7f19f80952588c71e9___(
        volatile signed __int32 **a1,
        __int64 a2,
        __int128 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int128 v8; // xmm0
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    v8 = *a3;
    v7[4] = a2;
    *v7 = &off_180715F70;
    *((_OWORD *)v7 + 1) = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    v10 = 0LL;
    *a1 = (volatile signed __int32 *)v7;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  return a1;
}
