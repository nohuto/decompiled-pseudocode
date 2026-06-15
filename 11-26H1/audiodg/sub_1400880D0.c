/*
 * XREFs of sub_1400880D0 @ 0x1400880D0
 * Callers:
 *     sub_140088160 @ 0x140088160 (sub_140088160.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140091900 @ 0x140091900 (sub_140091900.c)
 */

__int64 __fastcall sub_1400880D0(__int64 a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_QWORD *)(a1 + 104);
  v9 = *(_QWORD *)(a1 + 88);
  v8 = a3;
  v3 = sub_140091900(a2, (unsigned int)&v9, a3, (unsigned int)&v7, (__int64)&v8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 27, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudiopump.cpp", v3);
  sub_14000C2A8(
    (int)retaddr,
    310,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v4);
  return v4;
}
