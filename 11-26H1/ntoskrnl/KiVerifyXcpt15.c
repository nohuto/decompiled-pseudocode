/*
 * XREFs of KiVerifyXcpt15 @ 0x140C863F0
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     RtlCaptureImageExceptionValues @ 0x14042B178 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     KdDisableDebugger @ 0x1405E6340 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405E6480 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140C86394 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140CD2580 (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140D076D0 (MmStrongCodeGuaranteesEnforced.c)
 */

void KiVerifyXcpt15()
{
  _QWORD v0[32]; // [rsp+0h] [rbp-148h] BYREF

  v0[24] = v0;
  KiVerifyXcpt2();
  local_unwind(v0, &loc_140C86414);
}
