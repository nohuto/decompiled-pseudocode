/*
 * XREFs of ?InternalAddRef@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEBAXXZ @ 0x1801B2C9C
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180132500 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
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
