/*
 * XREFs of ?IsDesktopWindow@CInputDest@@QEBA_NXZ @ 0x140178574
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CInputDest::IsDesktopWindow(CInputDest *this)
{
  char v1; // bl
  int v2; // edx
  int v3; // ecx
  struct tagWND *UserWindow; // rdi
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  v1 = 0;
  UserWindow = CInputDest::GetUserWindow(this);
  if ( UserWindow && *(_QWORD *)(W32GetUserSessionState(v3, v2, v5) + 19176) )
    return UserWindow == *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 19176) + 8LL)
                                           + 24LL);
  return v1;
}
