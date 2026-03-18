/*
 * XREFs of IopAddStackSegmentKernelShadowStackToDump @ 0x1405D5320
 * Callers:
 *     IoAddThreadStackToDump @ 0x1405D4A40 (IoAddThreadStackToDump.c)
 *     IopMarkPagesForProcessorData @ 0x1405D5CAC (IopMarkPagesForProcessorData.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IopAddStackSegmentKernelShadowStackToDump(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 48) )
    return MiAddRangeToCrashDump(a1, (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFF000uLL) + 4096, 4096LL, 0LL);
  else
    return 0LL;
}
