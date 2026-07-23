/*
 * XREFs of EtwTimeProfileReset @ 0x14082DA0C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeStopProfile @ 0x1404A4318 (KeStopProfile.c)
 *     EtwpTimeProfileStart @ 0x14082E308 (EtwpTimeProfileStart.c)
 */

__int64 EtwTimeProfileReset()
{
  __int64 result; // rax

  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 2) != 0 )
  {
    KeStopProfile((ULONG_PTR)&stru_140F03830.1008);
    return EtwpTimeProfileStart();
  }
  return result;
}
