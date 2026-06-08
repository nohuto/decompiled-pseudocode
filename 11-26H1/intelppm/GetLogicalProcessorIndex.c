/*
 * XREFs of GetLogicalProcessorIndex @ 0x140036238
 * Callers:
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140037C40 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140037F74 (InitPerfStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLogicalProcessorIndex(__int64 a1)
{
  if ( byte_140019B11 )
    return *(unsigned int *)(a1 + 72);
  else
    return *(unsigned int *)(a1 + 56);
}
