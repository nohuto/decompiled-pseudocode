/*
 * XREFs of EtwpCovSampStackHashCheck @ 0x140A31DB8
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x140A31888 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140A35F88 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCovSampStackHashLookup @ 0x14077E720 (EtwpCovSampStackHashLookup.c)
 */

__int64 __fastcall EtwpCovSampStackHashCheck(unsigned __int64 *a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned int v7; // r12d
  unsigned __int64 v8; // rsi
  int v9; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v17; // rdx
  LegacyAutoBoost *v18; // r15
  struct _KLOCK_ENTRIES *v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  struct _KTHREAD *v22; // rax
  void *v23; // rdx
  LegacyAutoBoost *v24; // r15
  struct _KLOCK_ENTRIES *v25; // r9
  struct _KTHREAD *v26; // rax
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rdi
  volatile signed __int32 *v30; // [rsp+68h] [rbp+10h] BYREF

  result = 0LL;
  v30 = 0LL;
  if ( !a1[164] )
    return result;
  v6 = a1[164];
  v7 = 0;
  v8 = a1[165];
  v9 = 0;
  if ( v6 == v8 )
    v8 = a1[166];
  v10 = a1[167];
  v11 = a4;
  v12 = 8LL * a4;
  if ( v12 >= 8 )
  {
    v12 -= 8LL * (unsigned int)v11;
    do
    {
      v13 = a3[6] + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 37 * v10))))));
      v14 = a3[7];
      a3 += 8;
      v10 = v14 + 37 * v13;
      --v11;
    }
    while ( v11 );
  }
  v15 = (struct _KLOCK_ENTRIES *)(v12 - 1);
  if ( v15 )
  {
    v15 = (struct _KLOCK_ENTRIES *)((char *)v15 - 1);
    if ( v15 )
    {
      v15 = (struct _KLOCK_ENTRIES *)((char *)v15 - 1);
      if ( v15 )
      {
        v15 = (struct _KLOCK_ENTRIES *)((char *)v15 - 1);
        if ( v15 )
        {
          v15 = (struct _KLOCK_ENTRIES *)((char *)v15 - 1);
          if ( v15 )
          {
            v15 = (struct _KLOCK_ENTRIES *)((char *)v15 - 1);
            if ( v15 )
            {
              if ( v15 != (struct _KLOCK_ENTRIES *)1 )
                goto LABEL_11;
              LODWORD(v10) = *a3++ + 37 * v10;
            }
            LODWORD(v10) = *a3++ + 37 * v10;
          }
          LODWORD(v10) = *a3++ + 37 * v10;
        }
        LODWORD(v10) = *a3++ + 37 * v10;
      }
      LODWORD(v10) = *a3++ + 37 * v10;
    }
    LODWORD(v10) = *a3++ + 37 * v10;
  }
  LODWORD(v10) = *a3 + 37 * v10;
LABEL_11:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = (LegacyAutoBoost *)KeAbPreAcquire(v6, 0LL, 0LL, v15);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v6, 0, v18, (struct _KTHREAD *)v6);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  if ( (unsigned int)EtwpCovSampStackHashLookup(v6, v10, &v30) )
  {
LABEL_31:
    v7 = 1;
  }
  else
  {
    v20 = (unsigned int)(7 * *(_DWORD *)(v6 + 20)) >> 3;
    if ( *(_DWORD *)(v6 + 16) <= v20 )
    {
      v21 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 16));
      if ( v21 == v20 )
        v9 = 1;
      if ( v21 < (unsigned int)(7 * *(_DWORD *)(v6 + 20)) >> 3 )
      {
        while ( !v30 || _InterlockedCompareExchange(v30, v10, 0) )
        {
          if ( (unsigned int)EtwpCovSampStackHashLookup(v6, v10, &v30) )
            goto LABEL_31;
        }
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        v24 = (LegacyAutoBoost *)KeAbPreAcquire(v8, 0LL, 0LL, v19);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v24, (struct _KTHREAD *)v8);
        if ( v24 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v24, v23);
          else
            *((_BYTE *)v24 + 10) = 1;
        }
        LOBYTE(v7) = (unsigned int)EtwpCovSampStackHashLookup(v8, v10, &v30) != 0;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8);
        KeAbPostRelease(v8);
        KeLeaveCriticalRegion();
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease(v6);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (AutoBoost *)KeAbPreAcquire(v8, 0LL, 0LL, v25);
    v29 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v27, v8);
    if ( v29 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v29, v28);
      else
        *((_BYTE *)v29 + 10) = 1;
    }
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    memset_0((void *)(v8 + 24), 0, 4LL * *(unsigned int *)(v8 + 20));
    *(_QWORD *)(v8 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease(v8);
    KeLeaveCriticalRegion();
    *(_DWORD *)(v8 + 16) = 0;
    _InterlockedExchange64((volatile __int64 *)a1 + 164, v8);
  }
  return v7;
}
