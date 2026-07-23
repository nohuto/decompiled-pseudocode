/*
 * XREFs of CmpInitCmRM @ 0x140A7E4A0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x1404F3CAC (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline @ 0x14050BB08 (Feature_AutoCleanupClfsLogfiles__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x140729860 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x1407299C0 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x14072A680 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x14072AF00 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x14072AF20 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpDeleteCorruptedLogfile @ 0x1408691C8 (CmpDeleteCorruptedLogfile.c)
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 *     LOCK_CM_RM_LIST @ 0x1408B5570 (LOCK_CM_RM_LIST.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408BC384 (CmpQueryFileSecurityDescriptor.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
 *     CmpIsFileInSystemConfig @ 0x140A80290 (CmpIsFileInSystemConfig.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 *     CmpLogTxrInitEvent @ 0x140A807C4 (CmpLogTxrInitEvent.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
  _QWORD *Pool2; // rsi
  struct _ERESOURCE *QuadPart; // rdx
  char v12; // di
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r9
  unsigned __int64 ThreadLock; // r8
  UUID v17; // xmm6
  UUID v18; // xmm7
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  __int64 v26; // rcx
  struct _LIST_ENTRY *Blink; // r15
  wchar_t *v28; // rcx
  UNICODE_STRING *p_Source; // r12
  unsigned __int16 Length; // ax
  PSECURITY_DESCRIPTOR v31; // r15
  __int64 v32; // rax
  struct _CLFS_MGMT_POLICY *v33; // r15
  int v34; // ecx
  HANDLE *v35; // r12
  NTSTATUS v36; // eax
  HANDLE v37; // rcx
  HANDLE *v38; // r15
  GUID v39; // xmm0
  HANDLE v40; // rcx
  _QWORD *v41; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v43; // ecx
  bool v44; // zf
  wchar_t *Buffer; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // rcx
  __int64 v49; // r13
  __int64 v50; // rcx
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
  UNICODE_STRING GuidString; // [rsp+A8h] [rbp-60h] BYREF
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
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
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
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
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
    ExFreePoolWithTag(Pool2, 0x6D524D43u);
    LODWORD(Thread[3].QueueListEntry.Flink) = 2;
    goto LABEL_79;
  }
  v12 = Destination;
  Pool2[3] = Pool2 + 2;
  Pool2[2] = Pool2 + 2;
  Pool2[11] = 0LL;
  Pool2[12] = 0LL;
  *((_DWORD *)Pool2 + 26) = Destination != 0 ? 4 : 0;
  *(_QWORD *)((char *)Pool2 + 108) = 0LL;
  *((_DWORD *)Pool2 + 17) = 0;
  Pool2[9] = 0LL;
  Pool2[16] = QuadPart;
  ExInitializeResourceLite(QuadPart);
  ThreadLock = Thread->ThreadLock;
  v17 = Uuid;
  v18 = v74;
  if ( *(_DWORD *)(ThreadLock + 164) == 1836346738 )
  {
    v15 = *((_QWORD *)&v71 + 1);
    v46 = v71;
    v47 = v71 - *(_QWORD *)(ThreadLock + 148);
    if ( (_QWORD)v71 == *(_QWORD *)(ThreadLock + 148) )
      v47 = *((_QWORD *)&v71 + 1) - *(_QWORD *)(ThreadLock + 156);
    if ( !v47 )
    {
      v59 = 1;
      v4 = 1;
      *(UUID *)(ThreadLock + 148) = v74;
    }
    ThreadLock = Thread->ThreadLock;
    v50 = v46 - *(_QWORD *)(ThreadLock + 112);
    if ( v46 == *(_QWORD *)(ThreadLock + 112) )
      v50 = v15 - *(_QWORD *)(ThreadLock + 120);
    if ( !v50 )
    {
      v4 = 1;
      *(UUID *)(ThreadLock + 112) = v17;
    }
    v14 = (_QWORD *)Thread->ThreadLock;
    v13 = v46 - v14[16];
    if ( !v13 )
      v13 = v15 - v14[17];
    if ( !v13 )
    {
      v4 = 1;
      *((_OWORD *)v14 + 8) = *((_OWORD *)v14 + 7);
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
    v19 = Thread->ThreadLock;
    if ( !v3 )
      v12 = 1;
    v59 = 1;
    Destination = v12;
    *(UUID *)(v19 + 148) = v18;
    *(UUID *)(Thread->ThreadLock + 112) = v17;
    *(UUID *)(Thread->ThreadLock + 128) = v17;
LABEL_16:
    CmpLockRegistry(v14, v13, ThreadLock, v15);
    HvLockHiveFlusherShared((__int64)Thread, v20, v21, v22);
    HvLockHiveWriter((__int64)Thread, v23, v24, v25);
    HvMarkBaseBlockDirty(Thread);
    HvUnlockHiveWriter((__int64)Thread);
    HvUnlockHiveFlusherShared((__int64)Thread);
    CmpUnlockRegistry(v26);
LABEL_18:
    Blink = Thread[1].WaitBlock[0].WaitListEntry.Blink;
    IsFileInSystemConfig = RtlStringFromGUIDEx((PGUID)(Thread->ThreadLock + 148), &GuidString, 1u);
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
      v43 = fLogOptionFlag | 0x1000000;
      v44 = IsEnabledDeviceUsageNoInline == 0;
      Length = CmpLogPath.Length;
      if ( v44 )
        v43 = fLogOptionFlag;
      fLogOptionFlag = v43;
    }
    Destination_8.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + Length;
    Destination_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Destination_8.Buffer )
    {
      IsFileInSystemConfig = -1073741670;
      LODWORD(Thread[3].QueueListEntry.Flink) = 5;
      goto LABEL_122;
    }
    RtlAppendUnicodeStringToString(&Destination_8, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination_8, p_Source);
    RtlAppendUnicodeStringToString(&Destination_8, &GuidString);
    RtlAppendUnicodeStringToString(&Destination_8, &TmLogExt);
    IsFileInSystemConfig = CmpQueryFileSecurityDescriptor(Blink, (struct _PRIVILEGE_SET **)&P);
    if ( IsFileInSystemConfig < 0 )
    {
      LODWORD(Thread[3].QueueListEntry.Flink) = 6;
      goto LABEL_122;
    }
    v31 = P;
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
        &GuidString,
        &TmLogExt,
        (const UNICODE_STRING *)&TmContainerExt,
        1u,
        L"Container%020d",
        0x46u);
    }
    if ( GuidString.Buffer )
    {
      ExFreePool(GuidString.Buffer);
      *(_QWORD *)&GuidString.Length = 0LL;
      GuidString.Buffer = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    if ( v3 )
      RtlFreeAnsiString(&Source);
    ExFreePoolWithTag(v31, 0);
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
  v32 = ExAllocatePool2(0x100uLL);
  v33 = (struct _CLFS_MGMT_POLICY *)v32;
  if ( !v32 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 9;
    goto LABEL_122;
  }
  *(_DWORD *)v32 = 1;
  v34 = (unsigned __int16)TmContainerExt + 24;
  *(_DWORD *)(v32 + 12) = 9;
  *(_DWORD *)(v32 + 4) = v34;
  *(_WORD *)(v32 + 16) = TmContainerExt;
  memmove((void *)(v32 + 18), off_140E09FD8, (unsigned __int16)TmContainerExt);
  IsFileInSystemConfig = ClfsMgmtInstallPolicy(pplfoLog, v33, (unsigned __int16)TmContainerExt + 24);
  ExFreePoolWithTag(v33, 0);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 10;
    goto LABEL_122;
  }
  v35 = (HANDLE *)(Pool2 + 4);
  LogFileName.Length = Destination_8.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination_8.MaximumLength - CmpClfsLogPrefix.Length;
  ObjectAttributes.RootDirectory = 0LL;
  LogFileName.Buffer = (wchar_t *)((char *)Destination_8.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v36 = ZwCreateTransactionManager((PHANDLE)Pool2 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  IsFileInSystemConfig = v36;
  if ( v36 == -1073741771 )
  {
    if ( Destination_8.Buffer )
      RtlFreeAnsiString(&Destination_8);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    v14 = ClientCookie;
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v59 )
      goto LABEL_39;
    goto LABEL_63;
  }
  if ( v36 >= 0 )
    IsFileInSystemConfig = ZwRecoverTransactionManager(*v35);
LABEL_39:
  v28 = Destination_8.Buffer;
  if ( Destination_8.Buffer )
  {
    ExFreePool(Destination_8.Buffer);
    Destination_8 = 0LL;
  }
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 11;
LABEL_122:
    CmpLogTxrInitEvent(v28, Thread, (unsigned int)IsFileInSystemConfig);
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
    if ( GuidString.Buffer )
      RtlFreeAnsiString(&GuidString);
    if ( Source.Buffer )
      RtlFreeAnsiString(&Source);
    if ( Destination_8.Buffer )
      RtlFreeAnsiString(&Destination_8);
    v53 = (void *)Pool2[6];
    if ( v53 )
      ZwClose(v53);
    v54 = (void *)Pool2[5];
    if ( v54 )
      ObfDereferenceObject(v54);
    v55 = (void *)Pool2[4];
    if ( v55 )
      ZwClose(v55);
    ExFreePoolWithTag(Pool2, 0x6D524D43u);
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
  v37 = *v35;
  P = 0LL;
  IsFileInSystemConfig = ObReferenceObjectByHandle(
                           v37,
                           0xF003Fu,
                           (POBJECT_TYPE)stru_140FC11F0.SchedulerApc.ApcListEntry.Flink,
                           0,
                           &P,
                           0LL);
  Pool2[5] = P;
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 12;
    goto LABEL_122;
  }
  v38 = (HANDLE *)(Pool2 + 6);
  v39 = *(GUID *)(Thread->ThreadLock + 112);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ResourceManagerGuid = v39;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsFileInSystemConfig = ZwCreateResourceManager(
                           (PHANDLE)Pool2 + 6,
                           0x1F007Fu,
                           *v35,
                           &ResourceManagerGuid,
                           &ObjectAttributes,
                           0,
                           0LL);
  if ( IsFileInSystemConfig == -1073741771 )
    IsFileInSystemConfig = ZwOpenResourceManager(
                             (PHANDLE)Pool2 + 6,
                             0x1F007Fu,
                             *v35,
                             &ResourceManagerGuid,
                             &ObjectAttributes);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 13;
    goto LABEL_122;
  }
  IsFileInSystemConfig = ZwRecoverResourceManager(*v38);
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 14;
    goto LABEL_122;
  }
  v40 = *v38;
  P = 0LL;
  IsFileInSystemConfig = ObReferenceObjectByHandle(
                           v40,
                           0x1F007Fu,
                           (POBJECT_TYPE)stru_140FC11F0.SchedulerApc.Thread,
                           0,
                           &P,
                           0LL);
  Pool2[7] = P;
  if ( IsFileInSystemConfig < 0 )
  {
    LODWORD(Thread[3].QueueListEntry.Flink) = 15;
    goto LABEL_122;
  }
  if ( v3 )
  {
    *(_QWORD *)&v3[3].ThreadFlags2 = Pool2;
    *((_DWORD *)Pool2 + 16) = 1;
    goto LABEL_54;
  }
  *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] = Pool2;
  v48 = &qword_140E09848;
  v49 = 7LL;
  while ( 2 )
  {
    v51 = v48[3];
    if ( v51 && (*(_DWORD *)(v51 + 160) & 2) == 0 )
    {
      ++*((_DWORD *)Pool2 + 16);
      v52 = v48[3];
      goto LABEL_119;
    }
    if ( *v48 && (*(_DWORD *)(*v48 + 160) & 2) == 0 )
    {
      ++*((_DWORD *)Pool2 + 16);
      v52 = *v48;
LABEL_119:
      *(_QWORD *)(v52 + 4160) = Pool2;
    }
    v48 += 23;
    if ( --v49 )
      continue;
    break;
  }
  v3 = v69;
  *(_QWORD *)(CmpMasterHive + 4160) = Pool2;
  ++*((_DWORD *)Pool2 + 16);
LABEL_54:
  Pool2[10] = v3;
  LOCK_CM_RM_LIST();
  v41 = (_QWORD *)qword_140EF9C78;
  if ( *(__int64 **)qword_140EF9C78 != &CmpRmListHead )
    __fastfail(3u);
  *Pool2 = &CmpRmListHead;
  Pool2[1] = v41;
  *v41 = Pool2;
  qword_140EF9C78 = (__int64)Pool2;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegion();
  if ( Destination )
    CmpStartRMLog((__int64)Pool2, 0LL);
  return 0LL;
}
