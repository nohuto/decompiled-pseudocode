/*
 * XREFs of sub_14002633C @ 0x14002633C
 * Callers:
 *     sub_140026194 @ 0x140026194 (sub_140026194.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400263C8 @ 0x1400263C8 (sub_1400263C8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002633C(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  sub_1400B6010(*(_QWORD *)(a1 + 8));
  v4 = sub_1400263C8(a1, *(_QWORD *)(a2 + 16));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 213, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v4);
  return v5;
}
