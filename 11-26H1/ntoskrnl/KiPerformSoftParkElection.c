/*
 * XREFs of KiPerformSoftParkElection @ 0x14022C024
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14022BDF0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiPerformHeteroSoftParkElection @ 0x14022A6A0 (KiPerformHeteroSoftParkElection.c)
 *     KiReduceAffinityToRankListMinimums @ 0x14022B4C0 (KiReduceAffinityToRankListMinimums.c)
 */

__int64 __fastcall KiPerformSoftParkElection(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // r15
  __int64 i; // rbx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rcx

  if ( !KeSoftParkedQueueThreshold )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 792) / (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
  for ( i = ~v4 & *(_QWORD *)(a1 + 96); i; i &= ~(1LL << v10) )
  {
    if ( !v6 )
      break;
    if ( !KeHeteroSystem || a2 == -864 )
    {
      v8 = i & *(_QWORD *)(a2 + 1760);
      v9 = v8 == 0;
    }
    else
    {
      v8 = KiPerformHeteroSoftParkElection(a1, a2 + 864, i, *(_QWORD *)(a2 + 1760), v4);
      v9 = v8 == 0;
    }
    if ( v9 )
      break;
    _BitScanForward64((unsigned __int64 *)&v10, KiReduceAffinityToRankListMinimums(v8, a1 + 448));
    if ( (_DWORD)v10 == -1 )
      break;
    v5 |= 1LL << v10;
    --v6;
    v4 |= 1LL << v10;
  }
  return v5;
}
