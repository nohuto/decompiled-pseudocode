/*
 * XREFs of sub_1400710E8 @ 0x1400710E8
 * Callers:
 *     sub_14006EF74 @ 0x14006EF74 (sub_14006EF74.c)
 *     sub_14006F230 @ 0x14006F230 (sub_14006F230.c)
 *     sub_1400B251C @ 0x1400B251C (sub_1400B251C.c)
 * Callees:
 *     sub_140071138 @ 0x140071138 (sub_140071138.c)
 *     sub_14007119C @ 0x14007119C (sub_14007119C.c)
 */

__int64 sub_1400710E8(_QWORD a1, _QWORD a2, _QWORD a3, ...)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  _WORD *v6; // r11
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  result = sub_14007119C();
  if ( (int)result >= 0 )
    return sub_140071138(v6, v5, v4, v4, (__int64 *)va);
  if ( v5 )
    *v6 = 0;
  return result;
}
