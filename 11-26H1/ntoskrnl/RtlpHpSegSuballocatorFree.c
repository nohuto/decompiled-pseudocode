/*
 * XREFs of RtlpHpSegSuballocatorFree @ 0x1404D5DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14027ECE0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegLockRelease @ 0x14034DF84 (RtlpHpSegLockRelease.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 */

void __fastcall RtlpHpSegSuballocatorFree(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r10
  __int64 v5; // r8
  signed __int64 v7; // rbx
  char v8; // cl
  unsigned __int64 v9; // rbx

  v4 = a2;
  v5 = *(_QWORD *)a1 & a2;
  if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v5 + 0x10) ^ v5) == a1
    && (v8 = *(_BYTE *)(a1 + 8),
        v9 = v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v8),
        v7 = v9 - 32LL * *(unsigned __int8 *)(v9 + 26),
        a2 = v5 + ((unsigned int)((v7 - v5) >> 5) << v8),
        (*(_BYTE *)(v7 + 24) & 3) == 3) )
  {
    if ( a2 != v4 && (*(_BYTE *)(v7 + 24) & 0x1Cu) < 8 )
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (_DWORD)a4 )
  {
    *(_BYTE *)(v7 + 24) |= 0x60u;
    RtlpHpSegLockAcquire(a1, a2, v5, a4);
    *(_QWORD *)v7 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v7;
    RtlpHpSegLockRelease(a1);
  }
  else
  {
    RtlpHpSegPageRangeShrink(a1, v7, (volatile signed __int64 *)v5, a4);
  }
}
