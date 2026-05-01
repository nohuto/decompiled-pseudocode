/*
 * XREFs of ??$InvokeDelegates@V_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_183e354435f860d04c2ca8d3ac2ebf61_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800532CC
 * Callers:
 *     ??$InvokeAll@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAVClientUwpWindowReadyForPresentationEventArgs@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAVClientUwpWindowReadyForPresentationEventArgs@@@Z @ 0x180052BD4 (--$InvokeAll@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAVClientUwpWind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801B8B80 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_183e354435f860d04c2ca8d3ac2ebf61_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        _QWORD **a1,
        volatile int *a2,
        __int64 a3)
{
  volatile int *v4; // r9
  unsigned int v6; // edi
  volatile int *v7; // rbx
  __int64 v8; // r14
  _QWORD *i; // rsi
  int v10; // eax
  unsigned int v12; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  volatile int *v15; // [rsp+78h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a2 + 3), a2);
    v7 = v4;
    v15 = v4;
  }
  v8 = *((_QWORD *)v7 + 4);
  for ( i = (_QWORD *)*((_QWORD *)v7 + 2); i != *((_QWORD **)v7 + 3); ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, volatile int *))(*(_QWORD *)*i + 24LL))(
            *i,
            **a1,
            *a1[1],
            v4);
    v6 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
LABEL_7:
      v6 = 0;
      goto LABEL_13;
    }
    if ( v10 < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v12 = v6;
        v14 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        v6 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v6 = v12;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        v7 = v15;
        break;
      }
      RoTransformError(v6, 0LL, 0LL);
      goto LABEL_7;
    }
LABEL_13:
    v8 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v6;
}
