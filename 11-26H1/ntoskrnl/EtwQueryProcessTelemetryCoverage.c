/*
 * XREFs of EtwQueryProcessTelemetryCoverage @ 0x14077729C
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryCoverage(
        _KPROCESS *a1,
        char *a2,
        unsigned int a3,
        unsigned int *a4,
        char a5)
{
  unsigned int v8; // edi
  struct _KLOCK_ENTRIES *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 *v16; // r15
  __int64 *i; // rcx
  unsigned int v18; // eax
  unsigned int v19; // r12d
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r14
  __int64 *j; // rsi
  unsigned int v24; // ecx
  __int64 v25; // r14
  void *v26; // rdx

  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    if ( EtwpCoverageContext )
    {
      if ( (unsigned __int8)PspIsContextAdmin() )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.Padding[2], 0LL, 0LL, v9);
        v13 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Padding[2], 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock.Padding[2], v11, (__int64)&ExpSysDbgLock.Padding[2]);
        if ( v13 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v13, v12);
          else
            *((_BYTE *)v13 + 10) = 1;
        }
        EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
        v14 = EtwpCoverageContext;
        v15 = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 16LL);
        v16 = (__int64 *)(EtwpCoverageContext + 48);
        for ( i = *(__int64 **)(EtwpCoverageContext + 48); i != v16; i = (__int64 *)*i )
        {
          v18 = *((_DWORD *)i + 6) - (_DWORD)i - 40;
          v15 += v18;
          if ( v15 < v18 )
          {
            v8 = -1073741675;
            goto LABEL_41;
          }
        }
        if ( a4 )
          *a4 = v15;
        v19 = (_DWORD)a2 + v15;
        v20 = *(_DWORD **)(v14 + 16);
        v21 = v20[4];
        if ( a3 < v21 )
          v21 = a3;
        if ( v21 )
        {
          v22 = v21;
          if ( a5 )
            RtlCopyToUser(a2, v20, v21);
          else
            RtlCopyVolatileMemory(a2, v20, v21);
          a2 += v22;
        }
        if ( a3 < v15 )
        {
          v8 = -2147483643;
        }
        else
        {
          for ( j = (__int64 *)*v16; j != v16; j = (__int64 *)*j )
          {
            v24 = *((_DWORD *)j + 6) - (_DWORD)j - 40;
            if ( v24 > v19 - (unsigned int)a2 )
            {
              v8 = -1073741267;
              goto LABEL_41;
            }
            if ( *((_DWORD *)j + 6) - (_DWORD)j != 40 )
            {
              v25 = v24;
              v26 = j + 5;
              if ( a5 )
                RtlCopyToUser(a2, v26, v24);
              else
                RtlCopyVolatileMemory(a2, v26, v24);
              a2 += v25;
            }
          }
          v8 = 0;
        }
      }
      else
      {
        v8 = -1073741790;
      }
    }
    else
    {
      v8 = -1073741641;
    }
  }
  else
  {
    v8 = -1073741637;
  }
LABEL_41:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Padding[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Padding[2]);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.Padding[2]);
    KeLeaveCriticalRegion();
  }
  return v8;
}
