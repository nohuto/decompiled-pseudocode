/*
 * XREFs of CmpInitCmRM @ 0x140A75780
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404FA69C (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline @ 0x140512098 (Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x140724C90 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x140724DF0 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x140725AB0 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x140726330 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x140726350 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     CmpDeleteCorruptedLogfile @ 0x140862DE8 (CmpDeleteCorruptedLogfile.c)
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     LOCK_CM_RM_LIST @ 0x1408AF164 (LOCK_CM_RM_LIST.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408B5DB0 (CmpQueryFileSecurityDescriptor.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     CmpIsFileInSystemConfig @ 0x140A77570 (CmpIsFileInSystemConfig.c)
 *     CmpQueryNameString @ 0x140A77968 (CmpQueryNameString.c)
 *     CmpLogTxrInitEvent @ 0x140A77AA4 (CmpLogTxrInitEvent.c)
 *     HvMarkBaseBlockDirty @ 0x140AE37FC (HvMarkBaseBlockDirty.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpInitCmRM(struct _KTHREAD *a1, char a2)
{
  __int64 result; // rax
  struct _KTHREAD *v3; // r13
  char v4; // r15
  struct _KTHREAD *Thread; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  int IsFileInSystemConfig; // edi
  NTSTATUS v9; // eax
  __int64 Pool2; // rsi
  struct _ERESOURCE *QuadPart; // rdx
  char v12; // di
  _QWORD *v13; // rcx
  unsigned __int64 ThreadLock; // r8
  UUID v15; // xmm6
  UUID v16; // xmm7
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 v24; // rcx
  struct _LIST_ENTRY *Blink; // r15
  wchar_t *v26; // rcx
  UNICODE_STRING *p_Source; // r12
  unsigned __int16 Length; // ax
  PSECURITY_DESCRIPTOR v29; // r15
  __int64 v30; // rax
  struct _CLFS_MGMT_POLICY *v31; // r15
  int v32; // ecx
  HANDLE *v33; // r12
  NTSTATUS v34; // eax
  HANDLE v35; // rcx
  HANDLE *v36; // r15
  GUID v37; // xmm0
  HANDLE v38; // rcx
  __int64 *v39; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v41; // ecx
  bool v42; // zf
  wchar_t *Buffer; // rcx
  __int128 v44; // kr00_16
  __int64 v45; // rcx
  __int64 *v46; // rcx
  __int64 v47; // r13
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  ULONG fLogOptionFlag; // [rsp+6Ch] [rbp-9Ch]
  char Destination; // [rsp+70h] [rbp-98h]
  UNICODE_STRING Destination_8; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+88h] [rbp-80h]
  ULONG CreateOptions; // [rsp+8Ch] [rbp-7Ch]
  FILE_OBJECT *pplfoLog; // [rsp+90h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+98h] [rbp-70h] BYREF
  PVOID ClientCookie; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-50h] BYREF
  LARGE_INTEGER Interval; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING LogFileName; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  struct _KTHREAD *v69; // [rsp+110h] [rbp+8h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+118h] [rbp+10h] BYREF
  __int128 v71; // [rsp+150h] [rbp+48h]
  GUID ResourceManagerGuid; // [rsp+160h] [rbp+58h] BYREF
  UUID Uuid; // [rsp+170h] [rbp+68h] BYREF
  UUID v74; // [rsp+180h] [rbp+78h] BYREF

  Destination = a2;
  v69 = a1;
  result = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = a1;
  v71 = 0LL;
  v4 = 0;
  ResourceManagerGuid = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Uuid = 0LL;
  Source.Buffer = 0LL;
  v74 = 0LL;
  *(_QWORD *)&Destination_8.Length = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination_8.Buffer = 0LL;
  pplfoLog = 0LL;
  *(_QWORD *)&LogFileName.Length = 0LL;
  LogFileName.Buffer = 0LL;
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  memset(&RegistrationData, 0, 52);
  v59 = 0;
  fLogOptionFlag = 512;
  if ( BYTE6(NlsMbOemCodePageTag) )
    return result;
  Thread = stru_140E098B8.WaitBlock[2].Thread;
  if ( a1 )
    Thread = a1;
  if ( (*(_DWORD *)&Thread->ApcStateFill[8] & 0x8001) != 0 )
    return result;
  while ( 1 )
  {
    v6 = ExUuidCreate(&Uuid);
    IsFileInSystemConfig = v6;
    if ( v6 != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( v6 < 0 )
    goto LABEL_77;
  while ( 1 )
  {
    v9 = ExUuidCreate(&v74);
    IsFileInSystemConfig = v9;
    if ( v9 != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( v9 < 0 )
  {
LABEL_77:
    LODWORD(Thread[3].QueueListEntry.Flink) = 1;
LABEL_80:
    HIDWORD(Thread[3].QueueListEntry.Flink) = IsFileInSystemConfig;
    CmpLogTxrInitEvent(v7, Thread, (unsigned int)IsFileInSystemConfig);
    return (unsigned int)IsFileInSystemConfig;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 1;
LABEL_79:
    IsFileInSystemConfig = -1073741670;
    goto LABEL_80;
  }
  Interval.QuadPart = ExAllocatePool2(0x40uLL);
  QuadPart = (struct _ERESOURCE *)Interval.QuadPart;
  if ( !Interval.QuadPart )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x6D524D43u);
    LODWORD(Thread[3].QueueListEntry.Flink) = 2;
    goto LABEL_79;
  }
  v12 = Destination;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
  *(_QWORD *)(Pool2 + 88) = 0LL;
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_DWORD *)(Pool2 + 104) = Destination != 0 ? 4 : 0;
  *(_QWORD *)(Pool2 + 108) = 0LL;
  *(_DWORD *)(Pool2 + 68) = 0;
  *(_QWORD *)(Pool2 + 72) = 0LL;
  *(_QWORD *)(Pool2 + 128) = QuadPart;
  ExInitializeResourceLite(QuadPart);
  ThreadLock = Thread->ThreadLock;
  v15 = Uuid;
  v16 = v74;
  if ( *(_DWORD *)(ThreadLock + 164) == 1836346738 )
  {
    v44 = v71;
    v45 = v71 - *(_QWORD *)(ThreadLock + 148);
    if ( (_QWORD)v71 == *(_QWORD *)(ThreadLock + 148) )
      v45 = *((_QWORD *)&v71 + 1) - *(_QWORD *)(ThreadLock + 156);
    if ( !v45 )
    {
      v59 = 1;
      v4 = 1;
      *(UUID *)(ThreadLock + 148) = v74;
    }
    v48 = Thread->ThreadLock;
    v49 = v44 - *(_QWORD *)(v48 + 112);
    if ( (_QWORD)v44 == *(_QWORD *)(v48 + 112) )
      v49 = *((_QWORD *)&v44 + 1) - *(_QWORD *)(v48 + 120);
    if ( !v49 )
    {
      v4 = 1;
      *(UUID *)(v48 + 112) = v15;
    }
    v13 = (_QWORD *)Thread->ThreadLock;
    v50 = v44 - v13[16];
    if ( !v50 )
      v50 = *((_QWORD *)&v44 + 1) - v13[17];
    if ( !v50 )
    {
      v4 = 1;
      *((_OWORD *)v13 + 8) = *((_OWORD *)v13 + 7);
    }
    CreateOptions = 0;
    fLogOptionFlag = 512;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_16;
  }
  *(_DWORD *)(ThreadLock + 164) = 1836346738;
  while ( 1 )
  {
    v17 = Thread->ThreadLock;
    if ( !v3 )
      v12 = 1;
    v59 = 1;
    Destination = v12;
    *(UUID *)(v17 + 148) = v16;
    *(UUID *)(Thread->ThreadLock + 112) = v15;
    *(UUID *)(Thread->ThreadLock + 128) = v15;
LABEL_16:
    CmpLockRegistry(v13);
    HvLockHiveFlusherShared((__int64)Thread, v18, v19, v20);
    HvLockHiveWriter((__int64)Thread, v21, v22, v23);
    HvMarkBaseBlockDirty(Thread);
    HvUnlockHiveWriter((__int64)Thread);
    HvUnlockHiveFlusherShared((__int64)Thread);
    CmpUnlockRegistry(v24);
LABEL_18:
    Blink = Thread[1].WaitBlock[0].WaitListEntry.Blink;
    IsFileInSystemConfig = RtlStringFromGUIDEx((unsigned int *)(Thread->ThreadLock + 148), (__int64)&UnicodeString, 1);
    if ( IsFileInSystemConfig < 0 )
    {
      LODWORD(Thread[3].QueueListEntry.Flink) = 3;
      goto LABEL_122;
    }
    if ( v3 )
    {
      IsFileInSystemConfig = CmpQueryNameString(v3[1].WaitBlock[0].WaitListEntry.Blink, &Source);
      if ( IsFileInSystemConfig < 0 )
      {
        LODWORD(Thread[3].QueueListEntry.Flink) = 4;
        goto LABEL_122;
      }
      p_Source = &Source;
      if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
      {
        IsFileInSystemConfig = CmpIsFileInSystemConfig(&Source);
        if ( IsFileInSystemConfig < 0 )
        {
          LODWORD(Thread[3].QueueListEntry.Flink) = 16;
          goto LABEL_122;
        }
        fLogOptionFlag &= ~0x1000000u;
      }
      Length = Source.Length;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions = 52;
      IsEnabledDeviceUsageNoInline = Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline();
      v41 = fLogOptionFlag | 0x1000000;
      v42 = IsEnabledDeviceUsageNoInline == 0;
      Length = CmpLogPath.Length;
      if ( v42 )
        v41 = fLogOptionFlag;
      fLogOptionFlag = v41;
    }
    Destination_8.MaximumLength = UnicodeString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + Length;
    Destination_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Destination_8.Buffer )
    {
      IsFileInSystemConfig = -1073741670;
      LODWORD(Thread[3].QueueListEntry.Flink) = 5;
      goto LABEL_122;
    }
    RtlAppendUnicodeStringToString(&Destination_8, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination_8, p_Source);
    RtlAppendUnicodeStringToString(&Destination_8, &UnicodeString);
    RtlAppendUnicodeStringToString(&Destination_8, &TmLogExt);
    IsFileInSystemConfig = CmpQueryFileSecurityDescriptor(Blink, (struct _PRIVILEGE_SET **)&P);
    if ( IsFileInSystemConfig < 0 )
    {
      LODWORD(Thread[3].QueueListEntry.Flink) = 6;
      goto LABEL_122;
    }
    v29 = P;
    IsFileInSystemConfig = ClfsCreateLogFile(
                             &pplfoLog,
                             &Destination_8,
                             0xC0000000,
                             7u,
                             P,
                             3u,
                             8u,
                             0,
                             fLogOptionFlag,
                             0LL,
                             0);
    if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline()
      && IsFileInSystemConfig == -1072037875 )
    {
      CmpDeleteCorruptedLogfile(
        p_Source,
        &UnicodeString,
        &TmLogExt,
        (const UNICODE_STRING *)&TmContainerExt,
        1u,
        L"Container%020d",
        0x46u);
    }
    if ( UnicodeString.Buffer )
    {
      ExFreePool(UnicodeString.Buffer);
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    if ( v3 )
      RtlFreeAnsiString(&Source);
    ExFreePoolWithTag(v29, 0);
    if ( IsFileInSystemConfig >= 0 )
      break;
    if ( v59 )
    {
      LODWORD(Thread[3].QueueListEntry.Flink) = 7;
      goto LABEL_122;
    }
    Buffer = Destination_8.Buffer;
    if ( Destination_8.Buffer )
    {
      ExFreePool(Destination_8.Buffer);
      Destination_8 = 0LL;
    }
    CmpLogTxrInitEvent(Buffer, Thread, (unsigned int)IsFileInSystemConfig);
LABEL_63:
    v12 = Destination;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  IsFileInSystemConfig = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 8;
    goto LABEL_122;
  }
  v30 = ExAllocatePool2(0x100uLL);
  v31 = (struct _CLFS_MGMT_POLICY *)v30;
  if ( !v30 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 9;
    goto LABEL_122;
  }
  *(_DWORD *)v30 = 1;
  v32 = (unsigned __int16)TmContainerExt + 24;
  *(_DWORD *)(v30 + 12) = 9;
  *(_DWORD *)(v30 + 4) = v32;
  *(_WORD *)(v30 + 16) = TmContainerExt;
  memmove((void *)(v30 + 18), off_140E09FD8, (unsigned __int16)TmContainerExt);
  IsFileInSystemConfig = ClfsMgmtInstallPolicy(pplfoLog, v31, (unsigned __int16)TmContainerExt + 24);
  ExFreePoolWithTag(v31, 0);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 10;
    goto LABEL_122;
  }
  v33 = (HANDLE *)(Pool2 + 32);
  LogFileName.Length = Destination_8.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination_8.MaximumLength - CmpClfsLogPrefix.Length;
  ObjectAttributes.RootDirectory = 0LL;
  LogFileName.Buffer = (wchar_t *)((char *)Destination_8.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v34 = ZwCreateTransactionManager((PHANDLE)(Pool2 + 32), 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  IsFileInSystemConfig = v34;
  if ( v34 == -1073741771 )
  {
    if ( Destination_8.Buffer )
      RtlFreeAnsiString(&Destination_8);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    v13 = ClientCookie;
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v59 )
      goto LABEL_39;
    goto LABEL_63;
  }
  if ( v34 >= 0 )
    IsFileInSystemConfig = ZwRecoverTransactionManager(*v33);
LABEL_39:
  v26 = Destination_8.Buffer;
  if ( Destination_8.Buffer )
  {
    ExFreePool(Destination_8.Buffer);
    Destination_8 = 0LL;
  }
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 11;
LABEL_122:
    CmpLogTxrInitEvent(v26, Thread, (unsigned int)IsFileInSystemConfig);
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    if ( Source.Buffer )
      RtlFreeAnsiString(&Source);
    if ( Destination_8.Buffer )
      RtlFreeAnsiString(&Destination_8);
    v53 = *(void **)(Pool2 + 48);
    if ( v53 )
      ZwClose(v53);
    v54 = *(void **)(Pool2 + 40);
    if ( v54 )
      ObfDereferenceObject(v54);
    v55 = *(void **)(Pool2 + 32);
    if ( v55 )
      ZwClose(v55);
    ExFreePoolWithTag((PVOID)Pool2, 0x6D524D43u);
    ExDeleteResourceLite((PERESOURCE)Interval.QuadPart);
    ExFreePoolWithTag((PVOID)Interval.QuadPart, 0);
    HIDWORD(Thread[3].QueueListEntry.Flink) = IsFileInSystemConfig;
    return (unsigned int)IsFileInSystemConfig;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v35 = *v33;
  P = 0LL;
  IsFileInSystemConfig = ObReferenceObjectByHandle(
                           v35,
                           0xF003Fu,
                           (POBJECT_TYPE)stru_140FC01F0.SchedulerApc.ApcListEntry.Blink,
                           0,
                           &P,
                           0LL);
  *(_QWORD *)(Pool2 + 40) = P;
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 12;
    goto LABEL_122;
  }
  v36 = (HANDLE *)(Pool2 + 48);
  v37 = *(GUID *)(Thread->ThreadLock + 112);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ResourceManagerGuid = v37;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsFileInSystemConfig = ZwCreateResourceManager(
                           (PHANDLE)(Pool2 + 48),
                           0x1F007Fu,
                           *v33,
                           &ResourceManagerGuid,
                           &ObjectAttributes,
                           0,
                           0LL);
  if ( IsFileInSystemConfig == -1073741771 )
    IsFileInSystemConfig = ZwOpenResourceManager(
                             (PHANDLE)(Pool2 + 48),
                             0x1F007Fu,
                             *v33,
                             &ResourceManagerGuid,
                             &ObjectAttributes);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 13;
    goto LABEL_122;
  }
  IsFileInSystemConfig = ZwRecoverResourceManager(*v36);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 14;
    goto LABEL_122;
  }
  v38 = *v36;
  P = 0LL;
  IsFileInSystemConfig = ObReferenceObjectByHandle(
                           v38,
                           0x1F007Fu,
                           (POBJECT_TYPE)stru_140FC01F0.SchedulerApc.ApcListEntry.Flink,
                           0,
                           &P,
                           0LL);
  *(_QWORD *)(Pool2 + 56) = P;
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 15;
    goto LABEL_122;
  }
  if ( v3 )
  {
    *(_QWORD *)&v3[3].ThreadFlags2 = Pool2;
    *(_DWORD *)(Pool2 + 64) = 1;
    goto LABEL_54;
  }
  WheapPfaLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Pool2;
  v46 = &qword_140E09848;
  v47 = 7LL;
  while ( 2 )
  {
    v51 = v46[3];
    if ( v51 && (*(_DWORD *)(v51 + 160) & 2) == 0 )
    {
      ++*(_DWORD *)(Pool2 + 64);
      v52 = v46[3];
      goto LABEL_119;
    }
    if ( *v46 && (*(_DWORD *)(*v46 + 160) & 2) == 0 )
    {
      ++*(_DWORD *)(Pool2 + 64);
      v52 = *v46;
LABEL_119:
      *(_QWORD *)(v52 + 4160) = Pool2;
    }
    v46 += 23;
    if ( --v47 )
      continue;
    break;
  }
  v3 = v69;
  *(_QWORD *)(CmpMasterHive + 4160) = Pool2;
  ++*(_DWORD *)(Pool2 + 64);
LABEL_54:
  *(_QWORD *)(Pool2 + 80) = v3;
  LOCK_CM_RM_LIST();
  v39 = (__int64 *)qword_140EF9A68;
  if ( *(__int64 **)qword_140EF9A68 != &CmpRmListHead )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &CmpRmListHead;
  *(_QWORD *)(Pool2 + 8) = v39;
  *v39 = Pool2;
  qword_140EF9A68 = Pool2;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegion();
  if ( Destination )
    CmpStartRMLog(Pool2, 0LL);
  return 0LL;
}
