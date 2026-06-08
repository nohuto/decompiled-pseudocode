/*
 * XREFs of CpcNativeInterruptWorker @ 0x1400285C0
 * Callers:
 *     <none>
 * Callees:
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x1400480FC (CpcGuaranteedNotifyWorker.c)
 */

void __fastcall CpcNativeInterruptWorker(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  __int64 v2; // rbx
  char v4; // di

  v2 = Context[31];
  do
  {
    v4 = _InterlockedExchange((volatile __int32 *)(v2 + 1328), 4);
    if ( (v4 & 1) != 0 )
      CpcGuaranteedNotifyWorker(DeviceObject, 0LL, "Native Interrupt");
    if ( (v4 & 2) != 0 )
      CpcHighestNotifyWorker(DeviceObject, 0LL, "Native Interrupt");
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 1328), 0, 4) != 4 );
}
