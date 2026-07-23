/*
 * XREFs of EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A36480
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x140A36414 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140470B28 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferIsEmpty @ 0x14049A4A8 (EtwpCovSampCaptureBufferIsEmpty.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCovSampStackHashLookup @ 0x14077E720 (EtwpCovSampStackHashLookup.c)
 */

int __fastcall EtwpCovSampCaptureBufferMapAddressesAndQueue(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD *v3; // rdi
  unsigned __int64 UserWaitTime; // r12
  struct _KTHREAD *v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rtt
  struct _KLOCK_ENTRIES *v10; // rax
  _KAFFINITY_EX *Affinity; // rbp
  volatile signed __int64 *v12; // r14
  unsigned int v13; // r15d
  struct _KTHREAD *v14; // rax
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned int v19; // r8d
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // r12
  unsigned int i; // edi
  unsigned __int64 v23; // r10
  unsigned int v24; // esi
  int v25; // r8d
  unsigned int v26; // r9d
  int v27; // edx
  bool v28; // cf
  __int64 v29; // rax
  volatile signed __int32 *v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // eax
  _QWORD *v33; // r8
  unsigned __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rbp
  int v38; // r15d
  int v39; // r12d
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r10
  unsigned __int8 *v43; // r8
  struct _KLOCK_ENTRIES *v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _KTHREAD *v47; // rax
  void *v48; // rdx
  LegacyAutoBoost *v49; // r14
  struct _KLOCK_ENTRIES *v50; // r9
  unsigned int v51; // eax
  unsigned int v52; // ecx
  struct _KTHREAD *v53; // rax
  void *v54; // rdx
  LegacyAutoBoost *v55; // r14
  struct _KTHREAD *v56; // rax
  AutoBoost *v57; // rax
  void *v58; // rdx
  AutoBoost *v59; // rdi
  int v61; // [rsp+20h] [rbp-58h]
  unsigned __int64 v62; // [rsp+28h] [rbp-50h]
  unsigned __int64 v63; // [rsp+30h] [rbp-48h]
  volatile signed __int32 *v65; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v66; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v3 = (_QWORD *)a1;
  UserWaitTime = 0LL;
  LODWORD(v6) = EtwpCovSampCaptureBufferIsEmpty(a2);
  if ( (_DWORD)v6 )
    goto LABEL_99;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&ExpSysDbgLock.1008);
  v9 = (unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
               ((unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               (unsigned __int64)ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008) )
  {
    LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_99;
  }
  UserWaitTime = ExpSysDbgLock.UserWaitTime;
  v10 = (struct _KLOCK_ENTRIES *)*(unsigned __int16 *)(a2 + 62);
  v62 = ExpSysDbgLock.UserWaitTime;
  v65 = 0LL;
  if ( v3[164] )
  {
    v37 = v3[164];
    v38 = 0;
    v39 = 0;
    v40 = v3[165];
    if ( v37 == v40 )
      v40 = v3[166];
    v41 = v3[167];
    v42 = 8LL * (_QWORD)v10;
    v43 = (unsigned __int8 *)(a2 + 64);
    v44 = v10;
    if ( (unsigned __int64)(8LL * (_QWORD)v10) >= 8 )
    {
      v42 = 0LL;
      do
      {
        v45 = v43[6]
            + 37 * (v43[5] + 37 * (v43[4] + 37 * (v43[3] + 37 * (v43[2] + 37 * (v43[1] + 37 * (*v43 + 37 * v41))))));
        v46 = v43[7];
        v43 += 8;
        v41 = v46 + 37 * v45;
        v44 = (struct _KLOCK_ENTRIES *)((char *)v44 - 1);
      }
      while ( v44 );
    }
    if ( v42 != 2 )
    {
      switch ( v42 )
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
          LODWORD(v41) = *v43++ + 37 * v41;
LABEL_91:
          LODWORD(v41) = *v43++ + 37 * v41;
LABEL_92:
          LODWORD(v41) = *v43++ + 37 * v41;
LABEL_93:
          LODWORD(v41) = *v43++ + 37 * v41;
LABEL_94:
          LODWORD(v41) = *v43++ + 37 * v41;
          break;
        default:
          goto LABEL_54;
      }
    }
    LODWORD(v41) = *v43++ + 37 * v41;
LABEL_53:
    LODWORD(v41) = *v43 + 37 * v41;
LABEL_54:
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    v49 = (LegacyAutoBoost *)KeAbPreAcquire(v37, 0LL, 0LL, v44);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v37, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v37, 0, v49, (struct _KTHREAD *)v37);
    if ( v49 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v49, v48);
      else
        *((_BYTE *)v49 + 10) = 1;
    }
    if ( (unsigned int)EtwpCovSampStackHashLookup(v37, v41, &v65) )
    {
      v38 = 1;
    }
    else
    {
      v51 = (unsigned int)(7 * *(_DWORD *)(v37 + 20)) >> 3;
      if ( *(_DWORD *)(v37 + 16) <= v51 )
      {
        v52 = _InterlockedIncrement((volatile signed __int32 *)(v37 + 16));
        if ( v52 == v51 )
          v39 = 1;
        if ( v52 < (unsigned int)(7 * *(_DWORD *)(v37 + 20)) >> 3 )
        {
          while ( !v65 || _InterlockedCompareExchange(v65, v41, 0) )
          {
            if ( (unsigned int)EtwpCovSampStackHashLookup(v37, v41, &v65) )
            {
              v38 = 1;
              goto LABEL_76;
            }
          }
          v53 = KeGetCurrentThread();
          --v53->KernelApcDisable;
          v55 = (LegacyAutoBoost *)KeAbPreAcquire(v40, 0LL, 0LL, v50);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v40, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)v40, 0, v55, (struct _KTHREAD *)v40);
          if ( v55 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v55, v54);
            else
              *((_BYTE *)v55 + 10) = 1;
          }
          LOBYTE(v38) = (unsigned int)EtwpCovSampStackHashLookup(v40, v41, &v65) != 0;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v40, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v40);
          KeAbPostRelease(v40);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
LABEL_76:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v37, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v37);
    KeAbPostRelease(v37);
    LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v39 )
    {
      v56 = KeGetCurrentThread();
      --v56->KernelApcDisable;
      v57 = (AutoBoost *)KeAbPreAcquire(v40, 0LL, 0LL, v7);
      v59 = v57;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v40, v57, v40);
      if ( v59 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v59, v58);
        else
          *((_BYTE *)v59 + 10) = 1;
      }
      *(_QWORD *)(v40 + 8) = KeGetCurrentThread();
      memset_0((void *)(v40 + 24), 0, 4LL * *(unsigned int *)(v40 + 20));
      *(_QWORD *)(v40 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v40);
      KeAbPostRelease(v40);
      LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v3 = (_QWORD *)a1;
      *(_DWORD *)(v40 + 16) = 0;
      _InterlockedExchange64((volatile __int64 *)(a1 + 1312), v40);
    }
    else
    {
      v3 = (_QWORD *)a1;
    }
    UserWaitTime = v62;
    if ( v38 )
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
  v12 = (volatile signed __int64 *)&Affinity->8;
  v13 = *(unsigned __int16 *)(a2 + 62);
  v66 = *(unsigned __int16 *)(a2 + 60);
  v63 = UserWaitTime + 16;
  v61 = MEMORY[0xFFFFF78000000320];
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&Affinity->8, 0LL, 0LL, v7);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Affinity->8, 0LL) )
    ExfAcquirePushLockExclusiveEx(Affinity->Bitmap, v15, (__int64)&Affinity->8);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  v18 = UserWaitTime + 16;
  Affinity->StaticBitmap[1] = (unsigned __int64)KeGetCurrentThread();
  if ( UserWaitTime + 16 == *(_QWORD *)&Affinity->Count )
  {
    v19 = v66;
    if ( v66 )
    {
      LODWORD(v65) = 0;
      v2 = 0;
      v20 = 0LL;
      v21 = 0LL;
      for ( i = 0; i < v13; ++i )
      {
        v23 = *(_QWORD *)(a2 + 8LL * i + 64);
        if ( v20 )
        {
          if ( v23 < v21 || v23 >= *v20 )
          {
            v20 = 0LL;
          }
          else
          {
            v34 = v20[1];
            if ( v34 )
              goto LABEL_36;
          }
        }
        v24 = Affinity->StaticBitmap[3];
        v25 = -1;
        v26 = v24;
        if ( v24 )
        {
          do
          {
            v27 = (int)(v26 - v25) / 2 + v25;
            if ( v23 >= *(_QWORD *)(Affinity->StaticBitmap[2] + 16LL * v27) )
            {
              v25 += (int)(v26 - v25) / 2;
              v27 = v26;
            }
            v26 = v27;
          }
          while ( v25 + 1 != v27 );
        }
        v28 = v26 < v24;
        v2 = (unsigned int)v65;
        if ( !v28
          || (v33 = (_QWORD *)(Affinity->StaticBitmap[2] + 16LL * v26),
              v34 = v33[1],
              v21 = *v33 - *(_QWORD *)(v34 + 40),
              v23 < v21) )
        {
          v19 = v66;
          continue;
        }
        v20 = (unsigned __int64 *)(Affinity->StaticBitmap[2] + 16LL * v26);
        v19 = v66;
LABEL_36:
        *(_DWORD *)(v34 + 136) = v61;
        if ( !*(_DWORD *)(v34 + 132) )
          _InterlockedExchange((volatile __int32 *)(v34 + 132), 1);
        v35 = *(_DWORD *)(v34 + 124);
        v36 = v2++;
        LODWORD(v65) = v2;
        *(_DWORD *)(a2 + 8 * v36 + 64) = v35;
        *(_DWORD *)(a2 + 8 * v36 + 68) = v23 - v21;
        if ( v2 >= v19 )
          break;
      }
      UserWaitTime = v62;
      v12 = (volatile signed __int64 *)&Affinity->8;
      v18 = v63;
    }
  }
  if ( (struct _KTHREAD *)Affinity->StaticBitmap[1] == KeGetCurrentThread() )
  {
    Affinity->StaticBitmap[1] = 0LL;
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((unsigned __int64)v12);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v29 = 1140LL;
  if ( Affinity != (_KAFFINITY_EX *)(v18 + 1248) )
    v29 = 1132LL;
  v30 = (volatile signed __int32 *)(v29 + v18);
  v31 = 1136LL;
  if ( Affinity != (_KAFFINITY_EX *)(v18 + 1248) )
    v31 = 1128LL;
  _InterlockedAdd((volatile signed __int32 *)(v31 + v18), v13);
  _InterlockedAdd(v30, v2);
  v32 = *(_DWORD *)(a2 + 56) & 0xFFFFFFF4;
  *(_WORD *)(a2 + 62) = v2;
  *(_DWORD *)(a2 + 56) = v32;
  if ( (_WORD)v2 )
    *(_DWORD *)(a2 + 56) = v32 | 4;
  LODWORD(v6) = EtwpCovSampCaptureBufferQueue(a1, a2);
LABEL_101:
  if ( UserWaitTime )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&ExpSysDbgLock.1008);
    LODWORD(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (int)v6;
}
