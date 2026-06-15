/*
 * XREFs of sub_1400A24D8 @ 0x1400A24D8
 * Callers:
 *     sub_14009E120 @ 0x14009E120 (sub_14009E120.c)
 * Callees:
 *     sub_140058590 @ 0x140058590 (sub_140058590.c)
 *     sub_14009DD7C @ 0x14009DD7C (sub_14009DD7C.c)
 */

_UNKNOWN **sub_1400A24D8(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int32 v4; // r8d
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v4 = dword_1400E9820[0];
  if ( (dword_1400E9820[0] & 4) == 0 )
  {
    v6 = *sub_14009DD7C(a1, &v6);
    v4 = v6;
  }
  WORD2(v7) = 3;
  LODWORD(v7) = 0;
  return sub_140058590(a1 + 8, 0x38419CAu, (v4 >> 10) & 1, (v4 >> 11) & 1, (__int64)va, 1u, 0);
}
