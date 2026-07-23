/*
 * XREFs of ExpWatchProductTypeWork @ 0x140935C60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmInitializeThreadInfo @ 0x14042F790 (CmInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmSizeOfThreadInfo @ 0x14052FCA0 (CmSizeOfThreadInfo.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     NtOpenKeyEx @ 0x140936630 (NtOpenKeyEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

void ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // si
  char v2; // bl
  struct _LIST_ENTRY *Blink; // r15
  _KAFFINITY_EX **v4; // r14
  struct _KLOCK_ENTRIES *v5; // r9
  void *v6; // rdx
  LegacyAutoBoost *v7; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  const wchar_t *v10; // rax
  int v11; // edx
  int v12; // ecx
  const wchar_t *v13; // rax
  int v14; // edx
  int v15; // ecx
  char v16; // r10
  const wchar_t *v17; // rax
  char *v18; // rdx
  int v19; // ecx
  int v20; // r8d
  _OWORD *StackLimit; // rcx
  char *v22; // rcx
  unsigned __int16 v23; // ax
  int v24; // eax
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  ULONG_PTR v27; // r8
  int v28; // eax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rsp
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  NTSTATUS v35; // ebx
  struct _LIST_ENTRY *v36; // rdx
  struct _LIST_ENTRY *v37; // rtt
  char v38; // [rsp+60h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+10h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  char *v43; // [rsp+90h] [rbp+30h]
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF
  struct _LIST_ENTRY *v45; // [rsp+A0h] [rbp+40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp+48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp+78h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+E8h] [rbp+88h] BYREF
  __int16 v49; // [rsp+108h] [rbp+A8h]

  *(&ObjectAttributes.Length + 1) = 0;
  v0 = 1;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  DestinationString = 0LL;
  Handle = 0LL;
  v1 = 0;
  ValueName = 0LL;
  ResultLength = 0;
  v2 = 0;
  v38 = 1;
  Blink = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  v43 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
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
  if ( ExpSysDbgLock.ApcState.ApcListHead[0].Blink )
  {
    v8 = NtOpenKeyEx(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0);
    if ( v8 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v8 = NtOpenKeyEx(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0);
      }
      while ( v8 == -1073741670 );
    }
    if ( v8 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v8, 0LL, 0LL);
    Blink = ExpSysDbgLock.ApcState.ApcListHead[0].Blink;
    v45 = ExpSysDbgLock.ApcState.ApcListHead[0].Blink;
    ExpSysDbgLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)KeyHandle;
    if ( !ExpSysDbgLock.WaitRegister.Flags )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v9 = NtQueryValueKey(
             ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v9 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v9 = NtQueryValueKey(
                 ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v9 == -1073741670 );
      }
      if ( v9 >= 0 )
      {
        v10 = L"LanmanNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
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
          v14 = *(const wchar_t *)((char *)v13 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
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
        v18 = (char *)ExpSysDbgLock.StackLimit + 12;
        do
        {
          v19 = *(const wchar_t *)((char *)v17 + (char *)ExpSysDbgLock.StackLimit + 12 - (char *)L"WinNT");
          v20 = *v17 - v19;
          if ( v20 )
            break;
          ++v17;
        }
        while ( v19 );
        if ( v20 && v16 )
        {
          StackLimit = ExpSysDbgLock.StackLimit;
          v0 = 0;
          *(_OWORD *)ExpSysDbgLock.StackLimit = KeyValueInformation[0];
          StackLimit[1] = KeyValueInformation[1];
          *((_WORD *)StackLimit + 16) = v49;
        }
        v22 = (char *)((char *)KeyValueInformation + 12 - v18);
        while ( 1 )
        {
          v23 = *(_WORD *)v18;
          if ( *(_WORD *)v18 != *(_WORD *)&v22[(_QWORD)v18] )
            break;
          v18 += 2;
          if ( !v23 )
          {
            v24 = 0;
            goto LABEL_38;
          }
        }
        v24 = v23 < *(_WORD *)&v22[(_QWORD)v18] ? -1 : 1;
LABEL_38:
        v0 = v24 != 0 ? v0 : 0;
        v38 = v0;
      }
      v26 = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( !ExpPlatformBinaryLock.TracingPrivate[0]
        || (v28 = guard_dispatch_icall_no_overrides((__int64)v26, v25), v27 = (unsigned int)v28, v28 < 0) )
      {
        KeBugCheckEx(0x9Au, 0x11uLL, v27, 1uLL, 0LL);
      }
      v29 = (unsigned int)CmSizeOfThreadInfo();
      v30 = v29 + 15;
      if ( v29 + 15 <= v29 )
        v30 = 0xFFFFFFFFFFFFFF0LL;
      v31 = alloca(v30 & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_KAFFINITY_EX **)&v38;
      v43 = &v38;
      CmInitializeThreadInfo();
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      v32 = NtSetValueKey(
              ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
              &ValueName,
              0,
              *((_DWORD *)ExpSysDbgLock.StackLimit + 1),
              (char *)ExpSysDbgLock.StackLimit + 12,
              *((_DWORD *)ExpSysDbgLock.StackLimit + 2));
      if ( v32 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v32 = NtSetValueKey(
                  ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
                  &ValueName,
                  0,
                  *((_DWORD *)ExpSysDbgLock.StackLimit + 1),
                  (char *)ExpSysDbgLock.StackLimit + 12,
                  *((_DWORD *)ExpSysDbgLock.StackLimit + 2));
        }
        while ( v32 == -1073741670 );
      }
      if ( v32 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v32, 1uLL, 0LL);
      if ( stru_140E62450.SListFaultAddress )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        v33 = NtSetValueKey(
                ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
                &ValueName,
                0,
                *((_DWORD *)stru_140E62450.SListFaultAddress + 1),
                (char *)stru_140E62450.SListFaultAddress + 12,
                *((_DWORD *)stru_140E62450.SListFaultAddress + 2));
        if ( v33 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v33 = NtSetValueKey(
                    ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
                    &ValueName,
                    0,
                    *((_DWORD *)stru_140E62450.SListFaultAddress + 1),
                    (char *)stru_140E62450.SListFaultAddress + 12,
                    *((_DWORD *)stru_140E62450.SListFaultAddress + 2));
          }
          while ( v33 == -1073741670 );
        }
        if ( v33 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v33, 2uLL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        NtDeleteValueKey(ExpSysDbgLock.ApcState.ApcListHead[0].Blink, &ValueName);
      }
    }
    v35 = NtNotifyChangeMultipleKeys(
            ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
            0,
            0LL,
            0LL,
            (PIO_APC_ROUTINE)&ExpSysDbgLock.CurrentRunTime,
            (PVOID)1,
            (PIO_STATUS_BLOCK)&ExpSysDbgLock.SystemCallNumber,
            0x10000005u,
            0,
            (char *)&ExpSysDbgLock.InitialStack + 4,
            4u,
            1u);
    if ( v35 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v35 = NtNotifyChangeMultipleKeys(
                ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
                0,
                0LL,
                0LL,
                (PIO_APC_ROUTINE)&ExpSysDbgLock.CurrentRunTime,
                (PVOID)1,
                (PIO_STATUS_BLOCK)&ExpSysDbgLock.SystemCallNumber,
                0x10000005u,
                0,
                (char *)&ExpSysDbgLock.InitialStack + 4,
                4u,
                1u);
      }
      while ( v35 == -1073741670 );
      v4 = (_KAFFINITY_EX **)v43;
      Blink = v45;
      v0 = v38;
    }
    if ( v1 )
      CmpUnlockRegistry(v34);
    if ( v4 )
      CmCleanupThreadInfo(v4);
    if ( v35 < 0 )
      KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v35, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSysDbgLock.WaitRegister.Flags
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
  if ( Blink )
  {
    if ( v2 )
      NtFlushKey(Blink);
    ObCloseHandle(Blink, 0);
  }
}
