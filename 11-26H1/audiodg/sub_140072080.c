/*
 * XREFs of sub_140072080 @ 0x140072080
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140072080(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp-58h] BYREF
  __int128 v7; // [rsp+38h] [rbp-50h]
  __int128 v8; // [rsp+48h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v7 = *(_OWORD *)(a1 + 104);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 184);
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v3 = sub_1400B6010(v2);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = 0;
  else
    sub_14000C2A8(
      (int)retaddr,
      218,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      v3);
  sub_140018FF0(&v6);
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
