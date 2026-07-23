/*
 * XREFs of RtlpFlsCloneComplete @ 0x18014F120
 * Callers:
 *     RtlpHpUnlockHeapManagerForClone @ 0x180150718 (RtlpHpUnlockHeapManagerForClone.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpFlsCloneComplete(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // esi
  int v6; // ecx
  __int64 v7; // r8
  _RTL_SRWLOCK *v8; // rcx

  v2 = *(unsigned int *)(a1 + 88);
  if ( a2 )
    *(_QWORD *)a1 = 1LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1);
  if ( (_DWORD)v2 )
  {
    v5 = v2 + 16;
    do
    {
      _BitScanReverse((unsigned int *)&v6, v5);
      v7 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v6 - 4) + 8);
      if ( v7 )
        v8 = (_RTL_SRWLOCK *)(v7 + 8 * ((v5 ^ (1 << v6)) + 2LL * (v5 ^ (1 << v6)) + 1));
      else
        v8 = 0LL;
      if ( a2 )
        v8->Value = 1LL;
      RtlReleaseSRWLockExclusive(v8);
      --v5;
      --v2;
    }
    while ( v2 );
  }
}
