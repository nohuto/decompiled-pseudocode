/*
 * XREFs of ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1803F034C
 * Callers:
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x1803F03F4 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForVi.c)
 *     ?_Run@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x1803F066C (-_Run@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForViewOperati.c)
 * Callees:
 *     ?OnComplete@ComTaskPoolHandler@Internal@Windows@@QEAAXXZ @ 0x1803EEC70 (-OnComplete@ComTaskPoolHandler@Internal@Windows@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterComplete(
        __int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 256);
  if ( v2 )
    (**v2)(v2, 1LL);
  *(_QWORD *)(a1 + 256) = 0LL;
  Windows::Internal::ComTaskPoolHandler::OnComplete((Windows::Internal::ComTaskPoolHandler *)(a1 + 328));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 264));
  return Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(a1 + 8);
}
