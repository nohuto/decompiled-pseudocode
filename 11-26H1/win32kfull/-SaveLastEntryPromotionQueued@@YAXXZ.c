/*
 * XREFs of ?SaveLastEntryPromotionQueued@@YAXXZ @ 0x140136F64
 * Callers:
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x140134A38 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140136F30 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SaveLastEntryPromotionQueued(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _OWORD *v3; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_OWORD **)(UserSessionState + 16544);
  *(_OWORD *)(UserSessionState + 16552) = *v3;
  *(_OWORD *)(UserSessionState + 16568) = v3[1];
  *(_OWORD *)(UserSessionState + 16584) = v3[2];
  *(_QWORD *)(UserSessionState + 16552) = 0LL;
}
