/*
 * XREFs of ?InternalAddRef@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEBAXXZ @ 0x180001578
 * Callers:
 *     ??$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_810c14b6a29fd984a078d93978f19614_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180001178 (--$InvokeDelegates@V_lambda_810c14b6a29fd984a078d93978f19614_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ??$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_b9c6a9526e98e8096438348dee47a029_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000136C (--$InvokeDelegates@V_lambda_b9c6a9526e98e8096438348dee47a029_@@U-$IEventHandler@PEAUIInspectable.c)
 *     ??$InvokeAll@$$T$$T@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$T0@Z @ 0x180010750 (--$InvokeAll@$$T$$T@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$Inv.c)
 *     ??$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_810c14b6a29fd984a078d93978f19614_@@@Z @ 0x1800121B4 (--$DoInvoke@V_lambda_810c14b6a29fd984a078d93978f19614_@@@-$EventSource@U-$IEventHandler@PEAVAppM.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1800181B4 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180002790 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalAddRef(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 12), a2);
  return result;
}
