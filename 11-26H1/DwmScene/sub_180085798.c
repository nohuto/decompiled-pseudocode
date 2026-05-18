/*
 * XREFs of sub_180085798 @ 0x180085798
 * Callers:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180016E10 @ 0x180016E10 (sub_180016E10.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 *     sub_180047D2C @ 0x180047D2C (sub_180047D2C.c)
 *     sub_180047D40 @ 0x180047D40 (sub_180047D40.c)
 *     sub_180048114 @ 0x180048114 (sub_180048114.c)
 *     sub_18004824C @ 0x18004824C (sub_18004824C.c)
 *     sub_1800484B0 @ 0x1800484B0 (sub_1800484B0.c)
 *     sub_180048544 @ 0x180048544 (sub_180048544.c)
 *     sub_180048794 @ 0x180048794 (sub_180048794.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180085798(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // r9
  _DWORD v6[6]; // [rsp+20h] [rbp-79h] BYREF
  __int64 *v7; // [rsp+38h] [rbp-61h]
  _OWORD v8[2]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v9[3]; // [rsp+60h] [rbp-39h] BYREF
  _OWORD v10[3]; // [rsp+90h] [rbp-9h] BYREF

  v7 = a1;
  sub_18002901C((__int64)v9, 12LL, 4LL, sub_18000E480);
  sub_18002901C((__int64)v8, 8LL, 4LL, (__int64 (__fastcall *)(__int64))unknown_libname_2);
  sub_18002901C((__int64)v10, 12LL, 4LL, sub_18000E480);
  v9[0] = _mm_load_si128((const __m128i *)&xmmword_1801916C0);
  v9[1] = _mm_load_si128((const __m128i *)&xmmword_1801916D0);
  v9[2] = _mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v10[0] = _mm_load_si128((const __m128i *)&xmmword_180191440);
  v10[1] = _mm_load_si128((const __m128i *)&xmmword_180191420);
  v10[2] = _mm_load_si128((const __m128i *)&xmmword_180191670);
  v8[0] = _mm_load_si128((const __m128i *)&xmmword_1801916A0);
  v8[1] = v10[0];
  v6[0] = 0x10000;
  v6[1] = 65538;
  v6[2] = 131075;
  sub_180016E10(a2, a1);
  v6[4] = 1;
  sub_180048794(*a1, 4);
  sub_180047D2C(*a1, 6);
  sub_1800484B0(*a1, 0);
  sub_18004824C(*a1, (__int64)v9);
  sub_180047D40(*a1, (__int64)v6);
  sub_180048114(*a1, (__int64)v10, 0, v4);
  sub_180048544(*a1, (__int64)v8);
  sub_180046FD4(*a1);
  return a1;
}
