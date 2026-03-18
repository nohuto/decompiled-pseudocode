/*
 * XREFs of ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1400E9F98
 * Callers:
 *     NtMITDispatchCompletion @ 0x14009D540 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x14009DA80 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1400E9F44 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall IOCPDispatcher::SensorIOCPWCP::Cleanup(IOCPDispatcher::SensorIOCPWCP *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
