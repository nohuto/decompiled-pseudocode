/*
 * XREFs of sub_140050AE0 @ 0x140050AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140050AE0(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // r14
  __int16 v6; // r14
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  _QWORD *v11; // r14
  int v12; // eax
  int v13; // edx
  __int64 **j; // rbx
  __int64 v16[2]; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  _QWORD v19[2]; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+68h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+A8h] [rbp+38h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(a2 + 4) )
      return 0LL;
    v5 = 114LL * i;
    if ( CompareStringOrdinal(*(LPCWCH *)(a1 + 88), -1, (LPCWCH)(v5 + a2 + 8), -1, 1) == 2 )
      break;
  }
  v6 = *(_WORD *)(v5 + a2 + 120);
  v7 = (_DWORD *)sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v19[0] = v7;
  LOBYTE(v22) = 0;
  v19[1] = &v22;
  v9 = sub_1400492F4(24LL, v8);
  v16[0] = (__int64)v7;
  v16[1] = v9;
  v20 = 0;
  *(_DWORD *)(v9 + 8) = 1;
  *(_DWORD *)(v9 + 12) = 1;
  *(_QWORD *)v9 = off_1400BB808;
  *(_QWORD *)(v9 + 16) = v7;
  sub_140025F00((__int64)v19);
  if ( !v7 )
  {
    v10 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      90,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
      -2147024882);
LABEL_14:
    sub_140007588(v9);
    return v10;
  }
  v18 = 0LL;
  *(_OWORD *)pvar = 0LL;
  LOWORD(pvar[0]) = 11;
  LOWORD(pvar[1]) = -1;
  if ( !v6 )
    LOWORD(pvar[1]) = 0;
  memset(v7, 0, 0x48uLL);
  *v7 = 7;
  v11 = v7 + 2;
  *((_OWORD *)v7 + 1) = xmmword_1400CB140;
  v7[8] = 2;
  v12 = sub_140007B68((__int64 *)(a1 + 32), (_QWORD *)v7 + 1);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = 104;
LABEL_13:
    sub_14000C2A8(
      (int)retaddr,
      v13,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
      v12);
    PropVariantClear(pvar);
    goto LABEL_14;
  }
  v12 = sub_1400B6010(*v11);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = 105;
    goto LABEL_13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v22 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  for ( j = *(__int64 ***)(a1 + 96); j; j = (__int64 **)*j )
    sub_140007394((struct _RTL_CRITICAL_SECTION *)j[1], v16);
  sub_140018FF0(&v22);
  PropVariantClear(pvar);
  sub_140007588(v9);
  return 0LL;
}
