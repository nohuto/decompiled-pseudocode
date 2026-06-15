/*
 * XREFs of sub_14004C84C @ 0x14004C84C
 * Callers:
 *     sub_140021234 @ 0x140021234 (sub_140021234.c)
 *     sub_140021CC8 @ 0x140021CC8 (sub_140021CC8.c)
 *     sub_140037928 @ 0x140037928 (sub_140037928.c)
 *     sub_140046B38 @ 0x140046B38 (sub_140046B38.c)
 *     sub_140050A2C @ 0x140050A2C (sub_140050A2C.c)
 *     sub_14005123C @ 0x14005123C (sub_14005123C.c)
 * Callees:
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_14003FC40 @ 0x14003FC40 (sub_14003FC40.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14004C84C(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v6 = a1;
  v7 = 0LL;
  v4 = (_QWORD *)sub_140044584(0x10uLL);
  sub_140010994(v4 + 1, *a2);
  *v4 = *a1;
  v7 = 0LL;
  *a1 = v4;
  sub_14003FC40((__int64)&v6);
  return *a1 + 8LL;
}
