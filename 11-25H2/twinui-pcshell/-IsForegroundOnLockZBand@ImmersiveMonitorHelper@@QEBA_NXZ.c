/*
 * XREFs of ?IsForegroundOnLockZBand@ImmersiveMonitorHelper@@QEBA_NXZ @ 0x1802C9EA4
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D62F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ImmersiveMonitorHelper::IsForegroundOnLockZBand(ImmersiveMonitorHelper *this)
{
  HWND ForegroundWindow; // rax
  ImmersiveMonitorHelper *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  ForegroundWindow = GetForegroundWindow();
  LODWORD(v3) = 0;
  return (unsigned int)GetWindowBand(ForegroundWindow, &v3) && (_DWORD)v3 == 17;
}
