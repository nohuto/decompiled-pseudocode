/*
 * XREFs of sub_14009D770 @ 0x14009D770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14009D770(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  sub_1400B6010(*(_QWORD *)(a1 + 24));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    1826,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    v1);
  return v2;
}
