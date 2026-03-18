/*
 * XREFs of RtlInternTableInitialize @ 0x140809870
 * Callers:
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInternTableInitialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  a1[1] = 0LL;
  a1[2] = a2;
  return result;
}
