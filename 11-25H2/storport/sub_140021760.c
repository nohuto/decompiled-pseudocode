/*
 * XREFs of sub_140021760 @ 0x140021760
 * Callers:
 *     sub_14000A2D8 @ 0x14000A2D8 (sub_14000A2D8.c)
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140010540 @ 0x140010540 (sub_140010540.c)
 *     sub_14001B35C @ 0x14001B35C (sub_14001B35C.c)
 *     sub_140020210 @ 0x140020210 (sub_140020210.c)
 *     sub_140020420 @ 0x140020420 (sub_140020420.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_14002A7F0 @ 0x14002A7F0 (sub_14002A7F0.c)
 *     sub_14003081C @ 0x14003081C (sub_14003081C.c)
 *     sub_140031B18 @ 0x140031B18 (sub_140031B18.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_1400772D0 @ 0x1400772D0 (sub_1400772D0.c)
 *     sub_14007922C @ 0x14007922C (sub_14007922C.c)
 *     sub_140091390 @ 0x140091390 (sub_140091390.c)
 *     sub_14009210C @ 0x14009210C (sub_14009210C.c)
 *     sub_140092628 @ 0x140092628 (sub_140092628.c)
 *     sub_14009281C @ 0x14009281C (sub_14009281C.c)
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 *     sub_14009B524 @ 0x14009B524 (sub_14009B524.c)
 *     sub_14009E168 @ 0x14009E168 (sub_14009E168.c)
 *     sub_1401801F4 @ 0x1401801F4 (sub_1401801F4.c)
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 *     sub_1401AEB68 @ 0x1401AEB68 (sub_1401AEB68.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140021760(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  int v3; // ebx
  int v4; // ebx

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( !v1 )
    return 3221225659LL;
  v3 = v1(*(_QWORD *)(a1 + 240) + 16LL);
  if ( !(unsigned int)sub_1400567A0() )
    return v3 != 0 ? 0xC0000001 : 0;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221225473LL;
  if ( v4 == 1 )
    return 3221225659LL;
  return 3221225701LL;
}
