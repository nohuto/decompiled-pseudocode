/*
 * XREFs of sub_140007B90 @ 0x140007B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140037724 @ 0x140037724 (sub_140037724.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005C25C @ 0x14005C25C (sub_14005C25C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140007B90(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF

  v2 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v2, "SrvStreamInstance_DestroyStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  if ( sub_1400B6010(a1 - 8) )
  {
    v5 = 0LL;
    if ( (int)sub_140037724(&v5) >= 0 )
    {
      v4 = sub_1400B6010(a1 - 8);
      sub_14005C25C(v5, v4);
    }
  }
  sub_140007CC0();
  if ( a1 != -216 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  sub_1400066EC(&PerformanceCount);
  return 0LL;
}
