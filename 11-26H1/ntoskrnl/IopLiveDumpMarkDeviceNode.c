/*
 * XREFs of IopLiveDumpMarkDeviceNode @ 0x1405D02F4
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D0778 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkDeviceNode(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = MiAddRangeToCrashDump(a1, a2, 88LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = MiAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 48), *(unsigned __int16 *)(a2 + 40) + 2LL, 0LL);
    if ( (int)result >= 0 )
      return MiAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 64), *(unsigned __int16 *)(a2 + 56) + 2LL, 0LL);
  }
  return result;
}
