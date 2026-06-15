/*
 * XREFs of sub_140005310 @ 0x140005310
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_140005164 @ 0x140005164 (sub_140005164.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140005310(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v8; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  sub_140006470();
  sub_140006980(&PerformanceCount);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v4 = sub_1400B6010(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_14000C2A8(retaddr, 1078LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v4);
LABEL_4:
    if ( a1 != -176 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
    goto LABEL_6;
  }
  v6 = sub_1400B6010(0LL);
  if ( !sub_140005164(a1, v6) )
  {
    v5 = -2005139430;
    sub_14000C2A8(retaddr, 1079LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", 2289827866LL);
    goto LABEL_4;
  }
  v8 = sub_140003834(a1, 1);
  v5 = v8;
  if ( v8 < 0 )
  {
    sub_14000C2A8(retaddr, 1082LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v8);
    goto LABEL_4;
  }
  if ( a1 != -176 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v5 = 0;
LABEL_6:
  sub_1400066EC(&PerformanceCount);
  return v5;
}
