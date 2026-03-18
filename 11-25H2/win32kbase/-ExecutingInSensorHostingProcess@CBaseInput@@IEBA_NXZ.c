/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14012C240
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x14012C1F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14020FD20 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetInfo@SensorLocalityEx@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020F968 (-GetInfo@SensorLocalityEx@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
    return (CBaseInput::SensorLocalityEx::GetInfo((char *)this + 1320) & 2) != 0;
  if ( *((_QWORD *)this + 2) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) == PsGetCurrentProcess(v3, v2);
  else
    return *((_DWORD *)this + 328) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
