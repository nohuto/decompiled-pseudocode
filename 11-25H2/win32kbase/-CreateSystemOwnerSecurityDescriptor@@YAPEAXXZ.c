/*
 * XREFs of ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x140152194
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x14016028C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401D0C0C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

PSECURITY_DESCRIPTOR CreateSystemOwnerSecurityDescriptor(void)
{
  PSECURITY_DESCRIPTOR v0; // rbx
  PSECURITY_DESCRIPTOR v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A0h] [rbp+30h] BYREF

  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  Length = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQuerySecurityObject(KeyHandle, 1u, 0LL, 0, &Length) != -1073741789 )
  {
LABEL_4:
    ZwClose(KeyHandle);
    return 0LL;
  }
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&SecurityDescriptor, Length);
  v2 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&SecurityDescriptor);
    goto LABEL_4;
  }
  if ( ZwQuerySecurityObject(KeyHandle, 1u, SecurityDescriptor, Length, &Length) >= 0 )
  {
    SecurityDescriptor = 0LL;
    v0 = v2;
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&SecurityDescriptor);
  ZwClose(KeyHandle);
  return v0;
}
