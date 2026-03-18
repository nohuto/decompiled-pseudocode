/*
 * XREFs of bLoadProcessHandleQuota @ 0x140029204
 * Callers:
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1401461C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall bLoadProcessHandleQuota(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // r8
  int v4; // r8d
  int v5; // r9d
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+A4h] [rbp+3Bh]

  v1 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  *(_DWORD *)(v2 + 2216) = 10000;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"GDIProcessHandleQuota");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v3 = v15;
      *(_DWORD *)(v2 + 2216) = v15;
      if ( (int)v3 < 0 || (unsigned int)v3 > *(_DWORD *)(v2 + 1752) )
      {
        *(_DWORD *)(v2 + 2216) = 10000;
        v3 = 10000LL;
      }
      if ( (unsigned int)dword_14029EF38 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14029EF38, 0x400000000000LL, v3) )
      {
        v10 = 0x1000000LL;
        v8 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_14029EF38,
          (unsigned int)&unk_140279960,
          v4,
          v5,
          (__int64)&v8,
          (__int64)&v10);
      }
    }
    v1 = 1;
    ZwClose(KeyHandle);
  }
  return v1;
}
