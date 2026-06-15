/*
 * XREFs of sub_1400368E0 @ 0x1400368E0
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

__int64 __fastcall sub_1400368E0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+0h]

  v2 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v2, "SrvStreamInstance_StopStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  if ( (unsigned __int8)sub_1400B6010(a1 - 8)
    && (sub_1400B6010(a1 - 8), v3 = sub_1400B6010(*(_QWORD *)(a1 + 96)), v4 = v3, v3 < 0) )
  {
    sub_14000C2A8((int)retaddr, 429, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v3);
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  }
  else
  {
    if ( a1 != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
    v4 = 0;
  }
  sub_1400066EC(&PerformanceCount);
  return v4;
}
