/*
 * XREFs of RaidPauseAdapterQueue @ 0x14002EEF0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x14002EBC0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     StorPortAdapterIdleCondition @ 0x140055510 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterDeviceReset @ 0x140060C14 (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBusNoLock @ 0x14006571C (RaidAdapterResetBusNoLock.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x14007BE90 (StorPortPause.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 * Callees:
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v2; // edi
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *i; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1052));
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
      RaUnitLockForwardIo(i - 8, 4LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v3 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v4 = *(_DWORD *)(a1 + 4996);
      if ( v4 )
      {
        v5 = *(_QWORD *)(a1 + 5000);
        if ( v5 )
        {
          v6 = 6LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4992)) % v4);
          *(_DWORD *)(v5 + 8 * v6) = 6;
          *(_QWORD *)(v5 + 8 * v6 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v5 + 8 * v6 + 8) = retaddr;
          *(_QWORD *)(v5 + 8 * v6 + 16) = v2;
          *(_QWORD *)(v5 + 8 * v6 + 24) = a1;
          *(_QWORD *)(v5 + 8 * v6 + 32) = v3;
        }
      }
    }
  }
  return (unsigned int)v2;
}
