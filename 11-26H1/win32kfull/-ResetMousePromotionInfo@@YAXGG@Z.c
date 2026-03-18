/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x140137DF4
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x140134268 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1402969C0 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401364A0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x140137D88 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // si
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  _WORD *v9; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = UserSessionState;
  if ( *(_WORD *)(UserSessionState + 16408) )
  {
    v6 = UserSessionState + 16512;
    if ( (unsigned int)CacheIncludesPendingPromotion((struct tagMOUSE_PROMOTION_CACHE *)(UserSessionState + 16512), v4) )
      ForceCompletePendingPromotion();
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v6 + 8));
    v7 = 4LL;
    do
    {
      v8 = *(_QWORD *)(v6 - 8);
      *(_OWORD *)v6 = *(_OWORD *)(v6 - 24);
      *(_QWORD *)(v6 + 16) = v8;
      v6 -= 24LL;
      --v7;
    }
    while ( v7 );
    v9 = (_WORD *)(v5 + 16416);
    *(_QWORD *)(v5 + 16424) = 0LL;
    *(_WORD *)(v5 + 16416) = 0;
    *(_QWORD *)(v5 + 16432) = 0LL;
  }
  else
  {
    v9 = (_WORD *)(UserSessionState + 16416);
  }
  *(_WORD *)(v5 + 16408) = v2;
  *v9 = v2;
}
