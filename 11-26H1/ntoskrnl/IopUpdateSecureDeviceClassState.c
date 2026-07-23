/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x140AFAF20
 * Callers:
 *     IoCreateDeviceSecure @ 0x140AFAA30 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404A6470 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(PGUID Guid, __int64 a2)
{
  void *v2; // rsi
  void *v3; // r15
  ULONG BufferLengthIn; // r14d
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  int v10; // eax
  ULONG v11; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v16; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  ULONG BufferLengthOut; // [rsp+130h] [rbp+77h] BYREF
  void *v21; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  KeyHandle = 0LL;
  memset(&v18, 0, 44);
  Handle = 0LL;
  BufferLengthIn = 256;
  BufferLengthOut = 0;
  DestinationString = 0LL;
  GuidString = 0LL;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
    {
      inited = -1073741670;
      goto LABEL_19;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= BufferLengthIn )
    {
      inited = -1073741595;
LABEL_8:
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
      goto LABEL_19;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  if ( PersistedStateLocation < 0 )
    goto LABEL_8;
  inited = RtlInitUnicodeStringEx(&DestinationString, TargetPath);
  if ( inited >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( inited >= 0 )
    {
      inited = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
      if ( inited >= 0 )
      {
        inited = IopCreateRegistryKeyEx(&v21, KeyHandle, &GuidString, 983103LL, 0, 0LL);
        if ( inited < 0 )
        {
          v2 = v21;
        }
        else
        {
          v10 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                  (__int64)L"D:PAI(A;OICI;GA;;;SY)",
                  1,
                  (__int64)&v16,
                  0LL);
          v3 = v16;
          if ( v10 < 0 )
            v3 = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Properties");
          v2 = v21;
          v18.ObjectName = &DestinationString;
          v18.Length = 48;
          v18.RootDirectory = v21;
          v18.Attributes = 576;
          v18.SecurityDescriptor = v3;
          v18.SecurityQualityOfService = 0LL;
          inited = ZwCreateKey(&Handle, 0xF003Fu, &v18, 0, 0LL, 0, 0LL);
          if ( inited >= 0 )
          {
            v11 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
            RtlInitUnicodeString(&DestinationString, L"Security");
            inited = ZwSetValueKey(Handle, &DestinationString, 0, 3u, *(PVOID *)(a2 + 8), v11);
          }
        }
      }
    }
  }
LABEL_19:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ZwClose(v2);
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( GuidString.Buffer )
    ExFreePool(GuidString.Buffer);
  return (unsigned int)inited;
}
