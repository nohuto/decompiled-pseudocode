/*
 * XREFs of sub_18005E588 @ 0x18005E588
 * Callers:
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 * Callees:
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 *     sub_180054C14 @ 0x180054C14 (sub_180054C14.c)
 *     sub_180055B84 @ 0x180055B84 (sub_180055B84.c)
 *     sub_1800600C0 @ 0x1800600C0 (sub_1800600C0.c)
 */

__int64 *sub_18005E588(__int64 *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
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
    sub_180055B84(a1, v4);
    v8 = *a1;
    while ( v3 != a3 )
    {
      sub_1800600C0(v7, v8, v3);
      v8 += 16LL;
      v3 += 16LL;
    }
    sub_18002DD68(v8, v8);
    a1[1] = v8;
    v10 = 0LL;
    sub_180054C14((__int64 *)va);
  }
  return a1;
}
