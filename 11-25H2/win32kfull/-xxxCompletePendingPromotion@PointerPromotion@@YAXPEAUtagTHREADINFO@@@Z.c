/*
 * XREFs of ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026D6B0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x140139330 (-HasPendingPromotion@@YAHXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140139D58 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402B0494 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall PointerPromotion::xxxCompletePendingPromotion(PointerPromotion *this, struct tagTHREADINFO *a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  UserSessionState = W32GetUserSessionState(this, a2);
  if ( HasPendingPromotion(v5, v4)
    && *(PointerPromotion **)(UserSessionState + 16648) == this
    && *(_DWORD *)(UserSessionState + 16644) == *((_DWORD *)this + 310) )
  {
    ForceCompletePendingPromotion();
    xxxProcessMousePromotionQueue(v7, v6);
  }
  else
  {
    *((_DWORD *)this + 310) = 0;
  }
}
