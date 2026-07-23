/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1801462B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpLocateXStateChunk @ 0x1800C9350 (RtlpLocateXStateChunk.c)
 *     RtlLocateLegacyContext @ 0x1800D6F00 (RtlLocateLegacyContext.c)
 */

void __cdecl RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, ULONG64 FeatureMask)
{
  char *XStateChunk; // rbx
  PCONTEXT_EX v3; // rcx
  PCONTEXT LegacyContext; // rax
  ULONG64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = FeatureMask;
  XStateChunk = RtlpLocateXStateChunk(ContextEx);
  LegacyContext = RtlLocateLegacyContext(v3, 0LL);
  RtlpRemoveArchDisallowedXStateFeatures(LegacyContext->ContextFlags, &v5);
  *(_QWORD *)XStateChunk = v5 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
}
