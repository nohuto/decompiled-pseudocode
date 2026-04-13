/*
 * XREFs of ?ResolveTriggerStateTransitionHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentTriggerState@1234@0@Z @ 0x18007F2C8
 * Callers:
 *     _lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_::operator() @ 0x18007CDD0 (_lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerStateTransitionHandler(
        _QWORD *a1,
        int a2,
        int a3)
{
  __int64 v4; // rcx
  _DWORD *i; // rax
  char *v6; // r8
  _QWORD *v7; // rdx

  v4 = 0LL;
  for ( i = &unk_18017E4C0; ; i += 10 )
  {
    if ( i == (_DWORD *)&unk_18017E560 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = Windows::Services::TargetedContent::Internal::NoopTriggerTransition;
      a1[3] = a1;
      return a1;
    }
    if ( *i == a2 && i[1] == a3 )
      break;
  }
  a1[3] = 0LL;
  v6 = (char *)*((_QWORD *)i + 4);
  if ( v6 )
  {
    if ( v6 == (char *)(i + 2) )
      v7 = a1;
    else
      v7 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD *))v6)(*((_QWORD *)i + 4), v7);
  }
  a1[3] = v4;
  return a1;
}
