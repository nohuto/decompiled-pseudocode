/*
 * XREFs of MmSizeOfMdl @ 0x140488370
 * Callers:
 *     VslObtainHotPatchUndoTable @ 0x14079251C (VslObtainHotPatchUndoTable.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     VslValidateDynamicCodePages @ 0x140AD5FA4 (VslValidateDynamicCodePages.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AECA38 (MiReplaceRotateWithDemandZero.c)
 *     VslCreateSecureSection @ 0x140AFB740 (VslCreateSecureSection.c)
 *     PspCreateSecureThread @ 0x140B342F8 (PspCreateSecureThread.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
