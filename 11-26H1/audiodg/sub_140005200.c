/*
 * XREFs of sub_140005200 @ 0x140005200
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140005200(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  void *retaddr; // [rsp+128h] [rbp+0h]

  sub_140006470();
  sub_140006980(&PerformanceCount);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  sub_1400B6010(a1 - 8);
  v2 = sub_1400B6010(*(_QWORD *)(a1 + 96));
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
    v3 = 0;
  }
  else
  {
    sub_14000C2A8(retaddr, 414LL, "avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", (unsigned int)v2);
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  }
  sub_1400066EC(&PerformanceCount);
  return v3;
}
