/*
 * XREFs of GetLogicalProcessorIndex @ 0x1400327A8
 * Callers:
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034294 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400345C8 (InitPerfStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLogicalProcessorIndex(__int64 a1)
{
  if ( byte_140015F41 )
    return *(unsigned int *)(a1 + 72);
  else
    return *(unsigned int *)(a1 + 56);
}
