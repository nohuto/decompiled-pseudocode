/*
 * XREFs of RtlCopyToUserFromUser @ 0x1402D20B8
 * Callers:
 *     ?GreProbeAndCopyToAndFromUntrustedVa@@YAXPEAX_KPEBX1@Z @ 0x1401F3410 (-GreProbeAndCopyToAndFromUntrustedVa@@YAXPEAX_KPEBX1@Z.c)
 *     RtlCopyToUserFromUser$thunk$6737528492940246313 @ 0x14024E030 (RtlCopyToUserFromUser$thunk$6737528492940246313.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUserFromUser(void *a1, void *Src, size_t Size)
{
  ProbeForRead_0(Src, Size, 1u);
  ProbeForRead_0(a1, Size, 1u);
  return RtlCopyVolatileMemory(a1, Src, Size);
}
