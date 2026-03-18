/*
 * XREFs of ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x14026EDB4
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1401398E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x14013AA1C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 */

__int64 __fastcall HandleLossOfPrimary(struct tagPOINTER_INFO *a1)
{
  __int64 v1; // rdx
  int v2; // eax

  v1 = *((unsigned int *)a1 + 3);
  if ( (v1 & 0x40004) == 0 || (v1 & 0x10000) != 0 )
  {
    ResetMousePromotionInfo(0LL, v1);
    return 0LL;
  }
  else
  {
    v2 = 303104;
    *((_DWORD *)a1 + 3) = 303104;
    if ( (v1 & 2) != 0 )
    {
      v2 = 303106;
      *((_DWORD *)a1 + 3) = 303106;
    }
    if ( (v1 & 0x4000) != 0 )
      *((_DWORD *)a1 + 3) = v2 | 0x4000;
    return 1LL;
  }
}
