/*
 * XREFs of ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140AFC924
 * Callers:
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140AFC7AC (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140B69B74 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1409019EC (RtlLengthSidAsUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentPerUserDataStoreHandle(PSID Sid, PHANDLE KeyHandle)
{
  NTSTATUS result; // eax
  unsigned __int16 v5; // di
  unsigned __int16 v6; // si
  wchar_t *Pool2; // rax
  wchar_t *v8; // rbx
  NTSTATUS v9; // edi
  UNICODE_STRING Destination; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  ULONG StringLength; // [rsp+D0h] [rbp+77h] BYREF

  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  StringLength = 0;
  result = RtlLengthSidAsUnicodeString(Sid, &StringLength);
  if ( result >= 0 )
  {
    v5 = StringLength;
    v6 = StringLength + 100;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = v6;
      Destination.Buffer = Pool2;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
      UnicodeString.Length = 0;
      UnicodeString.MaximumLength = v5;
      UnicodeString.Buffer = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      v9 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( v9 >= 0 )
      {
        Destination.Length += UnicodeString.Length;
        RtlAppendUnicodeToString(&Destination, L"\\Software\\Classes\\NotificationData");
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      }
      ExFreePoolWithTag(v8, 0x20666E57u);
      return v9;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
