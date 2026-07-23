/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x140917BB8
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x140917AE8 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, _QWORD *a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rbx
  unsigned int v13; // ecx
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  __int64 v16; // rtt
  _QWORD *i; // rdi
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rsi
  unsigned __int64 *v21; // r14
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rbx
  __int64 v25; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v27; // rbx
  __int64 v28; // rdx
  __int64 *v29; // rbx
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  _OWORD v33[3]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2 + 83;
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 83), 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = 0;
  a2[84] = KeGetCurrentThread();
  while ( v13 < 0x10 )
  {
    if ( HIWORD(a2[4 * v13 + 16]) == *a1 && LODWORD(a2[4 * v13 + 16]) )
    {
      for ( i = (_QWORD *)a2[7]; i != a2 + 7; i = (_QWORD *)*i )
      {
        if ( a3 == 2 )
        {
          v19 = KeGetCurrentThread();
          v20 = i - 2;
          --v19->KernelApcDisable;
          v21 = (unsigned __int64 *)(i[2] + 664LL);
          v22 = (AutoBoost *)KeAbPreAcquire((__int64)v21, 0LL, 0LL, v11);
          v24 = v22;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
            ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
          if ( v24 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v24, v23);
            else
              *((_BYTE *)v24 + 10) = 1;
          }
          *(_QWORD *)(i[2] + 672LL) = KeGetCurrentThread();
        }
        else
        {
          v20 = i;
        }
        if ( (*((_BYTE *)v20 + 98) & 1) != 0 )
        {
          EtwpProviderArrivalCallback(a1, 0LL, v20);
        }
        else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v20[10] + 488LL)) )
        {
          v25 = v20[10];
          memset(v33, 0, sizeof(v33));
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v25);
          v27 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KiStackAttachProcess((_KPROCESS *)v20[10], 0, (__int64)v33);
          LOBYTE(v28) = 1;
          EtwpProviderArrivalCallback(a1, v28, v20);
          KiUnstackDetachProcess((__int64)v33, 0);
          PsDetachSiloFromCurrentThread(v27);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20[10] + 488LL));
        }
        if ( a3 == 2 )
        {
          *(_QWORD *)(v20[4] + 672LL) = 0LL;
          v29 = (__int64 *)(v20[4] + 664LL);
          _m_prefetchw(v29);
          v30 = *v29;
          v31 = *v29 - 16;
          if ( (*v29 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v31 = 0LL;
          if ( (v30 & 2) != 0 || (v32 = *v29, v32 != _InterlockedCompareExchange64(v29, v31, v30)) )
            ExfReleasePushLock(v29);
          KeAbPostRelease((unsigned __int64)v29);
          KeLeaveCriticalRegion();
        }
      }
      break;
    }
    ++v13;
  }
  a2[84] = 0LL;
  _m_prefetchw(a2 + 83);
  v14 = a2[83];
  v15 = v14 - 16;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (v14 & 2) != 0 || (v16 = a2[83], v16 != _InterlockedCompareExchange64(a2 + 83, v15, v14)) )
    ExfReleasePushLock(a2 + 83);
  KeAbPostRelease((unsigned __int64)(a2 + 83));
  KeLeaveCriticalRegion();
  return 0LL;
}
