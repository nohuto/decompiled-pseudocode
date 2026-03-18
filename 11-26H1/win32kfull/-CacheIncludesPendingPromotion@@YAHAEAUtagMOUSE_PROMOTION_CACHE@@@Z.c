/*
 * XREFs of ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x140137D88
 * Callers:
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x140137DF4 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     ?HasPendingPromotion@@YAHXZ @ 0x1401366C0 (-HasPendingPromotion@@YAHXZ.c)
 */

__int64 __fastcall CacheIncludesPendingPromotion(struct tagMOUSE_PROMOTION_CACHE *a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *i; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( HasPendingPromotion(v5, v4) && *(_WORD *)a1 == *(_WORD *)(UserSessionState + 16632) )
  {
    for ( i = (__int64 *)*((_QWORD *)a1 + 1); i && i != *((__int64 **)a1 + 2); i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 8) == *(_DWORD *)(UserSessionState + 16636) )
        return 1LL;
    }
  }
  return 0LL;
}
