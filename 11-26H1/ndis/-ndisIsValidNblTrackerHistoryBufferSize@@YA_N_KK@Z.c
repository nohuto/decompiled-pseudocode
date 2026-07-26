/*
 * XREFs of ?ndisIsValidNblTrackerHistoryBufferSize@@YA_N_KK@Z @ 0x14018F078
 * Callers:
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x14013B260 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidNblTrackerHistoryBufferSize(unsigned __int64 a1)
{
  return ((ndisNblTrackerHistorySize - 1) & ndisNblTrackerHistorySize) == 0 && ndisNblTrackerHistorySize <= a1;
}
