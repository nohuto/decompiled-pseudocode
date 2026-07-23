/*
 * XREFs of EtwpCoverageInitializeStringBuffer @ 0x1406CA59C
 * Callers:
 *     EtwpCoverageEnsureStringBuffer @ 0x14082FE18 (EtwpCoverageEnsureStringBuffer.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall EtwpCoverageInitializeStringBuffer(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  v2 = a2;
  memset_0(a1, 0, a2);
  a1[2] = (char *)a1 + v2;
  result = a1 + 5;
  a1[3] = a1 + 5;
  a1[4] = a1 + 5;
  return result;
}
