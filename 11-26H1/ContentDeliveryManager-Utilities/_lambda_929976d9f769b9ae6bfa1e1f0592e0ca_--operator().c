/*
 * XREFs of _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18004D750
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x1800462B0 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DD44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004CEC0 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18004E6D4 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18005436C (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 *     ?ResolveEventNotificationHandlerFromType@ContentManagement@@YA?AV?$function@$$A6AJXZ@std@@W4EventNotificationType@1@@Z @ 0x180057684 (-ResolveEventNotificationHandlerFromType@ContentManagement@@YA-AV-$function@$$A6AJXZ@std@@W4Even.c)
 *     ?_Tidy@?$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@IEAAXXZ @ 0x18005C730 (-_Tidy@-$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(__int64 a1, unsigned int a2)
{
  unsigned int StringRawBuffer; // edi
  CreativeFramework::CreativeEventStore *v5; // rbx
  CreativeFramework::CreativeEventStore *v6; // rax
  int v7; // eax
  ContentManagement *v8; // rax
  const unsigned __int16 *v9; // rdx
  _QWORD *v10; // rdi
  char v11; // bl
  _QWORD *v12; // rcx
  int v13; // eax
  const unsigned __int16 *v15; // [rsp+20h] [rbp-29h]
  int v16; // [rsp+20h] [rbp-29h]
  _BYTE v17[24]; // [rsp+28h] [rbp-21h] BYREF
  __int64 v18; // [rsp+40h] [rbp-9h]
  _QWORD v19[4]; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v20[32]; // [rsp+68h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  LODWORD(v15) = 0;
  StringRawBuffer = (unsigned int)WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  v5 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 8), 0LL);
  v6 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v7 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v6,
         v5,
         (const unsigned __int16 *)a2,
         StringRawBuffer,
         v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      521LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7,
      v16);
  v8 = (ContentManagement *)WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  if ( ContentManagement::IsHighPriorityEvent(v8, v9) )
  {
    v19[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v19[1] = ContentManagement::BatterySaverOverrideEventNotificationHandler;
    v19[3] = v19;
    v10 = v19;
    v11 = 1;
  }
  else
  {
    v10 = (_QWORD *)ContentManagement::ResolveEventNotificationHandlerFromType(v20, **(unsigned int **)(a1 + 24));
    v11 = 2;
  }
  v18 = 0LL;
  v12 = (_QWORD *)v10[3];
  if ( v12 )
  {
    if ( v12 == v10 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v12 + 8LL))(v12, v17);
      std::_Func_class<bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Tidy(v10);
    }
    else
    {
      v18 = v10[3];
      v10[3] = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
  }
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v20);
  }
  if ( (v11 & 1) != 0 )
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v19);
  if ( !v18 )
    std::_Xbad_function_call();
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
  std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v17);
  return 0LL;
}
