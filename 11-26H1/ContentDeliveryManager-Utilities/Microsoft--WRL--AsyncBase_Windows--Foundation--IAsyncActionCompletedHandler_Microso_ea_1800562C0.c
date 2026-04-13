/*
 * XREFs of Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::PutOnComplete @ 0x1800562C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18002A4BC (--4-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIA.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckValidStateForDelegateCall @ 0x18004ED30 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18004ED30.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceDelegateAssigned @ 0x180059B58 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180059B58.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  int v4; // edi
  signed __int32 v5; // ecx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckValidStateForDelegateCall(a1);
  if ( v4 >= 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
    {
      if ( a2 )
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::operator=((__int64 *)(a1 + 24), a2);
      _InterlockedOr(v7, 0);
      Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceDelegateAssigned(a1);
      v5 = *(_DWORD *)(a1 + 48);
      v8 = -2;
      _InterlockedCompareExchange(&v8, v5, -2);
      if ( (unsigned int)(v8 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
    else
    {
      v4 = -2147483624;
      RoOriginateError(2147483672LL, 0LL);
    }
  }
  return (unsigned int)v4;
}
