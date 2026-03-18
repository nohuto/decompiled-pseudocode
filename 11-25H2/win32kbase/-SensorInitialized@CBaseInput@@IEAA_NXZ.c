/*
 * XREFs of ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140210D04
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14020FD20 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x14020FE00 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetInfo@SensorLocalityEx@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020F968 (-GetInfo@SensorLocalityEx@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 */

bool __fastcall CBaseInput::SensorInitialized(CBaseInput *this)
{
  bool v2; // zf

  if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
    v2 = (unsigned int)CBaseInput::SensorLocalityEx::GetInfo((__int64)this + 1320) == 0;
  else
    v2 = *((_DWORD *)this + 328) == 0;
  return !v2;
}
