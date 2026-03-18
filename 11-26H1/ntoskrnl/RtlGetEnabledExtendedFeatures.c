/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x140619420
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405532EC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x14046CFC0 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409EAAD0 (RtlpArchContextFlagFromMachine.c)
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  int v1; // eax
  ULONG64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
  v1 = RtlpArchContextFlagFromMachine(34404LL);
  RtlpRemoveArchDisallowedXStateFeatures(v1, &v3);
  return v3;
}
