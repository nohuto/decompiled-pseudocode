/*
 * XREFs of SshpSetCollectionActive @ 0x14049C548
 * Callers:
 *     PdcPoSleepStudyHelperSetPhaseActive @ 0x140B052F0 (PdcPoSleepStudyHelperSetPhaseActive.c)
 *     SshpPowerSettingCallback @ 0x140B21200 (SshpPowerSettingCallback.c)
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpStopBlockerAccounting @ 0x14049C650 (SshpStopBlockerAccounting.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B02534 (SshpTracingWriteCollectionStateChange.c)
 */

void __fastcall SshpSetCollectionActive(struct _KTHREAD *a1, unsigned __int8 a2)
{
  int v2; // ebp
  __int64 v4; // rdx
  unsigned __int64 v5; // r15
  struct _KTHREAD *i; // rsi
  _XSAVE_FORMAT *StateSaveArea; // rdi
  KIRQL v8; // al
  unsigned int ErrorOffset; // ecx
  KIRQL v10; // r13
  int v11; // ecx

  v2 = a2;
  CmpVolumeManagerLockContextListExclusive(a1);
  if ( (HIDWORD(a1->SListFaultAddress) & 1) != v2 )
  {
    v5 = MEMORY[0xFFFFF78000000008];
    for ( i = (struct _KTHREAD *)a1->QuantumTarget;
          i != (struct _KTHREAD *)&a1->QuantumTarget;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      StateSaveArea = i->StateSaveArea;
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&StateSaveArea->ControlWord);
      ErrorOffset = StateSaveArea->ErrorOffset;
      v10 = v8;
      if ( (_BYTE)v2 )
      {
        v11 = ErrorOffset | 2;
        StateSaveArea->ErrorOffset = v11;
        if ( (v11 & 1) == 0 )
          ++LODWORD(StateSaveArea->FloatRegisters[6].Low);
        StateSaveArea->FloatRegisters[0].Low = v5;
      }
      else if ( (ErrorOffset & 2) != 0 )
      {
        SshpStopBlockerAccounting(StateSaveArea, v5);
        StateSaveArea->ErrorOffset &= ~2u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&StateSaveArea->ControlWord, v10);
    }
    LOBYTE(v4) = v2;
    HIDWORD(a1->SListFaultAddress) ^= ((unsigned __int8)v2 ^ (unsigned __int8)HIDWORD(a1->SListFaultAddress)) & 1;
    SshpTracingWriteCollectionStateChange(a1->Header.WaitListHead.Flink, v4);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
}
