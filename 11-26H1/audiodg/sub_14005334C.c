/*
 * XREFs of sub_14005334C @ 0x14005334C
 * Callers:
 *     sub_140047F7C @ 0x140047F7C (sub_140047F7C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_140021A88 @ 0x140021A88 (sub_140021A88.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140052008 @ 0x140052008 (sub_140052008.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_140054794 @ 0x140054794 (sub_140054794.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall sub_14005334C(__int64 a1, __int64 a2, __int64 **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v14 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 312);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 312));
  v13 = v6;
  v12 = 0LL;
  sub_1400118C0((void **)&v12, 0LL);
  v7 = sub_1400B6010(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8((int)retaddr, 231, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v7);
    sub_14001D96C((void **)&v12);
    sub_140018FF0(&v13);
    return v8;
  }
  sub_140021954((__int64)v16, v12);
  sub_140054794(a1 + 352, v15, v16);
  sub_140021A88(v16);
  if ( v15[0] == *(_QWORD *)(a1 + 360) )
  {
    v10 = sub_140052008(a3, &v14);
    if ( v10 < 0 )
    {
      sub_14001D96C((void **)&v12);
      sub_140018FF0(&v13);
      return (unsigned int)v10;
    }
    v14 = v12;
    sub_140052318((float *)(a1 + 352), (__int64)v15, &v14, (__int64 *)a3);
  }
  else
  {
    v11 = *(__int64 **)(v15[0] + 48LL);
    if ( v11 )
    {
      *a3 = v11;
      sub_1400B6010(v11);
    }
    else
    {
      *a3 = 0LL;
    }
  }
  sub_14001D96C((void **)&v12);
  sub_140018FF0(&v13);
  return 0LL;
}
