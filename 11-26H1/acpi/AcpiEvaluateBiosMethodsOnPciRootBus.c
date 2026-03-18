/*
 * XREFs of AcpiEvaluateBiosMethodsOnPciRootBus @ 0x140065844
 * Callers:
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiEvaluateOscMethodOnPciRootBus @ 0x140048A6C (AcpiEvaluateOscMethodOnPciRootBus.c)
 *     AcpiComposePciOscFeatures @ 0x1400656F0 (AcpiComposePciOscFeatures.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnPciRootBus(__int64 a1, __int64 a2, int a3)
{
  int *v4; // rdi
  __int64 result; // rax
  int v6; // r8d
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 760) || (*(_DWORD *)(a1 + 8) & 0x2000000) == 0 )
    return 3221225473LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 0x10) != 0 )
    return 0LL;
  v4 = (int *)(a1 + 304);
  *(_DWORD *)(a1 + 304) = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 0x10u);
  if ( (AcpiOverrideAttributes & 0x2000) != 0 )
    return 0LL;
  v7 = 0;
  result = AcpiEvaluateOscMethodOnPciRootBus(a1, 1u, a3, &PciRootBusFeaturesControlRequest, &v7);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 184), 8u);
    v7 = AcpiComposePciOscFeatures(v7);
    return AcpiEvaluateOscMethodOnPciRootBus(a1, 0, v6, &v7, v4);
  }
  return result;
}
