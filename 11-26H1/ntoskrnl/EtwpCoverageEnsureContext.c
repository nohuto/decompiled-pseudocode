/*
 * XREFs of EtwpCoverageEnsureContext @ 0x140778B18
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14082FE18 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x14082FECC (EtwpCoverageFreeStringBuffers.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  NTSTATUS Section; // esi
  unsigned int v1; // edx
  char v2; // cl
  _QWORD *Pool2; // rax
  __int64 v4; // rdi
  _QWORD *v5; // r13
  void *v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rbp
  PVOID v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  int v12; // ebx
  void *v13; // rcx
  __int64 v14; // r14
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v20; // rax
  void *v21; // rdx
  signed __int8 v22; // cf
  AutoBoost *v23; // rsi
  PVOID v24; // rax
  ULONG_PTR v25; // rcx
  void *v26; // rcx
  _QWORD v28[2]; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF

  if ( LOBYTE(stru_140F03830.CycleTime) <= 1u || (v1 = EtwpCoverageEntryCount) == 0 )
    return (unsigned int)-1073741637;
  if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
    v1 = 0x80000;
  if ( v1 <= 0x40 )
    v1 = 64;
  if ( ((v1 - 1) & v1) != 0 )
  {
    v2 = -1;
    do
    {
      ++v2;
      v1 >>= 1;
    }
    while ( v1 );
    v1 = 1 << v2;
  }
  EtwpCoverageEntryCount = v1;
  if ( (unsigned int)EtwpCoverageFlushPeriod <= 0x3E8 )
    EtwpCoverageFlushPeriod = 1000;
  if ( (unsigned int)EtwpCoverageResetPeriod <= 0x36EE80 )
    EtwpCoverageResetPeriod = 3600000;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  v4 = (__int64)Pool2;
  v5 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset_0(Pool2, 0, 0x48uLL);
  *(_QWORD *)(v4 + 56) = v4 + 48;
  *(_QWORD *)(v4 + 48) = v4 + 48;
  v6 = (void *)ExAllocatePool2(0x40uLL);
  *(_QWORD *)v4 = v6;
  if ( !v6 )
  {
    Section = -1073741670;
LABEL_47:
    v25 = *(_QWORD *)(v4 + 16);
    if ( v25 )
    {
      MiRemoveFromSystemSpace(v25);
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    v26 = *(void **)(v4 + 8);
    if ( v26 )
    {
      ObfDereferenceObject(v26);
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    if ( *(_QWORD *)v4 )
      ExFreePoolWithTag(*(PVOID *)v4, 0x56777445u);
    EtwpCoverageFreeStringBuffers(v4, 0LL);
    ExFreePoolWithTag((PVOID)v4, 0x56777445u);
    return (unsigned int)Section;
  }
  memset_0(v6, 0, 0x1B8uLL);
  v7 = *(_QWORD **)v4;
  v7[3] = 0LL;
  v7[6] = v7 + 5;
  v7[5] = v7 + 5;
  v7[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
  v7[10] = v4;
  v7[7] = 0LL;
  *(_DWORD *)(v4 + 28) = EtwpCoverageFlushPeriod;
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(*(_QWORD *)v4 + 16LL) = v8;
  v9 = *(PVOID *)v4;
  *(_DWORD *)(v4 + 24) = v8;
  KeInitializeTimer2((__int64)v9 + 104, (__int64)EtwpCoverageResetTimerCallback, (__int64)v9, 8LL);
  KeInitializeTimer2(*(_QWORD *)v4 + 240LL, (__int64)EtwpCoverageFlushTimerCallback, *(_QWORD *)v4, 8LL);
  v10 = *(_QWORD **)v4;
  v10[53] = EtwpCoverageResetWorkItemCallback;
  v10[54] = v4;
  v10[51] = 0LL;
  v11 = *(_QWORD **)v4;
  v11[49] = EtwpCoverageFlushWorkItemCallback;
  v11[50] = v4;
  v11[47] = 0LL;
  Section = EtwpCoverageEnsureStringBuffer(v4);
  if ( Section < 0 )
    goto LABEL_47;
  v12 = 4 * EtwpCoverageEntryCount;
  ViewSize = 4LL * (unsigned int)EtwpCoverageEntryCount;
  Section = MmCreateSection((int)v4 + 8, 983071, 0, (unsigned int)&ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( Section < 0 )
    goto LABEL_47;
  v13 = *(void **)(v4 + 8);
  v14 = v4 + 16;
  ViewSize = 0LL;
  Section = MmMapViewInSessionSpace(v13, (PVOID *)(v4 + 16), &ViewSize);
  if ( Section < 0 )
    goto LABEL_47;
  **(_BYTE **)v14 = 2;
  *(_BYTE *)(*(_QWORD *)v14 + 1LL) = 1;
  *(_DWORD *)(*(_QWORD *)v14 + 24LL) = 1;
  **(_DWORD **)v4 = *(_DWORD *)(*(_QWORD *)v14 + 24LL);
  *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(*(_QWORD *)v14 + 24LL);
  *(_DWORD *)(*(_QWORD *)v14 + 20LL) = v8;
  *(_DWORD *)(*(_QWORD *)v4 + 20LL) = *(_DWORD *)(*(_QWORD *)v14 + 20LL);
  v16 = (unsigned int)(v12 - 52) >> 2;
  *(_DWORD *)(*(_QWORD *)v14 + 8LL) = EtwpCoverageEntryCount - 1;
  v17 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)v14 + 4LL) = v16;
    --v17;
  }
  while ( v17 );
  v18 = *(_QWORD *)v14;
  *(_DWORD *)(v4 + 32) = 3 * (v16 >> 2);
  *(_DWORD *)(v18 + 16) = 4 * *(_DWORD *)(v18 + 4) + 52;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.Padding[2], 0LL, 0LL, v15);
  v22 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Padding[2], 0LL);
  v23 = v20;
  if ( v22 )
    ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock.Padding[2], v20, (__int64)&ExpSysDbgLock.Padding[2]);
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v23, v21);
    else
      *((_BYTE *)v23 + 10) = 1;
  }
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( !EtwpCoverageContext )
  {
    v24 = *(PVOID *)v4;
    EtwpCoverageContext = v4;
    v4 = 0LL;
    EtwpCoverageNonPagedContext = (__int64)v24;
    if ( EtwpCoverageCoreTracingEnabled )
    {
      *(_WORD *)(v5[2] + 2LL) |= 1u;
      *(_DWORD *)(MmWriteableSharedUserData + 892) = -256;
    }
    v28[0] = 0LL;
    v28[1] = -1LL;
    KeSetTimer2(
      *(_QWORD *)EtwpCoverageContext + 104LL,
      -10000LL * (unsigned int)EtwpCoverageResetPeriod,
      10000LL * (unsigned int)EtwpCoverageResetPeriod,
      (__int64)v28);
  }
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Padding[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Padding[2]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.Padding[2]);
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140E0901C < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E09018 )
    {
      LODWORD(ViewSize) = 0;
      dword_140E09018 = TelemetryCoverageStringHashInternal(off_140E09010, &ViewSize);
    }
    EtwTelemetryCoverageReport(&off_140E09010);
  }
  if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140E09004 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E09000 )
    {
      LODWORD(ViewSize) = 0;
      dword_140E09000 = TelemetryCoverageStringHashInternal(off_140E08FF8, &ViewSize);
    }
    EtwTelemetryCoverageReport(&off_140E08FF8);
  }
  Section = 0;
  if ( v4 )
    goto LABEL_47;
  return (unsigned int)Section;
}
