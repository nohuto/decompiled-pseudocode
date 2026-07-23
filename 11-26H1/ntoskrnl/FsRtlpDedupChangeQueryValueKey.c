/*
 * XREFs of FsRtlpDedupChangeQueryValueKey @ 0x140792694
 * Callers:
 *     FsRtlDedupChangeInit @ 0x1407923F0 (FsRtlDedupChangeInit.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall FsRtlpDedupChangeQueryValueKey(
        UNICODE_STRING *a1,
        UNICODE_STRING *a2,
        ULONG *a3,
        PVOID *a4,
        _BYTE *a5)
{
  NTSTATUS result; // eax
  ULONG Length; // edi
  _BYTE *i; // r15
  NTSTATUS v11; // eax
  int v12; // ebx
  __int64 Pool2; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+30h] BYREF

  ObjectAttributes.ObjectName = a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a2 )
    {
      Length = *a3;
      for ( i = a5; ; *i = 1 )
      {
        v11 = ZwQueryValueKey(KeyHandle, a2, KeyValueFullInformation, *a4, Length, &ResultLength);
        v12 = v11;
        if ( v11 != -1073741789 && v11 != -2147483643 )
          break;
        if ( Length != *a3 )
          break;
        Length = ResultLength;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v12 = -1073741670;
          break;
        }
        if ( *i )
          ExFreePoolWithTag(*a4, 0);
        *a4 = (PVOID)Pool2;
        *a3 = Length;
      }
      ZwClose(KeyHandle);
      if ( v12 >= 0 && !*((_DWORD *)*a4 + 3) )
        return -1073741772;
      return v12;
    }
    else
    {
      ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
