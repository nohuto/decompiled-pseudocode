/*
 * XREFs of EtwpCovSampCaptureAllocateSampleBuffer @ 0x1408306E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateSampleBuffer(__int64 a1)
{
  int v1; // edi
  _QWORD *Pool2; // rax
  _QWORD *v3; // rbx

  v1 = *(_DWORD *)(a1 + 1300);
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x60uLL);
    v3[2] = 1342288122LL;
    *((_DWORD *)v3 + 16) = v1 - 72;
  }
  return v3;
}
