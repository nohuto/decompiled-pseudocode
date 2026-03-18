/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1402CBF60
 * Callers:
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140136D34 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetPendingPromotion(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_QWORD *)(UserSessionState + 16640);
  if ( v3 )
    *(_DWORD *)(v3 + 1240) = 0;
  *(_WORD *)(UserSessionState + 16632) = 0;
  *(_DWORD *)(UserSessionState + 16636) = 0;
  *(_QWORD *)(UserSessionState + 16640) = 0LL;
  *(_DWORD *)(UserSessionState + 16648) = 0;
}
