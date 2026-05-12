/*
 * XREFs of sub_1400567A0 @ 0x1400567A0
 * Callers:
 *     sub_1400017E0 @ 0x1400017E0 (sub_1400017E0.c)
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14001B35C @ 0x14001B35C (sub_14001B35C.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_140045FE8 @ 0x140045FE8 (sub_140045FE8.c)
 *     sub_140046420 @ 0x140046420 (sub_140046420.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_1400655B0 @ 0x1400655B0 (sub_1400655B0.c)
 *     sub_140069314 @ 0x140069314 (sub_140069314.c)
 *     sub_1400697CC @ 0x1400697CC (sub_1400697CC.c)
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 *     sub_14006A5B0 @ 0x14006A5B0 (sub_14006A5B0.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     sub_14006AE00 @ 0x14006AE00 (sub_14006AE00.c)
 *     sub_140072F8C @ 0x140072F8C (sub_140072F8C.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140179A60 @ 0x140179A60 (sub_140179A60.c)
 *     sub_14017A968 @ 0x14017A968 (sub_14017A968.c)
 *     sub_14017A9D0 @ 0x14017A9D0 (sub_14017A9D0.c)
 *     sub_14017ADA0 @ 0x14017ADA0 (sub_14017ADA0.c)
 *     sub_14017F720 @ 0x14017F720 (sub_14017F720.c)
 *     sub_14017F944 @ 0x14017F944 (sub_14017F944.c)
 *     sub_1401B10C4 @ 0x1401B10C4 (sub_1401B10C4.c)
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_1400567D8 @ 0x1400567D8 (sub_1400567D8.c)
 */

__int64 sub_1400567A0()
{
  if ( (dword_1401695E8 & 0x10) != 0 )
    return dword_1401695E8 & 1;
  else
    return sub_1400567D8((unsigned int)dword_1401695E8, 3LL);
}
