/*
 * XREFs of ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4
 * Callers:
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140134C48 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     xxxCheckPendingPromotePointer @ 0x140135CB0 (xxxCheckPendingPromotePointer.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1401364E0 (xxxCleanupThreadPointerInputInfo.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x140137DF4 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1401366EC (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1402CBF60 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ForceCompletePendingPromotion(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  unsigned __int16 v3; // cx
  unsigned int v4; // edx
  struct tagMOUSE_PROMOTION_ENTRY *v5; // r9
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v7; // [rsp+48h] [rbp+10h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_WORD *)(UserSessionState + 16632);
  v4 = *(_DWORD *)(UserSessionState + 16636);
  v6 = ((*(_DWORD *)(UserSessionState + 16648) != 0) + 1) | (*(_DWORD *)(UserSessionState + 16652) != 0
                                                           ? 50397184
                                                           : 16842752);
  if ( !(unsigned int)ValidatePointerPromotion(v3, v4, &v6, &v8, &v7) )
    goto LABEL_5;
  v5 = v7;
  if ( v7 )
    *((_DWORD *)v7 + 11) |= 0x20u;
  if ( !(unsigned int)PromotePointerInternal(*(unsigned __int16 *)(UserSessionState + 16632), v6, v8, v5) )
LABEL_5:
    ResetPendingPromotion();
}
