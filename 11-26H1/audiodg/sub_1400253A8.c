/*
 * XREFs of sub_1400253A8 @ 0x1400253A8
 * Callers:
 *     sub_140023A68 @ 0x140023A68 (sub_140023A68.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140034E18 @ 0x140034E18 (sub_140034E18.c)
 *     sub_14003D070 @ 0x14003D070 (sub_14003D070.c)
 *     sub_140048448 @ 0x140048448 (sub_140048448.c)
 *     sub_1400484D8 @ 0x1400484D8 (sub_1400484D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1400253A8(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD **v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  _QWORD *v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0LL;
  v3 = sub_1400B6010(a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = sub_1400B6010(v19);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 330;
      goto LABEL_5;
    }
    v18 = 0LL;
    v14 = &v18;
    v15 = 0LL;
    v16 = 1;
    v4 = sub_14003D070(0LL, &v15);
    sub_1400484D8(&v14);
    if ( v4 >= 0 )
    {
      if ( v18 )
      {
        v7 = sub_140034E18(0LL, v19, *v18);
        v4 = v7;
        if ( v7 >= 0 )
        {
          v9 = sub_1400B6010(v19);
          v4 = v9;
          if ( v9 >= 0 )
          {
            v10 = sub_1400B6010(v19);
            v4 = v10;
            if ( v10 >= 0 )
            {
              v11 = sub_1400B6010(v19);
              v4 = v11;
              if ( v11 >= 0 )
              {
                v12 = v18;
                v18 = 0LL;
                *a2 = v12;
                sub_140048448(&v18);
                sub_140003238(&v19);
                return 0LL;
              }
              v8 = v11;
              v6 = 340;
            }
            else
            {
              v8 = v10;
              v6 = 339;
            }
          }
          else
          {
            v8 = v9;
            v6 = 338;
          }
        }
        else
        {
          v8 = v7;
          v6 = 336;
        }
        goto LABEL_20;
      }
      v4 = -2147024882;
      v6 = 334;
    }
    else
    {
      v6 = 333;
    }
    v8 = v4;
LABEL_20:
    sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
    sub_140048448(&v18);
    goto LABEL_21;
  }
  v5 = 327;
LABEL_5:
  sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v3);
LABEL_21:
  sub_140003238(&v19);
  return (unsigned int)v4;
}
