/*
 * XREFs of sub_140087830 @ 0x140087830
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14008A224 @ 0x14008A224 (sub_14008A224.c)
 */

__int64 __fastcall sub_140087830(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v10 = a2;
  v11 = *(_QWORD *)(v3 + 104);
  v7 = *(_QWORD *)(v3 + 88);
  v9 = *(_DWORD *)(a1 + 72);
  v4 = sub_14008A224(a3, (unsigned int)&v7, a3, (unsigned int)&v11, (__int64)&v9, (__int64)&v10);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    50,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspdevicegraphconnectionproperty.cpp",
    v4);
  sub_14000C2A8(
    (int)retaddr,
    274,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v5);
  sub_14000C2A8(
    (int)retaddr,
    147,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v5);
  return v5;
}
