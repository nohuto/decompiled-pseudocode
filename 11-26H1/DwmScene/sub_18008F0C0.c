/*
 * XREFs of sub_18008F0C0 @ 0x18008F0C0
 * Callers:
 *     sub_18008F3D0 @ 0x18008F3D0 (sub_18008F3D0.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_1800133B8 @ 0x1800133B8 (sub_1800133B8.c)
 *     sub_18003143C @ 0x18003143C (sub_18003143C.c)
 *     sub_180077E54 @ 0x180077E54 (sub_180077E54.c)
 */

__int64 *sub_18008F0C0(__int64 *a1, char *a2, char *a3, ...)
{
  char *v3; // rbp
  unsigned __int64 v4; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v3 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012A30();
    sub_180077E54(a1, v4);
    v8 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      sub_1800133B8(v7, v8, v3);
      v8 += 2;
      v3 += 16;
    }
    sub_1800130CC((__int64)v8, (__int64)v8);
    a1[1] = (__int64)v8;
    v10 = 0LL;
    sub_18003143C((__int64 *)va);
  }
  return a1;
}
