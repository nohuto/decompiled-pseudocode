/*
 * XREFs of sub_1400A255C @ 0x1400A255C
 * Callers:
 *     sub_14009E050 @ 0x14009E050 (sub_14009E050.c)
 * Callees:
 *     sub_140058590 @ 0x140058590 (sub_140058590.c)
 *     sub_14009DEC0 @ 0x14009DEC0 (sub_14009DEC0.c)
 */

_UNKNOWN **sub_1400A255C(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned int v4; // r8d
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v4 = dword_1400E9818[0];
  if ( (dword_1400E9818[0] & 4) == 0 )
  {
    v6 = *sub_14009DEC0(a1, &v6);
    v4 = v6;
  }
  WORD2(v7) = 3;
  LODWORD(v7) = 0;
  return sub_140058590(a1 + 8, 0x3667CADu, (v4 >> 10) & 1, (v4 >> 11) & 1, (__int64)va, 1u, 0);
}
