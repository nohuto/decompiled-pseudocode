/*
 * XREFs of sub_140005C38 @ 0x140005C38
 * Callers:
 *     sub_1400057FC @ 0x1400057FC (sub_1400057FC.c)
 *     sub_14004CC14 @ 0x14004CC14 (sub_14004CC14.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140006B48 @ 0x140006B48 (sub_140006B48.c)
 *     sub_140006B70 @ 0x140006B70 (sub_140006B70.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140005C38(__int64 *a1)
{
  void *v2; // rcx
  __int64 *v3; // rsi
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  sub_140006470();
  sub_140006980(&PerformanceCount);
  v2 = (void *)a1[15];
  if ( v2 && v2 != (void *)-1LL )
  {
    CloseHandle(v2);
    a1[15] = 0LL;
  }
  if ( a1[11] )
  {
    sub_140006B70(a1);
    v3 = a1 + 12;
    sub_1400B6010(a1[11]);
  }
  else
  {
    v3 = a1 + 12;
  }
  sub_1400066EC(&PerformanceCount);
  sub_140003238(a1 + 16);
  sub_140003238(a1 + 14);
  sub_140003238(a1 + 13);
  sub_140003238(v3);
  sub_140003238(a1 + 11);
  return sub_140006B48(a1 + 5);
}
