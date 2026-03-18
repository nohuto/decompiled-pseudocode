/*
 * XREFs of EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A23970
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x140A23904 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1404773A8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferIsEmpty @ 0x1404A0958 (EtwpCovSampCaptureBufferIsEmpty.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpCovSampStackHashLookup @ 0x14077BAE0 (EtwpCovSampStackHashLookup.c)
 */

int __fastcall EtwpCovSampCaptureBufferMapAddressesAndQueue(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD *v3; // rdi
  _KSCB *QueuedScb; // r12
  struct _KTHREAD *v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // rax
  _KAFFINITY_EX *Affinity; // rbp
  volatile signed __int64 *v14; // r14
  unsigned int v15; // r15d
  struct _KTHREAD *v16; // rax
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rdi
  unsigned __int64 *v20; // rdi
  unsigned int v21; // r8d
  unsigned __int64 *v22; // r14
  unsigned __int64 v23; // r12
  unsigned int i; // edi
  unsigned __int64 v25; // r10
  unsigned int v26; // esi
  int v27; // r8d
  unsigned int v28; // r9d
  int v29; // edx
  bool v30; // cf
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  volatile signed __int32 *v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // eax
  _QWORD *v37; // r8
  unsigned __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int64 v41; // rbp
  int v42; // r15d
  int v43; // r12d
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r10
  unsigned __int8 *v47; // r8
  struct _KLOCK_ENTRIES *v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  struct _KTHREAD *v51; // rax
  void *v52; // rdx
  LegacyAutoBoost *v53; // r14
  struct _KLOCK_ENTRIES *v54; // r9
  unsigned int v55; // eax
  unsigned int v56; // ecx
  struct _KTHREAD *v57; // rax
  void *v58; // rdx
  LegacyAutoBoost *v59; // r14
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  struct _KTHREAD *v64; // rax
  AutoBoost *v65; // rax
  void *v66; // rdx
  AutoBoost *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  int v73; // [rsp+20h] [rbp-58h]
  _KSCB *v74; // [rsp+28h] [rbp-50h]
  unsigned __int64 *p_MaxQuotaCycleTarget; // [rsp+30h] [rbp-48h]
  volatile signed __int32 *v77; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v78; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v3 = (_QWORD *)a1;
  QueuedScb = 0LL;
  LODWORD(v6) = EtwpCovSampCaptureBufferIsEmpty(a2);
  if ( (_DWORD)v6 )
    goto LABEL_99;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw((const void *)&ExpSysDbgLock.ThreadTimerDelay);
  v9 = *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.ThreadTimerDelay,
               (*(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               *(_QWORD *)&ExpSysDbgLock.ThreadTimerDelay & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay) )
  {
    LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11);
    goto LABEL_99;
  }
  QueuedScb = ExpSysDbgLock.QueuedScb;
  v12 = (struct _KLOCK_ENTRIES *)*(unsigned __int16 *)(a2 + 62);
  v74 = ExpSysDbgLock.QueuedScb;
  v77 = 0LL;
  if ( v3[164] )
  {
    v41 = v3[164];
    v42 = 0;
    v43 = 0;
    v44 = v3[165];
    if ( v41 == v44 )
      v44 = v3[166];
    v45 = v3[167];
    v46 = 8LL * (_QWORD)v12;
    v47 = (unsigned __int8 *)(a2 + 64);
    v48 = v12;
    if ( (unsigned __int64)(8LL * (_QWORD)v12) >= 8 )
    {
      v46 = 0LL;
      do
      {
        v49 = v47[6]
            + 37 * (v47[5] + 37 * (v47[4] + 37 * (v47[3] + 37 * (v47[2] + 37 * (v47[1] + 37 * (*v47 + 37 * v45))))));
        v50 = v47[7];
        v47 += 8;
        v45 = v50 + 37 * v49;
        v48 = (struct _KLOCK_ENTRIES *)((char *)v48 - 1);
      }
      while ( v48 );
    }
    if ( v46 != 2 )
    {
      switch ( v46 )
      {
        case 1LL:
          goto LABEL_53;
        case 3LL:
          goto LABEL_94;
        case 4LL:
          goto LABEL_93;
        case 5LL:
          goto LABEL_92;
        case 6LL:
          goto LABEL_91;
        case 7LL:
          LODWORD(v45) = *v47++ + 37 * v45;
LABEL_91:
          LODWORD(v45) = *v47++ + 37 * v45;
LABEL_92:
          LODWORD(v45) = *v47++ + 37 * v45;
LABEL_93:
          LODWORD(v45) = *v47++ + 37 * v45;
LABEL_94:
          LODWORD(v45) = *v47++ + 37 * v45;
          break;
        default:
          goto LABEL_54;
      }
    }
    LODWORD(v45) = *v47++ + 37 * v45;
LABEL_53:
    LODWORD(v45) = *v47 + 37 * v45;
LABEL_54:
    v51 = KeGetCurrentThread();
    --v51->KernelApcDisable;
    v53 = (LegacyAutoBoost *)KeAbPreAcquire(v41, 0LL, 0LL, v48);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v41, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v41, 0, v53, (struct _KTHREAD *)v41);
    if ( v53 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v53, v52);
      else
        *((_BYTE *)v53 + 10) = 1;
    }
    if ( (unsigned int)EtwpCovSampStackHashLookup(v41, v45, &v77) )
    {
      v42 = 1;
    }
    else
    {
      v55 = (unsigned int)(7 * *(_DWORD *)(v41 + 20)) >> 3;
      if ( *(_DWORD *)(v41 + 16) <= v55 )
      {
        v56 = _InterlockedIncrement((volatile signed __int32 *)(v41 + 16));
        if ( v56 == v55 )
          v43 = 1;
        if ( v56 < (unsigned int)(7 * *(_DWORD *)(v41 + 20)) >> 3 )
        {
          while ( !v77 || _InterlockedCompareExchange(v77, v45, 0) )
          {
            if ( (unsigned int)EtwpCovSampStackHashLookup(v41, v45, &v77) )
            {
              v42 = 1;
              goto LABEL_76;
            }
          }
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v59 = (LegacyAutoBoost *)KeAbPreAcquire(v44, 0LL, 0LL, v54);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v44, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)v44, 0, v59, (struct _KTHREAD *)v44);
          if ( v59 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v59, v58);
            else
              *((_BYTE *)v59 + 10) = 1;
          }
          LOBYTE(v42) = (unsigned int)EtwpCovSampStackHashLookup(v44, v45, &v77) != 0;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v44);
          KeAbPostRelease(v44);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v60, v61);
        }
      }
    }
LABEL_76:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v41, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v41);
    KeAbPostRelease(v41);
    LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v62, v63);
    if ( v43 )
    {
      v64 = KeGetCurrentThread();
      --v64->KernelApcDisable;
      v65 = (AutoBoost *)KeAbPreAcquire(v44, 0LL, 0LL, v7);
      v67 = v65;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v44, v65, v44);
      if ( v67 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v67, v66);
        else
          *((_BYTE *)v67 + 10) = 1;
      }
      *(_QWORD *)(v44 + 8) = KeGetCurrentThread();
      memset_0((void *)(v44 + 24), 0, 4LL * *(unsigned int *)(v44 + 20));
      *(_QWORD *)(v44 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v44);
      KeAbPostRelease(v44);
      LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v68, v69);
      v3 = (_QWORD *)a1;
      *(_DWORD *)(v44 + 16) = 0;
      _InterlockedExchange64((volatile __int64 *)(a1 + 1312), v44);
    }
    else
    {
      v3 = (_QWORD *)a1;
    }
    QueuedScb = v74;
    if ( v42 )
      goto LABEL_99;
    v2 = 0;
  }
  v6 = KeGetCurrentThread();
  Affinity = v6->ApcState.Process[4].Affinity;
  if ( !Affinity )
  {
LABEL_99:
    if ( a2 )
      LODWORD(v6) = EtwpCovSampCaptureBufferRelease((__int64)v3, a2);
    goto LABEL_101;
  }
  v14 = (volatile signed __int64 *)&Affinity->8;
  v15 = *(unsigned __int16 *)(a2 + 62);
  v78 = *(unsigned __int16 *)(a2 + 60);
  p_MaxQuotaCycleTarget = &QueuedScb->MaxQuotaCycleTarget;
  v73 = MEMORY[0xFFFFF78000000320];
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v17 = (AutoBoost *)KeAbPreAcquire((__int64)&Affinity->8, 0LL, 0LL, v7);
  v19 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Affinity->8, 0LL) )
    ExfAcquirePushLockExclusiveEx(Affinity->Bitmap, v17, (__int64)&Affinity->8);
  if ( v19 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v19, v18);
    else
      *((_BYTE *)v19 + 10) = 1;
  }
  v20 = &QueuedScb->MaxQuotaCycleTarget;
  Affinity->StaticBitmap[1] = (unsigned __int64)KeGetCurrentThread();
  if ( &QueuedScb->MaxQuotaCycleTarget == (unsigned __int64 *)*(_KSCB **)&Affinity->Count )
  {
    v21 = v78;
    if ( v78 )
    {
      LODWORD(v77) = 0;
      v2 = 0;
      v22 = 0LL;
      v23 = 0LL;
      for ( i = 0; i < v15; ++i )
      {
        v25 = *(_QWORD *)(a2 + 8LL * i + 64);
        if ( v22 )
        {
          if ( v25 < v23 || v25 >= *v22 )
          {
            v22 = 0LL;
          }
          else
          {
            v38 = v22[1];
            if ( v38 )
              goto LABEL_36;
          }
        }
        v26 = Affinity->StaticBitmap[3];
        v27 = -1;
        v28 = v26;
        if ( v26 )
        {
          do
          {
            v29 = (int)(v28 - v27) / 2 + v27;
            if ( v25 >= *(_QWORD *)(Affinity->StaticBitmap[2] + 16LL * v29) )
            {
              v27 += (int)(v28 - v27) / 2;
              v29 = v28;
            }
            v28 = v29;
          }
          while ( v27 + 1 != v29 );
        }
        v30 = v28 < v26;
        v2 = (unsigned int)v77;
        if ( !v30
          || (v37 = (_QWORD *)(Affinity->StaticBitmap[2] + 16LL * v28),
              v38 = v37[1],
              v23 = *v37 - *(_QWORD *)(v38 + 40),
              v25 < v23) )
        {
          v21 = v78;
          continue;
        }
        v22 = (unsigned __int64 *)(Affinity->StaticBitmap[2] + 16LL * v28);
        v21 = v78;
LABEL_36:
        *(_DWORD *)(v38 + 136) = v73;
        if ( !*(_DWORD *)(v38 + 132) )
          _InterlockedExchange((volatile __int32 *)(v38 + 132), 1);
        v39 = *(_DWORD *)(v38 + 124);
        v40 = v2++;
        LODWORD(v77) = v2;
        *(_DWORD *)(a2 + 8 * v40 + 64) = v39;
        *(_DWORD *)(a2 + 8 * v40 + 68) = v25 - v23;
        if ( v2 >= v21 )
          break;
      }
      QueuedScb = v74;
      v14 = (volatile signed __int64 *)&Affinity->8;
      v20 = p_MaxQuotaCycleTarget;
    }
  }
  if ( (struct _KTHREAD *)Affinity->StaticBitmap[1] == KeGetCurrentThread() )
  {
    Affinity->StaticBitmap[1] = 0LL;
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    KeAbPostRelease((unsigned __int64)v14);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32);
  }
  v33 = 1140LL;
  if ( Affinity != (_KAFFINITY_EX *)(v20 + 156) )
    v33 = 1132LL;
  v34 = (volatile signed __int32 *)((char *)v20 + v33);
  v35 = 142LL;
  if ( Affinity != (_KAFFINITY_EX *)(v20 + 156) )
    v35 = 141LL;
  _InterlockedAdd((volatile signed __int32 *)&v20[v35], v15);
  _InterlockedAdd(v34, v2);
  v36 = *(_DWORD *)(a2 + 56) & 0xFFFFFFF4;
  *(_WORD *)(a2 + 62) = v2;
  *(_DWORD *)(a2 + 56) = v36;
  if ( (_WORD)v2 )
    *(_DWORD *)(a2 + 56) = v36 | 4;
  LODWORD(v6) = EtwpCovSampCaptureBufferQueue(a1, a2);
LABEL_101:
  if ( QueuedScb )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&ExpSysDbgLock.ThreadTimerDelay);
    LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v70, v71);
  }
  return (int)v6;
}
