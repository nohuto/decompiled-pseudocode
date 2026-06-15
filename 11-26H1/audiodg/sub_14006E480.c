/*
 * XREFs of sub_14006E480 @ 0x14006E480
 * Callers:
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140033AE4 @ 0x140033AE4 (sub_140033AE4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_14006E480(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 *a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  __int64 v17[2]; // [rsp+48h] [rbp-30h] BYREF
  float v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  int v20; // [rsp+60h] [rbp-18h]
  int v21; // [rsp+64h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+40h]

  v16 = a4;
  *a6 = 0LL;
  v15 = 0LL;
  v7 = sub_140033AE4(&v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v17[0] = 0LL;
    sub_1400B6010(v15);
    v9 = v17[0];
    sub_140006470(v10);
    sub_1400B6010(v9);
    sub_140003238(v17);
    v21 = 0;
    v17[1] = a3;
    v18 = (float)*(int *)(a5 + 4);
    v19 = *(unsigned __int16 *)(a5 + 2);
    v20 = v16;
    v14 = 0LL;
    v11 = sub_1400B6010(v15);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v12 = v14;
      v14 = 0LL;
      *a6 = v12;
      sub_140003238(&v14);
      v8 = 0;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 229, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v11);
      sub_140003238(&v14);
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 214, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v7);
  }
  sub_140003238(&v15);
  return v8;
}
