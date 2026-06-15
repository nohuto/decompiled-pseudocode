/*
 * XREFs of sub_140053838 @ 0x140053838
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140052648 @ 0x140052648 (sub_140052648.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140053838(const WCHAR *a1, __int64 a2, struct _RTL_CRITICAL_SECTION *a3)
{
  BOOL v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int i; // ebx
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // ebx
  _QWORD *v14; // rdi
  int v15; // eax
  int v16; // edx
  char v17[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+78h] [rbp-88h]
  _DWORD v24[1024]; // [rsp+80h] [rbp-80h] BYREF
  _UNKNOWN *retaddr; // [rsp+10B8h] [rbp+FB8h]

  if ( !a2 )
    return 2147942487LL;
  v18 = a2;
  sub_1400B6010(a2);
  memset(v24, 0, sizeof(v24));
  v6 = 0;
  v17[0] = 0;
  if ( (int)sub_140052648(v7, v17, v24, v8) >= 0 && v17[0] )
  {
    for ( i = 0; i < v24[1]; ++i )
    {
      if ( CompareStringOrdinal(a1, -1, (LPCWCH)&v24[2] + 57 * i, -1, 1) == 2 )
      {
        v6 = *((_WORD *)&v24[30] + 57 * i) != 0;
        break;
      }
    }
  }
  v10 = (_DWORD *)sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v17[0] = 0;
  v22[0] = v10;
  v22[1] = v17;
  v23 = 1;
  v12 = sub_1400492F4(24LL, v11);
  *(_OWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 8) = 1;
  *(_DWORD *)(v12 + 12) = 1;
  *(_QWORD *)v12 = off_1400BBA08;
  *(_QWORD *)(v12 + 16) = v10;
  v21[0] = (__int64)v10;
  v21[1] = v12;
  v23 = 0;
  sub_140025F00((__int64)v22);
  if ( v10 )
  {
    memset(v10, 0, 0x48uLL);
    *v10 = 7;
    *(_OWORD *)pvar = 0LL;
    v20 = 0LL;
    LOWORD(pvar[0]) = 11;
    if ( v6 )
      LOWORD(pvar[1]) = -1;
    else
      LOWORD(pvar[1]) = 0;
    *((_OWORD *)v10 + 1) = xmmword_1400CB140;
    v10[8] = 2;
    v14 = v10 + 2;
    v15 = sub_140007B68(&v18, (_QWORD *)v10 + 1);
    v13 = v15;
    if ( v15 >= 0 )
    {
      v15 = sub_1400B6010(*v14);
      v13 = v15;
      if ( v15 >= 0 )
      {
        sub_140007394(a3, v21);
        PropVariantClear(pvar);
        v13 = 0;
        goto LABEL_21;
      }
      v16 = 498;
    }
    else
    {
      v16 = 497;
    }
    sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v15);
    PropVariantClear(pvar);
  }
  else
  {
    v13 = -2147024882;
    sub_14000C2A8((int)retaddr, 483, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147024882);
  }
LABEL_21:
  sub_140007588(v12);
  sub_140003238(&v18);
  return v13;
}
