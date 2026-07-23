/*
 * XREFs of EtwpFindMatchingPmcRegistryGroup @ 0x14082BDA4
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x14082AFF0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14082D450 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x14082C1CC (EtwpGetPmcCpuHierarchyRegistry.c)
 */

__int64 __fastcall EtwpFindMatchingPmcRegistryGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, wchar_t *pszDest)
{
  size_t v6; // r15
  char v8; // bl
  int v9; // edi
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rcx
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _BYTE KeyInformation[12]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v18; // [rsp+B4h] [rbp-54h]
  _WORD v19[264]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v20; // [rsp+2C8h] [rbp+1C0h]
  unsigned int v21; // [rsp+2D0h] [rbp+1C8h]

  v6 = a4;
  KeyHandle = 0LL;
  memset_0(KeyInformation, 0, 0x218uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[1] = 0;
  v8 = 0;
  memset(DestinationString, 0, sizeof(DestinationString));
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateKey(DestinationString, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v9 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = ZwEnumerateKey(DestinationString[0], ++v9, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength[1]);
      if ( v10 >= 0 )
        break;
      if ( v10 != -1073741789 && v10 != -2147483643 )
        goto LABEL_10;
    }
    if ( v18 < 0xFF )
    {
      v19[(unsigned __int64)v18 >> 1] = 0;
      RtlStringCbPrintfW(
        pszDest,
        v6,
        L"%ws\\%ws",
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
        v19);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        EtwpGetPmcCpuHierarchyRegistry((_DWORD)KeyHandle);
        ZwClose(KeyHandle);
        if ( !a2 )
        {
          v11 = v20 - *(_QWORD *)a3;
          if ( v20 == *(_QWORD *)a3 )
            v11 = v21 - (unsigned __int64)*(unsigned int *)(a3 + 8);
          if ( !v11 )
            break;
        }
      }
    }
  }
  v8 = 1;
LABEL_10:
  ZwClose(DestinationString[0]);
  if ( v8 )
    return 0LL;
  memset_0(pszDest, 0, v6);
  return 3221225473LL;
}
