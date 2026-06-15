/*
 * XREFs of sub_140085904 @ 0x140085904
 * Callers:
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 * Callees:
 *     sub_140008824 @ 0x140008824 (sub_140008824.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140085904(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // edx
  int *v6; // rcx
  __int16 v7; // ax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v9[0] = &v12;
  v9[1] = 0LL;
  v10 = 1;
  v4 = sub_1400B6010(a3);
  sub_140033E34((__int64)v9);
  if ( v4 < 0 )
  {
    v5 = 2040;
LABEL_12:
    sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v4);
    goto LABEL_13;
  }
  if ( v12[7] >> 3 != *(_DWORD *)(a2 + 44)
    || v12[1] != *(_DWORD *)(a2 + 40)
    || (unsigned int)sub_140008824(v12) != *(_DWORD *)(a2 + 48)
    || (float)v6[1] != *(float *)(a2 + 52) )
  {
    goto LABEL_11;
  }
  v7 = *(_WORD *)v6;
  if ( *(_WORD *)v6 == 0xFFFE )
    v7 = *((_WORD *)v6 + 12);
  if ( v7 != *(_WORD *)(a2 + 24) )
  {
LABEL_11:
    v4 = -2005139426;
    v5 = 2047;
    goto LABEL_12;
  }
  v4 = 0;
LABEL_13:
  sub_140008C08((void **)&v12, 0LL);
  return (unsigned int)v4;
}
