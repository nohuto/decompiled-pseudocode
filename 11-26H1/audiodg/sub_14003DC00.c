/*
 * XREFs of sub_14003DC00 @ 0x14003DC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003DC00(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-128h] BYREF

  v2 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v2, "SrvSystemEffect_GetEffectsList", a1 + 140);
  v3 = sub_1400B6010(a1 + 16);
  sub_1400066EC(&PerformanceCount);
  return v3;
}
