/*
 * XREFs of ExUuidCreate @ 0x140A76B60
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 *     DifExUuidCreateWrapper @ 0x140655200 (DifExUuidCreateWrapper.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140790C44 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IopInitializeCrashDump @ 0x140793598 (IopInitializeCrashDump.c)
 *     IoGetDeviceDirectory @ 0x1407A05B0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1407AB590 (PiDevCfgResolveVariableGenerateGuid.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     BiCreateObject @ 0x1409D2A70 (BiCreateObject.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     CmpUuidCreate @ 0x140A7622C (CmpUuidCreate.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExpUuidGetValues @ 0x140A76D20 (ExpUuidGetValues.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140A77BB0 (ExpUuidSaveSequenceNumberIf.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // ebp
  __int64 v5; // rdi
  char v6; // cl
  int v7; // eax
  __int64 v8; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v5 = *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[64];
      v6 = HIBYTE(NlsMbOemCodePageTag);
      *(_QWORD *)Uuid->Data4 = *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[76];
      v7 = _InterlockedDecrement((volatile signed __int32 *)&ExpPlatformBinaryLock.WaitBlockFill11[72]);
    }
    while ( v5 != *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[64] );
    if ( v7 >= 0 )
    {
      v8 = v5 - v7;
      Uuid->Data1 = v8;
      Uuid->Data2 = WORD2(v8);
      Uuid->Data3 = HIWORD(v8) & 0xFFF | 0x1000;
      if ( !v6 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpUuidLock, 0LL, 0LL, v1);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpUuidLock, v10, (__int64)&ExpUuidLock);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( v5 == *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[64] )
      break;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_19;
LABEL_21:
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock.Header.Lock);
LABEL_19:
    KeAbPostRelease((unsigned __int64)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17);
  }
  Values = ExpUuidGetValues(&ExpPlatformBinaryLock.WaitBlockFill11[64]);
  if ( !Values )
  {
    ExpUuidSaveSequenceNumberIf(v13);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_19;
    goto LABEL_21;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15);
  return Values;
}
