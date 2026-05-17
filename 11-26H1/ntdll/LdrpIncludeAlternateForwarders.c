/*
 * XREFs of LdrpIncludeAlternateForwarders @ 0x18012126C
 * Callers:
 *     RtlpComputePath @ 0x18009C0E0 (RtlpComputePath.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

bool LdrpIncludeAlternateForwarders()
{
  struct _PEB *v0; // rcx

  v0 = NtCurrentPeb();
  return (v0->ProcessParameters->Flags & 0x4000000) != 0 || (v0->NtGlobalFlag2 & 2) != 0;
}
