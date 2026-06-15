/*
 * XREFs of sub_140083A90 @ 0x140083A90
 * Callers:
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140084DD8 @ 0x140084DD8 (sub_140084DD8.c)
 *     sub_1400859F0 @ 0x1400859F0 (sub_1400859F0.c)
 */

__int64 __fastcall sub_140083A90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
  {
    if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v6 = -2147024890;
      v7 = 2365;
      goto LABEL_3;
    }
    sub_14000C2D0((__int64)v13, a1 + 96);
    v8 = sub_1400859F0(a1, a2);
    v6 = v8;
    if ( v8 >= 0 )
    {
      if ( (int)sub_140084DD8(v9, **(_QWORD **)(a1 + 776) + 48LL, a3) >= 0
        || (v8 = sub_140084DD8(v11, **(_QWORD **)(a1 + 776) + 96LL, a3), v6 = v8, v8 >= 0) )
      {
        v6 = 0;
        goto LABEL_13;
      }
      v10 = 2378;
    }
    else
    {
      v10 = 2370;
    }
    sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
LABEL_13:
    sub_140030124((__int64)v13);
    return v6;
  }
  v6 = -2147467261;
  v7 = 2364;
LABEL_3:
  sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v6);
  return v6;
}
