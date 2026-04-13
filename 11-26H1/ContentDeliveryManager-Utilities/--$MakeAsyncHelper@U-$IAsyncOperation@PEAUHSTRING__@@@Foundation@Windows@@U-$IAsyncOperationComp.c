/*
 * XREFs of ??$MakeAsyncHelper@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@UINilDelegate@Internal@3@VCHSTRINGResult@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCHSTRINGResult@Internal@Windows@@@01@@Z @ 0x180026114
 * Callers:
 *     ??$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Z @ 0x1800263DC (--$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x180024D44 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOperat.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18003B9E0 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::INilDelegate,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  __int64 v8; // rbx
  int v9; // edi
  unsigned int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v10[0] = 0;
  *a1 = 0LL;
  v6 = (void (__fastcall ***)(_QWORD, __int64))a5;
  if ( !a5 )
    return 2147942414LL;
  Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>(
    (__int64)&a5,
    a2,
    &v11,
    v10);
  v8 = a5;
  if ( !a5 )
  {
    (**v6)(v6, 1LL);
    return 2147942414LL;
  }
  *(_QWORD *)(a5 + 256) = v6;
  v9 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(v8 + 8);
  if ( v9 >= 0 )
  {
    *a1 = (v8 + 176) & -(__int64)(v8 != 0);
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  return (unsigned int)v9;
}
