/*
 * XREFs of ACPIFindWakeInterruptForVector @ 0x140050C34
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1400401CC (ACPIAssociateWakeInterrupt.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x14005092C (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIDisconnectWakeInterrupt @ 0x140050B2C (ACPIDisconnectWakeInterrupt.c)
 * Callees:
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ACPIFindWakeInterruptForVector(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v6; // ebp
  unsigned int v8; // ebx
  int IsEnabledDeviceUsageNoInline; // ecx
  __int64 i; // rax

  *a4 = 0LL;
  v6 = a2;
  v8 = -1073741275;
  IsEnabledDeviceUsageNoInline = Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline(a1, a2);
  for ( i = AcpiPowerWaitWakeInterruptList; (__int64 *)i != &AcpiPowerWaitWakeInterruptList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 32) == v6
      && *(_QWORD *)(i + 40) == a3
      && (!IsEnabledDeviceUsageNoInline || *(_QWORD *)(i + 24) == a1) )
    {
      v8 = 0;
      *a4 = i;
      return v8;
    }
  }
  return v8;
}
