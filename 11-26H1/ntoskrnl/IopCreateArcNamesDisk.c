/*
 * XREFs of IopCreateArcNamesDisk @ 0x140CC2C1C
 * Callers:
 *     IopCreateArcNames @ 0x140CC25A0 (IopCreateArcNames.c)
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IoGetConfigurationInformation @ 0x140781670 (IoGetConfigurationInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IopFetchConfigurationInformation @ 0x140CC30C0 (IopFetchConfigurationInformation.c)
 */

__int64 IopCreateArcNamesDisk()
{
  ULONG DiskCount; // esi
  int ConfigurationInformation; // eax
  const WCHAR *v2; // rbx
  unsigned int v3; // r12d
  ULONG i; // edi
  int v5; // r15d
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h]
  PCWSTR SourceString; // [rsp+30h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+40h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  GUID InterfaceClassGuid; // [rsp+58h] [rbp-59h] BYREF
  wchar_t pszDest[64]; // [rsp+68h] [rbp-49h] BYREF

  DestinationString = 0LL;
  DeviceObject = 0LL;
  SourceString = 0LL;
  FileObject = 0LL;
  LODWORD(v8) = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  InterfaceClassGuid = GUID_DEVINTERFACE_DISK;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&SourceString, &InterfaceClassGuid);
  v2 = SourceString;
  v3 = (unsigned int)ConfigurationInformation >> 31;
  if ( ConfigurationInformation < 0 )
    DiskCount += 20;
  for ( i = 0; i < DiskCount; ++i )
  {
    if ( v2 && *v2 )
    {
      v5 = -1;
      RtlInitUnicodeString(&DestinationString, v2);
      v6 = -1LL;
      do
        ++v6;
      while ( v2[v6] );
      v2 += v6 + 1;
      if ( (_BYTE)v3 && !*v2 )
        DiskCount = i + 20;
    }
    else
    {
      v5 = i;
      RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition0", i, v8);
      RtlInitUnicodeString(&DestinationString, pszDest);
    }
    if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
    {
      IopCreateArcName(DeviceObject, v5);
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return 0LL;
}
