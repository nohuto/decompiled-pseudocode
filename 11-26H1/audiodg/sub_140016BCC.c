/*
 * XREFs of sub_140016BCC @ 0x140016BCC
 * Callers:
 *     sub_14001714C @ 0x14001714C (sub_14001714C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400168CC @ 0x1400168CC (sub_1400168CC.c)
 *     sub_140016C7C @ 0x140016C7C (sub_140016C7C.c)
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_140039EA8 @ 0x140039EA8 (sub_140039EA8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140016BCC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // ebx
  int v11; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = sub_140016C7C(a2, a3, a4);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    sub_1400257E4(&v13);
    sub_140039EA8(v8);
    sub_14001FC40(&v13);
  }
  *(_QWORD *)(a1 + 16) = v6;
  if ( v6 )
  {
    v9 = sub_1400168CC(v6, v5, v7);
    if ( v9 >= 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      return 0LL;
    }
    v11 = 51;
  }
  else
  {
    v9 = -2147024882;
    v11 = 48;
  }
  sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp", v9);
  return (unsigned int)v9;
}
