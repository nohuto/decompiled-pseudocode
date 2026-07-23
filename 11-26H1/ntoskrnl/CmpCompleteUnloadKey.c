/*
 * XREFs of CmpCompleteUnloadKey @ 0x1408C009C
 * Callers:
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404C6120 (CmpRemoveHiveFromNamespace.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     CmpUnJoinClassOfTrust @ 0x1404CD4DC (CmpUnJoinClassOfTrust.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1404D037C (CmpDecrementAppHiveUnloadCount.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1408BE49C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1408BE560 (CmpVolumeContextDecrementRefCount.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408BE608 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpTraceHiveUnloadStart @ 0x1408BE674 (CmpTraceHiveUnloadStart.c)
 *     CmpCmdHiveClose @ 0x1408BE78C (CmpCmdHiveClose.c)
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 *     CmpTraceHiveUnloadStop @ 0x1408BFEE0 (CmpTraceHiveUnloadStop.c)
 *     CmpDestroySecurityCache @ 0x1408BFF6C (CmpDestroySecurityCache.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1408C001C (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDiscardKcb @ 0x1408C033C (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1408C065C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x1408E6E78 (CmpCleanUpSubKeyInfo.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // edi
  unsigned int v13; // esi
  struct _PRIVILEGE_SET *v14; // rcx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v22[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v22[0] = 0LL;
  CmpInitializeDelayDerefContext(v22);
  v6 = *(_DWORD *)(v3 + 4120) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4244), 1u) & 0x7F) + 4248) = 6;
  v7 = *(_QWORD *)(v3 + 4160);
  if ( v7 )
  {
    v16 = *(_QWORD *)(v3 + 64);
    v17 = *(_DWORD *)(v16 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v18 = v17 & 0xFFFFFFFE;
    else
      v18 = v17 | 1;
    *(_DWORD *)(v16 + 144) = v18;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  CmpTraceHiveUnloadStart((unsigned __int16 *)(v3 + 1848), (unsigned __int16 *)(v3 + 1864));
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)v22);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4244), 1u) & 0x7F) + 4248) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4776) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, v22);
  CmpMarkKeyUnbacked(a1, v22);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1);
  LOBYTE(v8) = 1;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v8);
  CmpDrainDelayDerefContext((_QWORD **)v22);
  CmpUnlockRegistry(v9);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(WheapPfaLock.Timer.Dpc, (PUNICODE_STRING)(v3 + 1864));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegion();
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v19 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v19 + 8) != v3 + 1624 || (v20 = *(_QWORD **)(v3 + 1632), *v20 != v3 + 1624) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  CmpDestroySecurityCache(v3);
  v11 = CmpFlushHive(v3, 0x2Cu);
  v12 = 0;
  if ( v11 != -1073741811 )
    v12 = v11;
  v13 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3);
  if ( v12 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1808) - v13) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v13, 0LL);
  CmpCmdHiveClose(v3);
  v14 = *(struct _PRIVILEGE_SET **)(v3 + 4800);
  if ( v14 )
    CmpVolumeContextDecrementRefCount(v14);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4776) = 0;
    _InterlockedOr(v21, 0);
    if ( *(_QWORD *)(v3 + 4784) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4784), 0LL);
  }
  CmpSignalUnloadEventArrayForHive(v3);
  return CmpTraceHiveUnloadStop(v12);
}
