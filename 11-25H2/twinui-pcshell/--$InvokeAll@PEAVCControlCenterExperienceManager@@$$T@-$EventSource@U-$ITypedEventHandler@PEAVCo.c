/*
 * XREFs of ??$InvokeAll@PEAVCControlCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@$$T@Z @ 0x1803631A0
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180043100 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DA368 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_db50ea73e21f603477d761a745892f78_@@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_db50ea73e21f603477d761a745892f78_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18017F1D0 (--$InvokeDelegates@V_lambda_db50ea73e21f603477d761a745892f78_@@U-$ITypedEventHandler@PEAVControl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CControlCenterExperienceManager *,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  volatile signed __int32 *v9; // [rsp+70h] [rbp+30h] BYREF

  v8 = a2;
  v5 = 0LL;
  v3 = 0;
  v9 = 0LL;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, (volatile signed __int32 **)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  if ( v9 )
  {
    v6[0] = &v8;
    v6[1] = &v5;
    v3 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_db50ea73e21f603477d761a745892f78_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,IInspectable *>>(
           (__int64)v6,
           v9,
           (RTL_SRWLOCK *)a1);
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
  return v3;
}
