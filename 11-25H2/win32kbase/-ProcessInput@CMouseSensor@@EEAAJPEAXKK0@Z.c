/*
 * XREFs of ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x14018C6E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x14002DEC0 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400FF970 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1401908B0 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 */

__int64 __fastcall CMouseSensor::ProcessInput(CMouseSensor *this, _WORD *a2, __int64 a3, unsigned int a4, char *a5)
{
  bool v8; // bp
  struct DEVICEINFO *DeviceInfo; // rax
  struct DEVICEINFO *v10; // rdi

  v8 = *a2 == 0xFFFE;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8);
  v10 = DeviceInfo;
  if ( DeviceInfo && (unsigned int)CMouseProcessor::ProcessInput(*((_QWORD *)this + 167), DeviceInfo, a2, a4, v8) == 1 )
    RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), *((_QWORD *)v10 + 2));
  return 0LL;
}
