/*
 * XREFs of NdisMSynchronizeWithInterruptEx @ 0x140050610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisMSynchronizeWithInterruptEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        MINIPORT_SYNCHRONIZE_INTERRUPT_HANDLER SynchronizeFunction,
        PVOID SynchronizeContext)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)NdisInterruptHandle + 15);
  if ( *((_BYTE *)NdisInterruptHandle + 193) != 1 )
    return KeSynchronizeExecution((PKINTERRUPT)v5, SynchronizeFunction, SynchronizeContext);
  if ( v5 && *(_DWORD *)(v5 + 4) > MessageId )
  {
    v5 = *(_QWORD *)(v5 + 48LL * MessageId + 24);
    return KeSynchronizeExecution((PKINTERRUPT)v5, SynchronizeFunction, SynchronizeContext);
  }
  return 0;
}
