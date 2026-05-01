/*
 * XREFs of ??$DoInvoke@V_lambda_93e08873e72ccb4205d0584c75416b59_@@@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_93e08873e72ccb4205d0584c75416b59_@@@Z @ 0x1800DA13C
 * Callers:
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x180247D00 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DA368 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$InvokeDelegates@V_lambda_93e08873e72ccb4205d0584c75416b59_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_93e08873e72ccb4205d0584c75416b59_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1800DBF60 (--$InvokeDelegates@V_lambda_93e08873e72ccb4205d0584c75416b59_@@U-$ITypedEventHandler@PEAVStartEx.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_93e08873e72ccb4205d0584c75416b59_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int started; // edi
  RTL_SRWLOCK *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp+8h] BYREF

  started = 0;
  v9 = 0LL;
  v5 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = v9;
  if ( v9 )
  {
    v8 = *a2;
    started = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_93e08873e72ccb4205d0584c75416b59_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>>(
                &v8,
                v9,
                a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return started;
}
