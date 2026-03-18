/*
 * XREFs of __tailMerge_ninput_dll @ 0x180222228
 * Callers:
 *     __imp_load_ProcessPointerFramesInteractionContext2 @ 0x1802222A7 (__imp_load_ProcessPointerFramesInteractionContext2.c)
 *     __imp_load_DestroyInteractionContext @ 0x1802225D5 (__imp_load_DestroyInteractionContext.c)
 *     __imp_load_StopInteractionContext @ 0x1802225E7 (__imp_load_StopInteractionContext.c)
 *     __imp_load_ProcessPointerFramesInteractionContext @ 0x1802225F9 (__imp_load_ProcessPointerFramesInteractionContext.c)
 *     __imp_load_CreateInteractionContext @ 0x18022260B (__imp_load_CreateInteractionContext.c)
 *     __imp_load_ResetInteractionContext @ 0x18022261D (__imp_load_ResetInteractionContext.c)
 *     __imp_load_SetPropertyInteractionContext @ 0x18022262F (__imp_load_SetPropertyInteractionContext.c)
 *     __imp_load_SetInteractionConfigurationInteractionContext @ 0x180222641 (__imp_load_SetInteractionConfigurationInteractionContext.c)
 *     __imp_load_RegisterOutputCallbackInteractionContext @ 0x180222653 (__imp_load_RegisterOutputCallbackInteractionContext.c)
 *     __imp_load_SetMouseWheelParameterInteractionContext @ 0x180222665 (__imp_load_SetMouseWheelParameterInteractionContext.c)
 *     __imp_load_OutputPredictionInteractionContext @ 0x180222677 (__imp_load_OutputPredictionInteractionContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801D5BA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ninput_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ninput_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
