/*
 * XREFs of VfPnpTestStartedPdoStack @ 0x140C408A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPnpTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  PVOID v8; // rbx
  _OWORD v10[2]; // [rsp+40h] [rbp-39h] BYREF
  __int16 v11; // [rsp+60h] [rbp-19h] BYREF
  GUID *v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+70h] [rbp-9h]
  _OWORD *v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  NTSTATUS v16; // [rsp+E8h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+F0h] [rbp+77h] BYREF

  v16 = 0;
  memset_0(&v11, 0, 0x48uLL);
  v11 = -229;
  VfIrpSendSynchronousIrp(a1, (__int64)&v11, 1, v2, 0LL, 0LL, 0LL);
  LODWORD(v12) = -1;
  HIBYTE(v11) = 7;
  VfIrpSendSynchronousIrp(a1, (__int64)&v11, 1, v3, 0LL, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    HIBYTE(v11) = 7;
    LODWORD(v12) = -1;
    VfIrpSendSynchronousIrp(a1, (__int64)&v11, 1, v4, 0xFFFFFFFFFFFFFFFFuLL, 0LL, 0LL);
  }
  HIBYTE(v11) = 12;
  LODWORD(v12) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)&v11, 1, v4, 0LL, 0LL, 0LL);
  HIBYTE(v11) = 19;
  LODWORD(v12) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)&v11, 1, v5, 0LL, 0LL, 0LL);
  HIBYTE(v11) = 7;
  LODWORD(v12) = 4;
  P = 0LL;
  if ( (unsigned int)VfIrpSendSynchronousIrp(a1, (__int64)&v11, 0, v6, 0LL, (ULONG_PTR *)&P, &v16) && v16 >= 0 )
  {
    v8 = P;
    ObfDereferenceObject(*((PVOID *)P + 1));
    ExFreePoolWithTag(v8, 0);
  }
  v12 = &GUID_BOGUS_INTERFACE;
  HIBYTE(v11) = 8;
  v14 = v10;
  v13 = 0x1FFFF;
  memset(v10, 0, sizeof(v10));
  v15 = -1LL;
  return VfIrpSendSynchronousIrp(a1, (__int64)&v11, 1, v7, 0LL, 0LL, 0LL);
}
