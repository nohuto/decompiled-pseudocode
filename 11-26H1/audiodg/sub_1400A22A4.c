/*
 * XREFs of sub_1400A22A4 @ 0x1400A22A4
 * Callers:
 *     sub_1400A2BC8 @ 0x1400A2BC8 (sub_1400A2BC8.c)
 * Callees:
 *     sub_140058590 @ 0x140058590 (sub_140058590.c)
 *     sub_14009D86C @ 0x14009D86C (sub_14009D86C.c)
 */

_UNKNOWN **sub_1400A22A4(__int64 a1, unsigned __int8 a2, __int64 a3, ...)
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
  LODWORD(v5) = dword_1400E9810[0];
  if ( (dword_1400E9810[0] & 4) == 0 )
  {
    v5 = *sub_14009D86C(a1, &v7);
    v7 = v5;
  }
  WORD2(v8) = 2;
  LODWORD(v8) = 0;
  return sub_140058590(
           a1 + 8,
           0x37767A9u,
           ((unsigned int)v5 >> 10) & 1,
           ((unsigned int)v5 >> 11) & 1,
           (__int64)va,
           v4,
           0);
}
