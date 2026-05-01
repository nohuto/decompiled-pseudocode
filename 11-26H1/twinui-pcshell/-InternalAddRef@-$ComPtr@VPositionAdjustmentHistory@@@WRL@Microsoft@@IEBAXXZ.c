/*
 * XREFs of ?InternalAddRef@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEBAXXZ @ 0x18020DBB8
 * Callers:
 *     ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x180522900 (-AddPositionAdjustment@PositionAdjustmentHistory@@UEAA-AW4PositionAdjustmentAction@@PEAUIApplica.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 20), a2);
  return result;
}
