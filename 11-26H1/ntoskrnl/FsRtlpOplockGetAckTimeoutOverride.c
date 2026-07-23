/*
 * XREFs of FsRtlpOplockGetAckTimeoutOverride @ 0x1407919B0
 * Callers:
 *     FsRtlInitializeOplockPerf @ 0x140CBF134 (FsRtlInitializeOplockPerf.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 FsRtlpOplockGetAckTimeoutOverride()
{
  _DWORD *PoolWithTag; // rbx
  ULONG Length; // esi
  NTSTATUS v2; // edi
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-49h] BYREF
  _BYTE KeyValueInformation[96]; // [rsp+88h] [rbp-19h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  PoolWithTag = KeyValueInformation;
  Length = 84;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OplockLowPrivilegeAckTimeoutMs");
    while ( 1 )
    {
      ResultLength = 0;
      v2 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             PoolWithTag,
             Length,
             &ResultLength);
      if ( v2 != -2147483643 )
        break;
      if ( PoolWithTag != (_DWORD *)KeyValueInformation )
        ExFreePoolWithTag(PoolWithTag, 0);
      Length *= 2;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, Length, 0x74725346u);
      if ( !PoolWithTag )
      {
        v2 = -1073741801;
        goto LABEL_8;
      }
    }
    if ( v2 >= 0 )
    {
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
      if ( PoolWithTag[1] != 4 )
        goto LABEL_10;
      v5 = (unsigned int)PoolWithTag[3];
      if ( (unsigned int)v5 <= 0xFA )
      {
        g_OplockAckTimeoutMs = 250LL;
        goto LABEL_10;
      }
      g_OplockAckTimeoutMs = (unsigned int)PoolWithTag[3];
      if ( v5 < 0xEA60 )
        goto LABEL_10;
      g_OplockAckTimeoutMs = 60000LL;
    }
    else
    {
      v4 = 0;
      if ( v2 != -1073741772 )
        v4 = v2;
      v2 = v4;
    }
  }
LABEL_8:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_10:
  if ( PoolWithTag != (_DWORD *)KeyValueInformation )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v2;
}
