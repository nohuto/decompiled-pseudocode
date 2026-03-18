/*
 * XREFs of HalpMcUpdatePostUpdate @ 0x140509770
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 * Callees:
 *     MicrocodeLogRegistry @ 0x1404F72B0 (MicrocodeLogRegistry.c)
 */

__int64 HalpMcUpdatePostUpdate()
{
  if ( MicrocodeRecordType == 1 || MicrocodeRecordType == 2 || MicrocodeRecordType == 13 )
    return MicrocodeLogRegistry();
  else
    return 3221225659LL;
}
