/*
 * XREFs of sub_140069ABC @ 0x140069ABC
 * Callers:
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 * Callees:
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14004392C @ 0x14004392C (sub_14004392C.c)
 */

__int64 __fastcall sub_140069ABC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (__int64 *)sub_140009AA8((_QWORD *)(a1 + 16), a2);
  v7 = sub_14004392C(*v6, *(_QWORD *)(a1 + 240), a2, a3, *(_DWORD *)(a1 + 144));
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 1182, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v7);
  return v8;
}
