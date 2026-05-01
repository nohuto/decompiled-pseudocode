/*
 * XREFs of ?InternalAddRef@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEBAXXZ @ 0x1801AEE9C
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x18010B578 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     _lambda_03cd8f9c11c3b75e9e31d9155b53654a_::_lambda_03cd8f9c11c3b75e9e31d9155b53654a_ @ 0x180309B40 (_lambda_03cd8f9c11c3b75e9e31d9155b53654a_--_lambda_03cd8f9c11c3b75e9e31d9155b53654a_.c)
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::_lambda_5f803f865b4b07caa2d72f9fc7ffab60_ @ 0x180309B68 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--_lambda_5f803f865b4b07caa2d72f9fc7ffab60_.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int32 v2; // eax

  v1 = *a1;
  if ( *a1 )
  {
    do
      v2 = *(_DWORD *)(v1 + 68);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 68), v2 + 1, v2) );
  }
}
