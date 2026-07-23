/*
 * XREFs of EtwpTrackProviderBinaryKm @ 0x14082EBE8
 * Callers:
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwpTrackProviderBinary @ 0x14082EB48 (EtwpTrackProviderBinary.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpTrackProviderBinaryKm(__int64 a1, __int64 a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  struct _KTHREAD *v11; // rax
  unsigned __int64 *v12; // rsi
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rdi
  unsigned __int16 v16; // ax
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 *v28; // rdi
  signed __int64 v29; // rax
  signed __int64 v30; // rdx
  __int64 v31; // rtt
  __int64 v32; // rcx
  __int64 *v33; // rbx
  signed __int64 v34; // rax
  signed __int64 v35; // rdx
  __int64 v36; // rtt

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) + 664LL);
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) + 672LL) = KeGetCurrentThread();
  }
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  v13 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = KeGetCurrentThread();
  v16 = a3 != 0 ? 1024 : 16;
  if ( (v16 & *(_WORD *)(a1 + 98)) == 0 )
  {
    _InterlockedOr16((volatile signed __int16 *)(a1 + 98), v16);
    v17 = 0LL;
    v18 = 16LL;
    do
    {
      v19 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v17 + v19 + 128) )
      {
        v20 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v19 + 648), *(unsigned __int16 *)(v17 + v19 + 134), 0LL);
        v22 = v20;
        if ( v20 )
        {
          LOBYTE(v21) = 1;
          EtwpProviderArrivalCallback(v20, v21, a1);
          EtwpReleaseLoggerContext(v22, 0LL);
        }
      }
      v23 = *(_QWORD *)(a1 + 32);
      v24 = *(_QWORD *)(v23 + 656);
      if ( v24 )
      {
        if ( *(_DWORD *)(v24 + v17 + 128) )
        {
          v25 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(v23 + 648), *(unsigned __int16 *)(v17 + v23 + 134), 0LL);
          v27 = v25;
          if ( v25 )
          {
            LOBYTE(v26) = 1;
            EtwpProviderArrivalCallback(v25, v26, a1);
            EtwpReleaseLoggerContext(v27, 0LL);
          }
        }
      }
      v17 += 32LL;
      --v18;
    }
    while ( v18 );
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = 0LL;
  v28 = (__int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  _m_prefetchw(v28);
  v29 = *v28;
  v30 = *v28 - 16;
  if ( (*v28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v30 = 0LL;
  if ( (v29 & 2) != 0 || (v31 = *v28, v31 != _InterlockedCompareExchange64(v28, v30, v29)) )
    ExfReleasePushLock(v28);
  KeAbPostRelease((unsigned __int64)v28);
  KeLeaveCriticalRegion();
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL);
  if ( v32 )
  {
    *(_QWORD *)(v32 + 672) = 0LL;
    v33 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 656LL) + 664LL);
    _m_prefetchw(v33);
    v34 = *v33;
    v35 = *v33 - 16;
    if ( (*v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v35 = 0LL;
    if ( (v34 & 2) != 0 || (v36 = *v33, v36 != _InterlockedCompareExchange64(v33, v35, v34)) )
      ExfReleasePushLock(v33);
    KeAbPostRelease((unsigned __int64)v33);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
