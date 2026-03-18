/*
 * XREFs of IovUtilWatermarkIrp @ 0x1404BECEC
 * Callers:
 *     IopEjectDevice @ 0x1407B27A8 (IopEjectDevice.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA5C88 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140AE4154 (PnpAsynchronousCall.c)
 *     VfIrpSendSynchronousIrp @ 0x140C2C5F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140C2C774 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
