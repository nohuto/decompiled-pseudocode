/*
 * XREFs of RtlpAllocationSize @ 0x18009E108
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18009D730 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x18009F6A0 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x18009F800 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

SIZE_T __fastcall RtlpAllocationSize(void *a1)
{
  return RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
