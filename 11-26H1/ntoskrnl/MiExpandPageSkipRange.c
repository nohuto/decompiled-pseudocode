/*
 * XREFs of MiExpandPageSkipRange @ 0x14042DF80
 * Callers:
 *     MiPfnsWorthTrying @ 0x140290D20 (MiPfnsWorthTrying.c)
 *     MiExpandWrongPartitionSkipRange @ 0x140526CB4 (MiExpandWrongPartitionSkipRange.c)
 * Callees:
 *     MiFindNextLowerLargePageCandidate @ 0x14042E03C (MiFindNextLowerLargePageCandidate.c)
 */

unsigned __int64 __fastcall MiExpandPageSkipRange(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 NextLowerLargePageCandidate; // rax

  v4 = ~(a4 - 1) & ((a2 + 0x220000000000LL) / 48);
  v5 = (a3 + 0x220000000000LL) / 48;
  if ( a4 >= 0x200 )
  {
    NextLowerLargePageCandidate = MiFindNextLowerLargePageCandidate(a1, v4);
    if ( NextLowerLargePageCandidate < v4 )
    {
      _InterlockedIncrement(&dword_140EF8EE8);
      v4 = NextLowerLargePageCandidate;
    }
    else
    {
      _InterlockedIncrement(&dword_140EF8EE4);
    }
  }
  return v5 - v4;
}
