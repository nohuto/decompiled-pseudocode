/*
 * XREFs of ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A6364
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ??1?$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A5FF0 (--1-$ComPtr@VHapticDeviceCollection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A61E4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A622C (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ??$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@@Z @ 0x1800C7A74 (--$MakeAndInitialize@VHapticProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHapticProcessor@@.c)
 *     ?Create@HapticProcessor@@SA?AV?$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ @ 0x1800C812C (-Create@HapticProcessor@@SA-AV-$ComPtr@VHapticProcessor@@@WRL@Microsoft@@XZ.c)
 *     ?OnDeviceQueryRemove@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CCD50 (-OnDeviceQueryRemove@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x1800D20CC (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800D2218 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepadInterceptionHelper@@@Z @ 0x1801087E0 (--$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepad.c)
 *     ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x180109D38 (-Create@GamepadInterceptionHelper@@SA-AV-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
