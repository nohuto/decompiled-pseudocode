/*
 * XREFs of EtwpStopLoggerInstance @ 0x140A15968
 * Callers:
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeInsertQueueDpc @ 0x1402BDB30 (KeInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExCancelTimer @ 0x1403AA0D0 (ExCancelTimer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     EtwpStackRundown @ 0x14047173C (EtwpStackRundown.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpDisableTraceProviders @ 0x1409378E0 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x140A1545C (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140A6D418 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x140B24C50 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v8; // rax
  unsigned int i; // esi
  ULONG_PTR v10; // rcx
  __int64 v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r14
  __int64 v16; // r12
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rtt
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  int *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  int *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  int *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  int *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  __int64 *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  char *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]

  v4 = *(_QWORD *)(a1 + 1360);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  v6 = *(unsigned int *)(a1 + 1024);
  if ( (int)v6 > 0 && (unsigned int)dword_140E08F48 > 5 && tlgKeywordOn((__int64)&dword_140E08F48, 0x200000000000LL) )
  {
    v20 = v6;
    v31 = &v29;
    v29 = 0x1000000LL;
    v33 = &v20;
    v21 = *(_DWORD *)(a1 + 1000);
    v32 = 8LL;
    v35 = &v21;
    v22 = *(_DWORD *)(a1 + 1004);
    v37 = &v22;
    v23 = *(_DWORD *)(a1 + 1012);
    v39 = &v23;
    v24 = *(_DWORD *)(a1 + 1028);
    v41 = &v24;
    v25 = *(_DWORD *)&stru_140E28440.PriorityFloorCounts[12];
    v43 = &v25;
    v26 = *(_DWORD *)&stru_140E28440.PriorityFloorCounts[16];
    v45 = &v26;
    v27 = *(_DWORD *)&stru_140E28440.PriorityFloorCounts[20];
    v47 = &v27;
    v28 = *(_QWORD *)&stru_140E28440.PriorityFloorCounts[24];
    v49 = &v28;
    v51 = (char *)&v28 + 4;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08F48,
      (unsigned __int8 *)byte_1400537A8,
      0LL,
      0LL,
      0xDu,
      &v30);
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 0x20) == 0 )
    EtwpDisableTraceProviders(v4, *(_DWORD *)a1, v6, a4);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000) != 0 )
  {
    for ( i = 0; i < 0x10; ++i )
    {
      v11 = v4 + 2LL * i;
      if ( *(unsigned __int16 *)(v11 + 4304) == *(_DWORD *)a1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v13 = (AutoBoost *)KeAbPreAcquire(v4 + 688, 0LL, 0LL, a4);
        v15 = v13;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 688), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 688), v13, v4 + 688);
        if ( v15 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v15, v14);
          else
            *((_BYTE *)v15 + 10) = 1;
        }
        *(_WORD *)(v4 + 4336) &= ~(1 << i);
        v16 = 32LL * i;
        *(_OWORD *)(v16 + v4 + 152) = 0LL;
        *(_OWORD *)(v16 + v4 + 168) = 0LL;
        *(_WORD *)(v11 + 4304) = 0;
        *(_QWORD *)(v4 + 696) = 0LL;
        _m_prefetchw((const void *)(v4 + 688));
        v17 = *(_QWORD *)(v4 + 688);
        v18 = v17 - 16;
        if ( (v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v18 = 0LL;
        if ( (v17 & 2) != 0
          || (v19 = *(_QWORD *)(v4 + 688),
              v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 688), v18, v17)) )
        {
          ExfReleasePushLock((_QWORD *)(v4 + 688));
        }
        KeAbPostRelease(v4 + 688);
        KeLeaveCriticalRegion();
        break;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 816) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 1056), v4, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 0) )
    return 2147483685LL;
  v8 = *(_QWORD *)(a1 + 1344);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      ExCancelTimer(v10, 0LL);
  }
  *(_QWORD *)(*(_QWORD *)(v4 + 712) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2, 0);
  return 0LL;
}
