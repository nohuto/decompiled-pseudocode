/*
 * XREFs of PiCreateServiceKeyUnderPath @ 0x1407A3B6C
 * Callers:
 *     PiCreateServiceStateKey @ 0x140A118DC (PiCreateServiceStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x140A11A78 (PiCreateDriverRedirectedStateKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     PiCreateRegistryPath @ 0x1407A38D8 (PiCreateRegistryPath.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407AB078 (PiAuGetServiceStateSecurityObject.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCreateServiceKeyUnderPath(UNICODE_STRING *a1, UNICODE_STRING *a2, __int64 a3, HANDLE *a4)
{
  void *v6; // rsi
  HANDLE v7; // rdi
  unsigned int Length; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  NTSTATUS v12; // ebx
  NTSTATUS v13; // eax
  int ServiceStateSecurityObject; // eax
  __int64 v15; // rdx
  int v16; // eax
  HANDLE v18; // [rsp+40h] [rbp-19h] BYREF
  void *v19; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF

  v6 = 0LL;
  KeyHandle = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a1
    || !a1->Buffer
    || (Length = a1->Length, Length < 2)
    || !a2
    || !a2->Buffer
    || (v10 = a2->Length, v10 < 2)
    || !a4 )
  {
    v12 = -1073741811;
    goto LABEL_23;
  }
  v11 = Length + 2 + v10;
  if ( v11 < Length + 2 )
  {
    v12 = -1073741675;
    goto LABEL_23;
  }
  if ( v11 > 0xFFFE )
  {
    v12 = -2147483643;
    goto LABEL_23;
  }
  v12 = IopAllocateUnicodeString(&DestinationString);
  if ( v12 >= 0 )
  {
    v12 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 0x800u, L"%wZ\\%wZ", a2, a1);
    if ( v12 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, 4u, &ObjectAttributes);
      v12 = v13;
      if ( v13 != -1073741772 )
      {
LABEL_19:
        if ( v13 >= 0 )
        {
          *a4 = KeyHandle;
          KeyHandle = 0LL;
        }
        goto LABEL_23;
      }
      ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(0LL, &v19);
      v6 = v19;
      v12 = ServiceStateSecurityObject;
      if ( ServiceStateSecurityObject < 0 )
        goto LABEL_23;
      v16 = PiCreateRegistryPath(a2, v15, v19, &v18);
      v7 = v18;
      v12 = v16;
      if ( v16 == -1073741772 )
        goto LABEL_16;
      if ( v16 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        ObjectAttributes.SecurityDescriptor = v6;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v13 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        v12 = v13;
        if ( v13 == -1073741772 )
        {
LABEL_16:
          v12 = -1073741595;
          goto LABEL_23;
        }
        goto LABEL_19;
      }
    }
  }
LABEL_23:
  RtlFreeAnsiString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v7 )
    ZwClose(v7);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v12;
}
