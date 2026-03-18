/*
 * XREFs of ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140217770
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x14013E670 (ApplyGatheredKeyboardDeviceCount.c)
 * Callees:
 *     UpdateToggleKeyAndLights @ 0x1401B0C10 (UpdateToggleKeyAndLights.c)
 */

void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(CKeyboardProcessor *this, unsigned int a2, int a3)
{
  if ( a2 > *((_DWORD *)this + 5) )
    UpdateToggleKeyAndLights(2, a2, a3);
  _InterlockedExchange((volatile __int32 *)this + 5, a2);
}
