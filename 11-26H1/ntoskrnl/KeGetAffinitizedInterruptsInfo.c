/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140531650
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(struct _KAFFINITY_EX *a1)
{
  RtlpCopyAffinityEx(a1, a1->Size, &KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(&a1->Count, KiClockTimerOwner);
}
