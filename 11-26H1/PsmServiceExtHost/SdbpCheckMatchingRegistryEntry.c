/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x18009500C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x180094EE0 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchPrintfW @ 0x18008D0EC (RtlStringCchPrintfW.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095210 (SdbpCheckMatchingRegistryValue.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  unsigned int v10; // edi
  NTSTATUS v11; // eax
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 SystemInformation; // [rsp+98h] [rbp-68h] BYREF
  int v17; // [rsp+A0h] [rbp-60h]
  WCHAR SourceString[264]; // [rsp+B0h] [rbp-50h] BYREF

  SourceString[0] = 0;
  KeyHandle = 0LL;
  SystemInformation = 0LL;
  *a9 = 0;
  v17 = 0;
  v10 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( (int)RtlStringCchPrintfW(SourceString, 260LL, (__int64)L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
  {
    AslLogCallPrintf(1LL, "SdbpCheckMatchingRegistryEntry", 1538LL, "Failed to construct full key path");
    goto LABEL_10;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    goto LABEL_9;
  v11 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
  if ( v11 < 0 )
  {
    AslLogCallPrintf(1LL, "SdbpCheckMatchingRegistryEntry", 1573LL, "Failed to get processor architecture [%x]", v11);
    goto LABEL_10;
  }
  if ( (_WORD)SystemInformation == 9 && ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) >= 0 )
LABEL_9:
    v10 = SdbpCheckMatchingRegistryValue(KeyHandle, a2, a5, a6, Buf1, Size, (__int64)a9);
  else
    v10 = 1;
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}
