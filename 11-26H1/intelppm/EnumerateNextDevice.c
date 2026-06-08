/*
 * XREFs of EnumerateNextDevice @ 0x1400040CC
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

__int64 __fastcall EnumerateNextDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8

  v2 = a1[2];
  *a2 = 0LL;
  v4 = -1073741275;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 24) )
      return v4;
    *((_BYTE *)a1 + 24) = 1;
    goto LABEL_5;
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = (__int64 *)a1[1];
    v7 = *v6;
    a1[1] = *v6;
    if ( v7 != v5 )
    {
      v2 = v7 - *((unsigned int *)a1 + 6);
LABEL_5:
      *a2 = v2;
      return 0;
    }
  }
  return v4;
}
