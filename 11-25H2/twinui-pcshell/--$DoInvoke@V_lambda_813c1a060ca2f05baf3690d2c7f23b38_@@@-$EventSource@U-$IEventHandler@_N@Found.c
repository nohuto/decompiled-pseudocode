/*
 * XREFs of ??$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@Z @ 0x180243748
 * Callers:
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180244B74 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DA368 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U?$IEventHandler@_N@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1802437F8 (--$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U-$IEventHandler@_N@Foundation@Wi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_813c1a060ca2f05baf3690d2c7f23b38_>(
        __int64 a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  volatile signed __int32 *v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v6 = 0LL;
  *(_QWORD *)&v7 = 0LL;
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v7, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v6, (volatile signed __int32 **)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)&v7);
  if ( v6 )
  {
    v7 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_813c1a060ca2f05baf3690d2c7f23b38_,Windows::Foundation::IEventHandler<bool>>(
           &v7,
           v6,
           a1);
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return v4;
}
