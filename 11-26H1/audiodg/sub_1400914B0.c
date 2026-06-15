/*
 * XREFs of sub_1400914B0 @ 0x1400914B0
 * Callers:
 *     sub_140091510 @ 0x140091510 (sub_140091510.c)
 *     sub_140091520 @ 0x140091520 (sub_140091520.c)
 *     sub_140091530 @ 0x140091530 (sub_140091530.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400914B0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC((volatile signed __int32 *)(a1 + 124));
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
