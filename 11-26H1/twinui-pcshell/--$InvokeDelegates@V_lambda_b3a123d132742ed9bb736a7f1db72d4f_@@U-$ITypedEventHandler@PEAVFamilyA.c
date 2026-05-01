/*
 * XREFs of ??$InvokeDelegates@V_lambda_b3a123d132742ed9bb736a7f1db72d4f_@@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_b3a123d132742ed9bb736a7f1db72d4f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18040024C
 * Callers:
 *     ?RaiseEvent@AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAAXXZ @ 0x1804050B0 (-RaiseEvent@AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holog.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18007234C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?RemoveDelegate@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x1802FF164 (-RemoveDelegate@-$EventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_b3a123d132742ed9bb736a7f1db72d4f_,Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        __int64 a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  __int64 v5; // rbx
  struct IUnknown **i; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebp
  struct IUnknown *v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v12, a2);
  v5 = v12;
  for ( i = *(struct IUnknown ***)(v12 + 16); i != *(struct IUnknown ***)(v5 + 24); ++i )
  {
    v11 = *i;
    v7 = *(_QWORD *)(a1 + 144);
    if ( !v7 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
    v8 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v7 + 32LL))(v7, &v11);
    v9 = v8;
    if ( v8 < 0 )
    {
      RoTransformError((unsigned int)v8, 0LL, 0LL);
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::RemoveDelegate(
          a3,
          *i);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
