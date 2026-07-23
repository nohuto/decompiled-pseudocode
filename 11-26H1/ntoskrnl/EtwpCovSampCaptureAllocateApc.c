/*
 * XREFs of EtwpCovSampCaptureAllocateApc @ 0x140836840
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateApc(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v4; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0xA0uLL);
    v4[6] = a2;
    v4[2] = 2882190508LL;
  }
  return v4;
}
