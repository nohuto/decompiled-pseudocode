/*
 * XREFs of PiCreateRegistryPath @ 0x1407A38D8
 * Callers:
 *     PiCreateServiceKeyUnderPath @ 0x1407A3B6C (PiCreateServiceKeyUnderPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409B1D9C (PnpConcatenateUnicodeStrings.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall PiCreateRegistryPath(UNICODE_STRING *String2, __int64 a2, void *a3, HANDLE *a4)
{
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // r15
  unsigned __int16 v11; // r14
  wchar_t *v12; // rdi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( String2
    && a4
    && String2->Length >= 4u
    && RtlPrefixUnicodeString((PCUNICODE_STRING)&PspSiloMonitorLock.648, String2, 1u) )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = String2;
    ObjectAttributes.SecurityDescriptor = a3;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a4 = KeyHandle;
LABEL_7:
      KeyHandle = 0LL;
      goto LABEL_21;
    }
    if ( v7 == -1073741772 )
    {
      v8 = PnpConcatenateUnicodeStrings(&DestinationString, String2);
      if ( v8 >= 0 )
      {
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length;
        v11 = DestinationString.Length >> 1;
        v12 = &DestinationString.Buffer[((unsigned __int64)*(unsigned __int16 *)&PspSiloMonitorLock.SchedulerApc.Type >> 1)
                                      + 1];
        if ( (unsigned __int16)((__int64)(2
                                        * (((unsigned __int64)*(unsigned __int16 *)&PspSiloMonitorLock.SchedulerApc.Type >> 1)
                                         + 1)) >> 1) < (unsigned __int16)(DestinationString.Length >> 1) )
        {
          do
          {
            if ( !*v12 )
              break;
            if ( *v12 == 92 )
            {
              *v12 = 0;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              DestinationString.Length = 2 * (v12 - DestinationString.Buffer);
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v8 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              *v12 = 92;
              if ( v8 < 0 )
                goto LABEL_21;
              if ( KeyHandle )
              {
                ZwClose(KeyHandle);
                KeyHandle = 0LL;
              }
              Buffer = DestinationString.Buffer;
            }
            ++v12;
          }
          while ( (unsigned __int16)(v12 - Buffer) < v11 );
        }
        DestinationString.Length = Length;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = a3;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v8 = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( v8 >= 0 )
        {
          *a4 = KeyHandle;
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_21:
  RtlFreeAnsiString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
