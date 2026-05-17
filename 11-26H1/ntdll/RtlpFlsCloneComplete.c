/*
 * XREFs of RtlpFlsCloneComplete @ 0x18014F270
 * Callers:
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150868 (RtlpHpUnlockHeapManagerForClone.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpFlsCloneComplete(__int64 a1, int a2)
{
  __int64 v2; // rdi
  struct _TEB *result; // rax
  unsigned int v6; // esi
  int v7; // ecx
  __int64 v8; // r8
  volatile signed __int64 *v9; // rcx

  v2 = *(unsigned int *)(a1 + 88);
  if ( a2 )
    *(_QWORD *)a1 = 1LL;
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  if ( (_DWORD)v2 )
  {
    v6 = v2 + 16;
    do
    {
      _BitScanReverse((unsigned int *)&v7, v6);
      v8 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v7 - 4) + 8);
      if ( v8 )
        v9 = (volatile signed __int64 *)(v8 + 8 * ((v6 ^ (1 << v7)) + 2LL * (v6 ^ (1 << v7)) + 1));
      else
        v9 = 0LL;
      if ( a2 )
        *v9 = 1LL;
      result = RtlReleaseSRWLockExclusive(v9);
      --v6;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
