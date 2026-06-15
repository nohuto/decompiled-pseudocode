/*
 * XREFs of sub_140065ED0 @ 0x140065ED0
 * Callers:
 *     sub_14006488C @ 0x14006488C (sub_14006488C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016FDC @ 0x140016FDC (sub_140016FDC.c)
 *     sub_14002A170 @ 0x14002A170 (sub_14002A170.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140065ED0(_QWORD *a1, __int64 a2, __int64 a3, float a4, unsigned int a5, __int64 a6)
{
  __int64 v8; // rbx
  int v9; // ebx
  int v10; // edx
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  a1[27] = a6;
  v8 = a1[7];
  a1[7] = a2;
  if ( a2 )
    sub_1400B6010(a2);
  if ( v8 )
    sub_1400B6010(v8);
  v9 = sub_140016FDC((__int64)a1, a3, a4, a5);
  if ( v9 < 0 )
  {
    v10 = 498;
LABEL_7:
    sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp", v9);
    return (unsigned int)v9;
  }
  v12 = a1[13];
  a1[13] = 0LL;
  if ( v12 )
    sub_1400B6010(v12);
  v9 = sub_14002A170(a1 + 13);
  if ( v9 < 0 )
  {
    v10 = 499;
    goto LABEL_7;
  }
  return 0LL;
}
