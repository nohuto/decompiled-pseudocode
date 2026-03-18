/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x140260C74
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     ExInitializeFastResource2 @ 0x1404569D0 (ExInitializeFastResource2.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140652410 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406CE730 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC3724 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC3A38 (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CC5184 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CC68FC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CC7BBC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CDAB2C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpStdExtendUpperWatermark @ 0x140618F3C (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(KSPIN_LOCK *SpinLock, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  KSPIN_LOCK *v7; // rsi
  unsigned __int16 **v8; // rax
  __int64 v9; // rbx

  v2 = a2[7];
  v5 = 0;
  if ( (_WORD)v2 )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = &SpinLock[3 * (v5 % *((_DWORD *)SpinLock + 180))];
  *((_BYTE *)v7 + 744) = KeAcquireSpinLockRaiseToDpc(v7 + 92);
  if ( *(_DWORD *)(a2 + 5) )
  {
    LODWORD(v9) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v8 = (unsigned __int16 **)RtlpStdExtendUpperWatermark(SpinLock);
    if ( v8 )
    {
      *v8 = a2;
      v9 = (__int64)(SpinLock[23] - (_QWORD)v8) >> 3;
      a2[6] = v9;
      a2[5] = WORD1(v9);
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  KeReleaseSpinLock(v7 + 92, *((_BYTE *)v7 + 744));
  return (unsigned int)v9;
}
