/*
 * XREFs of NtQuerySystemInformation @ 0x140B168E0
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1405871F8 (HalpTimerConfigureQpcBypass.c)
 *     DifNtQuerySystemInformationWrapper @ 0x140689C60 (DifNtQuerySystemInformationWrapper.c)
 *     AlpcpInitSystem @ 0x1407C3E88 (AlpcpInitSystem.c)
 * Callees:
 *     KeQueryPrimaryGroupThread @ 0x1404B7CEC (KeQueryPrimaryGroupThread.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  PVOID Address; // rbx
  ULONG v5; // r11d
  SYSTEM_INFORMATION_CLASS v6; // r10d
  int v7; // r8d
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  bool v12; // zf
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  SIZE_T Length; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  Address = SystemInformation;
  LODWORD(SystemInformation) = 0;
  v5 = SystemInformationLength;
  LOWORD(v21) = 0;
  v6 = SystemInformationClass;
  if ( SystemInformationClass > SystemProcessorPerformanceInformationEx )
  {
    if ( SystemInformationClass <= SystemOriginalImageFeatureInformation )
    {
      if ( SystemInformationClass == SystemOriginalImageFeatureInformation )
        return -1073741821;
      v16 = SystemInformationClass - 180;
      if ( !v16 )
        return -1073741821;
      v17 = v16 - 30;
      if ( !v17 )
        return -1073741821;
      v18 = v17 - 1;
      if ( !v18 )
        return -1073741821;
      v19 = v18 - 11;
      if ( !v19 )
        return -1073741821;
      v12 = v19 == 9;
    }
    else
    {
      v9 = SystemInformationClass - 239;
      if ( !v9 )
        return -1073741821;
      v10 = v9 - 1;
      if ( !v10 )
        return -1073741821;
      v11 = v10 - 9;
      if ( !v11 )
        return -1073741821;
      v12 = v11 == 5;
    }
    goto LABEL_17;
  }
  if ( SystemInformationClass == SystemProcessorPerformanceInformationEx )
    goto LABEL_23;
  if ( SystemInformationClass <= SystemProcessorIdleCycleTimeInformation )
  {
    if ( SystemInformationClass != SystemProcessorIdleCycleTimeInformation
      && SystemInformationClass != SystemProcessorPerformanceInformation
      && SystemInformationClass != SystemInterruptInformation
      && SystemInformationClass != SystemProcessorIdleInformation
      && SystemInformationClass != SystemProcessorPowerInformation )
    {
      if ( SystemInformationClass == SystemLogicalProcessorInformation )
      {
LABEL_10:
        SystemInformation = &v21;
        v7 = 2;
LABEL_11:
        LODWORD(Length) = v5;
        return ExpQuerySystemInformation(v6, (int)SystemInformation, v7, 0, Address, Length, (__int64)ReturnLength);
      }
LABEL_18:
      v7 = 0;
      goto LABEL_11;
    }
LABEL_23:
    LOWORD(v21) = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
    goto LABEL_10;
  }
  v13 = SystemInformationClass - 100;
  if ( !v13 )
    goto LABEL_23;
  v14 = v13 - 7;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_23;
    v12 = v15 == 13;
LABEL_17:
    if ( !v12 )
      goto LABEL_18;
  }
  return -1073741821;
}
