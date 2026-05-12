/*
 * XREFs of sub_14009210C @ 0x14009210C
 * Callers:
 *     sub_1400097FC @ 0x1400097FC (sub_1400097FC.c)
 *     sub_14000E060 @ 0x14000E060 (sub_14000E060.c)
 *     sub_14000E940 @ 0x14000E940 (sub_14000E940.c)
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_14003E980 @ 0x14003E980 (sub_14003E980.c)
 *     sub_1400563D0 @ 0x1400563D0 (sub_1400563D0.c)
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_14009210C(__int64 a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx

  if ( !*(_QWORD *)(a1 + 32) || !sub_1400215B0(a1, 31) )
    return 0;
  if ( !(unsigned int)sub_140090338() )
    sub_14009038C();
  v2 = *(_DWORD **)(a1 + 24);
  if ( *v2 == 1094997074 )
    v3 = (__int64)(v2 + 94);
  else
    v3 = *v2 == 1314275652 ? (__int64)(v2 + 42) : 0LL;
  if ( (int)sub_140021760(v3) >= 0 )
    return 0;
  else
    return 0;
}
