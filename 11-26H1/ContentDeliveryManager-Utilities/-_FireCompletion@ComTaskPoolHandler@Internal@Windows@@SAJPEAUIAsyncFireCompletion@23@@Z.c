/*
 * XREFs of ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x18003DA14
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002FCD0 (-FireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyn.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion @ 0x1800501E0 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_1800501E0.c)
 * Callees:
 *     ??$QueueTask@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@Z @ 0x1800264F4 (--$QueueTask@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x18002E214 (-DecrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 *     ?GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ @ 0x1800313C4 (-GetCurrentThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAJXZ.c)
 *     ?IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ @ 0x180033AFC (-IncrementThreadRecursionDepth@ComTaskPool@Internal@Windows@@SAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180033C00 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPoolHandler::_FireCompletion(
        struct Windows::Internal::IAsyncFireCompletion *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  bool v4; // si
  struct Windows::Internal::IAsyncFireCompletion *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (int)Windows::Internal::ComTaskPool::GetCurrentThreadRecursionDepth() <= 4 )
    goto LABEL_7;
  v6 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
  v6 = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
  v4 = (int)Windows::Internal::ComTaskPool::QueueTask<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>(v3, &v6) >= 0;
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( a1 )
    (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !v4 )
  {
LABEL_7:
    Windows::Internal::ComTaskPool::IncrementThreadRecursionDepth();
    v2 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a1 + 24LL))(a1);
    Windows::Internal::ComTaskPool::DecrementThreadRecursionDepth();
  }
  return v2;
}
