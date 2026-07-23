/*
 * XREFs of EtwpCoverageResetCP @ 0x1408301A0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageValidateCP @ 0x140486D7C (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1404F20F0 (TelemetryCoverageTableLocateInternal.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCoverageFlushPending @ 0x140B452E0 (EtwpCoverageFlushPending.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // r14
  unsigned int v4; // ebp
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  int v11; // r11d
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r12
  char *i; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int *v18; // rcx
  unsigned int *v19; // rax
  unsigned int *v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // rax
  unsigned int *v23; // rcx
  unsigned int j; // edi
  unsigned int *v25; // rax
  unsigned int v26; // r11d
  int v28; // [rsp+68h] [rbp+10h] BYREF
  unsigned int *Internal; // [rsp+70h] [rbp+18h] BYREF

  v28 = 0;
  Pool2 = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140E08FEC < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E08FE8 )
      dword_140E08FE8 = TelemetryCoverageStringHashInternal(off_140E08FE0, &Internal);
    EtwTelemetryCoverageReport(&off_140E08FE0);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((char **)a2, &v28) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.Padding[2], 0LL, 0LL, v6);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Padding[2], 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock.Padding[2], v8, (__int64)&ExpSysDbgLock.Padding[2]);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v11 )
    {
      EtwpCoverageFlushPending(a1);
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v12 = *(_QWORD **)(a1 + 48);
LABEL_15:
        if ( v12 != (_QWORD *)(a1 + 48) )
        {
          v13 = v12[3];
          for ( i = (char *)(v12 + 5); ; i += v15 + 1 )
          {
            if ( (unsigned __int64)i >= v13 )
            {
              v12 = (_QWORD *)*v12;
              goto LABEL_15;
            }
            v15 = -1LL;
            do
              ++v15;
            while ( i[v15] );
            if ( v15 == v28 && !strcmp(i, *(const char **)a2) )
              break;
          }
          memmove(i, &i[v28 + 1], v13 - (_QWORD)&i[v28 + 1]);
          v16 = 0;
          v12[3] -= (unsigned int)(v28 + 1);
          v17 = 0;
          v12[4] = v12[3];
          ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
          *Internal = 0;
          --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
          v18 = *(unsigned int **)(a1 + 16);
          v19 = v18;
          if ( v18[1] )
          {
            v20 = *(unsigned int **)(a1 + 16);
            do
            {
              v21 = v18[v17 + 13];
              v18 = v20;
              if ( v21 )
              {
                v22 = v16++;
                Pool2[v22] = v21;
                v19 = *(unsigned int **)(a1 + 16);
                if ( v16 >= v19[8] )
                  break;
                v18 = *(unsigned int **)(a1 + 16);
              }
              ++v17;
              v20 = v18;
              v19 = v18;
            }
            while ( v17 < v18[1] );
          }
          memset_0(v19 + 13, 0, 4LL * v19[1]);
          v23 = *(unsigned int **)(a1 + 16);
          for ( j = 0; j < v23[8]; v23 = *(unsigned int **)(a1 + 16) )
          {
            v25 = TelemetryCoverageTableLocateInternal(v23, Pool2[j++]);
            *v25 = v26;
          }
          v4 = 1;
          *(_DWORD *)(a2 + 12) = v23[6];
        }
      }
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Padding[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Padding[2]);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.Padding[2]);
    KeLeaveCriticalRegion();
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v4;
}
