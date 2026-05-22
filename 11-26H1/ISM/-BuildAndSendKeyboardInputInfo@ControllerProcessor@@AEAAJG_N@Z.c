/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180069F14
 * Callers:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180069D58 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180069E68 (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x18017EBEC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017F5A0 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180180000 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180079E44 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A61E4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180109D98 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180109E08 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3)
{
  struct GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v7; // r14
  DWORD TickCount; // eax
  int v10; // ebx
  unsigned int v11; // edx
  int v12; // eax
  int v13[4]; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v17; // [rsp+64h] [rbp-A4h]
  __int16 v18; // [rsp+86h] [rbp-82h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]
  LARGE_INTEGER PerformanceCount; // [rsp+1D0h] [rbp+C8h] BYREF

  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  v7 = GamepadInterceptionHelper;
  if ( *((_QWORD *)GamepadInterceptionHelper + 2) )
  {
    GamepadInterceptionHelper::InterceptGamepadInput(GamepadInterceptionHelper, a2, a3 != 1);
  }
  else
  {
    TickCount = GetTickCount();
    PerformanceCount.QuadPart = 0LL;
    v10 = TickCount;
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v13, 0, 0x170uLL);
    v14 = PerformanceCount;
    v16 = *((_QWORD *)this + 38);
    v18 = 64;
    LODWORD(v15) = 368;
    v13[0] = 4;
    v13[2] = v10;
    v17 = a2;
    if ( !a3 )
      v18 = 65;
    if ( a2 == 7
      || IsEdition(253345LL)
      || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
      || (v11 = *((_DWORD *)this + 1953)) != 0 && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(v7, v11) )
    {
      v12 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v13);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8B8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v12,
          v13[0]);
    }
  }
  return 0LL;
}
