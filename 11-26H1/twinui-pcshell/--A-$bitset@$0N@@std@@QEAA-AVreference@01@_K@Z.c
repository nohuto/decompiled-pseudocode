/*
 * XREFs of ??A?$bitset@$0N@@std@@QEAA?AVreference@01@_K@Z @ 0x1803F625C
 * Callers:
 *     _lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator() @ 0x1800B7F54 (_lambda_328cf9fe8e40f62dbe0573cdd1213578_--operator().c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::bitset<13>::operator[](__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  *a2 = a1;
  result = a2;
  a2[1] = a3;
  return result;
}
