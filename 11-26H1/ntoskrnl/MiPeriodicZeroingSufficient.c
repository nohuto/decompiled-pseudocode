/*
 * XREFs of MiPeriodicZeroingSufficient @ 0x1404811D8
 * Callers:
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiGetZeroingCandidateCount @ 0x140481224 (MiGetZeroingCandidateCount.c)
 */

__int64 __fastcall MiPeriodicZeroingSufficient(__int64 a1)
{
  unsigned __int64 ZeroingCandidateCount; // rax
  unsigned int v3; // edx

  ZeroingCandidateCount = MiGetZeroingCandidateCount(a1, 1LL);
  v3 = 0;
  if ( !ZeroingCandidateCount )
    return 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x80u) != 0 )
    return 0LL;
  LOBYTE(v3) = ZeroingCandidateCount < 0x40;
  return v3;
}
