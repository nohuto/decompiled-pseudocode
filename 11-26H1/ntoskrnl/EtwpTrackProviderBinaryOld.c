/*
 * XREFs of EtwpTrackProviderBinaryOld @ 0x14082EEAC
 * Callers:
 *     EtwpTrackProviderBinary @ 0x14082EB48 (EtwpTrackProviderBinary.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinaryOld(__int64 a1, void **a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  struct _KLOCK_ENTRIES *v5; // r9
  NTSTATUS v6; // ebp
  PVOID v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rsi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rdi
  struct _KTHREAD *v13; // rax
  unsigned __int64 *v14; // rsi
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 *v29; // rdi
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  __int64 v33; // rcx
  __int64 *v34; // rdi
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  __int64 v37; // rtt
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  Object = 0LL;
  result = ObReferenceObjectByHandle(v3, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *(_QWORD *)(*((_QWORD *)Object + 4) + 656LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)v7 + 4) + 656LL) + 664LL);
      v10 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v5);
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
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 4) + 656LL) + 672LL) = KeGetCurrentThread();
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = (unsigned __int64 *)(*((_QWORD *)v7 + 4) + 664LL);
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)v14, 0LL, 0LL, v5);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    *(_QWORD *)(*((_QWORD *)v7 + 4) + 672LL) = KeGetCurrentThread();
    if ( (*((_BYTE *)v7 + 98) & 0x10) != 0 )
    {
      v6 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)v7 + 49, 0x10u);
      v18 = 0LL;
      v19 = 16LL;
      do
      {
        v20 = *((_QWORD *)v7 + 4);
        if ( *(_DWORD *)(v18 + v20 + 128) )
        {
          v21 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v18 + v20 + 134), 0LL);
          v23 = v21;
          if ( v21 )
          {
            LOBYTE(v22) = 1;
            EtwpProviderArrivalCallback(v21, v22, v7);
            EtwpReleaseLoggerContext(v23, 0LL);
          }
        }
        v24 = *((_QWORD *)v7 + 4);
        v25 = *(_QWORD *)(v24 + 656);
        if ( v25 )
        {
          if ( *(_DWORD *)(v25 + v18 + 128) )
          {
            v26 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v18 + v24 + 134), 0LL);
            v28 = v26;
            if ( v26 )
            {
              LOBYTE(v27) = 1;
              EtwpProviderArrivalCallback(v26, v27, v7);
              EtwpReleaseLoggerContext(v28, 0LL);
            }
          }
        }
        v18 += 32LL;
        --v19;
      }
      while ( v19 );
    }
    *(_QWORD *)(*((_QWORD *)v7 + 4) + 672LL) = 0LL;
    v29 = (__int64 *)(*((_QWORD *)v7 + 4) + 664LL);
    _m_prefetchw(v29);
    v30 = *v29;
    v31 = *v29 - 16;
    if ( (*v29 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (v30 & 2) != 0 || (v32 = *v29, v32 != _InterlockedCompareExchange64(v29, v31, v30)) )
      ExfReleasePushLock(v29);
    KeAbPostRelease((unsigned __int64)v29);
    KeLeaveCriticalRegion();
    v33 = *(_QWORD *)(*((_QWORD *)v7 + 4) + 656LL);
    if ( v33 )
    {
      *(_QWORD *)(v33 + 672) = 0LL;
      v34 = (__int64 *)(*(_QWORD *)(*((_QWORD *)v7 + 4) + 656LL) + 664LL);
      _m_prefetchw(v34);
      v35 = *v34;
      v36 = *v34 - 16;
      if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v36 = 0LL;
      if ( (v35 & 2) != 0 || (v37 = *v34, v37 != _InterlockedCompareExchange64(v34, v36, v35)) )
        ExfReleasePushLock(v34);
      KeAbPostRelease((unsigned __int64)v34);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v7);
    return v6;
  }
  return result;
}
