/*
 * XREFs of ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1400C9200
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocatePacketPool @ 0x14002BDC0 (NdisAllocatePacketPool.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1400C9484 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

void __fastcall ndisVerifierAllocatePacketPool(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT ProtocolReservedLength)
{
  unsigned __int8 v8; // cl
  PVOID v9; // [rsp+20h] [rbp-18h] BYREF
  PVOID v10; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  RtlGetCallersAddress(&v9, &v10);
  if ( ndisVerifierInjectResourceFailure(v8) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPool(Status, PoolHandle, NumberOfDescriptors, ProtocolReservedLength);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = v9;
  }
}
