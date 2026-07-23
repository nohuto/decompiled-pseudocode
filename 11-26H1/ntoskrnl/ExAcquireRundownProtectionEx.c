/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x140376EB0
 * Callers:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1403769CC (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     PfSnAddProcessTrace @ 0x14053306C (PfSnAddProcessTrace.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14082179C (SmHwAcceleratorParitionCtxCreate.c)
 *     PspRundownProcess @ 0x140B3BD9C (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  while ( (v2 & 1) == 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v2 + 2 * Count, v2);
    if ( v3 == v2 )
      return 1;
  }
  return 0;
}
