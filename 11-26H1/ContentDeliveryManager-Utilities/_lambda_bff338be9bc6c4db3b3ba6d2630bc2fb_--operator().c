/*
 * XREFs of _lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_::operator() @ 0x18007CDD0
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_bff338be9bc6c4db3b3ba6d2630bc2fb__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180081340 (std--_Func_impl_std--_Callable_obj__lambda_bff338be9bc6c4db3b3ba6d2630bc2fb__0__std_ea_180081340.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004B840 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004CEC0 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8fa486bcff5e4b___ @ 0x18007A81C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8.c)
 *     ?ResolveTriggerStateTransitionHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentTriggerState@1234@0@Z @ 0x18007F2C8 (-ResolveTriggerStateTransitionHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_::operator()(
        __int64 **a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  std::_Ref_count_base *v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  unsigned int *v12[5]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  unsigned int v16; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int v17; // [rsp+C8h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a3;
  Windows::Services::TargetedContent::Internal::ResolveTriggerStateTransitionHandler(v13, a3, a4);
  v6 = (unsigned int *)std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                         v12,
                         *a1);
  v7 = v6;
  v12[4] = v6;
  v11 = a2;
  if ( !v14 )
    std::_Xbad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v14 + 16LL))(v14, &v11, v6);
  v8 = (std::_Ref_count_base *)*((_QWORD *)v7 + 1);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v12[0] = &v16;
  v12[1] = &v17;
  v12[2] = (unsigned int *)*a1;
  v9 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8fa486bcff5e4b___(
         a2,
         v12);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      418LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v9,
      v11);
  return std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v13);
}
