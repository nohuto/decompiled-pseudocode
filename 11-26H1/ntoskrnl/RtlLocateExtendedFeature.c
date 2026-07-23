/*
 * XREFs of RtlLocateExtendedFeature @ 0x1403D9FF0
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiInitializeContextThread @ 0x1403D7E1C (KiInitializeContextThread.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1403DB1B0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     PspSetupUserShadowStack @ 0x1409EE454 (PspSetupUserShadowStack.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1403DA020 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return (PVOID)RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL);
}
