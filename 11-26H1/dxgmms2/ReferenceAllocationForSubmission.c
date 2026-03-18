/*
 * XREFs of ReferenceAllocationForSubmission @ 0x1400EBE3C
 * Callers:
 *     ?VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z @ 0x1400EBC00 (-VidMmPrepareDmaBuffer@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_DMA_BUFFER@@IPEAIPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

_BYTE **__fastcall ReferenceAllocationForSubmission(__int64 a1, _QWORD **a2, char a3)
{
  _BYTE **result; // rax
  _BYTE *v4; // rdx

  result = (_BYTE **)*a2;
  v4 = (_BYTE *)**a2;
  v4[42] = 1;
  if ( !a3 )
  {
    result = *(_BYTE ***)v4;
    if ( (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 0x10) != 0 )
      v4[43] = 1;
  }
  return result;
}
