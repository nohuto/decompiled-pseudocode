/*
 * XREFs of WheaPersistBadPageToRegistry @ 0x1406DA108
 * Callers:
 *     WheapProcessEfiBadMemoryPage @ 0x1406D897C (WheapProcessEfiBadMemoryPage.c)
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     WheapInsertPageToList @ 0x1406DA54C (WheapInsertPageToList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaPersistBadPageToRegistry(__int64 a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  char *Pool2; // rdi
  char *v5; // rbx
  unsigned int v6; // ecx
  ULONG v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v12; // [rsp+40h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+44h] [rbp-55h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  __int128 Src; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v19; // [rsp+B0h] [rbp+17h]

  *(&ObjectAttributes.Length + 1) = 0;
  ValueName = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Src = 0LL;
  KeyHandle = 0LL;
  v19 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WHEA");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"BadPages");
    v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, 0LL, 0, &ResultLength);
    v2 = v3;
    if ( v3 != -1073741789 && v3 != -2147483643 )
    {
      if ( v3 != -1073741772 )
      {
LABEL_21:
        ZwClose(KeyHandle);
        return (unsigned int)v2;
      }
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
      v12 = 0;
      v5 = Pool2;
      v6 = 0;
      goto LABEL_12;
    }
    v7 = ResultLength + 8;
    v8 = ResultLength + 8;
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, v7, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( *((_DWORD *)Pool2 + 1) == 3 )
      {
        v9 = *((_DWORD *)Pool2 + 3);
        v10 = v8 - 8;
        v6 = v9 >> 3;
        v12 = v9 >> 3;
        if ( v9 )
          v10 = *((unsigned int *)Pool2 + 2);
        v5 = &Pool2[v10];
LABEL_12:
        if ( v6 + 1 <= *(_DWORD *)off_140E09558 )
        {
          if ( (unsigned __int8)WheapInsertPageToList(v5, a1, &v12) )
            v2 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, v5, 8 * v12);
          else
            v2 = 0;
        }
        else
        {
          if ( !_InterlockedCompareExchange(&WheapBadPageLimitLogged, 1, 0) )
          {
            *(_QWORD *)&Src = 0x1674C6857LL;
            *((_QWORD *)&Src + 1) = 32LL;
            *(_QWORD *)&v19 = 0x800000344C4E524BuLL;
            *((_QWORD *)&v19 + 1) = 2LL;
            WheaLogInternalEvent(&Src);
          }
          v2 = -1073741823;
        }
        goto LABEL_19;
      }
      v2 = -1073741762;
    }
LABEL_19:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x61656857u);
    goto LABEL_21;
  }
  return (unsigned int)v2;
}
