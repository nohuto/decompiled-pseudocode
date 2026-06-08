/*
 * XREFs of ResetEnumerationContext @ 0x1400048EC
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x140006200 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x14000D7A4 (InitLegacyPccInternal.c)
 *     RetrieveEfficiencyClassInformation @ 0x140027CF0 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     ValidatePerfDomainSymmetry @ 0x140035978 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140037C40 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140037F74 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x140039290 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14004724C (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
