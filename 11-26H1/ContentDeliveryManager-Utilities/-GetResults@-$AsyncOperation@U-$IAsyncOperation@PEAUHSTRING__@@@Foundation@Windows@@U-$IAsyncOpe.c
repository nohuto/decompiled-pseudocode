/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800329E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x18002EB84 (-ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@VN.c)
 *     ?Get@CHSTRINGResult@Internal@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800300D4 (-Get@CHSTRINGResult@Internal@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        HSTRING *a2)
{
  signed __int32 v3; // r8d
  __int64 v4; // rcx
  unsigned __int32 v6; // ebx
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 120);
  v4 = a1 - 168;
  v8 = -2;
  _InterlockedCompareExchange(&v8, v3, -2);
  if ( v8 != 3 )
  {
    if ( v8 != 1 )
    {
      v6 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return v6;
    }
    return (unsigned int)Windows::Internal::CHSTRINGResult::Get((Windows::Internal::CHSTRINGResult *)(a1 + 104), a2);
  }
  v9 = 0;
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
    v4,
    &v9);
  v6 = v9;
  if ( v9 >= 0 )
    return (unsigned int)Windows::Internal::CHSTRINGResult::Get((Windows::Internal::CHSTRINGResult *)(a1 + 104), a2);
  return v6;
}
