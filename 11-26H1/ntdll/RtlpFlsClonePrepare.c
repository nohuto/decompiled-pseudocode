/*
 * XREFs of RtlpFlsClonePrepare @ 0x18014F1B8
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpFlsClonePrepare(PRTL_SRWLOCK SRWLock)
{
  unsigned int Value; // esi
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  __int64 v5; // r14
  int v6; // ecx
  unsigned __int64 v7; // r8
  _RTL_SRWLOCK *v8; // rcx

  Value = SRWLock[11].Value;
  v3 = 1;
  while ( 1 )
  {
    if ( v3 <= Value )
    {
      v4 = v3 + 16;
      v5 = Value - v3 + 1;
      v3 = Value + 1;
      do
      {
        _BitScanReverse((unsigned int *)&v6, v4);
        v7 = SRWLock[(unsigned int)(v6 - 4) + 1].Value;
        if ( v7 )
          v8 = (_RTL_SRWLOCK *)(v7 + 8 * ((v4 ^ (1 << v6)) + 2LL * (v4 ^ (1 << v6)) + 1));
        else
          v8 = 0LL;
        RtlAcquireSRWLockExclusive(v8);
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    RtlAcquireSRWLockExclusive(SRWLock);
    if ( *(_DWORD *)&SRWLock[11].0 <= Value )
      break;
    Value = SRWLock[11].Value;
    RtlReleaseSRWLockExclusive(SRWLock);
  }
}
