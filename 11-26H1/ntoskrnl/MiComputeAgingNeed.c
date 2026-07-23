/*
 * XREFs of MiComputeAgingNeed @ 0x1402A85EC
 * Callers:
 *     MiSignalPartitionTrimThreads @ 0x1402A6860 (MiSignalPartitionTrimThreads.c)
 *     MiAgingThread @ 0x1402A84E0 (MiAgingThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiComputeAgingNeed(__int64 a1, __int64 a2)
{
  volatile LONG *v4; // r15
  int v5; // ebx
  KIRQL v6; // al
  unsigned int v7; // esi
  unsigned __int64 *v8; // rcx
  KIRQL v9; // dl
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // eax
  int v13; // eax

  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)a2 = 1;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    return 0LL;
  v4 = (volatile LONG *)(a1 + 272);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  v7 = *(_DWORD *)(a1 + 18408);
  v8 = (unsigned __int64 *)(a1 + 18592);
  v9 = v6;
  v10 = *(_QWORD *)(a1 + 18520);
  if ( !v10 )
    goto LABEL_7;
  if ( v10 <= *v8 )
  {
    *(_QWORD *)(a1 + 18520) = 0LL;
LABEL_7:
    if ( *v8 < 4LL * *(_QWORD *)(a1 + 18400) )
    {
      if ( v7 )
      {
        v5 = 11;
      }
      else if ( (unsigned __int64)*(unsigned int *)(a1 + 18416) < *(_QWORD *)(a1 + 18384) >> 4 )
      {
        if ( *(_BYTE *)(a1 + 18514) )
          v5 = 8;
      }
      else
      {
        v5 = 9;
      }
    }
    goto LABEL_16;
  }
  v5 = 10;
  if ( v7 < 0xFA )
    v7 = 250;
LABEL_16:
  if ( a2 )
  {
    *(_BYTE *)(a2 + 28) = *(_BYTE *)(a1 + 18512);
    *(_BYTE *)(a2 + 29) = *(_BYTE *)(a1 + 18513);
  }
  v11 = *(_DWORD *)(a1 + 18412);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v9);
  if ( v11 )
  {
    v12 = v11;
    if ( v7 >= v11 )
      v12 = v7;
    v7 = v12;
    if ( !v5 )
    {
      v5 = 12;
      v7 = v11;
    }
  }
  else if ( !v5 )
  {
    if ( *(_BYTE *)(a1 + 18617) )
    {
      v5 = 15;
      v13 = 2;
      v7 = 10;
    }
    else
    {
      if ( !v7 )
        return 0LL;
      v5 = 12;
      v13 = 1;
    }
    goto LABEL_33;
  }
  v13 = 1;
  if ( !v7 )
    return 0LL;
LABEL_33:
  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) = v13;
    *(_DWORD *)(a2 + 24) = v7;
    *(_DWORD *)(a2 + 8) = v5;
  }
  return 1LL;
}
