/*
 * XREFs of sub_140087E30 @ 0x140087E30
 * Callers:
 *     sub_140087EC0 @ 0x140087EC0 (sub_140087EC0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140092818 @ 0x140092818 (sub_140092818.c)
 */

__int64 __fastcall sub_140087E30(__int64 a1, int a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = *(_QWORD *)(a1 + 104);
  v7 = *(_QWORD *)(a1 + 88);
  v10 = a4;
  v11 = a3;
  v4 = sub_140092818(a2, (unsigned int)&v7, a3, (unsigned int)&v9, (__int64)&v11, (__int64)&v10);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    22,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioprocessor.cpp",
    v4);
  sub_14000C2A8(
    (int)retaddr,
    316,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v5);
  return v5;
}
