/*
 * XREFs of SmpRecordCreatedPageFiles @ 0x140011318
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpBuildFilesStringFromList @ 0x14000D300 (SmpBuildFilesStringFromList.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 */

__int64 __fastcall SmpRecordCreatedPageFiles(char a1, __int64 a2)
{
  char v4; // si
  __int64 result; // rax
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  void *Source2[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-10h] BYREF
  int Data; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)&v11.Length = 2359330LL;
  v11.Buffer = L"ExistingPageFiles";
  *(_QWORD *)&ValueName.Length = 1703960LL;
  ValueName.Buffer = L"TempPageFile";
  v4 = 0;
  *(_OWORD *)Source2 = 0LL;
  result = SmpBuildFilesStringFromList(
             (const UNICODE_STRING **)&SmpPagingFileDescriptorList,
             (struct _UNICODE_STRING *)Source2);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)a2 != LOWORD(Source2[0])
        || (v6 = LOWORD(Source2[0]), v6 != RtlCompareMemory(*(const void **)(a2 + 8), Source2[1], LOWORD(Source2[0]))) )
      {
        v4 = 1;
      }
    }
    if ( a1 )
    {
      Data = 1;
      v7 = NtSetValueKey(SmpMmKey, &ValueName, 0, 4u, &Data, 4u);
      if ( v7 < 0 )
        SmpLogFailure((__int64)"SmpRecordCreatedPageFiles", 4471, v7);
    }
    else
    {
      NtDeleteValueKey(SmpMmKey, &ValueName);
    }
    v8 = NtSetValueKey(SmpMmKey, &v11, 0, 7u, Source2[1], LOWORD(Source2[0]));
    if ( v4 )
      NtFlushKey(SmpMmKey);
    if ( v8 < 0 )
      SmpLogFailure((__int64)"SmpRecordCreatedPageFiles", 4490, v8);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Source2[1]);
    return (unsigned int)v8;
  }
  return result;
}
