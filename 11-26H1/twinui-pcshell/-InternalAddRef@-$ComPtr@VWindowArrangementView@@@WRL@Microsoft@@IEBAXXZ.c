/*
 * XREFs of ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052A1D0
 * Callers:
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9__&_ @ 0x18052757C (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x180527634 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_382fa76d9980bbd2846dd440d3c3bc97__&___lambda_382fa76d9980bbd2846dd440d3c3bc97__&_ @ 0x1805276EC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_382fa76d9980b.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e618f8d09915a5c2963af92bff89d9ea__&___lambda_e618f8d09915a5c2963af92bff89d9ea__&_ @ 0x180527784 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e618f8d09915a.c)
 *     ??$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@@012@@Z @ 0x1805279E4 (--$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$Co.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1805288C0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180529620 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18052AD70 (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18052AF18 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052B1D0 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18052B51C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18052BEE0 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18052CE48 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 68), a2);
  return result;
}
