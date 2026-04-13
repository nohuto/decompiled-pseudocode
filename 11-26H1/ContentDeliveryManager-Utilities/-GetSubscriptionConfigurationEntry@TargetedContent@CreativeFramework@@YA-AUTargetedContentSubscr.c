/*
 * XREFs of ?GetSubscriptionConfigurationEntry@TargetedContent@CreativeFramework@@YA?AUTargetedContentSubscriptionConfiguration@12@PEBG@Z @ 0x180053894
 * Callers:
 *     ?ResolveIsCriticalHealthEnabledForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA_NPEBG@Z @ 0x180057800 (-ResolveIsCriticalHealthEnabledForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Healt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004758 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004CEC0 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContent::GetSubscriptionConfigurationEntry(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  wchar_t **i; // rdi
  int v6; // eax
  _BYTE v8[24]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  *(_OWORD *)a1 = *(_OWORD *)&off_1800CC2F0;
  *(_OWORD *)(a1 + 16) = xmmword_1800CC300;
  *(_QWORD *)(a1 + 32) = 3600LL;
  v9 = 0LL;
  v3 = operator new(0x20uLL);
  v4 = v3;
  if ( !v3 )
    std::_Xbad_alloc();
  *v3 = &std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  v3[1] = &v10;
  v3[2] = a1;
  v9 = v3;
  for ( i = off_18017E210; i != (wchar_t **)&unk_18017E4B8; i += 5 )
  {
    if ( !v4 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, wchar_t **))(*v4 + 16LL))(v4, i) )
      break;
    v4 = v9;
  }
  std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v8);
  v6 = *(_DWORD *)(a1 + 16);
  if ( (v6 & 0x80u) != 0 )
    *(_DWORD *)(a1 + 16) = v6 | 1;
  return a1;
}
