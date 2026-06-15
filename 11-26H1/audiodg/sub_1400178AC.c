/*
 * XREFs of sub_1400178AC @ 0x1400178AC
 * Callers:
 *     sub_140017340 @ 0x140017340 (sub_140017340.c)
 *     sub_1400173A0 @ 0x1400173A0 (sub_1400173A0.c)
 *     sub_140017400 @ 0x140017400 (sub_140017400.c)
 *     sub_1400174A0 @ 0x1400174A0 (sub_1400174A0.c)
 *     sub_140017500 @ 0x140017500 (sub_140017500.c)
 *     sub_140017560 @ 0x140017560 (sub_140017560.c)
 *     sub_1400175C0 @ 0x1400175C0 (sub_1400175C0.c)
 *     sub_1400176D0 @ 0x1400176D0 (sub_1400176D0.c)
 *     sub_140017730 @ 0x140017730 (sub_140017730.c)
 *     sub_140017790 @ 0x140017790 (sub_140017790.c)
 *     sub_1400177F0 @ 0x1400177F0 (sub_1400177F0.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_14001C0D0 @ 0x14001C0D0 (sub_14001C0D0.c)
 *     sub_14001C260 @ 0x14001C260 (sub_14001C260.c)
 *     sub_14001C4D0 @ 0x14001C4D0 (sub_14001C4D0.c)
 *     sub_14001C550 @ 0x14001C550 (sub_14001C550.c)
 *     sub_14001C5D0 @ 0x14001C5D0 (sub_14001C5D0.c)
 *     sub_14001C660 @ 0x14001C660 (sub_14001C660.c)
 *     sub_14001C6F0 @ 0x14001C6F0 (sub_14001C6F0.c)
 *     sub_14001C80C @ 0x14001C80C (sub_14001C80C.c)
 *     sub_14001DC70 @ 0x14001DC70 (sub_14001DC70.c)
 *     sub_140053D30 @ 0x140053D30 (sub_140053D30.c)
 *     sub_14005BA10 @ 0x14005BA10 (sub_14005BA10.c)
 *     sub_14005D620 @ 0x14005D620 (sub_14005D620.c)
 *     sub_1400602A0 @ 0x1400602A0 (sub_1400602A0.c)
 *     sub_140065DE0 @ 0x140065DE0 (sub_140065DE0.c)
 *     sub_14007D1C0 @ 0x14007D1C0 (sub_14007D1C0.c)
 *     sub_14007D280 @ 0x14007D280 (sub_14007D280.c)
 *     sub_14007D310 @ 0x14007D310 (sub_14007D310.c)
 *     sub_14007D3F0 @ 0x14007D3F0 (sub_14007D3F0.c)
 *     sub_14007D4B0 @ 0x14007D4B0 (sub_14007D4B0.c)
 *     sub_14007D5A0 @ 0x14007D5A0 (sub_14007D5A0.c)
 *     sub_1400888A0 @ 0x1400888A0 (sub_1400888A0.c)
 *     sub_140089DA0 @ 0x140089DA0 (sub_140089DA0.c)
 *     sub_14008C560 @ 0x14008C560 (sub_14008C560.c)
 *     sub_14008C5C0 @ 0x14008C5C0 (sub_14008C5C0.c)
 *     sub_14008E370 @ 0x14008E370 (sub_14008E370.c)
 *     sub_140091430 @ 0x140091430 (sub_140091430.c)
 *     sub_1400914B0 @ 0x1400914B0 (sub_1400914B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400178AC(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
