/*
 * XREFs of ?InternalAddRef@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEBAXXZ @ 0x1801B13B4
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x1800E2BC0 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int32 v2; // eax

  v1 = *a1;
  if ( *a1 )
  {
    do
      v2 = *(_DWORD *)(v1 + 92);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 92), v2 + 1, v2) );
  }
}
