/*
 * XREFs of MiPeriodicZeroingSufficient @ 0x14050A1D4
 * Callers:
 *     MiDecrementZeroEngineThread @ 0x1403E8DCC (MiDecrementZeroEngineThread.c)
 *     MiBackgroundZeroNodePages @ 0x1404976C0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiGetZeroingCandidateCount @ 0x1402A5B44 (MiGetZeroingCandidateCount.c)
 */

__int64 __fastcall MiPeriodicZeroingSufficient(__int64 a1)
{
  unsigned __int64 ZeroingCandidateCount; // rax
  unsigned int v3; // edx

  ZeroingCandidateCount = MiGetZeroingCandidateCount(a1, 1);
  v3 = 0;
  if ( !ZeroingCandidateCount )
    return 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 13896) + 4LL) & 0x80u) != 0 )
    return 0LL;
  LOBYTE(v3) = ZeroingCandidateCount < 0x40;
  return v3;
}
