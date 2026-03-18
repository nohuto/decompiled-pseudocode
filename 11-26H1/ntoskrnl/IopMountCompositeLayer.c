/*
 * XREFs of IopMountCompositeLayer @ 0x140D034D4
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CBDC50 (IopMountBootLayerCallout.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PnpBootDeviceWait @ 0x1405D85A4 (PnpBootDeviceWait.c)
 *     StringCbPrintfW @ 0x14071EB7C (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     IoMountBootLayer @ 0x140793F80 (IoMountBootLayer.c)
 *     IoCreateSymbolicLink @ 0x140AB52F0 (IoCreateSymbolicLink.c)
 */

int __fastcall IopMountCompositeLayer(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int result; // eax
  UNICODE_STRING DeviceName; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t SourceString[64]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v11[64]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[64]; // [rsp+140h] [rbp+40h] BYREF

  v3 = *(_DWORD *)(a1 + 44);
  DestinationString = 0LL;
  DeviceName = 0LL;
  if ( (v3 & 1) == 0 )
    goto LABEL_7;
  if ( StringCbPrintfW(
         pszDest,
         0x80uLL,
         L"\\Device\\Harddisk%u\\Partition0",
         *(unsigned int *)(a1 + 48),
         *(_QWORD *)&DeviceName.Length,
         DeviceName.Buffer,
         *(_QWORD *)&DestinationString.Length,
         DestinationString.Buffer) < 0
    || StringCbPrintfW(
         SourceString,
         0x80uLL,
         L"\\ArcName\\multi(0)disk(0)rdisk(%u)partition(1)",
         *(unsigned int *)(a1 + 48)) < 0
    || StringCbPrintfW(v11, 0x80uLL, L"\\Device\\Harddisk%u\\Partition1", *(unsigned int *)(a1 + 48)) < 0 )
  {
    return -1073741789;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&DeviceName, v11);
  result = PnpBootDeviceWait(KeLoaderBlock_0, 1, (__int64)IopFormatBootDevice, (__int64)pszDest);
  if ( result >= 0 )
  {
    result = IoCreateSymbolicLink(&DestinationString, &DeviceName);
    if ( result >= 0 )
    {
LABEL_7:
      IoMountBootLayer(*(_QWORD *)(a1 + 8), a2, a3);
      return 0;
    }
  }
  return result;
}
