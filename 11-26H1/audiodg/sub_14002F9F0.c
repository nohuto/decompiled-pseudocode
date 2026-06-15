/*
 * XREFs of sub_14002F9F0 @ 0x14002F9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002F9F0(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = sub_1400451F4(a1 + 8);
  if ( v1 == 2 )
    sub_1400B6010(qword_1400E8490);
  return v1;
}
