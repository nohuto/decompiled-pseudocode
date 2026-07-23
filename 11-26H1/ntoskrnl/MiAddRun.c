/*
 * XREFs of MiAddRun @ 0x14086DD00
 * Callers:
 *     MiAddRuns @ 0x14086DE30 (MiAddRuns.c)
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddRun(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  __int64 v12; // rbp
  const void *v14; // rdx

  v2 = *a1;
  if ( *a1
    && (v5 = a1[2],
        v6 = *(_QWORD *)(a1[3] + 24),
        v7 = *(_QWORD *)(v5 + 8 * v2 - 8) % v6,
        ((*(_QWORD *)(v5 + 8 * v2 - 8) / v6) & 0x3FFFFF) + v7 + 1 == (*(_QWORD *)&a2 & 0x3FFFFFLL))
    && v7 != v6 - 1 )
  {
    ++*(_QWORD *)(v5 + 8 * v2 - 8);
  }
  else
  {
    v8 = a1[1];
    if ( v2 == v8 )
    {
      v9 = 2LL;
      if ( v8 )
        v9 = 2 * v8;
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (void *)ExAllocatePoolMm(64LL, 8 * v9, 1883793741, CurrentProcessorColor | 0x80000000);
      v12 = (__int64)PoolMm;
      if ( !PoolMm )
        return 3221225626LL;
      v14 = (const void *)a1[2];
      if ( v14 )
      {
        memmove(PoolMm, v14, 8 * a1[1]);
        ExFreePoolWithTag((PVOID)a1[2], 0);
      }
      a1[2] = v12;
      a1[1] = v9;
    }
    *(_QWORD *)(a1[2] + 8 * (*a1)++) = (*(_QWORD *)&a2 & 0x3FFFFFLL) << 30;
  }
  return 0LL;
}
