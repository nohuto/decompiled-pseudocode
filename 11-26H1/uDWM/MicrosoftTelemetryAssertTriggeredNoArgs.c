/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180088060
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002E86C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z @ 0x1800650C0 (-ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA-AUD2D_SIZE_F@@KK@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800712B4 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?AdjustFinalRectToPreserveAspectRatio@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA?AURect@Foundation@Windows@6@AEBU7896@0@Z @ 0x180087F88 (-AdjustFinalRectToPreserveAspectRatio@WindowMoveResizeCrossfadeTransition@implementation@Private.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int MicrosoftTelemetryAssertTriggeredNoArgs()
{
  FARPROC ProcAddress; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v3; // [rsp+30h] [rbp-30h]
  __int64 v4; // [rsp+40h] [rbp-20h]
  __int64 v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+50h] [rbp-10h]
  unsigned __int64 retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v6 = 1;
        v2[1] = &_ImageBase;
        v3 = retaddr;
        v5 = -1LL;
        v2[0] = 11LL;
        v4 = 0LL;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v2);
      }
    }
  }
  return (int)ProcAddress;
}
