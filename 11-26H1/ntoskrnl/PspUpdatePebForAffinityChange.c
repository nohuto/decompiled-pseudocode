/*
 * XREFs of PspUpdatePebForAffinityChange @ 0x1409E5A34
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x1407F70E8 (PspUpdateSingleProcessAffinity.c)
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspApplyJobLimitsToProcess @ 0x140A94A08 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PspWritePebAffinityInfoAttached @ 0x1409E64F4 (PspWritePebAffinityInfoAttached.c)
 */

void __fastcall PspUpdatePebForAffinityChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  memset(v4, 0, sizeof(v4));
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( *(_QWORD *)(a2 + 464) && a2 != *(_QWORD *)(a1 + 544) )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488)) )
        return;
      v2 = 1;
    }
    KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v4);
    PspWritePebAffinityInfoAttached(a2);
    KiUnstackDetachProcess((__int64)v4, 0);
    if ( v2 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
  }
}
