/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140137644
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x14013A028 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x14013760C (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140137760 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1401377EC (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x140139330 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1402B0548 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_CACHE *a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        int a5,
        int a6)
{
  struct tagMOUSE_PROMOTION_QUEUE *v6; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v15; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rdx
  struct tagMOUSE_PROMOTION_ENTRY *v17; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v18[2]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct tagMOUSE_PROMOTION_CACHE *)((char *)a1 + 8);
  ClearMousePromotionQueueUntil((struct tagMOUSE_PROMOTION_CACHE *)((char *)a1 + 8), a2);
  *(_OWORD *)v18 = 0LL;
  ExtractRangeFromQueue(v6, (struct tagMOUSE_PROMOTION_QUEUE *)v18, a2, a3);
  v10 = v18[1];
  v11 = v18[0];
  if ( a4 )
  {
    *((_QWORD *)v18[1] + 1) = *((_QWORD *)v18[0] + 1);
    while ( 1 )
    {
      v15 = *(struct tagMOUSE_PROMOTION_ENTRY **)v11;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v11 == v10 )
        break;
      *(_QWORD *)v11 = *(_QWORD *)v15;
      Win32FreePool(v15);
    }
  }
  if ( a5 || a6 )
  {
    for ( i = v11; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
    {
      if ( a5 )
        *((_DWORD *)i + 11) &= ~1u;
      if ( a6 )
        *((_DWORD *)i + 11) |= 0x40u;
    }
  }
  if ( (unsigned int)HasPendingPromotion() )
  {
    v17 = v11;
    v11 = *(struct tagMOUSE_PROMOTION_ENTRY **)v11;
    Win32FreePool(v17);
    ResetPendingPromotion();
  }
  if ( v11 )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16544), v11, v10);
  }
}
