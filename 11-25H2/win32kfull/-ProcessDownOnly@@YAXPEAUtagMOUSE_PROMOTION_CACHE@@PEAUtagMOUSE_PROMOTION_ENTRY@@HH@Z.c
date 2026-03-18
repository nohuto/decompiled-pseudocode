/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x14026A6B0
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x14013A028 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013760C (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1401377EC (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        int a3,
        int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rdi
  __int64 UserSessionState; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx

  ClearMousePromotionQueueUntil(a1 + 1, a2);
  v8 = Win32AllocPoolZInit(48LL, 1886221141LL);
  v11 = (struct tagMOUSE_PROMOTION_ENTRY *)v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v8 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v8 = 0LL;
    if ( a3 )
      *(_DWORD *)(v8 + 44) &= ~1u;
    UserSessionState = W32GetUserSessionState(v10, v9);
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16544), v11, v11);
    *(_WORD *)(UserSessionState + 16640) = *(_WORD *)a1;
    v13 = *((unsigned int *)a2 + 8);
    *(_DWORD *)(UserSessionState + 16644) = v13;
    *(_QWORD *)(UserSessionState + 16648) = PtiCurrent(v13, v14);
    *(_DWORD *)(UserSessionState + 16656) = a3;
    *(_DWORD *)(UserSessionState + 16660) = a4;
  }
}
