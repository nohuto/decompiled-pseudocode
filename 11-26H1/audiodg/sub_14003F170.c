/*
 * XREFs of sub_14003F170 @ 0x14003F170
 * Callers:
 *     sub_1400716B0 @ 0x1400716B0 (sub_1400716B0.c)
 *     sub_1400716C0 @ 0x1400716C0 (sub_1400716C0.c)
 *     sub_1400716D0 @ 0x1400716D0 (sub_1400716D0.c)
 *     sub_1400716E0 @ 0x1400716E0 (sub_1400716E0.c)
 *     sub_140071700 @ 0x140071700 (sub_140071700.c)
 *     sub_140071720 @ 0x140071720 (sub_140071720.c)
 *     sub_140071740 @ 0x140071740 (sub_140071740.c)
 *     sub_140071760 @ 0x140071760 (sub_140071760.c)
 * Callees:
 *     sub_140034318 @ 0x140034318 (sub_140034318.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003F170(__int64 a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_1400444D0(a1 + 248);
  if ( !v2 )
  {
    sub_140034318((__int64)&v4);
    if ( a1 )
      sub_1400B6010(a1);
    sub_1400B6010(qword_1400E8490);
  }
  return v2;
}
