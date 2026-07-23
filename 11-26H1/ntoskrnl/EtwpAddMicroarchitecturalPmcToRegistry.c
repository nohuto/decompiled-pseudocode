/*
 * XREFs of EtwpAddMicroarchitecturalPmcToRegistry @ 0x14082AFF0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x14082ACC0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14082BDA4 (EtwpFindMatchingPmcRegistryGroup.c)
 *     KiGetCpuVendor @ 0x140C10708 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddMicroarchitecturalPmcToRegistry(unsigned __int8 *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  size_t v6; // r15
  __int64 Pool2; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rdi
  NTSTATUS MatchingPmcRegistryGroup; // ebx
  _QWORD *v12; // rsi
  _DWORD *v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // esi
  PCWSTR *v16; // r15
  _DWORD *v17; // r14
  __int64 CreateOptions; // [rsp+28h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  unsigned int Data; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v20[0] = L"Family";
  v20[1] = L"Model";
  v20[2] = L"Stepping";
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  Data = KiGetCpuVendor();
  v4 = -1LL;
  do
    ++v4;
  while ( aRegistryMachin_27[v4] );
  v5 = 2 * v4 + 514;
  v6 = v5;
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = (wchar_t *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v8, Data, a2, v5, Pool2);
  if ( MatchingPmcRegistryGroup >= 0 )
    goto LABEL_16;
  RtlStringCbPrintfW(
    v9,
    v6,
    L"%ws\\%ws:%d",
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
    L"Architecture",
    Data);
  v12 = v20;
  v13 = a2;
  v14 = 3LL;
  do
  {
    if ( *v13 != -1 )
    {
      LODWORD(CreateOptions) = *v13;
      RtlStringCbPrintfW(v9, v6, L"%ws-%ws:%d", v9, *v12, CreateOptions);
    }
    ++v13;
    ++v12;
    --v14;
  }
  while ( v14 );
  RtlInitUnicodeString(&DestinationString, v9);
  v15 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MatchingPmcRegistryGroup = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( MatchingPmcRegistryGroup >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Architecture");
    MatchingPmcRegistryGroup = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v16 = (PCWSTR *)v20;
    v17 = a2;
    do
    {
      if ( *v17 != -1 )
      {
        RtlInitUnicodeString(&DestinationString, *v16);
        MatchingPmcRegistryGroup = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &a2[v15], 4u);
        if ( MatchingPmcRegistryGroup < 0 )
          break;
      }
      ++v15;
      ++v17;
      ++v16;
    }
    while ( v15 < 3 );
    ZwClose(KeyHandle);
    if ( MatchingPmcRegistryGroup >= 0 )
LABEL_16:
      EtwpAddMicroarchitecturalPmcToPmcGroup((__int64)v9, a1);
  }
  ExFreePoolWithTag(v9, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
