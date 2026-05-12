/*
 * XREFs of StorNextIoGatewayItem @ 0x14002F7C8
 * Callers:
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidAdapterRestartGateway @ 0x14002F760 (RaidAdapterRestartGateway.c)
 * Callees:
 *     RaidZeroXrb @ 0x140011A50 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x14002AFF0 (RaAllocateIoResource.c)
 *     RaFreeIoResource @ 0x14002F6F0 (RaFreeIoResource.c)
 *     StorIsIoGatewayPaused @ 0x14004789C (StorIsIoGatewayPaused.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x14004C760 (RaAttemptHighWaterMarkIncrease.c)
 */

KSPIN_LOCK __fastcall StorNextIoGatewayItem(PKSPIN_LOCK SpinLock, _QWORD *a2)
{
  KSPIN_LOCK v2; // rdi
  char v3; // bp
  KSPIN_LOCK v6; // rax
  PSLIST_ENTRY IoResource; // rsi
  PKSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rcx
  int v10; // eax
  PKSPIN_LOCK v11; // rax
  KSPIN_LOCK v12; // rcx
  unsigned int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = SpinLock[6];
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    if ( *(_DWORD *)(v6 + 1060) )
      goto LABEL_5;
  }
  else if ( *(_DWORD *)(v6 + 1060) )
  {
LABEL_5:
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v3 = 1;
  }
  if ( *((_DWORD *)SpinLock + 6) )
  {
    if ( !*((_DWORD *)SpinLock + 10) && !(unsigned __int8)StorIsIoGatewayPaused(SpinLock) )
    {
      IoResource = RaAllocateIoResource((__int64)(SpinLock + 8));
      if ( IoResource
        || *((_DWORD *)SpinLock + 34) < *((_DWORD *)SpinLock + 36)
        && (RaAttemptHighWaterMarkIncrease(SpinLock), (IoResource = RaAllocateIoResource((__int64)(SpinLock + 8))) != 0LL) )
      {
        if ( !v3 )
          KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
        if ( FeatureFixKcsanRacyAccessV2 )
        {
          if ( !*((_DWORD *)SpinLock + 6)
            || *((_DWORD *)SpinLock + 10)
            || (unsigned __int8)StorIsIoGatewayPaused(SpinLock) )
          {
            goto LABEL_40;
          }
          v8 = SpinLock + 1;
          v2 = SpinLock[1];
          if ( *(PKSPIN_LOCK *)(v2 + 8) != SpinLock + 1 )
            goto LABEL_42;
          v9 = *(_QWORD *)v2;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 )
            goto LABEL_42;
          *v8 = v9;
          *(_QWORD *)(v9 + 8) = v8;
          _InterlockedIncrement((volatile signed __int32 *)SpinLock + 48);
          if ( *((_DWORD *)SpinLock + 48) <= *((_DWORD *)SpinLock + 9) )
            v10 = *((_DWORD *)SpinLock + 9);
          else
            v10 = *((_DWORD *)SpinLock + 48);
          *((_DWORD *)SpinLock + 9) = v10;
        }
        else
        {
          if ( !*((_DWORD *)SpinLock + 6)
            || *((_DWORD *)SpinLock + 10)
            || (unsigned __int8)StorIsIoGatewayPaused(SpinLock) )
          {
            goto LABEL_40;
          }
          v11 = SpinLock + 1;
          v2 = SpinLock[1];
          if ( *(PKSPIN_LOCK *)(v2 + 8) != SpinLock + 1 )
            goto LABEL_42;
          v12 = *(_QWORD *)v2;
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 )
            goto LABEL_42;
          *v11 = v12;
          *(_QWORD *)(v12 + 8) = v11;
          _InterlockedIncrement((volatile signed __int32 *)SpinLock + 48);
          v13 = *((_DWORD *)SpinLock + 48);
          if ( v13 <= *((_DWORD *)SpinLock + 9) )
            v13 = *((_DWORD *)SpinLock + 9);
          v14 = FeatureFixKcsanRacyAccess == 0;
          *((_DWORD *)SpinLock + 9) = v13;
          if ( v14 )
          {
            --*((_DWORD *)SpinLock + 6);
            goto LABEL_34;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)SpinLock + 6);
LABEL_34:
        if ( (*(_BYTE *)(v2 + 22) & 0x20) == 0 )
          goto LABEL_40;
        v15 = 96LL;
        v16 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 8LL);
        if ( *(_BYTE *)(v16 + 2) != 40 )
          v15 = 48LL;
        v17 = (_QWORD *)(*(_QWORD *)(v15 + v16) + 24LL);
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) == v17 )
        {
          v19 = (_QWORD *)v17[1];
          if ( (_QWORD *)*v19 == v17 )
          {
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
LABEL_40:
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            if ( v2 )
            {
              a2[3] = IoResource + 59;
              a2[2] = IoResource + 3;
              a2[1] = IoResource + 75;
              RaidZeroXrb(
                (__int64)&IoResource[3],
                v20,
                *((_DWORD *)&IoResource[49].Next + 2),
                *((void **)&IoResource[50].Next + 1));
            }
            else
            {
              RaFreeIoResource((__int64)(SpinLock + 8), IoResource);
            }
            return v2;
          }
        }
LABEL_42:
        __fastfail(3u);
      }
    }
  }
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
