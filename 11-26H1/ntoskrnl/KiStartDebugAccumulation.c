/*
 * XREFs of KiStartDebugAccumulation @ 0x1405F6204
 * Callers:
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x1405F5E50 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140226F90 (KiUpdateTotalCyclesCurrentThread.c)
 */

unsigned __int64 __fastcall KiStartDebugAccumulation(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 32) && *(_BYTE *)(a1 + 34524) && !LOBYTE(stru_140F10828.WriteOperationCount) )
    return KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
  return result;
}
