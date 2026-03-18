/*
 * XREFs of ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140218948
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1400E91C0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14017D680 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x1401C615C (-GetInfo@SensorLocality@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 */

bool __fastcall CBaseInput::SensorInitialized(CBaseInput *this)
{
  return (unsigned int)CBaseInput::SensorLocality::GetInfo((__int64)this + 1312) != 0;
}
