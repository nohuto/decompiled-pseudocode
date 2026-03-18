/*
 * XREFs of ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1401390C8
 * Callers:
 *     PointerPromotionOnPointerInputRetrieval @ 0x1401390B0 (PointerPromotionOnPointerInputRetrieval.c)
 * Callees:
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1401377EC (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401391D4 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x140139330 (-HasPendingPromotion@@YAHXZ.c)
 */

void __fastcall PointerPromotion::OnPointerInputRetrieval(
        PointerPromotion *this,
        __int64 a2,
        __int64 a3,
        struct tagPOINT a4)
{
  LONG x; // r12d
  unsigned int v6; // r15d
  __int16 v7; // si
  __int64 UserSessionState; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 i; // rdi
  __int64 v13; // rcx
  struct tagMOUSE_PROMOTION_ENTRY **v14; // r14
  __int64 *j; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  struct tagMOUSE_PROMOTION_QUEUE *v19; // rbx

  x = a4.x;
  v6 = a2;
  v7 = (__int16)this;
  UserSessionState = W32GetUserSessionState(this, a2);
  v11 = W32GetUserSessionState(v10, v9);
  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    v13 = v11 + 8 * (i + 2 * i + 2053);
    if ( *(_WORD *)v13 == v7 )
    {
      if ( v13 )
      {
        v14 = (struct tagMOUSE_PROMOTION_ENTRY **)(v13 + 8);
        for ( j = *(__int64 **)(v13 + 8); j && (*((_DWORD *)j + 8) > v6 || *((_DWORD *)j + 9) < v6); j = (__int64 *)*j )
          ;
        if ( j )
        {
          j[1] = a3;
          if ( !x && !(unsigned int)HasPendingPromotion() )
          {
            v16 = (unsigned int)(i + 1);
            if ( (unsigned int)v16 < 5 )
            {
              v17 = 3 * v16;
              v18 = (unsigned int)(5 - v16);
              v19 = (struct tagMOUSE_PROMOTION_QUEUE *)(UserSessionState + 16432 + 8 * v17);
              do
              {
                EmptyMousePromotionQueue(v19);
                v19 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v19 + 24);
                --v18;
              }
              while ( v18 );
            }
            if ( (*((_DWORD *)j + 5) & 0x40004) == 0 )
              ClearMousePromotionQueueUntil(v14, (struct tagMOUSE_PROMOTION_ENTRY *)j);
          }
        }
      }
      return;
    }
  }
}
