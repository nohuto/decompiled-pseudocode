/*
 * XREFs of IopAddStackSegmentKernelShadowStackToDump @ 0x1405D7B10
 * Callers:
 *     IoAddThreadStackToDump @ 0x1405D7230 (IoAddThreadStackToDump.c)
 *     IopMarkPagesForProcessorData @ 0x1405D849C (IopMarkPagesForProcessorData.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IopAddStackSegmentKernelShadowStackToDump(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 48) )
    return MiAddRangeToCrashDump(a1, (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFF000uLL) + 4096, 4096LL, 0LL);
  else
    return 0LL;
}
