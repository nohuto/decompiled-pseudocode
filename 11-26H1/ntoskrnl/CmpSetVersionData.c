/*
 * XREFs of CmpSetVersionData @ 0x14085CA84
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     sprintf_s @ 0x14053E940 (sprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     CmpRestampVersion @ 0x14085C8CC (CmpRestampVersion.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     PsWow64IsMachineSupported @ 0x1409E82B0 (PsWow64IsMachineSupported.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B50A7C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void CmpSetVersionData()
{
  void *v0; // rsi
  _QWORD *i; // rdi
  const WCHAR *v2; // rbx
  NTSTATUS Key; // ebx
  UNICODE_STRING *v4; // rax
  NTSTATUS v5; // ebx
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  PVOID *ServerSiloGlobals; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING Data_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  STRING SourceString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v17[256]; // [rsp+148h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  DestinationString = 0LL;
  LODWORD(v13) = 0;
  Data_8 = 0LL;
  Data = 0;
  v0 = (void *)CmpHiveRootSecurityDescriptor();
  for ( i = &unk_140E09F28; ; i += 3 )
  {
    v2 = (const WCHAR *)*(i - 1);
    if ( !v2 )
      break;
    if ( *((_WORD *)i + 4) == 0x8664 || (unsigned int)PsWow64IsMachineSupported() )
    {
      RtlInitUnicodeString(&DestinationString, v2);
      LODWORD(ObjectAttributes.RootDirectory) = 48;
      ObjectAttributes.ObjectName = 0LL;
      LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
      *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
      ObjectAttributes.SecurityQualityOfService = v0;
      v13 = 0LL;
      if ( ZwCreateKey(
             &KeyHandle,
             4u,
             (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
             0,
             (PUNICODE_STRING)&nullclass,
             0,
             0LL) < 0 )
        goto LABEL_30;
      if ( *i )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)*i);
        ObjectAttributes.ObjectName = (PUNICODE_STRING)KeyHandle;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
        ObjectAttributes.SecurityQualityOfService = v0;
        v13 = 0LL;
        Key = ZwCreateKey(
                (PHANDLE)&ObjectAttributes,
                2u,
                (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
                0,
                (PUNICODE_STRING)&nullclass,
                0,
                0LL);
        ZwClose(KeyHandle);
        if ( Key < 0 )
          goto LABEL_30;
        v4 = *(UNICODE_STRING **)&ObjectAttributes.Length;
        KeyHandle = *(HANDLE *)&ObjectAttributes.Length;
      }
      else
      {
        v4 = (UNICODE_STRING *)KeyHandle;
      }
      ObjectAttributes.ObjectName = v4;
      LODWORD(ObjectAttributes.RootDirectory) = 48;
      LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
      *(_QWORD *)&ObjectAttributes.Attributes = &CmpWindowsNtString;
      ObjectAttributes.SecurityQualityOfService = v0;
      v13 = 0LL;
      v5 = ZwCreateKey(
             (PHANDLE)&ObjectAttributes,
             2u,
             (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
             0,
             (PUNICODE_STRING)&nullclass,
             0,
             0LL);
      ZwClose(KeyHandle);
      if ( v5 < 0 )
        goto LABEL_30;
      ObjectAttributes.ObjectName = *(PUNICODE_STRING *)&ObjectAttributes.Length;
      *(_QWORD *)&ObjectAttributes.Attributes = &CmpCurrentVersionString;
      LODWORD(ObjectAttributes.RootDirectory) = 48;
      LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
      ObjectAttributes.SecurityQualityOfService = v0;
      v13 = 0LL;
      v6 = ZwCreateKey(
             &KeyHandle,
             3u,
             (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
             0,
             (PUNICODE_STRING)&nullclass,
             0,
             0LL);
      ZwClose(*(HANDLE *)&ObjectAttributes.Length);
      if ( v6 < 0 )
        goto LABEL_30;
      ZwSetValueKey(
        KeyHandle,
        (PUNICODE_STRING)&CmpCurrentVersionString,
        0,
        1u,
        CmVersionString.Buffer,
        CmVersionString.Length + 2);
      Data = 10;
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMajorVersionString, 0, 4u, &Data, 4u);
      Data = 0;
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMinorVersionString, 0, 4u, &Data, 4u);
      Data = 0;
      if ( *(_QWORD *)((char *)&CmpFreezeListLock.116 + 4)
        && *(_DWORD *)(*(_QWORD *)((char *)&CmpFreezeListLock.116 + 4) + 8LL) )
      {
        CmpRestampVersion(KeyHandle);
      }
      sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
      RtlInitAnsiString(&SourceString, DstBuf);
      *(_DWORD *)&Data_8.Length = 0x1000000;
      Data_8.Buffer = (wchar_t *)v17;
      if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) >= 0 )
      {
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
        if ( CmCSDVersionString.Length )
        {
          ZwSetValueKey(
            KeyHandle,
            (PUNICODE_STRING)&CmpCsdVersionString,
            0,
            1u,
            CmCSDVersionString.Buffer,
            CmCSDVersionString.Length + 2);
          if ( CmCSDVersionString.Buffer )
            ExFreePool(CmCSDVersionString.Buffer);
          RtlInitUnicodeString(&CmCSDVersionString, 0LL);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdVersionString);
        }
      }
      if ( CmNtSpBuildNumber )
      {
        sprintf_s(DstBuf, 0x80uLL, "%u", CmNtSpBuildNumber);
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&Data_8.Length = 0x1000000;
        Data_8.Buffer = (wchar_t *)v17;
        if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) < 0 )
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
      }
      else
      {
        ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
      }
      v7 = HalSystemVectorDispatchEntry();
      ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals(v7);
      ZwSetValueKey(
        KeyHandle,
        (PUNICODE_STRING)&CmpSystemRootString,
        0,
        1u,
        ServerSiloGlobals[155],
        *((unsigned __int16 *)ServerSiloGlobals + 616) + 2);
      ZwClose(KeyHandle);
    }
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePool(CmCSDVersionString.Buffer);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_30:
  ExFreePoolWithTag(v0, 0);
}
