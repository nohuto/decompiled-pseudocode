/*
 * XREFs of sub_140087BF0 @ 0x140087BF0
 * Callers:
 *     sub_140087CA0 @ 0x140087CA0 (sub_140087CA0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14008A8DC @ 0x14008A8DC (sub_14008A8DC.c)
 */

__int64 __fastcall sub_140087BF0(_QWORD *a1, int a2, int a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v11 = a1[13];
  v8 = a1[15];
  v9 = a1[11];
  v12 = a3;
  v5 = sub_14008A8DC(a2, (unsigned int)&v9, (unsigned int)&v8, (unsigned int)&v11, (__int64)&v12, a4, (__int64)&a5);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 107, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v5);
  sub_14000C2A8(
    (int)retaddr,
    280,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v6);
  return v6;
}
