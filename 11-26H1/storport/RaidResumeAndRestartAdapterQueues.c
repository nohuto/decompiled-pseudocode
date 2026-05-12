/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x14006DC84
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     RaidAdapterDeviceReset @ 0x140060C14 (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBusNoLock @ 0x14006571C (RaidAdapterResetBusNoLock.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     StorResumeIoGateway @ 0x14002BBC0 (StorResumeIoGateway.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = StorResumeIoGateway(a1, 0LL, 0LL, a4);
  v6 = v5;
  if ( (qword_140172448 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v5, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v6 )
    RaidAdapterRestartQueues(a1, 0);
  return v6;
}
