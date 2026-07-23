/*
 * XREFs of EmInitSystem @ 0x140D0DE84
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     RtlAppendStringToString @ 0x140B22640 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x140B5B680 (EmpProviderRegister.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpParseInfDatabase @ 0x140CBC420 (EmpParseInfDatabase.c)
 *     EmpCacheBiosDate @ 0x140D0E39C (EmpCacheBiosDate.c)
 */

__int64 __fastcall EmInitSystem(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _DWORD *Pool2; // rsi
  ULONG_PTR v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edx
  int v9; // ebx
  NTSTATUS v11; // eax
  ULONG v12; // r12d
  ULONG i; // r13d
  NTSTATUS v14; // eax
  ULONG v15; // ebx
  void *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  void *v20; // rcx
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-10h]
  char v31; // [rsp+100h] [rbp+0h] BYREF

  v30 = 0LL;
  Pool2 = 0LL;
  v5 = 0LL;
  ResultLength = 0;
  Handle = (HANDLE)-1LL;
  FileHandle = (HANDLE)-1LL;
  FileInformation = 0LL;
  Destination = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
LABEL_6:
      v9 = 0;
      goto LABEL_7;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Errata\\Dynamic");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v9 >= 0 )
    {
      v11 = ZwQueryKey(Handle, KeyFullInformation, 0LL, 0, &ResultLength);
      v9 = v11;
      if ( v11 == -2147483643 || v11 == -1073741789 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 0x74694D45u);
        if ( Pool2 )
        {
          v9 = ZwQueryKey(Handle, KeyFullInformation, Pool2, ResultLength, &ResultLength);
          if ( v9 < 0 )
            goto LABEL_7;
          v12 = Pool2[10] + 16;
          v5 = ExAllocatePool2(256LL, v12, 0x74694D45u);
          if ( v5 )
          {
            for ( i = 0; ; ++i )
            {
              v14 = ZwEnumerateValueKey(Handle, i, KeyValuePartialInformation, (PVOID)v5, v12, &ResultLength);
              v9 = v14;
              if ( v14 == -2147483622 )
                break;
              if ( v14 < 0 )
                goto LABEL_7;
              *(_DWORD *)&Destination.Length = 0x1000000;
              Destination.Buffer = &v31;
              RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\inf\\");
              RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
              *(_BYTE *)(*(unsigned int *)(v5 + 8) + v5 + 12) = 0;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 12));
              RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v9 = ZwCreateFile(
                     &FileHandle,
                     0x120089u,
                     &ObjectAttributes,
                     &IoStatusBlock,
                     0LL,
                     0x80u,
                     1u,
                     1u,
                     0x20u,
                     0LL,
                     0);
              if ( v9 < 0 )
                goto LABEL_7;
              v9 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
              if ( v9 < 0 )
              {
                ZwClose(FileHandle);
                goto LABEL_7;
              }
              if ( HIDWORD(FileInformation) )
              {
                ZwClose(FileHandle);
                goto LABEL_19;
              }
              v15 = DWORD2(FileInformation);
              LODWORD(v24) = DWORD2(FileInformation);
              v16 = (void *)ExAllocatePool2(256LL, DWORD2(FileInformation), 0x74694D45u);
              v17 = (__int64)v16;
              if ( !v16 )
              {
                ZwClose(FileHandle);
                goto LABEL_21;
              }
              v9 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v16, v15, 0LL, 0LL);
              ZwClose(FileHandle);
              v20 = (void *)v17;
              if ( v9 < 0 )
                goto LABEL_35;
              v9 = EmpParseInfDatabase(v17, v24, v18, v19);
              if ( v9 < 0 )
              {
                v20 = (void *)v17;
LABEL_35:
                ExFreePoolWithTag(v20, 0x74694D45u);
                goto LABEL_7;
              }
            }
            goto LABEL_6;
          }
        }
LABEL_21:
        v9 = -1073741670;
        goto LABEL_7;
      }
      if ( !v11 )
LABEL_19:
        v9 = -1073741823;
    }
  }
  else
  {
    *((_DWORD *)&EmpParseLock.0 + 1) |= 0x80000000;
    *(_QWORD *)&EmpParseLock.CurrentRunTime = EmpRuleUpdateWorkerThread;
    *(_QWORD *)&EmpParseLock.Header.Lock = 0LL;
    EmpParseLock.QuantumTarget = 0LL;
    *(_QWORD *)&EmpParseLock.SystemCallNumber = 0LL;
    EmpParseLock.Header.WaitListHead.Blink = 0LL;
    EmpParseLock.SListFaultAddress = 0LL;
    EmpParseLock.StateSaveArea = 0LL;
    EmpParseLock.Header.WaitListHead.Flink = 0LL;
    EmpTargetRuleListHead = 0LL;
    EmpRuleUpdateQueue = 0LL;
    EmpWorkerBusy = 0;
    EmpParseLock.KernelStack = 0LL;
    EmpParseLock.ThreadLock = 0LL;
    v6 = *(_QWORD *)(a2 + 240);
    EmpStringTable = 0LL;
    EmpNumberOfEntryTypes = 0;
    EmpNumberOfCallbacks = 0;
    v7 = *(_QWORD *)(v6 + 24);
    EmpNumberOfRules = 0;
    EmpNumberOfStrings = 0;
    EmpNumberOfTargetRules = 0;
    if ( !v7 || (v8 = *(_DWORD *)(v6 + 32)) == 0 || (v9 = EmpParseInfDatabase(v7, v8, a3, a4), v9 >= 0) )
    {
      EmpCacheBiosDate();
      EmpProviderRegister(0LL, 0LL, 0, (struct _KLOCK_ENTRIES *)&off_140005B00, 6u, &v24);
      EmpProviderRegister(0LL, 0LL, 0, (struct _KLOCK_ENTRIES *)&off_140005B90, 1u, &v24);
      v9 = EmpProviderRegister(0LL, 0LL, 0, (struct _KLOCK_ENTRIES *)&BuiltinCallbackReg, 6u, EmBuiltinProviderHandle);
      if ( v9 >= 0 )
        goto LABEL_6;
    }
  }
LABEL_7:
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x74694D45u);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, 0x74694D45u);
  return (unsigned int)v9;
}
