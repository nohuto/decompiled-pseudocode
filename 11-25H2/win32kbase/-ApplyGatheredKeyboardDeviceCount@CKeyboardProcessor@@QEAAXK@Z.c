/*
 * XREFs of ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140106F00
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x140106AA0 (ApplyGatheredKeyboardDeviceCount.c)
 * Callees:
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     UpdateToggleKeyAndLights @ 0x140217B90 (UpdateToggleKeyAndLights.c)
 */

void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(CKeyboardProcessor *this, unsigned __int32 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  if ( a2 > *((_DWORD *)this + 5) )
  {
    if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      UpdateToggleKeyAndLights(2LL);
    }
    else
    {
      UpdateKeyLights(0LL);
      UserSessionState = W32GetUserSessionState(v5, v4);
      *(_DWORD *)(UserSessionState + 12872) |= 1u;
    }
  }
  _InterlockedExchange((volatile __int32 *)this + 5, a2);
}
