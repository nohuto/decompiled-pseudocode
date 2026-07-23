/*
 * XREFs of MiAllocateAcceleratorDescriptor @ 0x140533E70
 * Callers:
 *     MiAllocateEngineDescriptor @ 0x14050E6A8 (MiAllocateEngineDescriptor.c)
 *     MiLaunchZeroCalibrationProcessor @ 0x1407156E0 (MiLaunchZeroCalibrationProcessor.c)
 * Callees:
 *     MiReferenceAccelerator @ 0x140501738 (MiReferenceAccelerator.c)
 *     MiCreateAcceleratorDescriptor @ 0x140714104 (MiCreateAcceleratorDescriptor.c)
 *     MiDereferenceAccelerator @ 0x140714388 (MiDereferenceAccelerator.c)
 */

_QWORD *__fastcall MiAllocateAcceleratorDescriptor(unsigned int a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  __int64 AcceleratorDescriptor; // rdi

  result = MiReferenceAccelerator(a1);
  v2 = result;
  if ( result )
  {
    AcceleratorDescriptor = MiCreateAcceleratorDescriptor(result);
    if ( !AcceleratorDescriptor )
      MiDereferenceAccelerator(v2);
    return (_QWORD *)AcceleratorDescriptor;
  }
  return result;
}
