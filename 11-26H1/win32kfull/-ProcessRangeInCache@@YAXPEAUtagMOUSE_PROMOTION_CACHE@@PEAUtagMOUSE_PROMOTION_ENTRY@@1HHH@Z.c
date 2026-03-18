/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x140136D34
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1401366C0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140136E50 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x140136EE8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140136F30 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1402CBF60 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_CACHE *a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  struct tagMOUSE_PROMOTION_QUEUE *v6; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v16; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v17[2]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct tagMOUSE_PROMOTION_CACHE *)((char *)a1 + 8);
  ClearMousePromotionQueueUntil((struct tagMOUSE_PROMOTION_CACHE *)((char *)a1 + 8), a2);
  *(_OWORD *)v17 = 0LL;
  ExtractRangeFromQueue(v6, (struct tagMOUSE_PROMOTION_QUEUE *)v17, a2, a3);
  v11 = v17[1];
  v12 = v17[0];
  if ( a4 )
  {
    *((_QWORD *)v17[1] + 1) = *((_QWORD *)v17[0] + 1);
    while ( 1 )
    {
      i = *(struct tagMOUSE_PROMOTION_ENTRY **)v12;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v12 == v11 )
        break;
      *(_QWORD *)v12 = *(_QWORD *)i;
      Win32FreePool(i);
    }
  }
  if ( a5 || a6 )
  {
    for ( i = v12; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
    {
      if ( a5 )
        *((_DWORD *)i + 11) &= ~1u;
      if ( a6 )
        *((_DWORD *)i + 11) |= 0x40u;
    }
  }
  if ( HasPendingPromotion((__int64)i, a5) )
  {
    v16 = v12;
    v12 = *(struct tagMOUSE_PROMOTION_ENTRY **)v12;
    Win32FreePool(v16);
    ResetPendingPromotion();
  }
  if ( v12 )
  {
    UserSessionState = W32GetUserSessionState(v14, v13);
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16536), v12, v11);
  }
}
