/*
 * XREFs of VfPowerTestStartedPdoStack @ 0x140C3B1F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     VfIrpSendSynchronousIrp @ 0x140C2C5F0 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPowerTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  _WORD v4[44]; // [rsp+40h] [rbp-58h] BYREF

  memset_0(v4, 0, 0x48uLL);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4[0] = -234;
    return VfIrpSendSynchronousIrp(a1, (__int64)v4, 1, v2, 0LL, 0LL, 0LL);
  }
  return result;
}
