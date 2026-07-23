/*
 * XREFs of FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x1407921E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall FsRtlOpenFileSystemRegistryKeyFromFsGuid(
        unsigned int *a1,
        _QWORD *a2,
        ACCESS_MASK a3,
        __int64 a4,
        HANDLE *a5)
{
  bool v8; // zf
  __int64 v9; // rax
  NTSTATUS RegistryValues; // ebx
  __int64 v11; // rax
  HANDLE v12; // rcx
  ULONG v14; // [rsp+20h] [rbp-E0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  int v18[4]; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v19; // [rsp+D0h] [rbp-30h]
  __int128 *v20; // [rsp+D8h] [rbp-28h]
  int v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+130h] [rbp+30h] BYREF
  char v23; // [rsp+140h] [rbp+40h] BYREF

  *(_QWORD *)&DestinationString.Length = 14155776LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString.Buffer = (wchar_t *)&v23;
  memset_0(v18, 0, 0x70uLL);
  *a5 = 0LL;
  v9 = *(_QWORD *)a1 - *(_QWORD *)&GUID_NULL.Data1;
  v8 = *(_QWORD *)a1 == *(_QWORD *)&GUID_NULL.Data1;
  v22 = 0LL;
  if ( v8 )
    v9 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v9 )
    return (unsigned int)-1073740602;
  v14 = *((unsigned __int16 *)a1 + 3);
  RtlUnicodeStringPrintf(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystemVolumes\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *a1,
    *((unsigned __int16 *)a1 + 2));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 1600;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  if ( RegistryValues < 0 )
    goto LABEL_11;
  v19 = L"FsGuid";
  v18[2] = 308;
  v20 = &v22;
  v21 = 50331648;
  LODWORD(v22) = -16;
  RegistryValues = RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v18, 0, v14, 1);
  if ( RegistryValues < 0 )
    goto LABEL_11;
  v11 = *a2 - v22;
  if ( *a2 == (_QWORD)v22 )
    v11 = a2[1] - *((_QWORD *)&v22 + 1);
  if ( v11 )
  {
    RegistryValues = -1073740578;
LABEL_11:
    v12 = KeyHandle;
    goto LABEL_12;
  }
  v12 = 0LL;
  *a5 = KeyHandle;
  KeyHandle = 0LL;
LABEL_12:
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)RegistryValues;
}
