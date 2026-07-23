/*
 * XREFs of IopLiveDumpAddPfnDatabase @ 0x1405CEDC0
 * Callers:
 *     <none>
 * Callees:
 *     MmAddPrivateDataToCrashDump @ 0x1406FB3EC (MmAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpAddPfnDatabase(__int64 a1, __int64 a2)
{
  return MmAddPrivateDataToCrashDump(a2, 1LL);
}
