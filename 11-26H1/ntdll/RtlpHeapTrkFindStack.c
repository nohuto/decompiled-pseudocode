/*
 * XREFs of RtlpHeapTrkFindStack @ 0x180012C10
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x180013D20 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlpHeapTrkHash @ 0x180011B90 (RtlpHeapTrkHash.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180013650 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  __int64 v8; // rbx

  v2 = RtlpHeapTrkHash(a1);
  v3 = v2 & 0xF;
  v4 = v2;
  if ( !(unsigned __int8)RtlTryAcquireSRWLockExclusive(*(_QWORD *)(qword_1801C7778 + 8 * v3)) )
    return 0LL;
  v6 = (_QWORD *)(16 * v4 + qword_1801C7280);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    if ( i[3] == a1 )
    {
      v8 = i[4];
      i[3] = 0LL;
      goto LABEL_7;
    }
  }
  v8 = 0LL;
LABEL_7:
  RtlReleaseSRWLockExclusive(*(_QWORD *)(qword_1801C7778 + 8 * v3), v5);
  return v8;
}
