/*
 * XREFs of sub_1800108F8 @ 0x1800108F8
 * Callers:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 */

__int64 sub_1800108F8(__int64 a1, __int64 a2, _QWORD a3, ...)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // r10
  _WORD *v6; // r11
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  result = sub_180010A58(a1, a2);
  if ( (int)result >= 0 )
    return sub_1800109F8((_DWORD)v6, v5, v4, v4, (__int64)va);
  if ( v5 )
    *v6 = 0;
  return result;
}
