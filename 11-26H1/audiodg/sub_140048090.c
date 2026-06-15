/*
 * XREFs of sub_140048090 @ 0x140048090
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 *     sub_140050A2C @ 0x140050A2C (sub_140050A2C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140048090(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    v4 = sub_1400204AC(a1, a2, &v7);
    if ( v4 >= 0 )
    {
      sub_140050A2C(v7, a3);
      v4 = 0;
    }
    sub_140003238(&v7);
  }
  else
  {
    v4 = -2147024809;
    sub_14000C2A8((int)retaddr, 281, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147024809);
  }
  return (unsigned int)v4;
}
