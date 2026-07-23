/*
 * XREFs of BapdpProcessVsmKeyBlobs @ 0x140CE8DD8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline @ 0x140609C8C (Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_49798962__private_IsEnabledDeviceUsageNoInline @ 0x1406CF1AC (Feature_49798962__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF6E60 (RtlIsStateSeparationEnabled.c)
 *     BapdGetISRegistryKey @ 0x140C0E2E8 (BapdGetISRegistryKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessVsmKeyBlobs(int a1)
{
  ULONG *Data; // rbx
  WCHAR *Pool2; // rdi
  unsigned int v3; // r15d
  int v4; // r13d
  __int64 *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned int v8; // eax
  NTSTRSAFE_PCWSTR *v9; // r12
  __int64 *v10; // r13
  int v11; // eax
  NTSTATUS v12; // eax
  BOOLEAN IsStateSeparationEnabled; // al
  const wchar_t *v14; // r8
  char v15; // r11
  HANDLE FileHandle; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v22; // [rsp+120h] [rbp+77h]
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  ResultLength = 0;
  Handle = 0LL;
  Data = 0LL;
  FileHandle = 0LL;
  Pool2 = 0LL;
  IoStatusBlock = 0LL;
  v3 = 0;
  v4 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( (unsigned int)Feature_49798962__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = VsmKeyBlobsBothArb;
    v6 = 7;
  }
  else if ( (unsigned int)Feature_49798962__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = VsmKeyBlobsDrtmArbOnly;
    v6 = 4;
  }
  else if ( (unsigned int)Feature_SrtmAntiRollback__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = VsmKeyBlobsSrtmArbOnly;
    v6 = 6;
  }
  else
  {
    v5 = VsmKeyBlobsNeitherArb;
    v6 = 3;
  }
  if ( (int)BapdGetISRegistryKey(&Handle) < 0 )
    goto LABEL_22;
  v8 = 0;
  v22 = 0;
  v9 = (NTSTRSAFE_PCWSTR *)(v5 + 3);
  while ( 1 )
  {
    if ( Data )
    {
      ExFreePoolWithTag(Data, 0);
      v8 = v22;
      Data = 0LL;
    }
    if ( !v4 )
    {
      ResultLength = 0;
      v10 = &v5[4 * v8];
      v11 = BapdpQueryData(v7, v10, 0LL, 0LL, &ResultLength, 0LL);
      if ( v11 == -1073741789 )
      {
        Data = (ULONG *)ExAllocatePool2(64LL, ResultLength, 0x64506142u);
        if ( !Data )
        {
LABEL_16:
          v4 = a1;
          goto LABEL_17;
        }
      }
      else if ( v11 < 0 )
      {
        goto LABEL_16;
      }
      if ( (int)BapdpQueryData(v7, v10, 0LL, Data, &ResultLength, 0LL) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, *(v9 - 1));
        ZwSetValueKey(Handle, &DestinationString, 0, 3u, Data, ResultLength);
      }
      goto LABEL_16;
    }
    if ( (unsigned int)Feature_49798962__private_IsEnabledDeviceUsageNoInline() && !**v9 )
      goto LABEL_17;
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, *(v9 - 1));
    v12 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v12 != -1073741789 )
      break;
    Data = (ULONG *)ExAllocatePool2(64LL, ResultLength, 0x64506142u);
    if ( Data )
      goto LABEL_34;
LABEL_17:
    v9 += 4;
    v8 = v22 + 1;
    v22 = v8;
    if ( v8 >= v6 )
      goto LABEL_18;
  }
  if ( v12 < 0 )
    goto LABEL_17;
LABEL_34:
  if ( ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Data, ResultLength, &ResultLength) < 0 )
    goto LABEL_17;
  ZwDeleteValueKey(Handle, &DestinationString);
  if ( Pool2 )
  {
    Pool2[v3] = 0;
    goto LABEL_42;
  }
  Pool2 = (WCHAR *)ExAllocatePool2(64LL, 0x208uLL, 0x64506142u);
  if ( Pool2 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v14 = L"\\OSDataRoot\\Windows\\";
    if ( !IsStateSeparationEnabled )
      v14 = L"\\SystemRoot\\";
    if ( RtlStringCchCopyW(Pool2, 0x104uLL, v14) >= 0 )
    {
      v3 = v15 != 0 ? 20 : 12;
LABEL_42:
      if ( RtlStringCchCatW(Pool2, 0x104uLL, *v9) >= 0 )
      {
        RtlInitUnicodeStringEx(&DestinationString, Pool2);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(&FileHandle, 0x40100000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x60u, 0LL, 0) >= 0 )
        {
          ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Data + 3, Data[2], 0LL, 0LL);
          ZwClose(FileHandle);
          FileHandle = 0LL;
        }
      }
      goto LABEL_17;
    }
  }
LABEL_18:
  if ( Data )
    ExFreePoolWithTag(Data, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
}
