/*
 * XREFs of MiUpdatePartitionMemoryUsage @ 0x1402A60BC
 * Callers:
 *     MiSignalPartitionTrimThreads @ 0x1402A6860 (MiSignalPartitionTrimThreads.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C3B08 (MiGetAvailablePagesForTrimPass.c)
 *     MiUpdateAgeDistribution @ 0x14047FA3C (MiUpdateAgeDistribution.c)
 *     MiComputeAgingPercent @ 0x1404A9CC8 (MiComputeAgingPercent.c)
 *     MiUpdatePartitionAgeTrimConfiguration @ 0x1404CC9D4 (MiUpdatePartitionAgeTrimConfiguration.c)
 *     MiUpdateTrimPrediction @ 0x14052046C (MiUpdateTrimPrediction.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiUpdatePartitionMemoryUsage(__int64 a1)
{
  __int64 AvailablePagesForTrimPass; // rax
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r8
  int v8; // r14d
  unsigned int v9; // esi
  KIRQL v10; // al
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  KIRQL v13; // r15
  __int64 v14; // r8
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 updated; // rax
  __int64 v19; // r8
  volatile LONG *v20; // rcx
  _OWORD v21[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v22; // [rsp+60h] [rbp-48h]

  memset_0(v21, 0, 0x50uLL);
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    return 0LL;
  MiUpdatePartitionAgeTrimConfiguration(a1);
  MiUpdateAgeDistribution(a1, v21);
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(a1);
  v4 = 0;
  v5 = (_DWORD *)(a1 + 7588);
  v6 = AvailablePagesForTrimPass;
  v7 = 7LL;
  do
  {
    v4 += *v5++;
    --v7;
  }
  while ( v7 );
  v8 = *(_DWORD *)(a1 + 18420) < v4 ? v4 - *(_DWORD *)(a1 + 18420) : 0;
  v9 = BYTE8(v22) != 0;
  if ( BYTE9(v22) )
    v9 |= 2u;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  v11 = v21[0];
  v12 = v21[1];
  *(_DWORD *)(a1 + 18416) = v8;
  v13 = v10;
  *(_DWORD *)(a1 + 18420) = v4;
  v14 = *(_QWORD *)(a1 + 18392);
  *(_OWORD *)(a1 + 18528) = v11;
  *(_QWORD *)(a1 + 18384) = v6;
  v15 = v21[2];
  *(_OWORD *)(a1 + 18544) = v12;
  v16 = v21[3];
  *(_OWORD *)(a1 + 18560) = v15;
  v17 = v22;
  *(_OWORD *)(a1 + 18576) = v16;
  *(_OWORD *)(a1 + 18592) = v17;
  updated = MiUpdateTrimPrediction(a1 + 18432, v6, v14);
  v19 = *(_QWORD *)(a1 + 18400);
  *(_QWORD *)(a1 + 18376) = updated;
  *(_DWORD *)(a1 + 18408) = MiComputeAgingPercent(a1, updated, v19, a1 + 18528);
  v20 = (volatile LONG *)(a1 + 272);
  if ( v13 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  else
    ExReleaseSpinLockExclusive(v20, v13);
  return v9;
}
