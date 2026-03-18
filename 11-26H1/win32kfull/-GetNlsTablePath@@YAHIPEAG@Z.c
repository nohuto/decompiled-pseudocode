/*
 * XREFs of ?GetNlsTablePath@@YAHIPEAG@Z @ 0x140261C80
 * Callers:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x140110230 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetNlsTablePath(unsigned int a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  char *v5; // rdi
  __int64 v6; // rdx
  ULONG Length; // [rsp+30h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t Dst[20]; // [rsp+80h] [rbp+17h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v5 = (char *)PALLOCMEM(0x220u, 1936485959LL);
    if ( v5 )
    {
      swprintf_s(Dst, 0x14uLL, L"%d", a1);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v5, Length, &Length) >= 0
        && (int)StringCchCopyW((char *)a2, 260LL, (char *)L"\\SystemRoot\\System32\\") >= 0 )
      {
        LOBYTE(v2) = (int)StringCchCatW(a2, v6, v5 + 12) >= 0;
      }
      Win32FreePool(v5);
    }
    ZwClose(KeyHandle);
  }
  return v2;
}
