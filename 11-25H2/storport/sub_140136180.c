/*
 * XREFs of sub_140136180 @ 0x140136180
 * Callers:
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 *     sub_1401348FC @ 0x1401348FC (sub_1401348FC.c)
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
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140136180(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741309;
  if ( a1 && a2 )
  {
    if ( *(_QWORD *)(a2 + 40)
      && *(_QWORD *)(a2 + 48)
      && *(_DWORD *)(a1 + 8)
      && a2 == *(_QWORD *)(a1 + 16)
      && (unsigned int)(*(_DWORD *)a2 - 1) <= 1 )
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
