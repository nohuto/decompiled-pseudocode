/*
 * XREFs of sub_1400A2010 @ 0x1400A2010
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A2010(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  sub_1400B6010(*(_QWORD *)(a1 + 32));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    1820,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    v1);
  return v2;
}
