/*
 * XREFs of sub_18008F764 @ 0x18008F764
 * Callers:
 *     sub_18006C900 @ 0x18006C900 (sub_18006C900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_1800252C4 @ 0x1800252C4 (sub_1800252C4.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18008F764(__int64 *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h]

  v7 = a1;
  v3 = sub_180012C40(&v8, a2);
  sub_180056AE0((__int64)a1, (__int64)v3);
  *a1 = (__int64)&Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_1800252C4(&v9);
  v6 = 0LL;
  v6 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_1800576C8(a1, 0LL, 0LL, &v6, 0LL);
  if ( v10 )
    sub_180010EC8(v10);
  sub_180011CC4(&v9, "ImageProcessingCamera");
  sub_1800143E4((__int64)(a1 + 3), (__int64)&v9);
  sub_1800129D0((__int64)&v9);
  return a1;
}
