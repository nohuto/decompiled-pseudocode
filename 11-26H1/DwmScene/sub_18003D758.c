/*
 * XREFs of sub_18003D758 @ 0x18003D758
 * Callers:
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 *     sub_180014CE0 @ 0x180014CE0 (sub_180014CE0.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_18003AD4C @ 0x18003AD4C (sub_18003AD4C.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18003B678 @ 0x18003B678 (sub_18003B678.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_18003C58C @ 0x18003C58C (sub_18003C58C.c)
 *     sub_18003C6A8 @ 0x18003C6A8 (sub_18003C6A8.c)
 *     sub_18003C8A4 @ 0x18003C8A4 (sub_18003C8A4.c)
 *     GsDriverEntry @ 0x18003C900 (GsDriverEntry.c)
 *     sub_18003C930 @ 0x18003C930 (sub_18003C930.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_18003CCD0 @ 0x18003CCD0 (sub_18003CCD0.c)
 *     sub_18003CD04 @ 0x18003CD04 (sub_18003CD04.c)
 *     sub_18003CD7C @ 0x18003CD7C (sub_18003CD7C.c)
 *     sub_18003CDEC @ 0x18003CDEC (sub_18003CDEC.c)
 *     sub_18003CE80 @ 0x18003CE80 (sub_18003CE80.c)
 *     sub_18003D09C @ 0x18003D09C (sub_18003D09C.c)
 *     sub_18003D1BC @ 0x18003D1BC (sub_18003D1BC.c)
 *     sub_18003D480 @ 0x18003D480 (sub_18003D480.c)
 *     sub_18003D52C @ 0x18003D52C (sub_18003D52C.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180040B30 @ 0x180040B30 (sub_180040B30.c)
 *     sub_180041420 @ 0x180041420 (sub_180041420.c)
 *     sub_18005E70C @ 0x18005E70C (sub_18005E70C.c)
 *     sub_18005E830 @ 0x18005E830 (sub_18005E830.c)
 *     sub_18005E954 @ 0x18005E954 (sub_18005E954.c)
 *     sub_18005EA78 @ 0x18005EA78 (sub_18005EA78.c)
 *     sub_18005EB9C @ 0x18005EB9C (sub_18005EB9C.c)
 *     sub_18006C68C @ 0x18006C68C (sub_18006C68C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 */

void __fastcall sub_18003D758(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]

  sub_18001367C(a1, &v2);
  if ( v2 )
    sub_180029EF8(v2 + 16, v1);
  if ( v3 )
    sub_180010EC8(v3);
}
