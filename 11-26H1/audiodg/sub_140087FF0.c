/*
 * XREFs of sub_140087FF0 @ 0x140087FF0
 * Callers:
 *     sub_140088080 @ 0x140088080 (sub_140088080.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14008F640 @ 0x14008F640 (sub_14008F640.c)
 */

__int64 __fastcall sub_140087FF0(_QWORD *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1[13];
  v10 = a1[15];
  v6 = a1[11];
  v9 = a3;
  v3 = sub_14008F640(a2, (unsigned int)&v6, (unsigned int)&v10, (unsigned int)&v8, (__int64)&v9);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    175,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
    v3);
  sub_14000C2A8(
    (int)retaddr,
    298,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v4);
  return v4;
}
