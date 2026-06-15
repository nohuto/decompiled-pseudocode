/*
 * XREFs of sub_1400451F4 @ 0x1400451F4
 * Callers:
 *     sub_14000326C @ 0x14000326C (sub_14000326C.c)
 *     sub_14000370C @ 0x14000370C (sub_14000370C.c)
 *     sub_140003CFC @ 0x140003CFC (sub_140003CFC.c)
 *     sub_140005514 @ 0x140005514 (sub_140005514.c)
 *     sub_14002F9F0 @ 0x14002F9F0 (sub_14002F9F0.c)
 *     sub_140032764 @ 0x140032764 (sub_140032764.c)
 *     sub_140032FAC @ 0x140032FAC (sub_140032FAC.c)
 *     sub_1400368D0 @ 0x1400368D0 (sub_1400368D0.c)
 *     sub_140037C94 @ 0x140037C94 (sub_140037C94.c)
 *     sub_140039250 @ 0x140039250 (sub_140039250.c)
 *     sub_140039F90 @ 0x140039F90 (sub_140039F90.c)
 *     sub_14003A1C0 @ 0x14003A1C0 (sub_14003A1C0.c)
 *     sub_14003A230 @ 0x14003A230 (sub_14003A230.c)
 *     sub_140040800 @ 0x140040800 (sub_140040800.c)
 *     sub_1400451B0 @ 0x1400451B0 (sub_1400451B0.c)
 *     sub_1400451D0 @ 0x1400451D0 (sub_1400451D0.c)
 *     sub_1400451E0 @ 0x1400451E0 (sub_1400451E0.c)
 *     sub_14004D3E0 @ 0x14004D3E0 (sub_14004D3E0.c)
 *     sub_140056830 @ 0x140056830 (sub_140056830.c)
 *     sub_14005C580 @ 0x14005C580 (sub_14005C580.c)
 *     sub_14005E33C @ 0x14005E33C (sub_14005E33C.c)
 *     sub_14005E544 @ 0x14005E544 (sub_14005E544.c)
 *     sub_14006F3B0 @ 0x14006F3B0 (sub_14006F3B0.c)
 *     sub_14006F638 @ 0x14006F638 (sub_14006F638.c)
 *     sub_140070A9C @ 0x140070A9C (sub_140070A9C.c)
 *     sub_140074C24 @ 0x140074C24 (sub_140074C24.c)
 *     sub_1400A6900 @ 0x1400A6900 (sub_1400A6900.c)
 *     sub_1400A6A10 @ 0x1400A6A10 (sub_1400A6A10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400451F4(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
  {
    v1 = *a1;
    if ( *a1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  while ( v1 != _InterlockedCompareExchange(a1, v1 + 1, v1) );
  return (unsigned int)(v1 + 1);
}
