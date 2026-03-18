/*
 * XREFs of ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1401368A4
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1401366EC (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int64 a1, unsigned int *a2)
{
  __int16 v3; // di
  __int64 UserSessionState; // rcx
  unsigned int i; // r9d
  struct tagMOUSE_PROMOTION_CACHE *result; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
      return 0LL;
    result = (struct tagMOUSE_PROMOTION_CACHE *)(UserSessionState + 24 * (i + 684LL));
    if ( *(_WORD *)result == v3 )
      break;
  }
  *a2 = i;
  return result;
}
