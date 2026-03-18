/*
 * XREFs of ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402B0494
 * Callers:
 *     ?xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140139210 (-xxxCleanupThreadPointerData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x140139508 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x14013AA1C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026D6B0 (-xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013968C (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x14013A028 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1402B0548 (-ResetPendingPromotion@@YAXXZ.c)
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
  v3 = *(_WORD *)(UserSessionState + 16640);
  v4 = *(_DWORD *)(UserSessionState + 16644);
  v6 = ((*(_DWORD *)(UserSessionState + 16656) != 0) + 1) | (*(_DWORD *)(UserSessionState + 16660) != 0
                                                           ? 50397184
                                                           : 16842752);
  if ( !(unsigned int)ValidatePointerPromotion(v3, v4, &v6, &v8, &v7) )
    goto LABEL_5;
  v5 = v7;
  if ( v7 )
    *((_DWORD *)v7 + 11) |= 0x20u;
  if ( !(unsigned int)PromotePointerInternal(*(unsigned __int16 *)(UserSessionState + 16640), v6, v8, v5) )
LABEL_5:
    ResetPendingPromotion();
}
