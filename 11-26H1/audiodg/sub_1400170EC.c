/*
 * XREFs of sub_1400170EC @ 0x1400170EC
 * Callers:
 *     sub_140016FDC @ 0x140016FDC (sub_140016FDC.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001714C @ 0x14001714C (sub_14001714C.c)
 */

__int64 __fastcall sub_1400170EC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a1;
  v7[0] = 4LL;
  v4 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *, __int64 *))sub_14001714C)(a4, &v9, v7, &v10);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 166, (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp", v4);
  return v5;
}
