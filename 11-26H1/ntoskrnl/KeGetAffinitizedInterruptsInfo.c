/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x140533B50
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(struct _KAFFINITY_EX *a1)
{
  RtlpCopyAffinityEx(a1, a1->Size, &KiIntSteerAffinitizedInterrupts);
  return KeAddProcessorAffinityEx(&a1->Count, KiClockTimerOwner);
}
