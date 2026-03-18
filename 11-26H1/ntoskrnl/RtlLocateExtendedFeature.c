/*
 * XREFs of RtlLocateExtendedFeature @ 0x1403D7020
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D2F80 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiInitializeContextThread @ 0x1403D4E4C (KiInitializeContextThread.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1403D81E0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     PspSetupUserShadowStack @ 0x1409F1C84 (PspSetupUserShadowStack.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1403D7050 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlLocateExtendedFeature(__int64 a1, __int64 a2)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL);
}
