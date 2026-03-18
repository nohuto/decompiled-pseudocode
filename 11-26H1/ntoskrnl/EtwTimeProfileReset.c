/*
 * XREFs of EtwTimeProfileReset @ 0x1408277CC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeStopProfile @ 0x1404AAC88 (KeStopProfile.c)
 *     EtwpTimeProfileStart @ 0x1408280C8 (EtwpTimeProfileStart.c)
 */

__int64 EtwTimeProfileReset()
{
  __int64 result; // rax

  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 2) != 0 )
  {
    KeStopProfile((ULONG_PTR)&EtwpSecurityLock.CurrentRunTime);
    return EtwpTimeProfileStart();
  }
  return result;
}
