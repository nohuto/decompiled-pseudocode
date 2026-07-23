/*
 * XREFs of PfpPartitionGlobalContextInitialize @ 0x1407CA2B0
 * Callers:
 *     PfInitializeSuperfetch @ 0x140CD4198 (PfInitializeSuperfetch.c)
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
