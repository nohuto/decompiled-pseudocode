/*
 * XREFs of RtlFillMemory @ 0x140621080
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset_0(a1, Fill, Length);
}
