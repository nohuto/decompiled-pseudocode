/*
 * XREFs of IopCreateSecureDeviceClassSettings @ 0x140AF8694
 * Callers:
 *     IoCreateDeviceSecure @ 0x140AF8350 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     IopOpenRegistryKeyEx @ 0x140AA8B70 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140AF90BC (IopCreateRegistryKeyEx.c)
 *     IopQuerySecureDeviceClassState @ 0x140B2F62C (IopQuerySecureDeviceClassState.c)
 *     IopGetPersistedStateLocation @ 0x140B3C924 (IopGetPersistedStateLocation.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateSecureDeviceClassSettings(unsigned int *a1, __int64 a2, _BYTE *a3)
{
  WCHAR *v6; // rdi
  int SecureDeviceClassState; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int PersistedStateLocation; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  PVOID *v14; // rbx
  HANDLE v15; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  PCWSTR SourceString[3]; // [rsp+A8h] [rbp+1Fh] BYREF
  int v23; // [rsp+108h] [rbp+7Fh] BYREF

  *(_QWORD *)&String2.Length = 7471216LL;
  v23 = 0;
  String2.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class";
  v15 = 0LL;
  SourceString[0] = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  String1 = 0LL;
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  SecureDeviceClassState = RtlStringFromGUIDEx(a1, (__int64)&DestinationString, 1);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &String2;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SecureDeviceClassState = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_15;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SecureDeviceClassState = ZwOpenKey(&v15, 0x20019u, &ObjectAttributes);
  if ( SecureDeviceClassState < 0
    || (RtlInitUnicodeString(&String1, L"Properties"),
        SecureDeviceClassState = IopOpenRegistryKeyEx(&Handle, v15, &String1, 0x20019u),
        SecureDeviceClassState < 0) )
  {
LABEL_15:
    if ( SecureDeviceClassState != -1073741772 )
      goto LABEL_2;
  }
  else
  {
    SecureDeviceClassState = IopQuerySecureDeviceClassState(Handle);
    if ( SecureDeviceClassState < 0 )
      goto LABEL_2;
    if ( (*a3 & 0xF) == 0xF )
      goto LABEL_20;
  }
  PersistedStateLocation = IopGetPersistedStateLocation(v9, String2.Buffer, v10, SourceString);
  v6 = (WCHAR *)SourceString[0];
  SecureDeviceClassState = PersistedStateLocation;
  if ( PersistedStateLocation < 0 )
    goto LABEL_2;
  SecureDeviceClassState = RtlInitUnicodeStringEx(&String1, SourceString[0]);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
  {
    if ( v15 )
      goto LABEL_20;
  }
  else
  {
    if ( KeyHandle )
    {
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    if ( v15 )
    {
      ZwClose(v15);
      v15 = 0LL;
    }
    SecureDeviceClassState = IopCreateRegistryKeyEx(&KeyHandle, 0LL, &String1, 983103LL, 0, &v23);
    if ( SecureDeviceClassState < 0 )
      goto LABEL_2;
  }
  SecureDeviceClassState = IopCreateRegistryKeyEx(&v15, KeyHandle, &DestinationString, 983103LL, 0, &v23);
  if ( SecureDeviceClassState < 0 )
    goto LABEL_2;
  if ( v23 == 2 )
  {
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    RtlInitUnicodeString(&String1, L"Properties");
    v12 = IopOpenRegistryKeyEx(&Handle, v15, &String1, 0x20019u);
    SecureDeviceClassState = v12;
    if ( v12 >= 0 )
    {
      v13 = IopQuerySecureDeviceClassState(Handle);
LABEL_44:
      SecureDeviceClassState = v13;
      goto LABEL_2;
    }
    if ( v12 != -1073741772 )
      goto LABEL_2;
LABEL_20:
    SecureDeviceClassState = 0;
    goto LABEL_2;
  }
  v14 = (PVOID *)(*(_QWORD *)(a2 + 48) + 24LL);
  if ( *(_QWORD *)(a2 + 48) == -24LL )
  {
    SecureDeviceClassState = -1073741670;
    goto LABEL_2;
  }
  RtlInitUnicodeString(&String1, L"Class");
  SecureDeviceClassState = ZwSetValueKey(v15, &String1, 0, 1u, v14[1], *(unsigned __int16 *)v14 + 2);
  if ( SecureDeviceClassState >= 0 )
  {
    RtlInitUnicodeString(&String1, L"NoDisplayClass");
    SecureDeviceClassState = ZwSetValueKey(v15, &String1, 0, 1u, L"1", 4u);
    if ( SecureDeviceClassState >= 0 )
    {
      RtlInitUnicodeString(&String1, L"NoUseClass");
      v13 = ZwSetValueKey(v15, &String1, 0, 1u, L"1", 4u);
      goto LABEL_44;
    }
  }
LABEL_2:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 )
    ZwClose(v15);
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)SecureDeviceClassState;
}
