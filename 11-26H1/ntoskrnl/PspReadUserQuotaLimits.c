/*
 * XREFs of PspReadUserQuotaLimits @ 0x140ABA648
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     PspSanitizeResourceLimits @ 0x1407F5D30 (PspSanitizeResourceLimits.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PspReadUserQuotaLimits(PSID Sid, _DWORD *a2, unsigned int *a3)
{
  HANDLE v3; // rbx
  int v4; // r14d
  int v7; // ebx
  unsigned int v9; // r15d
  unsigned int *v10; // rdi
  signed __int64 v11; // rcx
  unsigned int v12; // eax
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-11h] BYREF
  _DWORD *v18; // [rsp+98h] [rbp-1h]
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+7h] BYREF
  int v20; // [rsp+B0h] [rbp+17h]

  *a2 = 1;
  v3 = (HANDLE)PspSiloMonitorLock.Padding[4];
  v4 = 0;
  v18 = a2;
  ResultLength = 0;
  v20 = 0;
  KeyHandle = 0LL;
  Handle = (HANDLE)PspSiloMonitorLock.Padding[4];
  KeyValueInformation = 0LL;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  if ( !PspSiloMonitorLock.Padding[4] )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&Handle, 9u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    {
      v11 = (signed __int64)Handle;
    }
    else
    {
      v11 = 1LL;
      Handle = (HANDLE)1;
    }
    v3 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock.Padding[4], v11, 0LL);
    if ( v3 )
    {
      if ( Handle != (HANDLE)1 )
        ZwClose(Handle);
      Handle = v3;
    }
    else
    {
      v3 = Handle;
    }
  }
  if ( v3 == (HANDLE)1 )
    return 0;
  v7 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v7 >= 0 )
  {
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    if ( UnicodeString.Buffer )
    {
      ExFreePool(UnicodeString.Buffer);
      UnicodeString = 0LL;
    }
    if ( v7 >= 0 )
    {
      v9 = 0;
      v10 = a3;
      while ( v4 < 4 )
      {
        v7 = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&PspDefaultResourceNames[8 * v4],
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
        if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741772 )
        {
          ZwClose(KeyHandle);
          return (unsigned int)v7;
        }
        if ( v7 == -1073741772 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
        {
          v12 = *(unsigned int *)((char *)v10 + &PspSiloMonitorLock.SchedulerApcFill5[16] - (unsigned __int8 *)a3);
          ++v9;
        }
        else
        {
          v12 = HIDWORD(KeyValueInformation);
        }
        ++v4;
        *v10++ = v12;
      }
      ZwClose(KeyHandle);
      if ( v9 < 4 )
      {
        v7 = PspSanitizeResourceLimits(a3, 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        *v18 = 0;
      }
      return 0;
    }
    if ( v7 == -1073741772 )
      return 0;
  }
  return (unsigned int)v7;
}
