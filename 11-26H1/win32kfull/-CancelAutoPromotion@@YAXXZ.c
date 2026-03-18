/*
 * XREFs of ?CancelAutoPromotion@@YAXXZ @ 0x1402CBDAC
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x140134268 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x140134A38 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401364A0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140136E50 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140264B78 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 */

void __fastcall CancelAutoPromotion(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v10; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v11; // [rsp+48h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = 0LL;
  v10 = 0LL;
  v3 = (struct tagMOUSE_PROMOTION_ENTRY **)(UserSessionState + 16536);
  if ( (unsigned int)FindMousePromotionInContactRange(
                       (__int64 **)(UserSessionState + 16536),
                       *(_DWORD *)(UserSessionState + 16412),
                       &v11,
                       &v10) )
  {
    v9 = 0LL;
    ExtractRangeFromQueue(v3, (struct tagMOUSE_PROMOTION_QUEUE *)&v9, v11, v10);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v9);
  }
  else
  {
    v6 = Win32AllocPoolZInit(48LL, 1886221141LL);
    if ( v6 )
    {
      v7 = W32GetUserSessionState(v5, v4);
      *(_OWORD *)v6 = *(_OWORD *)(v7 + 16552);
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16568);
      *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 16584);
      *(_DWORD *)(v6 + 20) = 303104;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)v3, (struct tagMOUSE_PROMOTION_ENTRY *)v6);
    }
  }
  v8 = W32GetUserSessionState(v5, v4);
  *(_DWORD *)(v8 + 16672) &= 0xFFFFFFE9;
}
