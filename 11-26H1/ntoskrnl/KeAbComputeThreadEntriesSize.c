/*
 * XREFs of KeAbComputeThreadEntriesSize @ 0x1404BD9E4
 * Callers:
 *     KeSizeOfKThreadExtension @ 0x14051FE20 (KeSizeOfKThreadExtension.c)
 *     KiAllocatePrcbThread @ 0x1405EC38C (KiAllocatePrcbThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAbComputeThreadEntriesSize(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( a2 )
      return 48 * ((unsigned int)a2 + 7);
    else
      return 320LL;
  }
  else
  {
    result = 544LL;
    if ( a2 )
      return 88 * (unsigned int)a2 + 560;
  }
  return result;
}
