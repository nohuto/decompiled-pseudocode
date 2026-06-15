/*
 * XREFs of sub_140041294 @ 0x140041294
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_14003DBAC @ 0x14003DBAC (sub_14003DBAC.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140041294(__int64 *a1, struct _RTL_CRITICAL_SECTION *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  __int64 v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]
  char v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v4 = (_DWORD *)sub_140049338(72LL, &unk_1400C75FC);
  v17 = 0;
  v14[0] = v4;
  v14[1] = &v17;
  v5 = sub_1400492F4(24LL);
  *(_OWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 1;
  *(_DWORD *)(v5 + 12) = 1;
  *(_QWORD *)v5 = off_1400BA870;
  *(_QWORD *)(v5 + 16) = v4;
  v13[0] = (__int64)v4;
  v13[1] = v5;
  v15 = 0;
  sub_140025F00((__int64)v14);
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = -2147024882;
    v8 = 402;
LABEL_5:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v7);
    goto LABEL_14;
  }
  memset(v4, 0, 0x48uLL);
  *v4 = 2;
  v9 = sub_14003DBAC(a1, (_QWORD *)v4 + 1);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = v9;
    v8 = 407;
    goto LABEL_5;
  }
  *(_OWORD *)(v4 + 6) = xmmword_1400C7100;
  v4[10] = 5;
  v18 = 0LL;
  v10 = sub_1400B6010(*a1);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 410;
LABEL_8:
    sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v10);
    sub_140003238(&v18);
    goto LABEL_14;
  }
  v10 = sub_1400B6010(v18);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 411;
    goto LABEL_8;
  }
  if ( *((_QWORD *)v4 + 2) )
    sub_140007394(a2, v13);
  sub_140003238(&v18);
  v6 = 0;
LABEL_14:
  sub_140007588(v5);
  return v6;
}
