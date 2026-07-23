/*
 * XREFs of MiUpdateAgeDistribution @ 0x14047FA3C
 * Callers:
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeHardTrimSize @ 0x1402CF228 (MiComputeHardTrimSize.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiUpdateAgeDistribution(__int64 a1, __int64 a2)
{
  volatile LONG *v4; // rbp
  __int64 *v5; // r15
  KIRQL v6; // al
  __int64 *v7; // rsi
  KIRQL v8; // r14
  char v9; // r8
  unsigned __int64 *v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  _QWORD *i; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9

  memset_0((void *)a2, 0, 0x50uLL);
  v4 = (volatile LONG *)(a1 + 21384);
  v5 = (__int64 *)(a1 + 18320);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 21384));
  v7 = *(__int64 **)(a1 + 18320);
  v8 = v6;
  if ( (__int64 *)*v5 != v5 )
  {
    do
    {
      v9 = 3;
      v10 = (unsigned __int64 *)a2;
      v11 = 8LL;
      if ( (unsigned __int8)BYTE2(*((_DWORD *)v7 + 40)) != 2 )
        v9 = 1;
      do
      {
        v12 = (*(unsigned __int64 *)((char *)v10 + (_QWORD)((char *)v7 - a2 - 24) + 56) >> v9) + *v10;
        if ( v12 < *v10 )
          v12 = -1LL;
        *v10++ = v12;
        --v11;
      }
      while ( v11 );
      if ( (v7[20] & 0x10) != 0 )
      {
        if ( (unsigned int)MiComputeHardAgingPercent(v7 - 3, 0x20000LL) )
          *(_BYTE *)(a2 + 72) = 1;
        if ( v7[14] > MiComputeHardTrimSize(v7[13], 0x5Au, 0x64u) )
          *(_BYTE *)(a2 + 73) = 1;
      }
      v7 = (__int64 *)*v7;
    }
    while ( v7 != v5 );
  }
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v8);
  v13 = 6;
  for ( i = (_QWORD *)(a2 + 48); ; ++i )
  {
    v15 = *(_QWORD *)(a2 + 64);
    v16 = v15 + *i;
    if ( v16 < v15 )
      break;
    ++v13;
    *(_QWORD *)(a2 + 64) = v16;
    if ( v13 >= 8 )
      return;
  }
  *(_QWORD *)(a2 + 64) = -1LL;
}
