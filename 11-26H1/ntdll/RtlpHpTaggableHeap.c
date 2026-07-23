/*
 * XREFs of RtlpHpTaggableHeap @ 0x180092910
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180092B10 (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178
      && a1 != qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]];
}
