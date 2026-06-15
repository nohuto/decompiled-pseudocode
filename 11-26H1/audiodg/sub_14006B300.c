/*
 * XREFs of sub_14006B300 @ 0x14006B300
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048404 @ 0x140048404 (sub_140048404.c)
 *     sub_1400484A8 @ 0x1400484A8 (sub_1400484A8.c)
 *     sub_140067768 @ 0x140067768 (sub_140067768.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14006B300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 *v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v10 = &v14;
  v11 = 0LL;
  v12 = 1;
  v6 = sub_140067768(a3, *(_QWORD *)(a2 + 112), *(_QWORD **)(a1 + 48), a5, v9, &v11);
  sub_1400484A8((__int64)&v10);
  if ( v6 >= 0 )
  {
    v7 = v14;
    v14 = 0LL;
    *(_QWORD *)(a1 + 32) = v7;
    v6 = 0;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 962, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v6);
  }
  sub_140048404(&v14);
  return (unsigned int)v6;
}
