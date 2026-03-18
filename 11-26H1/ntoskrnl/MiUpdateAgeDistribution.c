/*
 * XREFs of MiUpdateAgeDistribution @ 0x1404860CC
 * Callers:
 *     MiUpdatePartitionMemoryUsage @ 0x1402A6CA0 (MiUpdatePartitionMemoryUsage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeHardTrimSize @ 0x1402ED1E8 (MiComputeHardTrimSize.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  unsigned __int64 v13; // rbx
  unsigned int v14; // edx
  _QWORD *i; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9

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
        v13 = v7[14];
        if ( v13 > MiComputeHardTrimSize(v7[13], 0x5Au, 0x64u) )
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
  v14 = 6;
  for ( i = (_QWORD *)(a2 + 48); ; ++i )
  {
    v16 = *(_QWORD *)(a2 + 64);
    v17 = v16 + *i;
    if ( v17 < v16 )
      break;
    ++v14;
    *(_QWORD *)(a2 + 64) = v17;
    if ( v14 >= 8 )
      return;
  }
  *(_QWORD *)(a2 + 64) = -1LL;
}
