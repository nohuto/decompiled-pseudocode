/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x140503220
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140BF1320 (HalpProcInitSystem.c)
 * Callees:
 *     MicrocodeLogRegistry @ 0x1404F08C0 (MicrocodeLogRegistry.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  if ( MicrocodeRecordType == 1 || MicrocodeRecordType == 2 || MicrocodeRecordType == 13 )
    return MicrocodeLogRegistry();
  else
    return 3221225659LL;
}
