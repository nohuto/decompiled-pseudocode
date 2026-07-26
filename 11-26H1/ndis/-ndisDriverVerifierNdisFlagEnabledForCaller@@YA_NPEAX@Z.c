/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140169430
 * Callers:
 *     ndisPplIsUseAfterFreeVerifierEnabled @ 0x14005B800 (ndisPplIsUseAfterFreeVerifierEnabled.c)
 * Callees:
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140144E40 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

bool __fastcall ndisDriverVerifierNdisFlagEnabledForCaller(void *a1)
{
  return MmIsDriverVerifyingByAddress(a1) && ndisDriverVerifierNdisFlagEnabled();
}
