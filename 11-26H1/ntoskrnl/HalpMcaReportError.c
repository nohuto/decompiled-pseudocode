/*
 * XREFs of HalpMcaReportError @ 0x140453F00
 * Callers:
 *     HalpCmcPollProcessor @ 0x140453548 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14057B360 (HalpMceHandlerCore.c)
 *     HalpMceHandlerWithRendezvous @ 0x14057B518 (HalpMceHandlerWithRendezvous.c)
 *     HalHandleMcheck @ 0x14057E0B0 (HalHandleMcheck.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BE9CC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1403DE1E0 (WheapGetErrorSource.c)
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
 *     HalpTranslateToLegacyMcaException @ 0x14052802C (HalpTranslateToLegacyMcaException.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpShouldRecoveryBeAttempted @ 0x14058EC80 (HalpShouldRecoveryBeAttempted.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HalpMcaReportError(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r8
  char v7; // r10
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v11; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v12; // [rsp+50h] [rbp-B0h]

  memset_0(BugCheckParameter2, 0, 0x100uLL);
  if ( !a1 )
  {
    if ( a2 )
    {
      HalpTranslateToLegacyMcaException(a2, BugCheckParameter2);
      KeBugCheckEx(0x9Cu, v11, (ULONG_PTR)BugCheckParameter2, HIDWORD(v12), (unsigned int)v12);
    }
    LODWORD(BugCheckParameter2[0]) = 1;
    BugCheckParameter2[1] = MEMORY[0xFFFFF78000000014];
    v10 = a3;
    if ( a3 > 0x80000000 )
      KeBugCheckEx(0x9Cu, a3, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x9Cu, 0LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(a1 + 24));
  if ( HalpGetCpuVendor() == 1 )
  {
    if ( HalpMcaScalableRasSupported != v7 )
      *(_DWORD *)(a1 + 12) |= 0x40u;
    if ( a2 && !(unsigned __int8)HalpShouldRecoveryBeAttempted(*(unsigned int *)(a2 + 4), a2 + 40) )
      *(_DWORD *)(a1 + 12) |= 0x100u;
  }
  if ( v6 )
    PshedRetrieveErrorInfo(a1, v6);
  return WheaReportHwError(a1);
}
