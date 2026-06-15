/*
 * XREFs of sub_1400444D0 @ 0x1400444D0
 * Callers:
 *     sub_14000326C @ 0x14000326C (sub_14000326C.c)
 *     sub_14000370C @ 0x14000370C (sub_14000370C.c)
 *     sub_140003CFC @ 0x140003CFC (sub_140003CFC.c)
 *     sub_140005514 @ 0x140005514 (sub_140005514.c)
 *     sub_14002B1F0 @ 0x14002B1F0 (sub_14002B1F0.c)
 *     sub_14002ED90 @ 0x14002ED90 (sub_14002ED90.c)
 *     sub_14002F870 @ 0x14002F870 (sub_14002F870.c)
 *     sub_140030DB0 @ 0x140030DB0 (sub_140030DB0.c)
 *     sub_1400312E0 @ 0x1400312E0 (sub_1400312E0.c)
 *     sub_140031940 @ 0x140031940 (sub_140031940.c)
 *     sub_1400323D0 @ 0x1400323D0 (sub_1400323D0.c)
 *     sub_140032764 @ 0x140032764 (sub_140032764.c)
 *     sub_140032FAC @ 0x140032FAC (sub_140032FAC.c)
 *     sub_140034F20 @ 0x140034F20 (sub_140034F20.c)
 *     sub_1400379C0 @ 0x1400379C0 (sub_1400379C0.c)
 *     sub_140037C94 @ 0x140037C94 (sub_140037C94.c)
 *     sub_14003F170 @ 0x14003F170 (sub_14003F170.c)
 *     sub_140044460 @ 0x140044460 (sub_140044460.c)
 *     sub_14004EAF0 @ 0x14004EAF0 (sub_14004EAF0.c)
 *     sub_140056830 @ 0x140056830 (sub_140056830.c)
 *     sub_140058440 @ 0x140058440 (sub_140058440.c)
 *     sub_14005C580 @ 0x14005C580 (sub_14005C580.c)
 *     sub_14005E33C @ 0x14005E33C (sub_14005E33C.c)
 *     sub_14005E544 @ 0x14005E544 (sub_14005E544.c)
 *     sub_14005ECA0 @ 0x14005ECA0 (sub_14005ECA0.c)
 *     sub_14005ED10 @ 0x14005ED10 (sub_14005ED10.c)
 *     sub_14005ED60 @ 0x14005ED60 (sub_14005ED60.c)
 *     sub_14006F638 @ 0x14006F638 (sub_14006F638.c)
 *     sub_140070200 @ 0x140070200 (sub_140070200.c)
 *     sub_140070A9C @ 0x140070A9C (sub_140070A9C.c)
 *     sub_140074C24 @ 0x140074C24 (sub_140074C24.c)
 *     sub_140075000 @ 0x140075000 (sub_140075000.c)
 *     sub_1400992C0 @ 0x1400992C0 (sub_1400992C0.c)
 *     sub_1400993E0 @ 0x1400993E0 (sub_1400993E0.c)
 *     sub_1400A84E0 @ 0x1400A84E0 (sub_1400A84E0.c)
 *     sub_1400A8640 @ 0x1400A8640 (sub_1400A8640.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400444D0(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
