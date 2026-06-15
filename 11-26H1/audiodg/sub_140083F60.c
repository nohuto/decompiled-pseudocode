/*
 * XREFs of sub_140083F60 @ 0x140083F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002C6CC @ 0x14002C6CC (sub_14002C6CC.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400808BC @ 0x1400808BC (sub_1400808BC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140083F60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // edx
  __int64 *v9; // rbx
  int v10; // eax
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 > 1 )
  {
    v6 = -2147024809;
    v7 = 449;
LABEL_3:
    sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v6);
    return v6;
  }
  *(_DWORD *)(a1 + 88) = a2 != 0;
  v9 = (__int64 *)(a1 + 792);
  sub_140004C9C((_QWORD *)(a1 + 792), a3);
  if ( *(_QWORD *)(a1 + 800) != *v9 )
    sub_14002C6CC((__int64 *)(a1 + 800), *v9);
  if ( !*(_QWORD *)(a1 + 800) )
  {
    v6 = -2147467262;
    v7 = 456;
    goto LABEL_3;
  }
  if ( a4 )
  {
    v14[0] = 0LL;
    v10 = sub_1400808BC(a4, v14);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 461;
LABEL_16:
      sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v10);
      sub_140056130(v14);
      return v6;
    }
    v12 = v14[0];
    v13 = *(_QWORD *)(a1 + 1072);
    *(_QWORD *)(a1 + 1072) = 0LL;
    if ( v13 )
      sub_1400B6010(v13);
    v10 = sub_1400B6010(v12);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 462;
      goto LABEL_16;
    }
    sub_140056130(v14);
  }
  *(_BYTE *)(a1 + 784) = 1;
  return 0LL;
}
