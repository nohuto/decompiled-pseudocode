/*
 * XREFs of PoFxPrepareDevice @ 0x1404A1864
 * Callers:
 *     PnpStartDevice @ 0x1404A1538 (PnpStartDevice.c)
 *     PiProcessAddBootDevices @ 0x1407A4FDC (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IoReleaseRemoveLockEx @ 0x1402DF200 (IoReleaseRemoveLockEx.c)
 *     PopPluginPrepareDevice @ 0x1404A1A48 (PopPluginPrepareDevice.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140B064BC (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140B1C46C (PopFxFindDeviceAndAllocateUniqueId.c)
 */

void __fastcall PoFxPrepareDevice(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rsi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int DeviceAndAllocateUniqueId; // eax
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v11; // rdi
  ULONG_PTR *v12; // rdi
  ULONG_PTR *v13; // rbp
  __int64 v14; // r9
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v15 = 0LL;
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 1) == 0 )
  {
    _m_prefetchw((const void *)(a1 + 296));
    v7 = *(_DWORD *)(a1 + 296);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v7, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 2) == 0 )
    {
      DeviceAndAllocateUniqueId = PopFxFindDeviceAndAllocateUniqueId(a1, &v15);
      v5 = v15;
      if ( DeviceAndAllocateUniqueId == -1073741738 )
      {
LABEL_18:
        if ( v5 )
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 312), (PVOID)0x66466F50, 0x20u);
        return;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&stru_140F12420.StateSaveArea,
        0,
        v11,
        (struct _KTHREAD *)&stru_140F12420.StateSaveArea);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v11 + 33) |= 2u;
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = (ULONG_PTR *)qword_140F123F0;
    v13 = 0LL;
    while ( v12 != &qword_140F123F0 )
    {
      if ( (unsigned __int8)PopPluginPrepareDevice((ULONG_PTR)v12) )
      {
        LOBYTE(v14) = 1;
        PopDiagTraceFxDevicePreparation(a1, v12, a1 + 128, v14);
        v13 = v12;
        if ( v12 )
          goto LABEL_23;
        break;
      }
      v12 = (ULONG_PTR *)*v12;
    }
    if ( !a2 )
      goto LABEL_15;
LABEL_23:
    *(_QWORD *)(a1 + 144) = v13;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 1u);
    *(_WORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
LABEL_15:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140F12420.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
    KeLeaveCriticalRegion();
    goto LABEL_18;
  }
}
