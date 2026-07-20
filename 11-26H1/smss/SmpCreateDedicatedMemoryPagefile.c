/*
 * XREFs of SmpCreateDedicatedMemoryPagefile @ 0x14000F4CC
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

int SmpCreateDedicatedMemoryPagefile()
{
  int result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  union _LARGE_INTEGER InitialSize; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+50h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+60h] [rbp-20h] BYREF

  ValueName.Buffer = L"DedicatedMemoryPagefileSizeMB";
  ResultLength = 0;
  FileName.Buffer = L"Dedicated memory pagefile";
  *(_QWORD *)&ValueName.Length = 3932218LL;
  *(_QWORD *)&FileName.Length = 3407922LL;
  KeyValueInformation = 0LL;
  result = NtQueryValueKey(
             SmpMmKey,
             &ValueName,
             KeyValuePartialInformationAlign64,
             &KeyValueInformation,
             0x10u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( (_QWORD)KeyValueInformation == 0x400000004LL )
    {
      InitialSize.QuadPart = (unsigned __int64)DWORD2(KeyValueInformation) << 20;
      return NtCreatePagingFile(&FileName, &InitialSize, &InitialSize, 0x800000u);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
