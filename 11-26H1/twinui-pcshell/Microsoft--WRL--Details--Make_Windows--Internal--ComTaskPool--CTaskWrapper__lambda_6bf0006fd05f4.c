/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f_____lambda_6bf0006fd05f45de9a9646c33bcd493f___ @ 0x1803A72CC
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18023B0F4 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_6bf0006fd05f45de9a9646c33bcd493f_::_lambda_6bf0006fd05f45de9a9646c33bcd493f_ @ 0x1803AD134 (_lambda_6bf0006fd05f45de9a9646c33bcd493f_--_lambda_6bf0006fd05f45de9a9646c33bcd493f_.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f_____lambda_6bf0006fd05f45de9a9646c33bcd493f___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v7; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v8; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x188uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v7 = v4;
  v8 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    lambda_6bf0006fd05f45de9a9646c33bcd493f_::_lambda_6bf0006fd05f45de9a9646c33bcd493f_(v5 + 4, a2);
    *(_QWORD *)v5 = &off_1807379E8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____((void **)&v7);
  return a1;
}
