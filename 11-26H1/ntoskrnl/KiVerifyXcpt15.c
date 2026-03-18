/*
 * XREFs of KiVerifyXcpt15 @ 0x140C803F0
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     MmMapIoSpaceEx @ 0x140363DC0 (MmMapIoSpaceEx.c)
 *     RtlCaptureImageExceptionValues @ 0x14040E248 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _local_unwind @ 0x140536000 (_local_unwind.c)
 *     KdDisableDebugger @ 0x1405E39D0 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1405E3B10 (KdEnableDebugger.c)
 *     KiSwInterruptPresent @ 0x140C80394 (KiSwInterruptPresent.c)
 *     KiVerifyXcpt2 @ 0x140CCC420 (KiVerifyXcpt2.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140D01330 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KiVerifyXcpt15()
{
  _QWORD v1[32]; // [rsp+0h] [rbp-148h] BYREF

  v1[24] = v1;
  KiVerifyXcpt2();
  return local_unwind((ULONG_PTR)v1, (__int64)&loc_140C80414);
}
