/*
 * XREFs of sub_140023C54 @ 0x140023C54
 * Callers:
 *     sub_140023A68 @ 0x140023A68 (sub_140023A68.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140034E18 @ 0x140034E18 (sub_140034E18.c)
 *     sub_140048424 @ 0x140048424 (sub_140048424.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140023C54(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  v3 = sub_1400B6010(a1);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 308;
LABEL_5:
    sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v3);
    goto LABEL_11;
  }
  v3 = sub_1400B6010(v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 311;
    goto LABEL_5;
  }
  v6 = sub_1400499B8(32LL, &unk_1400C75FC);
  v7 = v6;
  v12 = v6;
  if ( v6 )
  {
    v8 = sub_140034E18(0LL, v13, v6);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v12 = 0LL;
      *a2 = v7;
      sub_140048424(&v12);
      v4 = 0;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 317, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
      sub_140048424(&v12);
      v4 = v9;
    }
  }
  else
  {
    v4 = -2147024882;
    sub_14000C2A8((int)retaddr, 315, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147024882);
    sub_140048424(&v12);
  }
LABEL_11:
  sub_140003238(&v13);
  return v4;
}
