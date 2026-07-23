/*
 * XREFs of CmpCreateHardwareProfiles @ 0x140CF0118
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     CmpOpenDevicesControlSet @ 0x140852D30 (CmpOpenDevicesControlSet.c)
 *     CmDeleteKeyRecursive @ 0x1408577C8 (CmDeleteKeyRecursive.c)
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     CmpAddAliasEntry @ 0x140CEF7A8 (CmpAddAliasEntry.c)
 *     CmpAddDockingInfo @ 0x140CEF9D8 (CmpAddDockingInfo.c)
 */

__int64 __fastcall CmpCreateHardwareProfiles(__int64 a1)
{
  char v2; // r15
  int v3; // eax
  HANDLE v4; // rsi
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdi
  unsigned __int16 v8; // dx
  __int64 v9; // r8
  ULONG Class; // [rsp+28h] [rbp-E0h]
  ULONG Disposition; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int Data; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE v19; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v21; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE v23; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v25; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v27[256]; // [rsp+168h] [rbp+60h] BYREF
  int v28[64]; // [rsp+268h] [rbp+160h] BYREF

  Handle = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes_8, 0, 44);
  Disposition = 0;
  v25 = 0LL;
  String1 = 0LL;
  KeyHandle = 0LL;
  DestinationString_8 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  DestinationString = 0LL;
  Data = 0;
  v2 = 0;
  v3 = CmpOpenDevicesControlSet(a1, &v25, &String1);
  v4 = v25;
  v5 = v3;
  if ( v3 >= 0 )
  {
    ObjectAttributes_8.RootDirectory = v25;
    ObjectAttributes_8.Attributes = 576;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes_8.Length = 48;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes_8);
    v5 = v6;
    if ( v6 == -1073741772 )
    {
      if ( !HIDWORD(WheapPfaLock.KernelStack) )
        goto LABEL_44;
      ObjectAttributes_8.Length = 48;
      ObjectAttributes_8.ObjectName = (PUNICODE_STRING)&CmpControlString;
      ObjectAttributes_8.RootDirectory = v4;
      ObjectAttributes_8.Attributes = 576;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
      if ( v5 < 0 )
        goto LABEL_44;
      ZwClose(Handle);
      Handle = 0LL;
      ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"$&";
      ObjectAttributes_8.Length = 48;
      ObjectAttributes_8.RootDirectory = v4;
      ObjectAttributes_8.Attributes = 576;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
      if ( v5 < 0 )
        goto LABEL_44;
      ObjectAttributes_8.RootDirectory = KeyHandle;
      ObjectAttributes_8.Length = 48;
      ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes_8.Attributes = 576;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
      if ( v5 < 0 )
        goto LABEL_44;
      DestinationString_8.MaximumLength = 256;
      DestinationString_8.Buffer = (wchar_t *)v27;
      RtlUnicodeStringPrintf(&DestinationString_8, L"%04d", 0LL);
      ObjectAttributes_8.RootDirectory = Handle;
      ObjectAttributes_8.Length = 48;
      ObjectAttributes_8.ObjectName = &DestinationString_8;
      ObjectAttributes_8.Attributes = 576;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&v19, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
      ZwClose(Handle);
      Handle = 0LL;
      if ( v5 < 0 )
        goto LABEL_44;
      ZwClose(v19);
      v19 = 0LL;
      v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u);
      if ( v5 < 0 )
        goto LABEL_44;
    }
    else
    {
      if ( v6 < 0 )
        goto LABEL_44;
      v5 = ZwQueryValueKey(
             KeyHandle,
             (PUNICODE_STRING)&CmpCurrentConfigString,
             KeyValueFullInformation,
             KeyValueInformation,
             0x80u,
             &ResultLength);
      if ( v5 < 0 || KeyValueInformation[1] != 4 )
        goto LABEL_44;
      Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
    }
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"\"$";
    ObjectAttributes_8.RootDirectory = v4;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&v21, 0x20019u, &ObjectAttributes_8);
    if ( v5 == -1073741772 )
    {
      if ( !HIDWORD(WheapPfaLock.KernelStack) )
        goto LABEL_44;
      v5 = ZwCreateKey(&v21, 0x20019u, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
      DestinationString_8.Buffer = (wchar_t *)v27;
      RtlUnicodeStringPrintf(&DestinationString_8, L"%04d", Data);
      ObjectAttributes_8.RootDirectory = v21;
      ObjectAttributes_8.Attributes = 576;
      ObjectAttributes_8.ObjectName = &DestinationString_8;
      ObjectAttributes_8.Length = 48;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&v19, 0x2001Fu, &ObjectAttributes_8);
      if ( v5 == -1073741772 )
      {
        if ( !HIDWORD(WheapPfaLock.KernelStack) )
          goto LABEL_44;
        v5 = ZwCreateKey(&v19, 0x2001Fu, &ObjectAttributes_8, 0, 0LL, 0, &Disposition);
      }
      if ( v5 >= 0 )
      {
        v7 = *(_QWORD *)(a1 + 240);
        v8 = *(_WORD *)(v7 + 8);
        if ( v8 == 3 )
        {
          v8 = 1;
          *(_WORD *)(v7 + 8) = 1;
        }
        if ( *(_WORD *)(v7 + 4) == 1 )
          goto LABEL_30;
        if ( *(_WORD *)(v7 + 4) == 2 )
        {
LABEL_31:
          ObjectAttributes_8.RootDirectory = KeyHandle;
          ObjectAttributes_8.Length = 48;
          ObjectAttributes_8.ObjectName = (PUNICODE_STRING)&CmpStrCurrentDockInfoString;
          ObjectAttributes_8.Attributes = 576;
          *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
          if ( ZwCreateKey(&DestinationString, 0x2001Fu, &ObjectAttributes_8, 0, 0LL, 1u, &Disposition) >= 0 )
          {
            CmpAddDockingInfo(DestinationString, v7 + 4);
            ZwClose(DestinationString);
            DestinationString = 0LL;
          }
          if ( *(_WORD *)(v7 + 8) == 1 )
            v2 = 1;
          goto LABEL_35;
        }
        if ( *(_WORD *)(v7 + 4) != 3 )
        {
LABEL_35:
          ObjectAttributes_8.Length = 48;
          ObjectAttributes_8.ObjectName = (PUNICODE_STRING)L"24";
          ObjectAttributes_8.RootDirectory = v4;
          ObjectAttributes_8.Attributes = 576;
          *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&DestinationString, 0xF003Fu, &ObjectAttributes_8) >= 0 )
          {
            CmDeleteKeyRecursive(DestinationString, 0LL, (__int64)v28, 256, Class);
            ZwClose(DestinationString);
            DestinationString = 0LL;
          }
          v5 = ZwCreateKey(&DestinationString, 0x20u, &ObjectAttributes_8, 0, 0LL, 3u, &Disposition);
          if ( v5 >= 0 )
          {
            *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
            DestinationString_8.Buffer = (wchar_t *)v27;
            RtlUnicodeStringPrintf(
              &DestinationString_8,
              L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
              &String1,
              Data);
            v5 = ZwSetValueKey(
                   DestinationString,
                   (PUNICODE_STRING)&PspSiloMonitorLock.152,
                   0,
                   6u,
                   DestinationString_8.Buffer,
                   DestinationString_8.Length);
            if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveNameString, 1u) )
            {
              ZwClose(DestinationString);
              DestinationString = 0LL;
              *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
              DestinationString_8.Buffer = (wchar_t *)v27;
              RtlUnicodeStringPrintf(
                &DestinationString_8,
                L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
                &CmpSystemHiveNameString,
                L"24");
              ObjectAttributes_8.Length = 48;
              ObjectAttributes_8.ObjectName = &DestinationString_8;
              ObjectAttributes_8.RootDirectory = 0LL;
              ObjectAttributes_8.Attributes = 576;
              *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
              v5 = ZwCreateKey(&DestinationString, 0x20u, &ObjectAttributes_8, 0, 0LL, 3u, &Disposition);
              if ( v5 >= 0 )
              {
                *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
                DestinationString_8.Buffer = (wchar_t *)v27;
                RtlUnicodeStringPrintf(
                  &DestinationString_8,
                  L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
                  &String1,
                  L"24");
                v5 = ZwSetValueKey(
                       DestinationString,
                       (PUNICODE_STRING)&PspSiloMonitorLock.152,
                       0,
                       6u,
                       DestinationString_8.Buffer,
                       DestinationString_8.Length);
              }
            }
          }
          if ( v2 )
          {
            v23 = 0LL;
            LOBYTE(v14) = 0;
            LODWORD(v25) = 131073;
            WORD2(v25) = 0;
            v5 = CmSetAcpiHwProfile((unsigned __int16 *)&v25, (__int64)CmpHwprofileDefaultSelect, v9, &v23, &v14);
            if ( v5 >= 0 )
              ZwClose(v23);
          }
          goto LABEL_44;
        }
        v5 = CmpCloneHwProfile(KeyHandle, v21, v19, Data, v8, &v19, &Data);
        if ( v5 < 0 )
        {
          v19 = 0LL;
          goto LABEL_44;
        }
        v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u);
        if ( v5 >= 0 )
        {
LABEL_30:
          CmpAddAliasEntry(KeyHandle, v7 + 4, Data);
          goto LABEL_31;
        }
      }
    }
  }
LABEL_44:
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v19 )
    ZwClose(v19);
  if ( v21 )
    ZwClose(v21);
  if ( DestinationString )
    ZwClose(DestinationString);
  return (unsigned int)v5;
}
