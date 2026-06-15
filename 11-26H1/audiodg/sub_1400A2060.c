/*
 * XREFs of sub_1400A2060 @ 0x1400A2060
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400A2060(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 24);
  *v3 = 0LL;
  if ( v4 )
    sub_1400B6010(v4);
  sub_1400B6010(a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    1806,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    v5);
  return v6;
}
