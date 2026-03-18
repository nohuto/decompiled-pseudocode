/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x14028FAE0
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x140136EE8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140136F30 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
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
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16536), v11, v11);
    *(_WORD *)(UserSessionState + 16632) = *(_WORD *)a1;
    v13 = *((unsigned int *)a2 + 8);
    *(_DWORD *)(UserSessionState + 16636) = v13;
    *(_QWORD *)(UserSessionState + 16640) = PtiCurrent(v13);
    *(_DWORD *)(UserSessionState + 16648) = a3;
    *(_DWORD *)(UserSessionState + 16652) = a4;
  }
}
