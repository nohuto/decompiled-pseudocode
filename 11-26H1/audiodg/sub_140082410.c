/*
 * XREFs of sub_140082410 @ 0x140082410
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 *     sub_1400859F0 @ 0x1400859F0 (sub_1400859F0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140082410(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  if ( a4 )
  {
    if ( ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v8 = -2147024890;
      v9 = 2255;
      goto LABEL_3;
    }
    if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v8 = -2147024890;
      v9 = 2256;
      goto LABEL_3;
    }
    sub_14000C2D0((__int64)v17, a1 + 96);
    v10 = sub_1400859F0(a1, a2);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v19 = 0LL;
      v15 = 0LL;
      if ( (int)sub_1400B6010(a4) >= 0 )
        goto LABEL_16;
      if ( v19 )
        sub_1400B6010(v19);
      v11 = sub_1400B6010(a4);
      v8 = v11;
      if ( v11 >= 0 )
      {
LABEL_16:
        v16 = 0LL;
        v11 = sub_140082034(a1, a3, a4, (__int64 *)(**(_QWORD **)(a1 + 776) + 96LL), &v16);
        v8 = v11;
        if ( v11 >= 0 )
        {
          v13 = v19;
          v19 = 0LL;
          *(_QWORD *)(v16 + 136) = v13;
          sub_140056130(&v15);
          sub_140003238(&v19);
          v8 = 0;
          goto LABEL_19;
        }
        v12 = 2273;
      }
      else
      {
        v12 = 2268;
      }
      sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v11);
      sub_140056130(&v15);
      sub_140003238(&v19);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 2261, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v10);
    }
LABEL_19:
    sub_140030124((__int64)v17);
    return v8;
  }
  v8 = -2147467261;
  v9 = 2254;
LABEL_3:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
  return v8;
}
