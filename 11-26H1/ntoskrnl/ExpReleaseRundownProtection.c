/*
 * XREFs of ExpReleaseRundownProtection @ 0x14045CF10
 * Callers:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     PfSnRemoveProcessTrace @ 0x14045C7AC (PfSnRemoveProcessTrace.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x1408219D8 (SmHwAcceleratorPartitionCtxCleanup.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

void __stdcall ExpReleaseRundownProtection(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // r10
  bool v3; // zf
  signed __int64 v4; // rax
  unsigned __int64 v5; // r10

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  while ( (v2 & 1) == 0 )
  {
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 - 2 * Count, v2);
    v3 = v2 == v4;
    v2 = v4;
    if ( v3 )
      return;
  }
  v5 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -(__int64)Count) == Count
    && !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 32), 0) )
  {
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  }
}
