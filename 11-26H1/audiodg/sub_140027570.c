/*
 * XREFs of sub_140027570 @ 0x140027570
 * Callers:
 *     sub_1400274DC @ 0x1400274DC (sub_1400274DC.c)
 *     sub_140071910 @ 0x140071910 (sub_140071910.c)
 *     sub_1400719A0 @ 0x1400719A0 (sub_1400719A0.c)
 * Callees:
 *     sub_140006B48 @ 0x140006B48 (sub_140006B48.c)
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_140027DEC @ 0x140027DEC (sub_140027DEC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

void __fastcall sub_140027570(__int64 a1)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  sub_140027630(a1);
  if ( a1 != -40 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  EtwEventActivityIdControl(4LL, &v2);
  sub_140027DEC(a1);
  sub_140006B48(a1 + 232);
}
