/*
 * XREFs of sub_1400301D0 @ 0x1400301D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140030434 @ 0x140030434 (sub_140030434.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400301D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *i; // rdi
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+68h]

  v4 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v4, "SrvSubmixImpl_OnDisconnectedFromStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  v10 = 0LL;
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1134, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
    if ( a1 != -176 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
    for ( i = *(_QWORD **)(a1 + 72); i && i[2] != v10; i = (_QWORD *)*i )
      ;
    if ( !i )
    {
      v6 = -2005139430;
      sub_14000C2A8((int)retaddr, 1140, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", -2005139430);
      sub_140018FF0(&v12);
LABEL_17:
      sub_140003238(&v10);
      sub_140018FF0(&v11);
      goto LABEL_12;
    }
    sub_140030434(a1 + 72, i);
    if ( a1 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    if ( (unsigned __int8)sub_1400B6010(v10) )
    {
      v9 = sub_140003834(a1, -1);
      v6 = v9;
      if ( v9 < 0 )
      {
        sub_14000C2A8((int)retaddr, 1146, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v9);
        goto LABEL_17;
      }
    }
    sub_140007CC0();
    if ( a1 != -176 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
    v6 = 0;
  }
LABEL_12:
  sub_1400066EC(&PerformanceCount);
  return v6;
}
