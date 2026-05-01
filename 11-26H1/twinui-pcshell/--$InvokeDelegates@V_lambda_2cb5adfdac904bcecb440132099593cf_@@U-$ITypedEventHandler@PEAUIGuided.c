/*
 * XREFs of ??$InvokeDelegates@V_lambda_2cb5adfdac904bcecb440132099593cf_@@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_2cb5adfdac904bcecb440132099593cf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1805A57EC
 * Callers:
 *     ??$InvokeAll@PEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805A5760 (--$InvokeAll@PEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18007234C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RemoveDelegate@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x1802FF164 (-RemoveDelegate@-$EventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_2cb5adfdac904bcecb440132099593cf_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        __int64 a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rbp
  struct IUnknown **v9; // r14
  _QWORD *v10; // r12
  _QWORD *v11; // r15
  int v12; // eax
  int MatchingRestrictedErrorInfo; // eax
  bool v14; // sf
  _QWORD *v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v16, a2);
  v7 = (__int64)v16;
  v8 = v16[4];
  v9 = (struct IUnknown **)v16[2];
  if ( v9 == (struct IUnknown **)v16[3] )
    goto LABEL_20;
  v10 = *(_QWORD **)(a1 + 8);
  v11 = *(_QWORD **)a1;
  while ( 1 )
  {
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*v9)->lpVtbl[1].QueryInterface)(
            *v9,
            (*v11 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v11 >> 64),
            *v10);
    v6 = v12;
    if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 || v12 == -2147418105 || v12 == -2147418094 )
    {
      RoTransformError((unsigned int)v12, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::RemoveDelegate(
        a3,
        *v9);
      goto LABEL_12;
    }
    if ( v12 < 0 )
      break;
LABEL_13:
    v8 += 8LL;
    if ( ++v9 == *(struct IUnknown ***)(v7 + 24) )
      goto LABEL_20;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v6, 0LL, 0LL);
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v16);
  v14 = MatchingRestrictedErrorInfo < 0;
  if ( MatchingRestrictedErrorInfo >= 0 )
    v14 = (int)RoReportFailedDelegate(*v9, v16) < 0;
  if ( v14 )
    v5 = v6;
  v6 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
LABEL_20:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
  return v6;
}
