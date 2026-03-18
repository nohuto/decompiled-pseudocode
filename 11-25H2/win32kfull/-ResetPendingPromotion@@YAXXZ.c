/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1402B0548
 * Callers:
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140137644 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402B0494 (-ForceCompletePendingPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetPendingPromotion(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_QWORD *)(UserSessionState + 16648);
  if ( v3 )
    *(_DWORD *)(v3 + 1240) = 0;
  *(_WORD *)(UserSessionState + 16640) = 0;
  *(_DWORD *)(UserSessionState + 16644) = 0;
  *(_QWORD *)(UserSessionState + 16648) = 0LL;
  *(_DWORD *)(UserSessionState + 16656) = 0;
}
