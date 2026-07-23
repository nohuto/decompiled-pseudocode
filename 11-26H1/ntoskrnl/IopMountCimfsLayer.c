/*
 * XREFs of IopMountCimfsLayer @ 0x140D0970C
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     RtlStringFromGUID @ 0x1409F98E0 (RtlStringFromGUID.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     IoCreateSymbolicLink @ 0x140AB6690 (IoCreateSymbolicLink.c)
 */

__int64 __fastcall IopMountCimfsLayer(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t SourceString[64]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  DestinationString = 0LL;
  DeviceName = 0LL;
  v7 = 0LL;
  v5 = CimfsMountBootVolume(a1, a2);
  if ( v5 >= 0 )
  {
    v5 = RtlStringFromGUID((const GUID *const)(a1 + 8), &GuidString);
    if ( v5 >= 0 )
    {
      v5 = RtlStringCbPrintfW(pszDest, 0x78uLL, L"\\ArcName\\cimfs%wZ", &GuidString);
      if ( v5 >= 0 )
      {
        DWORD1(v7) = *(_DWORD *)(&GuidString.MaximumLength + 1);
        *((_QWORD *)&v7 + 1) = _mm_srli_si128((__m128i)GuidString, 8).m128i_u64[0] + 2;
        LOWORD(v7) = GuidString.Length - 4;
        WORD1(v7) = GuidString.MaximumLength - 4;
        v5 = RtlStringCbPrintfW(SourceString, 0x78uLL, L"\\Device\\cimfs\\%wZ", &v7);
        if ( v5 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          RtlInitUnicodeString(&DeviceName, SourceString);
          v5 = IoCreateSymbolicLink(&DestinationString, &DeviceName);
          if ( v5 >= 0 )
          {
            if ( a3 )
              v5 = RtlDuplicateUnicodeString(0, &DeviceName, a3);
          }
        }
      }
    }
  }
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)v5;
}
