/*
 * XREFs of sub_1401361CC @ 0x1401361CC
 * Callers:
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 *     sub_1401348FC @ 0x1401348FC (sub_1401348FC.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140134B78 @ 0x140134B78 (sub_140134B78.c)
 *     sub_140134D18 @ 0x140134D18 (sub_140134D18.c)
 *     sub_140134EF8 @ 0x140134EF8 (sub_140134EF8.c)
 *     sub_14013500C @ 0x14013500C (sub_14013500C.c)
 *     sub_140135108 @ 0x140135108 (sub_140135108.c)
 *     sub_1401351D4 @ 0x1401351D4 (sub_1401351D4.c)
 *     sub_140135334 @ 0x140135334 (sub_140135334.c)
 *     sub_1401354B4 @ 0x1401354B4 (sub_1401354B4.c)
 *     sub_1401355EC @ 0x1401355EC (sub_1401355EC.c)
 *     sub_1401357E8 @ 0x1401357E8 (sub_1401357E8.c)
 *     sub_1401359CC @ 0x1401359CC (sub_1401359CC.c)
 *     sub_140135B20 @ 0x140135B20 (sub_140135B20.c)
 *     sub_140135C8C @ 0x140135C8C (sub_140135C8C.c)
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 *     sub_14013A898 @ 0x14013A898 (sub_14013A898.c)
 * Callees:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 */

__int64 __fastcall sub_1401361CC(__int64 a1, volatile __int32 *a2, int a3)
{
  if ( a3 == -1073741643 || a3 == -1073741618 || a3 == -1073741436 || a3 == -1073741435 || a3 == -1073741434 )
  {
    a3 = sub_140135DCC(a1, (__int64)a2);
    if ( a3 >= 0 )
    {
      a3 = -1073741309;
      _InterlockedExchange(a2, 4);
    }
  }
  else if ( a3 == -1073741309 )
  {
    _InterlockedExchange(a2, 4);
  }
  return (unsigned int)a3;
}
