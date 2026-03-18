/*
 * XREFs of ExpWatchProductTypeWork @ 0x140973C50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmInitializeThreadInfo @ 0x14043CEE0 (CmInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmSizeOfThreadInfo @ 0x14052D780 (CmSizeOfThreadInfo.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtOpenKeyEx @ 0x140974620 (NtOpenKeyEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

void ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // si
  char v2; // bl
  struct _LIST_ENTRY *Flink; // r15
  _KAFFINITY_EX **v4; // r14
  struct _KLOCK_ENTRIES *v5; // r9
  void *v6; // rdx
  LegacyAutoBoost *v7; // rdi
  int v8; // eax
  int ValueKey; // eax
  const wchar_t *v10; // rax
  int v11; // edx
  int v12; // ecx
  const wchar_t *v13; // rax
  int v14; // edx
  int v15; // ecx
  char v16; // r10
  const wchar_t *v17; // rax
  unsigned int *p_ChildMinRate; // rdx
  int v19; // ecx
  int v20; // r8d
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v22; // rcx
  unsigned __int16 v23; // ax
  int v24; // eax
  __int64 v25; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rsp
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ebx
  struct _LIST_ENTRY *v36; // rdx
  struct _LIST_ENTRY *v37; // rtt
  size_t BugCheckParameter4; // [rsp+20h] [rbp-40h]
  size_t BugCheckParameter4a; // [rsp+20h] [rbp-40h]
  size_t Size; // [rsp+28h] [rbp-38h]
  size_t Sizea; // [rsp+28h] [rbp-38h]
  size_t Sizeb; // [rsp+28h] [rbp-38h]
  SIZE_T Length; // [rsp+50h] [rbp-10h]
  SIZE_T Lengtha; // [rsp+50h] [rbp-10h]
  char v45; // [rsp+60h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+8h] BYREF
  __int64 v47; // [rsp+70h] [rbp+10h] BYREF
  UNICODE_STRING v48; // [rsp+78h] [rbp+18h] BYREF
  struct _LIST_ENTRY *v49; // [rsp+88h] [rbp+28h] BYREF
  char *v50; // [rsp+90h] [rbp+30h]
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF
  struct _LIST_ENTRY *v52; // [rsp+A0h] [rbp+40h]
  _DWORD v53[2]; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v54; // [rsp+B0h] [rbp+50h]
  UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp+58h]
  int v56; // [rsp+C0h] [rbp+60h]
  int v57; // [rsp+C4h] [rbp+64h]
  __int128 v58; // [rsp+C8h] [rbp+68h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp+78h] BYREF
  _OWORD v60[2]; // [rsp+E8h] [rbp+88h] BYREF
  __int16 v61; // [rsp+108h] [rbp+A8h]

  v53[1] = 0;
  v0 = 1;
  v57 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  v1 = 0;
  v48 = 0LL;
  LODWORD(v47) = 0;
  v2 = 0;
  v45 = 1;
  Flink = 0LL;
  v49 = 0LL;
  v4 = 0LL;
  v50 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v53[0] = 48;
  p_DestinationString = &DestinationString;
  v54 = 0LL;
  v56 = 576;
  v58 = 0LL;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink, 0LL, 0LL, v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
      0,
      v7,
      (struct _KTHREAD *)&ExpSysDbgLock.ApcStateFill[24]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  if ( ExpSysDbgLock.ApcState.ApcListHead[1].Flink )
  {
    v8 = NtOpenKeyEx(&v49, 131103LL, v53, 0LL);
    if ( v8 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v8 = NtOpenKeyEx(&v49, 131103LL, v53, 0LL);
      }
      while ( v8 == -1073741670 );
    }
    if ( v8 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v8, 0LL, 0LL);
    Flink = ExpSysDbgLock.ApcState.ApcListHead[1].Flink;
    v52 = ExpSysDbgLock.ApcState.ApcListHead[1].Flink;
    ExpSysDbgLock.ApcState.ApcListHead[1].Flink = v49;
    if ( !BYTE4(ExpSysDbgLock.InitialStack) )
    {
      RtlInitUnicodeString(&v48, L"ProductType");
      LODWORD(BugCheckParameter4) = 34;
      ValueKey = NtQueryValueKey(
                   ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
                   (unsigned int *)&v48.Length,
                   2LL,
                   (unsigned __int64)v60,
                   BugCheckParameter4,
                   (unsigned int *)&v47);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          ValueKey = NtQueryValueKey(
                       ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
                       (unsigned int *)&v48.Length,
                       2LL,
                       (unsigned __int64)v60,
                       BugCheckParameter4a,
                       (unsigned int *)&v47);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v10 = L"LanmanNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)v60 + 12 - (char *)L"LanmanNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        if ( !v12 )
          goto LABEL_26;
        v13 = L"ServerNT";
        do
        {
          v14 = *(const wchar_t *)((char *)v13 + (char *)v60 + 12 - (char *)L"ServerNT");
          v15 = *v13 - v14;
          if ( v15 )
            break;
          ++v13;
        }
        while ( v14 );
        v16 = 0;
        if ( !v15 )
LABEL_26:
          v16 = 1;
        v17 = L"WinNT";
        p_ChildMinRate = &ExpSysDbgLock.SchedulingGroup->ChildMinRate;
        do
        {
          v19 = *(const wchar_t *)((char *)v17 + (char *)&ExpSysDbgLock.SchedulingGroup->ChildMinRate - (char *)L"WinNT");
          v20 = *v17 - v19;
          if ( v20 )
            break;
          ++v17;
        }
        while ( v19 );
        if ( v20 && v16 )
        {
          SchedulingGroup = ExpSysDbgLock.SchedulingGroup;
          v0 = 0;
          *(_OWORD *)ExpSysDbgLock.SchedulingGroup = v60[0];
          *(_OWORD *)&SchedulingGroup->ChildMinWeight = v60[1];
          LOWORD(SchedulingGroup->NotificationCycles) = v61;
        }
        v22 = (char *)((char *)v60 + 12 - (char *)p_ChildMinRate);
        while ( 1 )
        {
          v23 = *(_WORD *)p_ChildMinRate;
          if ( *(_WORD *)p_ChildMinRate != *(_WORD *)&v22[(_QWORD)p_ChildMinRate] )
            break;
          p_ChildMinRate = (unsigned int *)((char *)p_ChildMinRate + 2);
          if ( !v23 )
          {
            v24 = 0;
            goto LABEL_38;
          }
        }
        v24 = v23 < *(_WORD *)&v22[(_QWORD)p_ChildMinRate] ? -1 : 1;
LABEL_38:
        v0 = v24 != 0 ? v0 : 0;
        v45 = v0;
      }
      Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( !ExpPlatformBinaryLock.QueuedScb
        || (v28 = guard_dispatch_icall_no_overrides((__int64)Blink, v25), v27 = (unsigned int)v28, v28 < 0) )
      {
        KeBugCheckEx(0x9Au, 0x11uLL, v27, 1uLL, 0LL);
      }
      v29 = (unsigned int)CmSizeOfThreadInfo();
      v30 = v29 + 15;
      if ( v29 + 15 <= v29 )
        v30 = 0xFFFFFFFFFFFFFF0LL;
      v31 = alloca(v30 & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_KAFFINITY_EX **)&v45;
      v50 = &v45;
      CmInitializeThreadInfo();
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      LODWORD(Size) = ExpSysDbgLock.SchedulingGroup->RelativeWeight;
      v32 = NtSetValueKey(
              *(int *)&ExpSysDbgLock.ApcStateFill[16],
              (int)&v48,
              0,
              ExpSysDbgLock.SchedulingGroup->Policy.AllFlags,
              (__int64)&ExpSysDbgLock.SchedulingGroup->ChildMinRate,
              Size);
      if ( v32 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = ExpSysDbgLock.SchedulingGroup->RelativeWeight;
          v32 = NtSetValueKey(
                  *(int *)&ExpSysDbgLock.ApcStateFill[16],
                  (int)&v48,
                  0,
                  ExpSysDbgLock.SchedulingGroup->Policy.AllFlags,
                  (__int64)&ExpSysDbgLock.SchedulingGroup->ChildMinRate,
                  Sizea);
        }
        while ( v32 == -1073741670 );
      }
      if ( v32 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v32, 1uLL, 0LL);
      if ( stru_140E3E928.AbWaitObject )
      {
        RtlInitUnicodeString(&v48, L"ProductSuite");
        LODWORD(Sizea) = *((_DWORD *)stru_140E3E928.AbWaitObject + 2);
        v33 = NtSetValueKey(
                *(int *)&ExpSysDbgLock.ApcStateFill[16],
                (int)&v48,
                0,
                *((_DWORD *)stru_140E3E928.AbWaitObject + 1),
                (__int64)stru_140E3E928.AbWaitObject + 12,
                Sizea);
        if ( v33 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)stru_140E3E928.AbWaitObject + 2);
            v33 = NtSetValueKey(
                    *(int *)&ExpSysDbgLock.ApcStateFill[16],
                    (int)&v48,
                    0,
                    *((_DWORD *)stru_140E3E928.AbWaitObject + 1),
                    (__int64)stru_140E3E928.AbWaitObject + 12,
                    Sizeb);
          }
          while ( v33 == -1073741670 );
        }
        if ( v33 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v33, 2uLL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&v48, L"ProductSuite");
        NtDeleteValueKey(ExpSysDbgLock.ApcState.ApcListHead[1].Flink, &v48);
      }
    }
    LODWORD(Length) = 4;
    v35 = NtNotifyChangeMultipleKeys(
            *(int *)&ExpSysDbgLock.ApcStateFill[16],
            0,
            0,
            0,
            (__int64)&ExpSysDbgLock.StackBase,
            1LL,
            &ExpSysDbgLock.KernelStack,
            268435461,
            0,
            &ExpSysDbgLock.WaitRegister,
            Length,
            1);
    if ( v35 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        LODWORD(Lengtha) = 4;
        v35 = NtNotifyChangeMultipleKeys(
                *(int *)&ExpSysDbgLock.ApcStateFill[16],
                0,
                0,
                0,
                (__int64)&ExpSysDbgLock.StackBase,
                1LL,
                &ExpSysDbgLock.KernelStack,
                268435461,
                0,
                &ExpSysDbgLock.WaitRegister,
                Lengtha,
                1);
      }
      while ( v35 == -1073741670 );
      v4 = (_KAFFINITY_EX **)v50;
      Flink = v52;
      v0 = v45;
    }
    if ( v1 )
      CmpUnlockRegistry(v34);
    if ( v4 )
      CmCleanupThreadInfo(v4);
    if ( v35 < 0 )
      KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v35, 4uLL, 0LL);
    v2 = v1;
    if ( !BYTE4(ExpSysDbgLock.InitialStack)
      && v0
      && (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  _m_prefetchw(&ExpSysDbgLock.ApcStateFill[24]);
  v36 = ExpSysDbgLock.ApcState.ApcListHead[1].Blink - 1;
  if ( ((unsigned __int64)ExpSysDbgLock.ApcState.ApcListHead[1].Blink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v36 = 0LL;
  if ( (ExpSysDbgLock.ApcStateFill[24] & 2) != 0
    || (v37 = ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
        v37 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink,
                                       (signed __int64)v36,
                                       (signed __int64)ExpSysDbgLock.ApcState.ApcListHead[1].Blink)) )
  {
    ExfReleasePushLock(&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
  }
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcState.ApcListHead[1].Blink);
  if ( Flink )
  {
    if ( v2 )
      NtFlushKey(Flink);
    ObCloseHandle(Flink, 0);
  }
}
