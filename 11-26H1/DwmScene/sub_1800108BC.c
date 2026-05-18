/*
 * XREFs of sub_1800108BC @ 0x1800108BC
 * Callers:
 *     sub_18000EB70 @ 0x18000EB70 (sub_18000EB70.c)
 *     sub_180010B1C @ 0x180010B1C (sub_180010B1C.c)
 * Callees:
 *     sub_18001099C @ 0x18001099C (sub_18001099C.c)
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 */

__int64 __fastcall sub_1800108BC(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  _WORD *v3; // r10
  unsigned int v4; // r11d

  result = sub_180010A58(a1, 260LL);
  if ( (int)result >= 0 )
    return sub_18001099C(v3, v4, v2, v2);
  *v3 = 0;
  return result;
}
