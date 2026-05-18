/*
 * XREFs of sub_180042248 @ 0x180042248
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_18004B180 @ 0x18004B180 (sub_18004B180.c)
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_18005B3C0 @ 0x18005B3C0 (sub_18005B3C0.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 *     sub_18007A6E0 @ 0x18007A6E0 (sub_18007A6E0.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_18007AC3C @ 0x18007AC3C (sub_18007AC3C.c)
 *     sub_18008DA30 @ 0x18008DA30 (sub_18008DA30.c)
 *     sub_180093040 @ 0x180093040 (sub_180093040.c)
 *     sub_18009C714 @ 0x18009C714 (sub_18009C714.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 */

_QWORD *__fastcall sub_180042248(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = (_QWORD *)sub_180012A94(a1 + 56, &v5);
  *a2 = *v3;
  a2[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( v6 )
    sub_180010EC8(v6);
  return a2;
}
