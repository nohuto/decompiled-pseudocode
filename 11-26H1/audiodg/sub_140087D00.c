/*
 * XREFs of sub_140087D00 @ 0x140087D00
 * Callers:
 *     sub_140087DD0 @ 0x140087DD0 (sub_140087DD0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14008D3E4 @ 0x14008D3E4 (sub_14008D3E4.c)
 */

__int64 __fastcall sub_140087D00(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF

  v14 = a1[13];
  v9 = a1[15];
  v10 = a1[11];
  v12 = a4;
  v13 = a3;
  v6 = sub_14008D3E4(
         a2,
         (unsigned int)&v10,
         (unsigned int)&v9,
         (unsigned int)&v14,
         (__int64)&v13,
         (__int64)&v12,
         (__int64)&a5,
         (__int64)&a6);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    75,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
    v6);
  sub_14000C2A8(
    (int)retaddr,
    286,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v7);
  return v7;
}
