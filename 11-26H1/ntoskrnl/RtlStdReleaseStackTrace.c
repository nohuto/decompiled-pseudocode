/*
 * XREFs of RtlStdReleaseStackTrace @ 0x140260D48
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
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  __int64 *v8; // r14
  __int64 *v9; // r15
  _WORD *v10; // rdi
  __int16 v11; // dx

  v3 = *((unsigned __int16 *)a2 + 7);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)v3 )
  {
    v7 = a2 + 2;
    do
    {
      v6 += *v7;
      v7 += 2;
      --v3;
    }
    while ( v3 );
  }
  v8 = (__int64 *)(a1 + 8 * (v6 % *(_DWORD *)(a1 + 720) + 2LL * (v6 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 1);
  v10 = a2 + 1;
  v11 = *((_WORD *)a2 + 4);
  if ( (v11 & 0x7FF) != 0x7FF )
  {
    *v10 = v11 ^ (v11 ^ (v11 - 1)) & 0x7FF;
    if ( ((v11 - 1) & 0x7FF) == 0 )
    {
      while ( *v8 )
      {
        if ( (__int64 *)*v8 == a2 )
        {
          *v8 = *a2;
          goto LABEL_11;
        }
        v8 = (__int64 *)*v8;
      }
      __debugbreak();
LABEL_11:
      v5 = 1;
      v10 = a2 + 1;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v9, *((_BYTE *)v9 + 8));
  if ( v5 )
  {
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)(unsigned __int16)*v10 >> 11) + 13)),
      (PSLIST_ENTRY)a2 + 1);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
