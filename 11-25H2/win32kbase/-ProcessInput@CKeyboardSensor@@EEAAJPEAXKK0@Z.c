/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1400FF8D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x14002DEC0 (RIMRefreshDeviceAttributes.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400FF970 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1400FFC4C (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(
        CKeyboardSensor *this,
        _WORD *a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  bool v8; // si
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v10; // rcx
  bool v12; // [rsp+20h] [rbp-18h]

  v8 = (unsigned __int16)(*a2 + 3) <= 1u;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8);
  if ( DeviceInfo )
  {
    v12 = v8;
    if ( (unsigned int)CKeyboardProcessor::ProcessInput(v10, DeviceInfo, a2, a4, v12) == 1 )
      RIMRefreshDeviceAttributes(*((_QWORD *)this + 1), (__int64)a5);
  }
  return 0LL;
}
