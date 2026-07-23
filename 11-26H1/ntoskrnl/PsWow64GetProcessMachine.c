/*
 * XREFs of PsWow64GetProcessMachine @ 0x1409E8360
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403DA340 (KeVerifyContextRecord.c)
 *     WbGetWowTrapFrame @ 0x14088677C (WbGetWowTrapFrame.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 *     PspWow64SetupCpuArea @ 0x1409E6E90 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1409E819C (PsGetSupportedProcessorArchitectures.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     sub_1409E9244 @ 0x1409E9244 (sub_1409E9244.c)
 *     WbDisableTracing @ 0x1409EA148 (WbDisableTracing.c)
 *     WbSetWowTrapFrame @ 0x1409EA8D0 (WbSetWowTrapFrame.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
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
