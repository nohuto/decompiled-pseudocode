/*
 * XREFs of ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18039C490
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DA368 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_87aac4e08c30183979af15eea60c4eb2_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_87aac4e08c30183979af15eea60c4eb2_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180368CB8 (--$InvokeDelegates@V_lambda_87aac4e08c30183979af15eea60c4eb2_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18039C3C8 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x18039CF64 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnMessageHandler(
        RTL_SRWLOCK *this,
        int a2,
        SearchAppExperienceManager *a3,
        int a4)
{
  volatile signed __int32 **v4; // rdi
  __int64 v5; // r9
  volatile signed __int32 *v7; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v8[2]; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+68h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( a2 == LODWORD(this[57].Ptr) )
    {
      SearchAppExperienceManager::_ResetActivationTimeoutPolicy((SearchAppExperienceManager *)this);
    }
    else if ( a2 == LODWORD(this[59].Ptr) )
    {
      SearchAppExperienceManager::_OnDeferredSuspensionTimer((SearchAppExperienceManager *)this);
    }
  }
  else if ( a3 == (SearchAppExperienceManager *)this )
  {
    v4 = (volatile signed __int32 **)&this[39];
    v10 = a4;
    v9 = this;
    v7 = 0LL;
    wil::AcquireSRWLockExclusive(v8, this + 40);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, v4);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v8);
    if ( v7 )
    {
      v8[0] = (RTL_SRWLOCK *)&v9;
      v8[1] = (RTL_SRWLOCK *)&v10;
      Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_87aac4e08c30183979af15eea60c4eb2_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>>(
        v8,
        (__int64)v7,
        (RTL_SRWLOCK *)v4,
        v5);
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
    }
  }
  return 0LL;
}
