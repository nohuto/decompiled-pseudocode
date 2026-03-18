/*
 * XREFs of ?SaveLastEntryPromotionQueued@@YAXXZ @ 0x140136668
 * Callers:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013760C (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x14013A294 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SaveLastEntryPromotionQueued(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _OWORD *v3; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_OWORD **)(UserSessionState + 16552);
  *(_OWORD *)(UserSessionState + 16560) = *v3;
  *(_OWORD *)(UserSessionState + 16576) = v3[1];
  *(_OWORD *)(UserSessionState + 16592) = v3[2];
  *(_QWORD *)(UserSessionState + 16560) = 0LL;
}
