/*
 * XREFs of ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@Z @ 0x18039E6BC
 * Callers:
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18004272C (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DA368 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_2917ceedd73734eed29653efe970981d_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2917ceedd73734eed29653efe970981d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180368D80 (--$InvokeDelegates@V_lambda_2917ceedd73734eed29653efe970981d_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,IInspectable *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r9
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+38h] BYREF

  v10 = a3;
  v9 = a2;
  v4 = 0;
  v8 = 0LL;
  wil::AcquireSRWLockExclusive(&v11, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, (volatile signed __int32 **)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  if ( v8 )
  {
    v7[0] = &v9;
    v7[1] = &v10;
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_2917ceedd73734eed29653efe970981d_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>(
           v7,
           (__int64)v8,
           a1,
           v5);
  }
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
  return v4;
}
