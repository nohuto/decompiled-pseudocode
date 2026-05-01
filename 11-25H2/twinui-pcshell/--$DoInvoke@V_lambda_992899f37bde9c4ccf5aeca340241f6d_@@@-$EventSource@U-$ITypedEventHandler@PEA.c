/*
 * XREFs of ??$DoInvoke@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@@?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_992899f37bde9c4ccf5aeca340241f6d_@@@Z @ 0x1801C6930
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1801C68F0 (-Run@-$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_992899f37bde9c4ccf5aeca340241f6d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1802FFE40 (--$InvokeDelegates@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@U-$ITypedEventHandler@PEAUIObject.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_992899f37bde9c4ccf5aeca340241f6d_>(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  volatile signed __int32 *v5; // rbx
  RTL_SRWLOCK *v6; // rsi
  volatile int *v7; // rdx
  volatile signed __int32 *v8; // r8
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)a1->Ptr + 12), v7);
    v5 = v8;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v5 )
  {
    v10 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_992899f37bde9c4ccf5aeca340241f6d_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>>(
           &v10,
           v5,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  }
  return v4;
}
