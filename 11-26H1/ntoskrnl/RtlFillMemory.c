/*
 * XREFs of RtlFillMemory @ 0x14061E030
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset_0(a1, Fill, Length);
}
