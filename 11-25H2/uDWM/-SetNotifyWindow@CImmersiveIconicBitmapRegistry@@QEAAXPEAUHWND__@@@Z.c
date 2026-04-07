/*
 * XREFs of ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18008A5DC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001F854 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::SetNotifyWindow(CImmersiveIconicBitmapRegistry *this, HWND a2)
{
  HWND ShellWindowForDesktop; // rdi
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  DWORD v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)GetDesktopID(2LL) )
  {
    ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    0LL);
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      v6 = 0;
      if ( GetWindowThreadProcessId(a2, &dwProcessId) )
      {
        if ( GetWindowThreadProcessId(ShellWindowForDesktop, &v6) )
        {
          if ( v6 == dwProcessId )
            *((_QWORD *)this + 10) = a2;
        }
      }
    }
  }
}
