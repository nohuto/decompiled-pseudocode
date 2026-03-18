/*
 * XREFs of MiAllocateAcceleratorDescriptor @ 0x1405319C8
 * Callers:
 *     MiAllocateEngineDescriptor @ 0x140514C38 (MiAllocateEngineDescriptor.c)
 *     MiLaunchZeroCalibrationProcessor @ 0x1407109E4 (MiLaunchZeroCalibrationProcessor.c)
 * Callees:
 *     MiReferenceAccelerator @ 0x140507D64 (MiReferenceAccelerator.c)
 *     MiCreateAcceleratorDescriptor @ 0x14070F408 (MiCreateAcceleratorDescriptor.c)
 *     MiDereferenceAccelerator @ 0x14070F68C (MiDereferenceAccelerator.c)
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
