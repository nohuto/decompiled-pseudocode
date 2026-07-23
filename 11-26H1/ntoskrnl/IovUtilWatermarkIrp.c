/*
 * XREFs of IovUtilWatermarkIrp @ 0x1404B853C
 * Callers:
 *     IopEjectDevice @ 0x1407B5808 (IopEjectDevice.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA0E80 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140AE1C5C (PnpAsynchronousCall.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140C32784 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
