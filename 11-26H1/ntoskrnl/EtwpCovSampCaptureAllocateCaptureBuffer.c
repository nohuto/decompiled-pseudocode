/*
 * XREFs of EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1408368A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateCaptureBuffer(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v5; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x50uLL);
    v5[6] = a2;
    v5[2] = 3401298175LL;
    *((_WORD *)v5 + 30) = *(_WORD *)(a1 + 1296);
  }
  return v5;
}
