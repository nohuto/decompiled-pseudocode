/*
 * XREFs of sub_180010E00 @ 0x180010E00
 * Callers:
 *     sub_18000FE70 @ 0x18000FE70 (sub_18000FE70.c)
 * Callees:
 *     sub_1800112DC @ 0x1800112DC (sub_1800112DC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_180010E00(__int64 a1, __int64 a2, __int64 a3))(_QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(_QWORD, __int64, __int64); // rax

  result = (__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1801C84D8;
  if ( qword_1801C84D8 )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(0LL, a2, a3);
  result = (__int64 (__fastcall *)(_QWORD, __int64, __int64))sub_1800112DC();
  qword_1801C84D8 = (__int64)result;
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64))result(0LL, a2, a3);
  return result;
}
