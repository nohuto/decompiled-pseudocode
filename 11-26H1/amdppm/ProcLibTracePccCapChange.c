/*
 * XREFs of ProcLibTracePccCapChange @ 0x14000559C
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x140026A40 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002914 (ProcLibTraceProcessorSpecificEvent.c)
 */

char __fastcall ProcLibTracePccCapChange(int a1, int a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(
           a1,
           (int)&PPM_ETW_PCC_CAP_CHANGE,
           (int)&PPM_ETW_PCC_CAP_CHANGE_HV,
           4,
           (__int64)&v3);
}
