/*
 * XREFs of sub_14005BAC8 @ 0x14005BAC8
 * Callers:
 *     sub_14005B568 @ 0x14005B568 (sub_14005B568.c)
 * Callees:
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005B43C @ 0x14005B43C (sub_14005B43C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14005BAC8(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  int v6; // eax
  int v7; // ebx
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  char v16; // [rsp+48h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v13 = 0LL;
  v6 = sub_14005B43C(a2, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 66;
LABEL_7:
    v11 = v6;
    goto LABEL_8;
  }
  v9 = v13;
  v10 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v10 )
    sub_1400B6010(v10);
  v6 = sub_1400B6010(v9);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 67;
    goto LABEL_7;
  }
  v14 = a1 + 48;
  v15 = 0LL;
  v16 = 1;
  v7 = sub_140006BCC(a4, &v15);
  sub_140033E34((__int64)&v14);
  if ( v7 >= 0 )
  {
    v7 = 0;
    goto LABEL_12;
  }
  v11 = v7;
  v8 = 68;
LABEL_8:
  sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audioendpoint_dsp.cpp", v11);
LABEL_12:
  sub_140056130(&v13);
  return (unsigned int)v7;
}
