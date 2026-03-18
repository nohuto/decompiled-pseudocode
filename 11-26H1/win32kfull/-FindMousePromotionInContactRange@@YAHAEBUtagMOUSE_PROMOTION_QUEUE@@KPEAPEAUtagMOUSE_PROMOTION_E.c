/*
 * XREFs of ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x140264B78
 * Callers:
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1401366EC (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1402CBDAC (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindMousePromotionInContactRange(
        __int64 **a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY **a3,
        struct tagMOUSE_PROMOTION_ENTRY **a4)
{
  __int64 *v4; // r11
  __int64 *v5; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v6; // r10
  struct tagMOUSE_PROMOTION_ENTRY *v7; // rdi
  int v8; // ecx
  struct tagMOUSE_PROMOTION_ENTRY *v9; // rax
  __int64 result; // rax

  v4 = *a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  while ( v4 )
  {
    v8 = *((_DWORD *)v4 + 5);
    v9 = (struct tagMOUSE_PROMOTION_ENTRY *)v4;
    if ( (v8 & 0x10000) == 0 )
      v9 = v6;
    v6 = v9;
    if ( *((_DWORD *)v4 + 8) <= a2 && *((_DWORD *)v4 + 9) >= a2 )
    {
      if ( !v9 )
        break;
      v5 = v4;
    }
    if ( (v8 & 0x40000) != 0 )
    {
      if ( v5 )
      {
        v7 = (struct tagMOUSE_PROMOTION_ENTRY *)v4;
        goto LABEL_15;
      }
      v6 = 0LL;
    }
    v4 = (__int64 *)*v4;
  }
  if ( !v5 )
    return 0LL;
LABEL_15:
  if ( v6 )
  {
    *a3 = v6;
    result = 1LL;
    *a4 = v7;
    return result;
  }
  return 0LL;
}
