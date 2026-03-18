/*
 * XREFs of KiGetClockIntervalOneShot @ 0x14046F550
 * Callers:
 *     KiRestoreClockTickRate @ 0x140418994 (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockIntervalOneShot(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)KeMinimumIncrement;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    return KeMinimumIncrement * (((int)a1 + KeMinimumIncrement - (int)a2 - 1) / (unsigned int)KeMinimumIncrement);
  return result;
}
