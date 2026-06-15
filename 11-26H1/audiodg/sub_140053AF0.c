/*
 * XREFs of sub_140053AF0 @ 0x140053AF0
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
 *     sub_1400518C0 @ 0x1400518C0 (sub_1400518C0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140053AF0(__int64 *a1, struct _RTL_CRITICAL_SECTION *a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // edi
  int v8; // r9d
  int v9; // edx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (_DWORD *)sub_140049338(72LL, (__int64)&unk_1400C75FC);
  LOBYTE(v20) = 0;
  v17[0] = v4;
  v17[1] = &v20;
  v6 = sub_1400492F4(24LL, v5);
  v21 = v6;
  *(_OWORD *)v6 = 0LL;
  *(_DWORD *)(v6 + 8) = 1;
  *(_DWORD *)(v6 + 12) = 1;
  *(_QWORD *)v6 = off_1400BBA28;
  *(_QWORD *)(v6 + 16) = v4;
  v16[0] = (__int64)v4;
  v16[1] = v6;
  v18 = 0;
  sub_140025F00((__int64)v17);
  if ( v4 )
  {
    memset(v4, 0, 0x48uLL);
    *v4 = 6;
    v10 = sub_14003DBAC(a1, (_QWORD *)v4 + 1);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = v10;
      v9 = 429;
      goto LABEL_5;
    }
    v20 = 0LL;
    v21 = 0LL;
    if ( (int)sub_1400518C0(*a1) >= 0 )
    {
      v4[8] = 1;
      v11 = v21;
      v12 = sub_1400B6010(v21);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 435;
LABEL_9:
        sub_14000C2A8((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v12);
        sub_140003238(&v20);
        sub_140003238(&v21);
        goto LABEL_16;
      }
      v12 = sub_1400B6010(v11);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 436;
        goto LABEL_9;
      }
      v14 = v20;
      if ( v20 )
      {
        v4[13] = 1;
        v12 = sub_1400B6010(v14);
        v7 = v12;
        if ( v12 < 0 )
        {
          v13 = 440;
          goto LABEL_9;
        }
      }
    }
    sub_140007394(a2, v16);
    sub_140003238(&v20);
    sub_140003238(&v21);
    v7 = 0;
    goto LABEL_16;
  }
  v7 = -2147024882;
  v8 = -2147024882;
  v9 = 424;
LABEL_5:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
LABEL_16:
  sub_140007588(v6);
  return v7;
}
