/*
 * XREFs of KiObjTrkTimerUntrack @ 0x1403B5410
 * Callers:
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 * Callees:
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 */

char __fastcall KiObjTrkTimerUntrack(__int64 a1)
{
  char v1; // bl

  v1 = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 59), 1, 2) != 2 )
    return 0;
  DifObjTrkRemoveItem(49LL, a1, 0LL);
  return v1;
}
