/*
 * XREFs of sub_140092F04 @ 0x140092F04
 * Callers:
 *     sub_140089E50 @ 0x140089E50 (sub_140089E50.c)
 *     sub_1400909A0 @ 0x1400909A0 (sub_1400909A0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140092C78 @ 0x140092C78 (sub_140092C78.c)
 */

__int64 __fastcall sub_140092F04(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v3 = sub_140092C78(a3, &v7, &v8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    39,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcpusharedmemory.cpp",
    v3);
  return v4;
}
