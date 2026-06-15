/*
 * XREFs of sub_140053700 @ 0x140053700
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004D5B0 @ 0x14004D5B0 (sub_14004D5B0.c)
 *     sub_140052558 @ 0x140052558 (sub_140052558.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140053700(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  __int64 v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  char v17; // [rsp+78h] [rbp+28h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h]

  v18 = 0;
  v17 = 0;
  if ( (int)sub_140052558((__int64)a1, &v17, &v18, a4) >= 0 && v17 )
  {
    v5 = (_DWORD *)sub_140049338(72LL, (__int64)&unk_1400C75FC);
    v17 = 0;
    v14[0] = v5;
    v14[1] = &v17;
    v7 = sub_1400492F4(24LL, v6);
    v19 = v7;
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = off_1400BBB70;
    *(_QWORD *)(v7 + 16) = v5;
    v13[0] = (__int64)v5;
    v13[1] = v7;
    v15 = 0;
    sub_140025F00((__int64)v14);
    if ( !v5 )
    {
      v8 = -2147024882;
      v9 = -2147024882;
      v10 = 360;
LABEL_7:
      sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v9);
      sub_140007588(v7);
      return v8;
    }
    memset(v5, 0, 0x48uLL);
    *v5 = 5;
    v11 = sub_14004D5B0(v18, v5 + 2);
    v8 = v11;
    if ( v11 < 0 )
    {
      v9 = v11;
      v10 = 365;
      goto LABEL_7;
    }
    sub_140007394(a1, v13);
    sub_140007588(v7);
  }
  return 0LL;
}
