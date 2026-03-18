/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x14070F474
 * Callers:
 *     MiZeroNodeExiting @ 0x1405131F4 (MiZeroNodeExiting.c)
 *     MiAllocateEngineDescriptor @ 0x140514C38 (MiAllocateEngineDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x14070E470 (MiFreeHardwareDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 * Callees:
 *     MiDereferenceAccelerator @ 0x14070F68C (MiDereferenceAccelerator.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAcceleratorDescriptor(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  MiDereferenceAccelerator(*(_QWORD *)(a1 - 32 + 16));
  ExFreePoolWithTag(v1, 0);
}
