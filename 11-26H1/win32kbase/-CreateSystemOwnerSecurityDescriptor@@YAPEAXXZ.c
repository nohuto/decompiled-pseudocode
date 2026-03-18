/*
 * XREFs of ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x1402F3598
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140158C04 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140160B14 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

PSECURITY_DESCRIPTOR CreateSystemOwnerSecurityDescriptor(void)
{
  PSECURITY_DESCRIPTOR v0; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  PSECURITY_DESCRIPTOR v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A0h] [rbp+30h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v11[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\";
  Length = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  KeyHandle = 0LL;
  v11[0] = 5767254LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQuerySecurityObject(KeyHandle, 1u, 0LL, 0, &Length) != -1073741789 )
  {
LABEL_4:
    ZwClose(KeyHandle);
    return 0LL;
  }
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&SecurityDescriptor, Length, v2, v3);
  v7 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(
      (char **)&SecurityDescriptor,
      v4,
      v5,
      v6);
    goto LABEL_4;
  }
  if ( ZwQuerySecurityObject(KeyHandle, 1u, SecurityDescriptor, Length, &Length) >= 0 )
  {
    SecurityDescriptor = 0LL;
    v0 = v7;
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(
    (char **)&SecurityDescriptor,
    v8,
    v9,
    v10);
  ZwClose(KeyHandle);
  return v0;
}
