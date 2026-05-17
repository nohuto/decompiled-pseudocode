/*
 * XREFs of RtlpFlsClonePrepare @ 0x18014F308
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpFlsClonePrepare(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  __int64 v6; // r14
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  volatile signed __int64 *v10; // rcx
  signed __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 88);
  v4 = 1;
  while ( 1 )
  {
    if ( v4 <= v2 )
    {
      v5 = v4 + 16;
      v6 = v2 - v4 + 1;
      v4 = v2 + 1;
      do
      {
        _BitScanReverse(&v7, v5);
        v8 = v5 ^ (1 << v7);
        v9 = *(_QWORD *)(a1 + 8LL * (v7 - 4) + 8);
        if ( v9 )
          v10 = (volatile signed __int64 *)(v9 + 8 * ((unsigned int)v8 + 2 * v8 + 1));
        else
          v10 = 0LL;
        RtlAcquireSRWLockExclusive(v10, v8);
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    result = RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2);
    if ( *(_DWORD *)(a1 + 88) <= v2 )
      break;
    v2 = *(_DWORD *)(a1 + 88);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
  return result;
}
