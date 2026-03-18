/*
 * XREFs of ACPIDisconnectWakeInterrupt @ 0x140050B2C
 * Callers:
 *     ACPIWakeEmulationDisable @ 0x140033520 (ACPIWakeEmulationDisable.c)
 * Callees:
 *     ACPIDereferenceWakeInterrupt @ 0x140050A88 (ACPIDereferenceWakeInterrupt.c)
 *     ACPIFindWakeInterruptForVector @ 0x140050C34 (ACPIFindWakeInterruptForVector.c)
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ACPIDisconnectWakeInterrupt(__int64 *a1)
{
  KIRQL v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 **v11; // rdx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  IsEnabledDeviceUsageNoInline = Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline(v4, v3);
  v6 = (__int64 *)*a1;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( v6 != a1 )
    {
      v7 = 0LL;
      v8 = 0;
      goto LABEL_6;
    }
LABEL_14:
    KeReleaseSpinLock(&AcpiPowerLock, v2);
    return;
  }
  v8 = 1;
  if ( !v6 )
    goto LABEL_14;
  v7 = a1[2];
LABEL_6:
  if ( (int)ACPIFindWakeInterruptForVector(v7, *((unsigned int *)a1 + 6), a1[4], &v12) < 0 )
    goto LABEL_14;
  if ( v8 )
  {
    v9 = v12;
    **(_QWORD **)(v12 + 16) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
  }
  else
  {
    v10 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v11 = (__int64 **)a1[1], *v11 != a1) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    a1[1] = (__int64)a1;
    *a1 = (__int64)a1;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  ACPIDereferenceWakeInterrupt(&v12);
}
