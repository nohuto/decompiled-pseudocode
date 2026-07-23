/*
 * XREFs of MiDeleteAcceleratorDescriptor @ 0x140714170
 * Callers:
 *     MiZeroNodeExiting @ 0x14050CC64 (MiZeroNodeExiting.c)
 *     MiAllocateEngineDescriptor @ 0x14050E6A8 (MiAllocateEngineDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x140713170 (MiFreeHardwareDescriptor.c)
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiDereferenceAccelerator @ 0x140714388 (MiDereferenceAccelerator.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAcceleratorDescriptor(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 32);
  MiDereferenceAccelerator(*(_QWORD *)(a1 - 32 + 16));
  ExFreePoolWithTag(v1, 0);
}
