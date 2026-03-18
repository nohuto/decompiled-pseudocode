/*
 * XREFs of AcpiEvaluateBiosMethodsOnCxlBus @ 0x140065744
 * Callers:
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiComposePciOscFeatures @ 0x1400656F0 (AcpiComposePciOscFeatures.c)
 *     AcpiEvaluateOscMethodOnCxlBus @ 0x140065908 (AcpiEvaluateOscMethodOnCxlBus.c)
 */

__int64 __fastcall AcpiEvaluateBiosMethodsOnCxlBus(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+60h] [rbp+8h] BYREF
  int v4; // [rsp+68h] [rbp+10h]

  if ( !*(_QWORD *)(a1 + 760) || !_bittest64((const signed __int64 *)(a1 + 1008), 0x35u) )
    return 3221225473LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 0x1000) != 0 )
    return 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 0x1000u);
  v3 = 0;
  v4 = 0;
  result = AcpiEvaluateOscMethodOnCxlBus(a1, (__int64)&v3);
  if ( (int)result >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 184), 0x800u);
    v4 = AcpiComposePciOscFeatures(v3);
    v3 = 1;
    return AcpiEvaluateOscMethodOnCxlBus(a1, a1 + 304);
  }
  return result;
}
