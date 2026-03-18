/*
 * XREFs of sub_140023A4C @ 0x140023A4C
 * Callers:
 *     sub_14002DAC8 @ 0x14002DAC8 (sub_14002DAC8.c)
 *     sub_14002DBBC @ 0x14002DBBC (sub_14002DBBC.c)
 * Callees:
 *     sub_1400237A8 @ 0x1400237A8 (sub_1400237A8.c)
 */

_BYTE *__fastcall sub_140023A4C(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a1 == -4320 || (unsigned int)StorPortExtendedFunction(37LL, a1, a1 + 4320, &v3) || !v3 )
    result = (_BYTE *)sub_1400237A8(a1);
  else
    result = (_BYTE *)(v3 - 112);
  if ( result )
    *result = 1;
  return result;
}
