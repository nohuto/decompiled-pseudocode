/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x1800C9D90
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18006A718 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rax
  __int64 *v6; // rax
  __int64 v7; // r9

  if ( dword_1801C4588 )
    return 1LL;
  v4 = *a4;
  if ( !*a4 )
  {
    v4 = qword_1801C5ED8;
    if ( !qword_1801C5ED8 )
      return 1LL;
  }
  if ( a2 + a1 <= v4 )
    return 1LL;
  v6 = &qword_1801C5ED8;
  if ( *a4 )
    v6 = (__int64 *)a4;
  v7 = v6[1];
  if ( v7 )
    RtlpLogHeapFailure(21, a3, 0, v7, a1, a2);
  return 0LL;
}
