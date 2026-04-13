/*
 * XREFs of ?GetOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x1800327A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckValidStateForDelegateCall@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAJXZ @ 0x18002D570 (-CheckValidStateForDelegateCall@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VN.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180033C00 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edi

  *a2 = 0LL;
  v4 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForDelegateCall(a1);
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 24);
    *a2 = *(_QWORD *)(a1 + 24);
  }
  return (unsigned int)v4;
}
