/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1400563B0
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x14002AFF0 (RaAllocateIoResource.c)
 *     StorIsIoGatewayPaused @ 0x14004789C (StorIsIoGatewayPaused.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x14004C760 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rdx
  PSLIST_ENTRY IoResource; // r8
  _QWORD *v13; // rcx
  bool v14; // zf
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 **v19; // rcx
  __int64 *v20; // rax
  unsigned int v21; // ecx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 **v28; // rcx
  __int64 *v29; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(v3 + 1032) > 1u )
  {
    v8 = *(_DWORD *)(v3 + 1040);
    v4 = KeGetCurrentProcessorNumberEx(0LL) / v8;
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1032LL);
    if ( (unsigned int)v4 >= v9 )
      v4 = (unsigned int)v4 % v9;
  }
  v10 = a1 + 320 * v4;
  if ( StorIsIoGatewayPaused(v10) || *(_DWORD *)(v10 + 40) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v10, &LockHandle);
    if ( StorIsIoGatewayPaused(v10) || *(_DWORD *)(v10 + 40) )
    {
      v23 = *(_QWORD **)(v10 + 16);
      if ( *v23 == v10 + 8 )
      {
        v14 = FeatureFixKcsanRacyAccessV2 == 0;
        *(_QWORD *)a2 = v10 + 8;
        *(_QWORD *)(a2 + 8) = v23;
        *v23 = a2;
        *(_QWORD *)(v10 + 16) = a2;
        if ( v14 )
          ++*(_DWORD *)(v10 + 24);
        else
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
        if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
          goto LABEL_33;
        v24 = 96LL;
        v25 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL);
        if ( *(_BYTE *)(v25 + 2) != 40 )
          v24 = 48LL;
        v26 = v10 + 264;
        v27 = *(_QWORD *)(v24 + v25);
        v28 = *(__int64 ***)(v26 + 8);
        v29 = (__int64 *)(v27 + 24);
        if ( *v28 == (__int64 *)v26 )
        {
          *v29 = v26;
          v29[1] = (__int64)v28;
          *v28 = v29;
          *(_QWORD *)(v26 + 8) = v29;
          goto LABEL_33;
        }
      }
LABEL_34:
      __fastfail(3u);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  IoResource = RaAllocateIoResource(v10 + 64);
  if ( !IoResource )
  {
    if ( *(_DWORD *)(v10 + 136) >= *(_DWORD *)(v10 + 144)
      || (RaAttemptHighWaterMarkIncrease((unsigned int *)v10), (IoResource = RaAllocateIoResource(v10 + 64)) == 0LL) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v10, &LockHandle);
      v13 = *(_QWORD **)(v10 + 16);
      if ( *v13 == v10 + 8 )
      {
        v14 = FeatureFixKcsanRacyAccessV2 == 0;
        *(_QWORD *)a2 = v10 + 8;
        *(_QWORD *)(a2 + 8) = v13;
        *v13 = a2;
        *(_QWORD *)(v10 + 16) = a2;
        if ( v14 )
          ++*(_DWORD *)(v10 + 24);
        else
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
        *(_DWORD *)(v10 + 40) = 1699901262;
        if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
          goto LABEL_33;
        v15 = 96LL;
        v16 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL);
        if ( *(_BYTE *)(v16 + 2) != 40 )
          v15 = 48LL;
        v17 = v10 + 264;
        v18 = *(_QWORD *)(v15 + v16);
        v19 = *(__int64 ***)(v17 + 8);
        v20 = (__int64 *)(v18 + 24);
        if ( *v19 == (__int64 *)v17 )
        {
          *v20 = v17;
          v20[1] = (__int64)v19;
          *v19 = v20;
          *(_QWORD *)(v17 + 8) = v20;
LABEL_33:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          return 1;
        }
      }
      goto LABEL_34;
    }
  }
  v21 = *(_DWORD *)(v10 + 36);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 192)) >= v21 )
    *(_DWORD *)(v10 + 36) = *(_DWORD *)(v10 + 192);
  a3[3] = IoResource + 59;
  a3[2] = IoResource + 3;
  a3[1] = IoResource + 75;
  RaidZeroXrb((__int64)&IoResource[3], v11, *((_DWORD *)&IoResource[49].Next + 2), *((void **)&IoResource[50].Next + 1));
  return 0;
}
