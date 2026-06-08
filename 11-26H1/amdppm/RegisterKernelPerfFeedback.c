/*
 * XREFs of RegisterKernelPerfFeedback @ 0x140036A40
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x140034294 (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterKernelPerfFeedback(_QWORD *a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(_QWORD *))RegisterKernelPerfStatesCallback);
}
