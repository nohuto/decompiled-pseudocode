/*
 * XREFs of ViDmaUninit @ 0x140C3F8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ViDmaUninit()
{
  __int64 result; // rax

  ViVerifyDma = 0;
  PpvDmaVerifierEnabled = 0;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3F )
  {
    result = VfRealHalAllocateMapRegisters;
    off_140E00850[0] = (__int64 (__fastcall *)())VfRealHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 0;
  return result;
}
