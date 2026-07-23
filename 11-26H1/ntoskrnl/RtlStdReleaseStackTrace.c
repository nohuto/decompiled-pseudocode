/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1402602B0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     ExInitializeFastResource2 @ 0x14025FFE0 (ExInitializeFastResource2.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140655FF0 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406D2760 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC97F8 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC9B0C (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CCB264 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CCC9EC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CCDCAC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CE0EAC (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CE48BC (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CE6318 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
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
