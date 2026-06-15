/*
 * XREFs of sub_1400552A0 @ 0x1400552A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140035CA4 @ 0x140035CA4 (sub_140035CA4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400552A0(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5[2]; // [rsp+20h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF

  v2 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v2, "SrvSystemEffect_GetExtendedProperties", a1 + 116);
  sub_140035CA4(v5, *(_QWORD *)(a1 + 72));
  if ( v5[0] )
    v3 = sub_1400B6010(v5[0]);
  else
    v3 = -2147467262;
  sub_140003238(v5);
  sub_1400066EC(&PerformanceCount);
  return v3;
}
