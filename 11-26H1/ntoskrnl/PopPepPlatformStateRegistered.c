/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1406146A4
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1406079B4 (PopFxEnablePlatformStates.c)
 * Callees:
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 *     PopPepInitializeDebuggerMasks @ 0x140614460 (PopPepInitializeDebuggerMasks.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopPepInitializeConstraintOverrides @ 0x1407E6D84 (PopPepInitializeConstraintOverrides.c)
 */

int __fastcall PopPepPlatformStateRegistered(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  signed __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v7; // rdx
  _BYTE *v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 i; // rsi
  KIRQL v12; // al
  int v13; // ebx
  __int64 v14; // rbx
  struct _KLOCK_ENTRIES *v15; // r9
  volatile unsigned __int8 *v16; // rdx
  _BYTE *v17; // rdi
  char Buffer; // [rsp+78h] [rbp+10h] BYREF

  v4 = a1;
  v5 = _InterlockedCompareExchange64(&PopPepPlatformState, PpmPlatformStates + 64, 0LL);
  if ( !v5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (_BYTE *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
        0,
        (LegacyAutoBoost *)v8,
        (struct _KTHREAD *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
    }
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v7) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v8 + 33), v7, 1);
      }
      else
      {
        v8[10] = 1;
      }
    }
    PopPepInitializeConstraintOverrides();
    if ( (_DWORD)v4 )
    {
      v9 = (_DWORD *)(PopPepPlatformState + 384);
      v10 = v4;
      do
      {
        *v9 = 1073741825;
        v9 += 112;
        --v10;
      }
      while ( v10 );
    }
    for ( i = *(_QWORD *)&PopDirectedDripsDiagLock.ForegroundLossTime;
          (unsigned int *)i != &PopDirectedDripsDiagLock.ForegroundLossTime;
          i = *(_QWORD *)i )
    {
      v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
      v13 = *(_DWORD *)(i + 172);
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(i + 64), v12);
      if ( v13 == 1 )
      {
        v14 = *(_QWORD *)(i + 32);
        if ( *(_QWORD *)(v14 + 48) )
        {
          if ( (int)PopFxTryReferenceDevice(*(_QWORD *)(i + 32), 2) >= 0 )
          {
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
                   0LL,
                   17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
            KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
            PopFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v14 + 48) + 32LL), 0, 0);
            PopPepInitializeVetoMasks(i, v4);
            PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(v14 + 48) + 32LL));
            v17 = (_BYTE *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock.PriorityFloorSummary, 0LL, 0LL, v15);
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
                   17LL,
                   0LL) )
            {
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
                0,
                (LegacyAutoBoost *)v17,
                (struct _KTHREAD *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
            }
            if ( v17 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
              {
                LOBYTE(v16) = 2;
                AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v17 + 33), v16, 1);
              }
              else
              {
                v17[10] = 1;
              }
            }
            PopFxDereferenceDevice(v14, 2);
          }
        }
        else if ( (*(_DWORD *)(v14 + 864) & 2) != 0 )
        {
          PopPepInitializeDebuggerMasks(i, v4);
        }
      }
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock.PriorityFloorSummary);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock.PriorityFloorSummary);
    KeLeaveCriticalRegion();
    PopPepUpdateIdleStateRefCount((1 << v4) - 1, 0, 0, 0LL, 0xFFFFFFFF);
    Buffer = 1;
    LODWORD(v5) = ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return v5;
}
