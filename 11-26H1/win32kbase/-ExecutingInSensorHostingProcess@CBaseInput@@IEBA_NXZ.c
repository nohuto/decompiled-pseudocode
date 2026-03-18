/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14021847C
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1401112F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14017D680 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x1401C615C (-GetInfo@SensorLocality@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this)
{
  return (CBaseInput::SensorLocality::GetInfo((__int64)this + 1312) & 2) != 0;
}
