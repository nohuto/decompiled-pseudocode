/*
 * XREFs of sub_14006D1D0 @ 0x14006D1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140005164 @ 0x140005164 (sub_140005164.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140030434 @ 0x140030434 (sub_140030434.c)
 *     sub_14003A584 @ 0x14003A584 (sub_14003A584.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14006D1D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+158h] [rbp+58h]

  v2 = 0;
  if ( *(_BYTE *)(a1 + 337) )
  {
    v6 = sub_140006470(a1);
    sub_140006980(&PerformanceCount, (LARGE_INTEGER)v6, "SrvSubmixImpl_DestroyStream", 0LL);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 200);
    v7 = sub_140005164(a1 + 24, a2);
    sub_140010994(&v9, v7);
    if ( v9 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
      sub_140010994(&v10, v9);
      v8 = sub_14003A584((_QWORD *)(a1 + 96), &v10);
      sub_140003238(&v10);
      sub_140030434((_QWORD *)(a1 + 96), v8);
      sub_140018FF0(&v11);
    }
    else
    {
      v2 = -2005139430;
      sub_14000C2A8((int)retaddr, 137, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", -2005139430);
    }
    sub_140003238(&v9);
    sub_140018FF0(&v12);
    sub_1400066EC(&PerformanceCount);
    return v2;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 129, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", -2147467263);
    return 2147500033LL;
  }
}
