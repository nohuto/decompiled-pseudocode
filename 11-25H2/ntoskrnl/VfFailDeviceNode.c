/*
 * XREFs of VfFailDeviceNode @ 0x1404A9E40
 * Callers:
 *     <none>
 * Callees:
 *     PpvUtilIsHardwareBeingVerified @ 0x140B72C70 (PpvUtilIsHardwareBeingVerified.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

void VfFailDeviceNode()
{
  ULONG_PTR v0; // rcx
  unsigned int v1; // r8d
  ULONG v2; // r10d

  if ( ViDdiInitialized && MmVerifierData >= 0 )
  {
    if ( (unsigned __int8)PpvUtilIsHardwareBeingVerified() )
      CarReportRuleViolationFromNt(v2, v1, v0, 0LL, 0LL, 30, *(_QWORD *)(*(_QWORD *)(v0 + 8) + 24LL));
  }
}
