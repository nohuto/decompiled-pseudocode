/*
 * XREFs of PfpPartitionGlobalContextInitialize @ 0x1407C7250
 * Callers:
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PfpPartitionGlobalContextInitialize(_QWORD *a1)
{
  _QWORD *result; // rax

  result = a1 + 1;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  *a1 = 0LL;
  return result;
}
