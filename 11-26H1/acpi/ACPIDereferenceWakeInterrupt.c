/*
 * XREFs of ACPIDereferenceWakeInterrupt @ 0x140050A88
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1400401CC (ACPIAssociateWakeInterrupt.c)
 *     ACPIDisconnectWakeInterrupt @ 0x140050B2C (ACPIDisconnectWakeInterrupt.c)
 * Callees:
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ACPIDereferenceWakeInterrupt(__int64 *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  KIRQL v6; // si
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  LODWORD(v9) = 0;
  v8 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v5 = *a1;
  v6 = v2;
  *a1 = 0LL;
  if ( (*(_DWORD *)(v5 + 88))-- == 1 )
  {
    Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline(v4, v3);
    if ( *(_DWORD *)(v5 + 56) == 3 )
    {
      LODWORD(v8) = 1;
      v9 = *(_QWORD *)(v5 + 48);
      IoReportInterruptInactive(&v8);
      *(_DWORD *)(v5 + 56) = 4;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
