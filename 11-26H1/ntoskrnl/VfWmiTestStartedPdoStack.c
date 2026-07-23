/*
 * XREFs of VfWmiTestStartedPdoStack @ 0x140C41420
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfWmiTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int16 v4; // [rsp+40h] [rbp-58h] BYREF
  struct _DEVICE_OBJECT *v5; // [rsp+48h] [rbp-50h]

  memset_0(&v4, 0, 0x48uLL);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = -233;
    v5 = a1;
    return VfIrpSendSynchronousIrp(a1, (__int64)&v4, 1, v2, 0LL, 0LL, 0LL);
  }
  return result;
}
