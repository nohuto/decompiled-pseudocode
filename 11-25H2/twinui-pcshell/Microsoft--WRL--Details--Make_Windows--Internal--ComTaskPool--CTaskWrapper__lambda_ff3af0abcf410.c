/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae_____lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x180458BC4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x180293814 (Windows--Internal--ComTaskPool--QueueTask__lambda_ff3af0abcf4100822182f80ac5bd56ae___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae_____lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x180457774 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___--CTaskW.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae_____lambda_ff3af0abcf4100822182f80ac5bd56ae___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rdi
  void *v7; // [rsp+50h] [rbp+18h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v8 = v4;
  if ( v4 )
  {
    v5 = (volatile signed __int32 *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae___::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae_____lambda_ff3af0abcf4100822182f80ac5bd56ae___(
                                      v4,
                                      a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v7);
  return a1;
}
