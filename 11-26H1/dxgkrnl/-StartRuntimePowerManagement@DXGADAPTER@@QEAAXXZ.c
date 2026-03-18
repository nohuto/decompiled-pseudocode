/*
 * XREFs of ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x14019FE04
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140011EA0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x140071AA0 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1401B02F4 (-DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ.c)
 */

void __fastcall DXGADAPTER::StartRuntimePowerManagement(DXGADAPTER *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  NTSTATUS v4; // eax
  __int64 v5; // rbx

  if ( !*((_QWORD *)this + 409) )
    return;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  if ( *((int *)this + 694) < 0x2000 || v2 < 0x5006 )
  {
    if ( v2 < 0x3008 )
      goto LABEL_7;
  }
  else
  {
    DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(this);
  }
  *((_BYTE *)this + 3705) = 1;
  DXGADAPTER::DdiPowerRuntimeControlRequest(
    this,
    &GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_7:
  if ( !*((_BYTE *)this + 3704) )
  {
    v3 = *((_DWORD *)this + 853);
    if ( v3 != -1 )
      DXGADAPTER::SetPowerComponentActiveCBInternal(this, v3, 0, 0);
  }
  PoFxStartDevicePowerManagement(*((_QWORD *)this + 409));
  if ( v2 >= 0x3008 )
    DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STARTED, 0LL, 0LL, 0LL, 0LL, 0LL);
  v4 = PoRegisterPowerSettingCallback(
         *((PDEVICE_OBJECT *)this + 27),
         &GUID_MONITOR_POWER_ON,
         DXGADAPTER::PowerSettingCallback,
         this,
         (PVOID *)this + 468);
  if ( v4 < 0 )
  {
    v5 = v4;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 154;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback failed with status:0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
