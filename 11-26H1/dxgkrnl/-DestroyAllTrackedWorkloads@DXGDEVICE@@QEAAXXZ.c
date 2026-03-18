/*
 * XREFs of ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1403A2FA8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403A21D8 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1400825CC (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllTrackedWorkloads(DXGDEVICE *this)
{
  DXGTRACKEDWORKLOAD **v2; // rbx
  DXGTRACKEDWORKLOAD *v3; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 875;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 875LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGTRACKEDWORKLOAD **)((char *)this + 560);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGTRACKEDWORKLOAD *)v2 )
      break;
    if ( v3 )
      DXGTRACKEDWORKLOAD::`scalar deleting destructor'(v3);
  }
}
