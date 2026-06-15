/*
 * XREFs of sub_1400A2448 @ 0x1400A2448
 * Callers:
 *     sub_1400A2C7C @ 0x1400A2C7C (sub_1400A2C7C.c)
 * Callees:
 *     sub_140058590 @ 0x140058590 (sub_140058590.c)
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 */

_UNKNOWN **sub_1400A2448(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v4 = a2;
  LODWORD(v5) = dword_1400E97F8[0];
  if ( (dword_1400E97F8[0] & 4) == 0 )
  {
    v5 = *sub_14009DC38(a1, &v7);
    v7 = v5;
  }
  LODWORD(v8) = 0;
  WORD2(v8) = 2;
  return sub_140058590(
           a1 + 8,
           0x39F75AFu,
           ((unsigned int)v5 >> 10) & 1,
           ((unsigned int)v5 >> 11) & 1,
           (__int64)va,
           v4,
           3u);
}
