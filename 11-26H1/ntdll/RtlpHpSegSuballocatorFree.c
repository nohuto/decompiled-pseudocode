/*
 * XREFs of RtlpHpSegSuballocatorFree @ 0x180071530
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x18007100C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 */

void __fastcall RtlpHpSegSuballocatorFree(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  char v6; // cl
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx

  v4 = *(_QWORD *)a1 & a2;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v4 + 0x10) ^ v4) == a1
    && (v6 = *(_BYTE *)(a1 + 8),
        v7 = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> v6),
        v8 = v7 - 32LL * *(unsigned __int8 *)(v7 + 26),
        (*(_BYTE *)(v8 + 24) & 3) == 3) )
  {
    if ( v4 + ((unsigned int)((__int64)(v8 - v4) >> 5) << v6) != a2 && (*(_BYTE *)(v8 + 24) & 0x1Cu) < 8 )
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( a4 )
  {
    *(_BYTE *)(v8 + 24) |= 0x60u;
    RtlpHpLargeLockAcquire((_RTL_SRWLOCK *)a1);
    *(_QWORD *)v8 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v8;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  }
  else
  {
    RtlpHpSegPageRangeShrink(a1, v8, 0LL);
  }
}
