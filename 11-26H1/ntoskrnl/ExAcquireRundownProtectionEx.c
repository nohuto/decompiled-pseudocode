/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x140375100
 * Callers:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x140374C1C (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFault @ 0x140374EF0 (PfSnLogPageFault.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     PfSnAddProcessTrace @ 0x140530B6C (PfSnAddProcessTrace.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14081B58C (SmHwAcceleratorParitionCtxCreate.c)
 *     PspRundownProcess @ 0x140B39B8C (PspRundownProcess.c)
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
