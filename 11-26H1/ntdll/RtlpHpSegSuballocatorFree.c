/*
 * XREFs of RtlpHpSegSuballocatorFree @ 0x180096C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegPageRangeShrink @ 0x180096F44 (RtlpHpSegPageRangeShrink.c)
 */

struct _TEB *__fastcall RtlpHpSegSuballocatorFree(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  char v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx

  v4 = a2;
  v5 = *(_QWORD *)a1 & a2;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 0x10) ^ v5) == a1
    && (v7 = *(_BYTE *)(a1 + 8),
        v8 = v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v7),
        v9 = v8 - 32LL * *(unsigned __int8 *)(v8 + 26),
        a2 = v5 + ((unsigned int)((__int64)(v9 - v5) >> 5) << v7),
        (*(_BYTE *)(v9 + 24) & 3) == 3) )
  {
    if ( a2 != v4 && (*(_BYTE *)(v9 + 24) & 0x1Cu) < 8 )
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !a4 )
    return (struct _TEB *)RtlpHpSegPageRangeShrink(a1, v9, 0LL);
  *(_BYTE *)(v9 + 24) |= 0x60u;
  RtlpHpLargeLockAcquire(a1, a2);
  *(_QWORD *)v9 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v9;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
}
