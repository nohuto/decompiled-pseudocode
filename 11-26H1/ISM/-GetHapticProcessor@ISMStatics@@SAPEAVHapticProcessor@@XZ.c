/*
 * XREFs of ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A622C
 * Callers:
 *     ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF540 (-OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DF700 (-OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DF7E0 (-OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z.c)
 *     ?CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x18019BBB0 (-CheckForHapticMouseQueryRemove@MouseProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18019BF58 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019C260 (-OnDeviceRemoval@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A6364 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@HapticProcessor@@SA?AV?$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ @ 0x1800C812C (-Create@HapticProcessor@@SA-AV-$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ.c)
 */

struct HapticProcessor *ISMStatics::GetHapticProcessor(void)
{
  struct HapticProcessor *result; // rax
  struct HapticProcessor **v1; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_hapticProcessor;
  if ( !ISMStatics::s_hapticProcessor )
  {
    v1 = (struct HapticProcessor **)HapticProcessor::Create(&v2);
    ISMStatics::s_hapticProcessor = *v1;
    *v1 = 0LL;
    Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(&v2);
    return ISMStatics::s_hapticProcessor;
  }
  return result;
}
