/*
 * XREFs of RtlpAllocationSize @ 0x18009EFD8
 * Callers:
 *     RtlSetEnvironmentVar @ 0x18009E600 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x1800A0570 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x1800A06D0 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocationSize(unsigned __int64 a1)
{
  return RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
