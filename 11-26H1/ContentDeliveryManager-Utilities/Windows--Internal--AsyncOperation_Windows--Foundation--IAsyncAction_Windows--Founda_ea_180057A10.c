/*
 * XREFs of Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Run @ 0x180057A10
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::ErrorCode @ 0x18004F8C8 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18004F8C8.c)
 *     Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_Run @ 0x18005C5F0 (Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncAction_Windows--Founda_ea_18005C5F0.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v1 = a1 - 200;
  v5 = -2;
  _InterlockedCompareExchange(&v5, *(_DWORD *)(a1 - 200 + 56), -2);
  if ( v5 )
  {
    Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::ErrorCode(
      a1 - 192,
      (volatile signed __int32 *)&v4);
    v2 = v4;
    if ( (v4 & 0x80000000) == 0 )
    {
      v2 = 2147943623LL;
      v4 = -2147023673;
    }
  }
  else
  {
    v2 = v4;
  }
  return Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_Run(
           v1,
           1LL,
           v2);
}
