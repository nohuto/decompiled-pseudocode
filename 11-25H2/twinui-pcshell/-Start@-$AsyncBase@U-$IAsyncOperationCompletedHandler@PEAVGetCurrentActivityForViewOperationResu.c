/*
 * XREFs of ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18022C6E0
 * Callers:
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@@01@@Z @ 0x1802A0E44 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@D.c)
 * Callees:
 *     ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x18023965C (-TraceOperationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForVie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // edi
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  v6 = -2;
  _InterlockedCompareExchange(&v6, v1, -2);
  if ( v6 == -1 && (v3 = _InterlockedCompareExchange(a1 + 12, 0, -1), v3 == v6) )
  {
    v4 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InitCausality,
           0LL,
           0LL) )
    {
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(a1);
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
