/*
 * XREFs of NvmeDeleteAuthKey @ 0x140075E54
 * Callers:
 *     RemoveNvmeAuthKey @ 0x140076C04 (RemoveNvmeAuthKey.c)
 * Callees:
 *     StringCchPrintfW @ 0x140077F78 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeDeleteAuthKey(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  wchar_t pszDest[8]; // [rsp+88h] [rbp+2Fh] BYREF
  __int128 v8; // [rsp+98h] [rbp+3Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\NVMeAuthKeys");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    StringCchPrintfW(pszDest, 0x10uLL, L"%d", *(unsigned int *)(a1 + 4));
    v2 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, pszDest);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
