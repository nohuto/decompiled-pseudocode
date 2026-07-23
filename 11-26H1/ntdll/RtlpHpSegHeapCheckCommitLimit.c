/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x180070EC0
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  unsigned __int64 v3; // rax
  __int64 v5; // rax

  v2 = a2 + 4;
  if ( dword_1801C4588 )
    return 1LL;
  v3 = *v2;
  if ( !*v2 )
  {
    v3 = qword_1801C5ED8;
    v2 = &qword_1801C5ED8;
    if ( !qword_1801C5ED8 )
      return 1LL;
  }
  if ( ((a2[17] + a2[12]) << 12) + a1 <= v3 )
    return 1LL;
  v5 = v2[1];
  if ( v5 )
    RtlpLogHeapFailure(21, (_DWORD)a2, 0, v5, a1, (a2[17] + a2[12]) << 12);
  return 0LL;
}
