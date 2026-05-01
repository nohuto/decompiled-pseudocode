/*
 * XREFs of ??$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180363074
 * Callers:
 *     _lambda_97caca280bc1831b2fa8b4bd22a72139_::operator() @ 0x180364288 (_lambda_97caca280bc1831b2fa8b4bd22a72139_--operator().c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005C1B8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_55ef0cd80e80512d01823a56755fd8f1_@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_55ef0cd80e80512d01823a56755fd8f1_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180363100 (--$InvokeDelegates@V_lambda_55ef0cd80e80512d01823a56755fd8f1_@@U-$ITypedEventHandler@PEAUIBaseEx.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = 0;
  v7 = 0LL;
  wil::AcquireSRWLockExclusive(&v10, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, (volatile signed __int32 **)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  if ( v7 )
  {
    v6[0] = &v8;
    v6[1] = &v9;
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_55ef0cd80e80512d01823a56755fd8f1_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
           v6,
           v7,
           a1);
  }
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v4;
}
