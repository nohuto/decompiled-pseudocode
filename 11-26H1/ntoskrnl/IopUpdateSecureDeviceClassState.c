/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x140AF8840
 * Callers:
 *     IoCreateDeviceSecure @ 0x140AF8350 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404ACDE0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     IopCreateRegistryKeyEx @ 0x140AF90BC (IopCreateRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(unsigned int *a1, __int64 a2)
{
  void *v2; // rsi
  void *v3; // r15
  unsigned int v6; // r14d
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  int inited; // ebx
  int v10; // eax
  ULONG v11; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v16; // [rsp+60h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v20; // [rsp+130h] [rbp+77h] BYREF
  void *v21; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  KeyHandle = 0LL;
  memset(&v18, 0, 44);
  Handle = 0LL;
  v6 = 256;
  LODWORD(v20) = 0;
  DestinationString = 0LL;
  *(_OWORD *)P = 0LL;
  while ( 1 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741670;
      goto LABEL_19;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               0,
                               Pool2,
                               v6,
                               (unsigned int *)&v20);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v20 <= v6 )
    {
      inited = -1073741595;
LABEL_8:
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
      goto LABEL_19;
    }
    v6 = v20;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( PersistedStateLocation < 0 )
    goto LABEL_8;
  inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
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
      inited = RtlStringFromGUIDEx(a1, (__int64)P, 1);
      if ( inited >= 0 )
      {
        inited = IopCreateRegistryKeyEx(&v21, KeyHandle, P, 983103LL, 0, 0LL);
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
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( P[1] )
    ExFreePool(P[1]);
  return (unsigned int)inited;
}
