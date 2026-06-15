/*
 * XREFs of sub_14007DD08 @ 0x14007DD08
 * Callers:
 *     sub_140077198 @ 0x140077198 (sub_140077198.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_14007E7A0 @ 0x14007E7A0 (sub_14007E7A0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007DD08(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = a2;
  if ( a2 )
    sub_1400B6010(a2);
  if ( v5 )
    sub_1400B6010(v5);
  sub_14001821C((__int64 *)(a1 + 200), a3);
  v6 = sub_14007E7A0(a1 + 16);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 1626, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
  return v7;
}
