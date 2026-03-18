/*
 * XREFs of PspUpdatePebForAffinityChange @ 0x140A9AA04
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x1407F1588 (PspUpdateSingleProcessAffinity.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140A8FEB8 (PspApplyJobLimitsToProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PspWritePebAffinityInfoAttached @ 0x140A9B4C4 (PspWritePebAffinityInfoAttached.c)
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
