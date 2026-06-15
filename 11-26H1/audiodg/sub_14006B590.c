/*
 * XREFs of sub_14006B590 @ 0x14006B590
 * Callers:
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006B590(__int64 a1, _OWORD *a2, int a3, int a4, _OWORD *a5, __int64 a6)
{
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a4;
  *(_OWORD *)(a1 + 8) = *a2;
  *(_OWORD *)(a1 + 24) = *a5;
  if ( !a6 )
    return 0LL;
  v8 = a1 + 56;
  v9 = 0LL;
  v10 = 1;
  v6 = sub_140011760(a1, (__int64)a2, a6, &v9);
  sub_140033E34((__int64)&v8);
  if ( v6 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 642, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.h", v6);
  return (unsigned int)v6;
}
