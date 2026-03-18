/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1400D51D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x140060820 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400D3370 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400D5268 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(char **this, _WORD *a2, __int64 a3, unsigned int a4, char *a5)
{
  bool v8; // bl
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v10; // rcx
  bool v12; // [rsp+20h] [rbp-18h]

  v8 = *a2 == 0xFFFE || *a2 == 0xFFFD;
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, a5, v8);
  if ( DeviceInfo )
  {
    v12 = v8;
    if ( (unsigned int)CKeyboardProcessor::ProcessInput(v10, DeviceInfo, a2, a4, v12) == 1 )
      RIMRefreshDeviceAttributes(this[1], a5);
  }
  return 0LL;
}
