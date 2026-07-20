/*
 * XREFs of SmpBuildFilesStringFromList @ 0x14000D300
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 *     SmpRecordCreatedPageFiles @ 0x140011318 (SmpRecordCreatedPageFiles.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 */

__int64 __fastcall SmpBuildFilesStringFromList(const UNICODE_STRING **a1, struct _UNICODE_STRING *a2)
{
  const UNICODE_STRING *v4; // rdx
  unsigned int v5; // ecx
  int Length; // eax
  WCHAR *Heap; // rax
  USHORT v9; // ax
  const UNICODE_STRING *i; // rsi

  v4 = *a1;
  v5 = 2;
  if ( v4 != (const UNICODE_STRING *)a1 )
  {
    do
    {
      Length = v4[1].Length;
      v4 = *(const UNICODE_STRING **)&v4->Length;
      v5 += Length + 2;
    }
    while ( v4 != (const UNICODE_STRING *)a1 );
    if ( v5 > 0xFFFF )
      return 3221225473LL;
  }
  a2->MaximumLength = v5;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
  a2->Buffer = Heap;
  if ( Heap )
  {
    a2->Length = 0;
    v9 = 0;
    for ( i = *a1; i != (const UNICODE_STRING *)a1; i = *(const UNICODE_STRING **)&i->Length )
    {
      RtlAppendUnicodeStringToString(a2, i + 1);
      v9 = a2->Length + 2;
      a2->Length = v9;
    }
    a2->Buffer[(unsigned __int64)v9 >> 1] = 0;
    a2->Length += 2;
    return 0LL;
  }
  else
  {
    SmpLogFailure("SmpBuildFilesStringFromList", 4353LL, 3221225495LL);
    return 3221225495LL;
  }
}
