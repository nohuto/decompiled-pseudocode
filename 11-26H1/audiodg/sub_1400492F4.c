/*
 * XREFs of sub_1400492F4 @ 0x1400492F4
 * Callers:
 *     sub_14000326C @ 0x14000326C (sub_14000326C.c)
 *     sub_14000370C @ 0x14000370C (sub_14000370C.c)
 *     sub_140003CFC @ 0x140003CFC (sub_140003CFC.c)
 *     sub_140005514 @ 0x140005514 (sub_140005514.c)
 *     sub_1400075D4 @ 0x1400075D4 (sub_1400075D4.c)
 *     sub_140007968 @ 0x140007968 (sub_140007968.c)
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 *     sub_140023428 @ 0x140023428 (sub_140023428.c)
 *     sub_140023BD0 @ 0x140023BD0 (sub_140023BD0.c)
 *     sub_140032764 @ 0x140032764 (sub_140032764.c)
 *     sub_140035BAC @ 0x140035BAC (sub_140035BAC.c)
 *     sub_1400372C0 @ 0x1400372C0 (sub_1400372C0.c)
 *     sub_140037C94 @ 0x140037C94 (sub_140037C94.c)
 *     sub_140039264 @ 0x140039264 (sub_140039264.c)
 *     sub_140041294 @ 0x140041294 (sub_140041294.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     sub_14004AEE4 @ 0x14004AEE4 (sub_14004AEE4.c)
 *     sub_14004C7F4 @ 0x14004C7F4 (sub_14004C7F4.c)
 *     sub_14004D728 @ 0x14004D728 (sub_14004D728.c)
 *     sub_14004D858 @ 0x14004D858 (sub_14004D858.c)
 *     sub_14004D97C @ 0x14004D97C (sub_14004D97C.c)
 *     sub_14004E530 @ 0x14004E530 (sub_14004E530.c)
 *     sub_14004FDBC @ 0x14004FDBC (sub_14004FDBC.c)
 *     sub_140050AE0 @ 0x140050AE0 (sub_140050AE0.c)
 *     sub_140051420 @ 0x140051420 (sub_140051420.c)
 *     sub_140053700 @ 0x140053700 (sub_140053700.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 *     sub_1400599D0 @ 0x1400599D0 (sub_1400599D0.c)
 *     sub_14005D9BC @ 0x14005D9BC (sub_14005D9BC.c)
 *     sub_14005DCD0 @ 0x14005DCD0 (sub_14005DCD0.c)
 *     sub_14005E264 @ 0x14005E264 (sub_14005E264.c)
 *     sub_14005E33C @ 0x14005E33C (sub_14005E33C.c)
 *     sub_14005E450 @ 0x14005E450 (sub_14005E450.c)
 *     sub_14005E544 @ 0x14005E544 (sub_14005E544.c)
 *     sub_1400646D0 @ 0x1400646D0 (sub_1400646D0.c)
 *     sub_14006B8B0 @ 0x14006B8B0 (sub_14006B8B0.c)
 *     sub_14006F504 @ 0x14006F504 (sub_14006F504.c)
 *     sub_14006F638 @ 0x14006F638 (sub_14006F638.c)
 *     sub_1400709A4 @ 0x1400709A4 (sub_1400709A4.c)
 *     sub_140070A9C @ 0x140070A9C (sub_140070A9C.c)
 *     sub_140071AE4 @ 0x140071AE4 (sub_140071AE4.c)
 *     sub_140074B04 @ 0x140074B04 (sub_140074B04.c)
 *     sub_140074C24 @ 0x140074C24 (sub_140074C24.c)
 *     sub_1400912C0 @ 0x1400912C0 (sub_1400912C0.c)
 *     sub_140093194 @ 0x140093194 (sub_140093194.c)
 *     sub_140093530 @ 0x140093530 (sub_140093530.c)
 *     sub_1400A2730 @ 0x1400A2730 (sub_1400A2730.c)
 *     sub_1400A9290 @ 0x1400A9290 (sub_1400A9290.c)
 *     sub_1400A92F8 @ 0x1400A92F8 (sub_1400A92F8.c)
 *     sub_1400AB5FC @ 0x1400AB5FC (sub_1400AB5FC.c)
 * Callees:
 *     sub_14004A44C @ 0x14004A44C (sub_14004A44C.c)
 *     sub_14004A474 @ 0x14004A474 (sub_14004A474.c)
 *     _o__callnewh @ 0x14004A55E (_o__callnewh.c)
 *     _o_malloc @ 0x14004A658 (_o_malloc.c)
 */

__int64 __fastcall sub_1400492F4(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = o_malloc(a1, a2);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh(i) )
    {
      if ( i != -1 )
        sub_14004A44C();
      sub_14004A474();
    }
  }
  return result;
}
