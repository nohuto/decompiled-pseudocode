/*
 * XREFs of PsWow64GetProcessMachine @ 0x1409EBB90
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262EB0 (RtlpWalkFrameChain.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1403D5A70 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403D7370 (KeVerifyContextRecord.c)
 *     WbGetWowTrapFrame @ 0x14088037C (WbGetWowTrapFrame.c)
 *     MiCommitVadMetadataBits @ 0x1409C6E14 (MiCommitVadMetadataBits.c)
 *     PspWow64SetupCpuArea @ 0x1409EA6C0 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409EA95C (PspWow64InitThread.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1409EB9CC (PsGetSupportedProcessorArchitectures.c)
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 *     sub_1409ECA74 @ 0x1409ECA74 (sub_1409ECA74.c)
 *     WbDisableTracing @ 0x1409ED978 (WbDisableTracing.c)
 *     WbSetWowTrapFrame @ 0x1409EE100 (WbSetWowTrapFrame.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int16 result; // ax

  if ( !*(_QWORD *)(a1 + 784) )
    return -31132;
  result = *(_WORD *)(a1 + 1772);
  if ( !result )
    return -31132;
  return result;
}
