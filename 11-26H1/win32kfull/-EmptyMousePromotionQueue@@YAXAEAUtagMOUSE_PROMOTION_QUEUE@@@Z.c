/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401364A0
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     PointerPromotionOnPointerInputRetrieval @ 0x140136390 (PointerPromotionOnPointerInputRetrieval.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x140137DF4 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1402CBDAC (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *i; // rcx

  for ( i = *(_QWORD **)a1; i; i = *(_QWORD **)a1 )
  {
    *(_QWORD *)a1 = *i;
    Win32FreePool(i);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
