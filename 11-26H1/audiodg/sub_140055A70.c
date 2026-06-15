/*
 * XREFs of sub_140055A70 @ 0x140055A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140055A70(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  v2 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v2, "SrvSystemEffect_GetRegistrationProps", a1 + 132);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    v4 = sub_1400B6010(v3);
  else
    v4 = -2147467263;
  sub_1400066EC(&PerformanceCount);
  return v4;
}
