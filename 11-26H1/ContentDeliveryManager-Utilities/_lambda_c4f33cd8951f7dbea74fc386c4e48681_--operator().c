/*
 * XREFs of _lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator() @ 0x1800614F0
 * Callers:
 *     wistd::__function::__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_::operator() @ 0x1800615E0 (wistd--__function--__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800393A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca_____lambda_83dc6366a20d9229952004eea2bdcbca___ @ 0x18005FC94 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_83dc6366a20d9.c)
 *     ?InternalAddRef@?$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180062FC4 (-InternalAddRef@-$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063E30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  const char *v8; // r9
  int v9; // esi
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = *a1;
  v1 = v14;
  Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::InternalAddRef(&v14);
  v12 = v1;
  Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::InternalAddRef(&v12);
  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca_____lambda_83dc6366a20d9229952004eea2bdcbca___(
         &v13,
         &v12);
  v4 = *v2;
  *v2 = 0LL;
  v5 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(
      v5,
      v3);
  }
  CurrentThreadId = GetCurrentThreadId();
  result = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  try
  {
    v9 = result;
    if ( v4 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v12 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        54LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v9,
        v10);
    if ( v1 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x38,
             (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
             v8);
  }
  return result;
}
