/*
 * XREFs of sub_180011B48 @ 0x180011B48
 * Callers:
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180012F64 @ 0x180012F64 (sub_180012F64.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_180013268 @ 0x180013268 (sub_180013268.c)
 *     sub_180017BB8 @ 0x180017BB8 (sub_180017BB8.c)
 *     sub_1800294F4 @ 0x1800294F4 (sub_1800294F4.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     sub_180039B18 @ 0x180039B18 (sub_180039B18.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 *     sub_18005FF1C @ 0x18005FF1C (sub_18005FF1C.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18007FA94 @ 0x18007FA94 (sub_18007FA94.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 *     sub_18008CC50 @ 0x18008CC50 (sub_18008CC50.c)
 *     sub_1800C2850 @ 0x1800C2850 (sub_1800C2850.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_180011B48(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFFFFFFFLL )
    sub_180012970();
  return 16 * a1;
}
