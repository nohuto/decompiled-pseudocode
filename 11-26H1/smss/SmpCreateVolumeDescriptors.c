/*
 * XREFs of SmpCreateVolumeDescriptors @ 0x140010258
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     RtlStringCbCopyW @ 0x14000E174 (RtlStringCbCopyW.c)
 *     SmpCreateVolumeDescriptor @ 0x14000FF10 (SmpCreateVolumeDescriptor.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 SmpCreateVolumeDescriptors()
{
  NTSTATUS InformationProcess; // eax
  unsigned int v1; // ebx
  unsigned __int16 i; // bx
  int v4; // eax
  struct _UNICODE_STRING v5; // [rsp+30h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v8; // [rsp+70h] [rbp+27h]
  wchar_t pszDest[8]; // [rsp+78h] [rbp+2Fh] BYREF
  wchar_t SourceString[8]; // [rsp+88h] [rbp+3Fh] BYREF

  v8 = 0LL;
  DestinationString = 0LL;
  v5 = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessDeviceMap,
                         ProcessInformation,
                         0x24u,
                         0LL);
  v1 = InformationProcess;
  if ( InformationProcess >= 0 )
  {
    RtlStringCbCopyW(pszDest, 0x10uLL, L"\\??\\A:\\");
    RtlInitUnicodeStringEx(&DestinationString, pszDest);
    RtlStringCbCopyW(SourceString, 0x10uLL, L"\\??\\A:");
    RtlInitUnicodeStringEx(&v5, SourceString);
    for ( i = 67; i <= 0x5Au; ++i )
    {
      v4 = ProcessInformation[0];
      if ( _bittest(&v4, (unsigned __int8)(i - 65)) && (SmpPagefileOnOsVolume != 1 || i == SmpOsVolumeLetter) )
      {
        DestinationString.Buffer[4] = i;
        v5.Buffer[4] = i;
        SmpCreateVolumeDescriptor(i, &DestinationString, &v5);
      }
    }
    return SmpVolumeDescriptorList == (_QWORD)&SmpVolumeDescriptorList ? 0xC00000E9 : 0;
  }
  else
  {
    SmpLogFailure((__int64)"SmpCreateVolumeDescriptors", 1579, InformationProcess);
    return v1;
  }
}
