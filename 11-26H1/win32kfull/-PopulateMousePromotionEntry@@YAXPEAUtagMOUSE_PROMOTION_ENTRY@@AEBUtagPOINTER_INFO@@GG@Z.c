/*
 * XREFs of ?PopulateMousePromotionEntry@@YAXPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x140134B54
 * Callers:
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1401349D0 (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopulateMousePromotionEntry(
        struct tagMOUSE_PROMOTION_ENTRY *a1,
        const struct tagPOINTER_INFO *a2,
        char a3,
        char a4)
{
  int v4; // eax
  int v5; // eax

  *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 6);
  *((_DWORD *)a1 + 4) = *(_DWORD *)a2;
  *((_DWORD *)a1 + 5) = *((_DWORD *)a2 + 3);
  v4 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 8) = v4;
  *((_DWORD *)a1 + 9) = v4;
  v5 = *((_DWORD *)a1 + 11) | 1;
  *(_QWORD *)a1 = 0LL;
  *((_WORD *)a1 + 20) = a3 & 0x7F;
  *((_DWORD *)a1 + 11) = v5;
  if ( (a4 & 1) != 0 )
  {
    v5 |= 2u;
    *((_DWORD *)a1 + 11) = v5;
    if ( (a4 & 2) != 0 )
    {
      v5 |= 4u;
      *((_DWORD *)a1 + 11) = v5;
    }
  }
  if ( (a4 & 4) != 0 )
  {
    v5 |= 8u;
    *((_DWORD *)a1 + 11) = v5;
  }
  if ( (a4 & 8) != 0 )
    *((_DWORD *)a1 + 11) = v5 | 0x10;
  *((_QWORD *)a1 + 3) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
}
