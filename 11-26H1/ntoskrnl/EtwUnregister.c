/*
 * XREFs of EtwUnregister @ 0x1409BE550
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14064D090 (McGenEventUnregister_EtwUnregister.c)
 *     CarCleanup @ 0x14064D1D0 (CarCleanup.c)
 *     DifEtwUnregisterWrapper @ 0x140652290 (DifEtwUnregisterWrapper.c)
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078DAAC (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     WmipProcessLegacyEtwRegister @ 0x140829E98 (WmipProcessLegacyEtwRegister.c)
 *     VrpRegistryUnload @ 0x1408AB8D0 (VrpRegistryUnload.c)
 *     EtwpCoverageSamplerStop @ 0x1409BDF40 (EtwpCoverageSamplerStop.c)
 *     WmipProcessLegacyEtwUnregister @ 0x1409BE4E0 (WmipProcessLegacyEtwUnregister.c)
 *     WmipGECleanup @ 0x140B66E70 (WmipGECleanup.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 *     VslpIumInitializeTelemetry @ 0x140CBFAF4 (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140CD3F9C (ObpShutdownTraceLoggingProvider.c)
 *     SshpUninitialize @ 0x140CDD8F8 (SshpUninitialize.c)
 *     PerfDiagInitialize @ 0x140CE60F0 (PerfDiagInitialize.c)
 *     BapdpRecordIumStatus @ 0x140CE9478 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1409BE87C (EtwpReleaseProviderTraitsReference.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KLOCK_ENTRIES *v1; // r9
  char *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rbp
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rsi
  struct _KTHREAD *v8; // rax
  unsigned __int64 *v9; // rbp
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  _QWORD *v13; // rcx
  void **v14; // rax
  char **v15; // rdx
  void **v16; // rcx
  __int64 *v17; // rsi
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rtt
  __int64 v21; // rax
  __int64 *v22; // rsi
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rtt
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 *v32; // rcx
  ULONG v34; // r9d
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF

  v2 = (char *)(RegHandle & -(__int64)(RegHandle != 0));
  if ( !v2 )
    return -1073741816;
  if ( (*(_BYTE *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x62) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle & -(__int64)(RegHandle != 0), 1uLL, 0LL);
  if ( *(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x28) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = (unsigned __int64 *)(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x28) + 664LL);
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v1);
    v7 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v6);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    *(_QWORD *)(*((_QWORD *)v2 + 5) + 672LL) = KeGetCurrentThread();
  }
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = (unsigned __int64 *)(*((_QWORD *)v2 + 4) + 664LL);
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v1);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  *(_QWORD *)(*((_QWORD *)v2 + 4) + 672LL) = KeGetCurrentThread();
  v13 = *(_QWORD **)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2
    || (v14 = (void **)*((_QWORD *)v2 + 1), *v14 != v2)
    || (*v14 = v13, v13[1] = v14, v15 = (char **)*((_QWORD *)v2 + 2), v15[1] != v2 + 16)
    || (v16 = (void **)*((_QWORD *)v2 + 3), *v16 != v2 + 16) )
  {
    __fastfail(3u);
  }
  *v16 = v15;
  v15[1] = (char *)v16;
  *(_QWORD *)(*((_QWORD *)v2 + 4) + 672LL) = 0LL;
  v17 = (__int64 *)(*((_QWORD *)v2 + 4) + 664LL);
  _m_prefetchw(v17);
  v18 = *v17;
  v19 = *v17 - 16;
  if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v19 = 0LL;
  if ( (v18 & 2) != 0 || (v20 = *v17, v20 != _InterlockedCompareExchange64(v17, v19, v18)) )
    ExfReleasePushLock(v17);
  KeAbPostRelease((unsigned __int64)v17);
  KeLeaveCriticalRegion();
  v21 = *((_QWORD *)v2 + 5);
  if ( v21 )
  {
    *(_QWORD *)(v21 + 672) = 0LL;
    v22 = (__int64 *)(*((_QWORD *)v2 + 5) + 664LL);
    _m_prefetchw(v22);
    v23 = *v22;
    v24 = *v22 - 16;
    if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v24 = 0LL;
    if ( (v23 & 2) != 0 || (v25 = *v22, v25 != _InterlockedCompareExchange64(v22, v24, v23)) )
      ExfReleasePushLock(v22);
    KeAbPostRelease((unsigned __int64)v22);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_PROVIDER_UNREGISTERS) )
  {
    v34 = 0;
    if ( *((_QWORD *)v2 + 4) != -40LL )
    {
      UserData.Ptr = *((_QWORD *)v2 + 4) + 40LL;
      v34 = 1;
      *(_QWORD *)&UserData.Size = 16LL;
    }
    EtwWrite(
      (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      0LL,
      v34,
      &UserData);
  }
  EtwpUnreferenceGuidEntry(*((__int64 **)v2 + 4), v26, v27, v28);
  v32 = (__int64 *)*((_QWORD *)v2 + 5);
  if ( v32 )
    EtwpUnreferenceGuidEntry(v32, v29, v30, v31);
  EtwpReleaseProviderTraitsReference(v2);
  ExFreePoolWithTag(v2, 0);
  return 0;
}
