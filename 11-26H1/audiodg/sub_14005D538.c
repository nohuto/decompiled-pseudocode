/*
 * XREFs of sub_14005D538 @ 0x14005D538
 * Callers:
 *     sub_14005D170 @ 0x14005D170 (sub_14005D170.c)
 *     sub_14005D4F0 @ 0x14005D4F0 (sub_14005D4F0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005D538(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = sub_1400B6010(*(_QWORD *)(a1 + 40));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 95, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v1);
  return v2;
}
