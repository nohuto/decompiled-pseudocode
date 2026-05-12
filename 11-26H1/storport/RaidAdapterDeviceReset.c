/*
 * XREFs of RaidAdapterDeviceReset @ 0x140060C14
 * Callers:
 *     RaidAdapterStorageDeviceResetIoctl @ 0x14006A03C (RaidAdapterStorageDeviceResetIoctl.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     GatewayRegisterForEmptyNotification @ 0x14002ECBC (GatewayRegisterForEmptyNotification.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     RaidAdapterSetPauseTimer @ 0x140068E50 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidRequestDIrpForAssociatedUnits @ 0x140080438 (RaidRequestDIrpForAssociatedUnits.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  int v8; // esi
  int v9; // ebp
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // r14
  struct _SLIST_ENTRY *v13; // rax
  int v14; // ebp
  unsigned int v15; // ebx
  PSLIST_ENTRY v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // r9
  KIRQL v19; // bl
  _DWORD *v20; // rax
  int v21; // edx
  int v22; // eax
  unsigned int *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // eax
  _BYTE Event[32]; // [rsp+30h] [rbp-78h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+50h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 5440) == 0LL;
  SListHead = 0LL;
  memset(Event, 0, sizeof(Event));
  if ( v3 )
    return 3221225488LL;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 22) )
    return 3221225659LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 1, 0) == 1 )
    return 3221226614LL;
  if ( (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    RaidPauseAdapterQueue(a1);
    if ( *(int *)(a1 + 4728) > 1 )
    {
      v9 = 0;
      v10 = KeQueryHighestNodeNumber() + 1;
      InitializeSListHead(&SListHead);
      do
      {
        if ( v10 )
        {
          v11 = 0LL;
          v12 = v10;
          do
          {
            v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v11 + *(_QWORD *)(a1 + 4736)));
            if ( v13 )
            {
              ExpInterlockedPushEntrySList(&SListHead, v13);
              ++v9;
            }
            else
            {
              _mm_pause();
            }
            v11 += 64LL;
            --v12;
          }
          while ( v12 );
        }
      }
      while ( v9 < *(_DWORD *)(a1 + 4728) );
    }
    KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
    if ( !GatewayRegisterForEmptyNotification(
            *(_QWORD *)(a1 + 1024),
            *(_QWORD *)(a1 + 8),
            a3,
            (__int64)Event,
            (void (__fastcall *)(__int64, __int64, __int64))&RaidAdapterStopOnGatewayEmpty) )
      KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
    v8 = StorReset(*(_QWORD *)(a1 + 616) + 16LL, *(_DWORD *)(a2 + 8), 2, *(_QWORD *)(a2 + 16));
    if ( *(int *)(a1 + 4728) > 1 )
    {
      v14 = 0;
      v15 = KeQueryHighestNodeNumber() + 1;
      do
      {
        v16 = ExpInterlockedPopEntrySList(&SListHead);
        if ( v16 )
        {
          ExpInterlockedPushEntrySList(
            (PSLIST_HEADER)(*(_QWORD *)(a1 + 4736) + ((unsigned __int64)(HIDWORD(v16[1].Next) % v15) << 6)),
            v16);
          ++v14;
        }
      }
      while ( v14 < *(_DWORD *)(a1 + 4728) );
    }
    if ( v8 >= 0 && (v17 = *(_DWORD *)(a1 + 600)) != 0 )
    {
      v18 = v17 / 0xF4240 + 1;
      if ( v17 == 1000000 * (v17 / 0xF4240) )
        v18 = v17 / 0xF4240;
      RaidAdapterSetPauseTimer(a1, a1 + 4200, a1 + 4264, v18);
    }
    else
    {
      v19 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v19);
    }
    v20 = *(_DWORD **)(a1 + 6208);
    if ( !v20 || (*v20 & 0xA0) == 0 )
      goto LABEL_46;
    v21 = RaidRequestDIrpForAssociatedUnits(a1, 0LL);
    if ( v21 == 259 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 6208) + 56LL), Executive, 0, 0, 0LL);
      v21 = 0;
    }
    else if ( v8 >= 0 )
    {
      v22 = v8;
      if ( v21 < 0 )
        v22 = -1073741436;
      v8 = v22;
    }
    v23 = *(unsigned int **)(a1 + 6208);
    v24 = *v23;
    if ( v21 < 0 )
    {
      v25 = v24 | 0x40;
    }
    else if ( (v24 & 0x20) != 0 )
    {
      v25 = v24 & 0xFFFFFFDF;
    }
    else
    {
      if ( (v24 & 0x80u) == 0 )
      {
LABEL_46:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
        goto LABEL_47;
      }
      v25 = v24 & 0xFFFFFF7F;
    }
    *v23 = v25;
    goto LABEL_46;
  }
  v8 = -1073741436;
LABEL_47:
  *(_DWORD *)(a1 + 328) = 0;
  return (unsigned int)v8;
}
