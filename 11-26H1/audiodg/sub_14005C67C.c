/*
 * XREFs of sub_14005C67C @ 0x14005C67C
 * Callers:
 *     sub_140056334 @ 0x140056334 (sub_140056334.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140046BEC @ 0x140046BEC (sub_140046BEC.c)
 *     sub_14005C580 @ 0x14005C580 (sub_14005C580.c)
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005C67C(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // edx
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v16[0] = 0LL;
  v9 = sub_14005C580(v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_14000C2A8((int)retaddr, 51, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v9);
    return v10;
  }
  v12 = v16[0];
  if ( v16[0] )
    sub_1400B6010(v16[0]);
  v13 = sub_14005C89C(v12, a2, a3, a4, a5, a6);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v13 = sub_1400B6010(v12);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v14 = 0;
      goto LABEL_11;
    }
    v15 = 54;
  }
  else
  {
    v15 = 53;
  }
  sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v13);
LABEL_11:
  sub_140046BEC(v16);
  return v14;
}
