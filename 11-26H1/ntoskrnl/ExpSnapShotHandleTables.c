/*
 * XREFs of ExpSnapShotHandleTables @ 0x140929930
 * Callers:
 *     ObGetHandleInformationEx @ 0x140A2E74C (ObGetHandleInformationEx.c)
 *     ObGetHandleInformation @ 0x140A30AF8 (ObGetHandleInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        int *a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int *v7; // r12
  int v8; // r11d
  __int64 v9; // r10
  int v11; // r13d
  unsigned int v12; // r14d
  LegacyAutoBoost *v13; // rbx
  __int64 v14; // rdx
  _KSWAPPABLE_PAGE *i; // rbp
  PVOID *p_StartVa; // rsi
  __int64 j; // rbx
  unsigned __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rax
  signed __int64 *v21; // rdi
  signed __int64 v22; // r8
  __int64 v23; // rdx
  signed __int32 v25[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+28h] [rbp-70h]
  int *v28; // [rsp+30h] [rbp-68h]
  _KSWAPPABLE_PAGE *v29; // [rsp+40h] [rbp-58h]
  _DWORD *v30; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *v31; // [rsp+50h] [rbp-48h]
  PEPROCESS Process; // [rsp+B0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  v8 = 8;
  Process = 0LL;
  v9 = 2LL;
  v31 = CurrentThread;
  v11 = (int)a4;
  if ( a6 )
    v9 = 4LL;
  v12 = 0;
  v30 = &a3[v9];
  if ( a6 )
    v8 = 16;
  *a5 = v8;
  *a3 = 0;
  --CurrentThread->KernelApcDisable;
  v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.StackBase, 0LL, 0LL, a4);
  v14 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.StackBase, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspSiloMonitorLock.StackBase,
      0,
      v13,
      (struct _KTHREAD *)&PspSiloMonitorLock.StackBase);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, (void *)v14);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  for ( i = PspSiloMonitorLock.SchedulerSharedSwappablePage; ; i = (_KSWAPPABLE_PAGE *)i->RegionStart )
  {
    v29 = i;
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073741820 )
      break;
    if ( i == (_KSWAPPABLE_PAGE *)&PspSiloMonitorLock.SchedulerSharedSwappablePage )
      break;
    p_StartVa = &i[-1].Mdl.StartVa;
    if ( PsLookupProcessByProcessId((HANDLE)LODWORD(i->LockCount.Value), &Process) < 0 )
      continue;
    ObfDereferenceObject(Process);
    for ( j = 0LL; ((v12 + 0x80000000) & 0x80000000) != 0 || v12 == -1073741820; j += 4LL )
    {
      v18 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (j & 0xFFFFFFFFFFFFFFFCuLL) >= *(unsigned int *)p_StartVa )
        break;
      v19 = (char *)p_StartVa[1];
      if ( ((unsigned __int8)v19 & 3) == 1 )
      {
        v20 = *(_QWORD *)&v19[8 * (v18 >> 10) - 1];
LABEL_19:
        v21 = (signed __int64 *)(v20 + 4 * (j & 0x3FC));
        goto LABEL_20;
      }
      if ( ((unsigned __int8)v19 & 3) != 0 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)&v19[8 * (v18 >> 19) - 2] + 8 * ((v18 >> 10) & 0x1FF));
        goto LABEL_19;
      }
      v21 = (signed __int64 *)&v19[4 * v18];
LABEL_20:
      if ( !v21 )
        break;
      if ( (j & 0x3FC) != 0 && *v21 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v21);
            v22 = *v21;
            if ( (*v21 & 1) != 0 )
              break;
            if ( !v22 )
              goto LABEL_23;
            ExpBlockOnLockedHandleEntry(p_StartVa, v21, v22);
          }
        }
        while ( v22 != _InterlockedCompareExchange64(v21, v22 - 1, v22) );
        ++*a3;
        v28 = v7;
        v27 = v11;
        v26 = j;
        v12 = guard_dispatch_icall_no_overrides(a2, (__int64)&v30);
        _InterlockedIncrement64(v21);
        _InterlockedOr(v25, 0);
        if ( p_StartVa[6] )
          ExfUnblockPushLock((volatile __int64 *)p_StartVa + 6, 0LL);
      }
LABEL_23:
      ;
    }
    i = v29;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.StackBase, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.StackBase);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.StackBase);
  KiLeaveCriticalRegionUnsafe((__int64)v31, v23);
  return v12;
}
