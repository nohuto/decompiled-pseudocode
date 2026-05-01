/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E19F0
 * Callers:
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x18020BBD0 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x18030B810 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::_lambda_4963465e0f00482d68929271c70599ba_ @ 0x18030B9C8 (_lambda_4963465e0f00482d68929271c70599ba_--_lambda_4963465e0f00482d68929271c70599ba_.c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::_lambda_90c64e6b4e677faa5e1350e6dea894c9_ @ 0x18030BA04 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--_lambda_90c64e6b4e677faa5e1350e6dea894c9_.c)
 *     CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___::CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___ @ 0x18030BA78 (CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___--CAsyncCallbackWithLambda__.c)
 *     CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___::CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___ @ 0x18030BAE0 (CAsyncCallbackWithLambda__lambda_90c64e6b4e677faa5e1350e6dea894c9___--CAsyncCallbackWithLambda__.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 220), a2);
  return result;
}
